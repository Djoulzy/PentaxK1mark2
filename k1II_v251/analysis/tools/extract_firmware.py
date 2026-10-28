#!/usr/bin/env python3
"""Read-only K-1 II package extraction. No camera access and no firmware writes.

Compression algorithm adapted from twang2218/pentax-firmware-tool (GPL-2.0),
itself based on MooseV2, svenpeter42 and bootcoder. See ../vendor/LICENSE-pfwtool.
SPDX-License-Identifier: GPL-2.0-only
"""
from pathlib import Path
import hashlib
import json
import re
import struct

ROOT = Path(__file__).resolve().parents[2]
REPORT = ROOT / 'analysis/reports'
OUT = ROOT / 'analysis/extracted'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def decompress(data, start, limit):
    pos = start
    out = bytearray()
    blocks = []
    while True:
        origin = pos
        size = int.from_bytes(data[pos:pos+2], 'big')
        pos += 2
        if not size:
            return bytes(out), pos, blocks
        raw = size == 0xe000
        if raw:
            size = 0x6000
        assert size <= 0x8000 and pos + size <= limit, (hex(origin), size)
        end = pos + size
        before = len(out)
        if raw:
            out.extend(data[pos:end])
            pos = end
        else:
            mask = 0
            while pos < end - 2:
                if mask == 0:
                    bits = int.from_bytes(data[pos:pos+2], 'big')
                    pos += 2
                    mask = 0x8000
                    continue
                if bits & mask:
                    a, b = data[pos:pos+2]
                    pos += 2
                    count = (a & 7) + 3
                    if count == 10:
                        while True:
                            n = data[pos]
                            pos += 1
                            count += n
                            if n != 255:
                                break
                    distance = ((a & 0xf8) << 5) | b
                    assert 0 < distance <= len(out), (hex(pos), distance, len(out))
                    for _ in range(count):
                        out.append(out[-distance])
                else:
                    out.append(data[pos])
                    pos += 1
                mask >>= 1
                assert len(out) <= 64 * 1024 * 1024
            assert pos == end - 2 and data[pos:end] == b'\0\0', hex(pos)
            pos = end
        blocks.append(dict(input_offset=hex(origin), stored_bytes=size+2,
                           output_offset=hex(before), output_bytes=len(out)-before,
                           raw=raw))


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    REPORT.mkdir(parents=True, exist_ok=True)
    data = (ROOT / 'fwdc240b.bin').read_bytes()
    assert data.startswith(b'PENTAX XXXXX')
    assert len(data) % 4 == 0
    checksum = sum(v[0] for v in struct.iter_unpack('<I', data)) & 0xffffffff
    assert checksum == 0, hex(checksum)
    u32 = lambda off: struct.unpack_from('<I', data, off)[0]
    main_start, sub_start, res_start = (u32(x) for x in (0x30, 0x3c, 0x48))
    manifest = {'input': {'file':'fwdc240b.bin','size':len(data),'sha256':sha(data),
                          'sum_le_u32_mod_2_32':checksum},
                'header_words':{hex(i):hex(u32(i)) for i in range(0x18, 0x50, 4)},
                'sections':[], 'resources':[]}
    for name, start, limit in [('main',main_start,sub_start),('sub',sub_start,res_start)]:
        decoded, end, blocks = decompress(data, start, limit)
        (OUT / (name+'.bin')).write_bytes(decoded)
        manifest['sections'].append(dict(name=name,input_start=hex(start),input_end=hex(end),
            output_size=len(decoded),sha256=sha(decoded),blocks=len(blocks),
            padding_size=limit-end,padding_nonzero=sum(b!=0 for b in data[end:limit])))
        (REPORT / (name+'-blocks.json')).write_text(json.dumps(blocks,indent=2)+'\n')
        strings = list(re.finditer(rb'[\x20-\x7e]{5,}',decoded))
        (REPORT / ('strings-'+name+'.tsv')).write_text('offset\ttext\n'+''.join(
            f'0x{m.start():08x}\t{m.group().decode()}\n' for m in strings))
        print(name, len(decoded), sha(decoded), len(strings), 'strings')
    count = u32(res_start)
    assert count < 10000
    for i in range(count):
        p = res_start + 16 + 32*i
        original = data[p:p+24].split(b'\0')[0].decode('ascii')
        relative, size = u32(p+24), u32(p+28)
        off = res_start + relative
        assert off+size <= len(data)
        parts = original.replace('\\','/').split('/')
        assert parts[0] in ('A:','B:','E:') and all(s not in ('','..','.') for s in parts[1:])
        dst = OUT / 'resources' / parts[0][0] / Path(*parts[1:])
        dst.parent.mkdir(parents=True,exist_ok=True)
        payload = data[off:off+size]
        dst.write_bytes(payload)
        manifest['resources'].append(dict(name=original,input_offset=hex(off),size=size,
                                         sha256=sha(payload),file=str(dst.relative_to(ROOT))))
    (REPORT / 'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    print(count, 'resources extracted; package checksum OK')


if __name__ == '__main__':
    main()
