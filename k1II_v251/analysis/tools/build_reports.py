#!/usr/bin/env python3
"""Generate static evidence indexes; never executes firmware instructions."""
from pathlib import Path
import collections
import hashlib
import json
import math
import re
import struct

ROOT = Path(__file__).resolve().parents[2]
REPORT = ROOT / 'analysis/reports'
BASE = 0x40000000


def decode_glyphs(data):
    # Verified on English labels and descriptions. Not a complete font decoder.
    return ''.join('\\n' if c == 1 else chr(c+30) if 2 <= c <= 96
                   else f'<glyph:{c:02x}>' for c in data)


def main():
    b = (ROOT / 'analysis/extracted/main.bin').read_bytes()
    u32 = lambda off: struct.unpack_from('<I', b, off)[0]
    ss = [(m.start(),m.group().decode()) for m in re.finditer(rb'[\x20-\x7e]{5,}', b)]
    patterns = {
        'feature_gates': r'SpecialFeature|SpFFlg|FunctionRelease|ForcedActivation|IsValidGradNd|QrCode|StarAf|FineFocus|Trial',
        'debug': r'Development Menu|DEBUG MODE|SCRIPT EN MODE|AF FINE|AF PINT|MODSET|DebugMode|DebugService|DebugMenu|SYSPARAM|DISABLE_ALL_NR|STORE_LV_STAR_AF_BAYER|DISABLE_DARK_SUBTRACT',
        'imaging': r'PixelShift|Rrs|GradNd|AstroPhoto|AstroTracer|StarStream|HDR|IsEnable.*|KATEN|HARUBENI|FUYUNO|KYUSHU|SATOBI',
        'interfaces': r'/v1/|/v2/|http:|HTTP/|Tether|Ptp|PTP|SCSICMD|MODSET|TESTMODE|startup.ttl|shutdown.ttl',
        'identity': r'Version 2.51|2025/10/24|Git Inf|GitHash|GitCommit|OpenSSL|ZXing|ITRON|ThreadX|VxWorks|Linux|Nucleus|M7M|Cortex|REALOS',
    }
    for name, pat in patterns.items():
        arr = [(o,s) for o,s in ss if re.search(pat,s,re.I)]
        (REPORT / f'evidence-{name}.tsv').write_text('offset_main\tvirtual_address\ttext\n'+''.join(
            f'0x{o:08x}\t0x{BASE+o:08x}\t{s}\n' for o,s in arr))
    rows = []
    for core in ['dc','cc']:
        p = ROOT / f'analysis/extracted/resources/A/cmd_{core}.txt'
        rows += [(core,n,a) for n,a in re.findall(r'(\w+)\s*,\s*(0x[0-9a-f]+)',p.read_text())]
    (REPORT / 'commands.tsv').write_text('core\tname\taddress\tmain_offset\n'+''.join(
        f'{c}\t{n}\t{a}\t0x{int(a,16)-BASE:08x}\n' for c,n,a in rows))
    # Text records carry a line/length field and a pointer. Restrict to the verified
    # English and French banks; this intentionally does not recover every UI string.
    ui = []
    for p in range(0xe90000,0xf40000,4):
        a,ptr,_,fptr = struct.unpack_from('<IIII',b,p)
        size,lines = a & 255, a >> 8
        if not (1 <= size <= 255 and 1 <= lines <= 8 and
                0x40e90000 <= ptr < 0x40e9c000 and 0x40e9c000 <= fptr < 0x40ea3000):
            continue
        off = ptr-BASE
        raw = b[off:off+size]
        if raw[-1:] == b'\0' and b'\0' not in raw[:-1]:
            ui.append((p,off,decode_glyphs(raw[:-1])))
    (REPORT / 'ui-english.tsv').write_text('table_offset\ttext_offset\tdecoded_ascii_glyphs\n'+''.join(
        f'0x{p:08x}\t0x{o:08x}\t{s}\n' for p,o,s in ui))
    premium = []
    for p in range(0xa208cc,0xa2090c,16):
        feature,visibility = b[p:p+2]
        label_table,desc_table = struct.unpack_from('<II',b,p+4)
        text_ptr = u32(label_table-BASE+4)-BASE
        desc_ptr = u32(desc_table-BASE+4)-BASE
        premium.append(dict(table_offset=hex(p),feature_id=feature,
            secondary_gate_id=visibility,label_table_va=hex(label_table),text_offset=hex(text_ptr),
            label=decode_glyphs(b[text_ptr:b.index(0,text_ptr)]),
            description=decode_glyphs(b[desc_ptr:b.index(0,desc_ptr)]),
            default_model_0255=b[0xae798c+feature*2+1]))
    (REPORT / 'premium-features.json').write_text(json.dumps(premium,indent=2)+'\n')
    defaults=[dict(id=i,model_0232=b[0xae798c+i*2],model_0255=b[0xae798d+i*2]) for i in range(20)]
    (REPORT / 'feature-defaults.json').write_text(json.dumps(defaults,indent=2)+'\n')
    # Exact ARM BL references to important routines. This omits indirect calls,
    # tail calls and Thumb callers; it is not a complete cross-reference database.
    watched={0x408d9998:'GetFeatureAvailability',0x4065b124:'LoadSysparamFile'}
    refs=[]
    for off in range(0x200000,0xa00000,4):
        w=u32(off)
        if (w >> 24) & 15 != 11:
            continue
        delta=w & 0xffffff
        if delta & 0x800000: delta-=1<<24
        target=(BASE+off+8+4*delta)&0xffffffff
        if target in watched:
            prev=u32(off-4)
            arg=(prev & 255) if prev & 0xffffff00 == 0xe3a01000 else None
            refs.append(dict(call_va=hex(BASE+off),target_va=hex(target),name=watched[target],
                             preceding_mov_r1_immediate=arg))
    (REPORT / 'target-callers.json').write_text(json.dumps(refs,indent=2)+'\n')
    entropy=[]
    for p in range(0,len(b),0x100000):
        d=b[p:p+0x100000]; c=collections.Counter(d)
        entropy.append(dict(offset=hex(p),bytes=len(d),entropy_bits=round(-sum(
            n/len(d)*math.log2(n/len(d)) for n in c.values()),6),zero_bytes=c[0],ff_bytes=c[255]))
    (REPORT / 'main-entropy.json').write_text(json.dumps(entropy,indent=2)+'\n')
    sources={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest()
             for p in (ROOT/'analysis/vendor').glob('*') if p.is_file()}
    (REPORT / 'vendor-sha256.json').write_text(json.dumps(sources,indent=2)+'\n')
    print(json.dumps(dict(commands=len(rows),commands_dc=sum(c=='dc' for c,_,_ in rows),
        commands_cc=sum(c=='cc' for c,_,_ in rows),ui_english_candidates=len(ui),premium=premium),indent=2))


if __name__ == '__main__':
    main()
