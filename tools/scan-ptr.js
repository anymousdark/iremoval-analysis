// Procura ponteiros/rvas para um VA numa PE inteira + interpreta .reloc.
// node scan-ptr.js <pe> <vaHex>
const fs = require("fs");
const [,, file, vaArg] = process.argv;
const b = fs.readFileSync(file);
const va = Number(vaArg.startsWith("0x") ? vaArg : "0x" + vaArg);
const rva = (va >>> 0) >>> 0;
const pat4 = Buffer.alloc(4); pat4.writeUInt32LE(rva >>> 0);
const pat8 = Buffer.alloc(8); pat8.writeBigUInt64LE(BigInt(va));

function findAll(pat) {
  const out = []; let i = b.indexOf(pat, 0);
  while (i !== -1) { out.push(i); i = b.indexOf(pat, i + 1); }
  return out;
}
console.log(`VA=0x${va.toString(16)} RVA=0x${rva.toString(16)}`);
console.log("occ RVA(4B): " + findAll(pat4).map(x => "0x" + x.toString(16)).join(" "));
console.log("occ VA(8B):  " + findAll(pat8).map(x => "0x" + x.toString(16)).join(" "));

// parse .reloc
const lfanew = b.readUInt32LE(0x3c);
const coff = lfanew + 4;
const numSec = b.readUInt16LE(coff + 2);
const sizeOpt = b.readUInt16LE(coff + 16);
const secOff = coff + 20 + sizeOpt;
const secs = [];
for (let i = 0; i < numSec; i++) {
  const o = secOff + i * 40;
  secs.push({ name: b.toString("ascii", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), raw: b.readUInt32LE(o + 20), rawSize: b.readUInt32LE(o + 16) });
}
const rel = secs.find(s => s.name === ".reloc");
if (rel) {
  let p = rel.raw, end = rel.raw + rel.rawSize, found = [];
  while (p + 8 <= end) {
    const pageRva = b.readUInt32LE(p);
    const blockSize = b.readUInt32LE(p + 4);
    if (blockSize === 0) break;
    const n = (blockSize - 8) / 2;
    for (let k = 0; k < n; k++) {
      const ent = b.readUInt16LE(p + 8 + k * 2);
      const type = ent >> 12, off = ent & 0x0fff;
      const targetRva = pageRva + off;
      if (targetRva === rva) found.push({ type, slotRva: targetRva });
    }
    p += blockSize;
  }
  console.log("reloc p/ RVA: " + (found.length ? found.map(f => "type=" + f.type).join(",") : "nenhuma"));
} else console.log("sem .reloc");
