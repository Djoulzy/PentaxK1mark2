// Independently compare the Python extraction with the unmodified upstream JS algorithm.
const fs = require('fs');
const vm = require('vm');
const path = require('path');
const crypto = require('crypto');
const root = path.resolve(__dirname, '../..');
const sandbox = {Buffer, Uint8Array, Uint32Array, module: {exports: {}},
  require: name => name === 'mkdirp' ? () => {throw Error('Resource writes disabled');} : require(name)};
vm.runInNewContext(fs.readFileSync(path.join(root,'analysis/vendor/index.js'),'utf8'),sandbox);
const tool = sandbox.module.exports;
tool.setInput(fs.readFileSync(path.join(root,'fwdc240b.bin')));
const results = [];
for (const [name,offset] of [['main',0x200],['sub',0x7e0200]]) {
  const upstream = tool.decompress(offset,2);
  const local = fs.readFileSync(path.join(root,'analysis/extracted',name+'.bin'));
  if (!upstream.equals(local)) throw Error(name+' mismatch');
  results.push({name,identical:true,size:local.length,sha256:crypto.createHash('sha256').update(local).digest('hex')});
}
const report=JSON.stringify(results,null,2)+'\n';
fs.writeFileSync(path.join(root,'analysis/reports/upstream-verification.json'),report);
process.stdout.write(report);
