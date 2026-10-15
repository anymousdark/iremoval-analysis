// Sanidade do scanner: conta lea/mov rip-relative em .text cujo destino cai em .rdata.
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]);
const lfanew = b.readUInt32LE(0x3c), coff = lfanew + 4;
const numSec = b.readUInt16LE(coff + 2), sizeOpt = b.readUInt16LE(coff + 16);
const secOff = coff + 20 + sizeOpt;
const secs = [];
for (let i = 0; i < numSec; i++) { const o = secOff + i * 40; secs.push({ name: b.toString("ascii", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), raw: b.readUInt32LE(o + 20), rawSize: b.readUInt32LE(o + 16) }); }
const ib = 0x180000000;
const text = secs.find(s => s.name === ".text"), rd = secs.find(s => s.name === ".rdata");
const lo = ib + rd.vaddr, hi = ib + rd.vaddr + rd.vsize;
let total = 0, intoRdata = 0; const samples = [];
const start = text.raw, end = Math.min(text.raw + text.rawSize, b.length);
for (let i = start; i <= end - 7; i++) {
  let p = i; while (p < end && ((b[p] >= 0x40 && b[p] <= 0x4f) || b[p] === 0x66 || b[p] === 0x67)) p++;
  const op = b[p]; if (op !== 0x8d && op !== 0x8b) continue; if ((b[p + 1] & 0xc7) !== 0x05) continue;
  const disp = b.readInt32LE(p + 2); const dest = ib + text.vaddr + (p + 6 - text.raw) + disp; total++;
  if (dest >= lo && dest < hi) { intoRdata++; if (samples.length < 6) samples.push({ off: "0x" + i.toString(16), dest: "0x" + (dest >>> 0).toString(16) }); }
}
console.log(`rip lea/mov em .text = ${total}, para .rdata[0x${lo.toString(16)}-0x${hi.toString(16)}] = ${intoRdata}`);
for (const s of samples) console.log("  ex " + s.off + " -> " + s.dest);
