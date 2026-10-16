#!/usr/bin/env node
// Scan a VA range of code in a PE for 64-bit immediates and RIP-relative LEAs
// whose targets land inside a VA window (typ. frozen/hydrated regions the
// static file doesn't back, e.g. string tokens referenced by NativeAOT code).
//
// Usage:
//   node tools/scan-code-refs.js <pe-file> <startVA> <endVA> <loVA> <hiVA>
//
// Example (tokens dos handlers do Action em 0x1805425a0..0x1805426d0):
//   node tools/scan-code-refs.js artifacts/patched/iremovalpro_engine.exe \
//     0x180542500 0x180542900 0x180700000 0x180a00000
const fs = require("fs");

const [, , file, startS, endS, loS, hiS] = process.argv;
if (!file || !startS || !endS || !loS || !hiS) {
  console.error("usage: node tools/scan-code-refs.js <pe-file> <startVA> <endVA> <loVA> <hiVA>");
  process.exit(2);
}
const start = Number(BigInt(startS));
const end = Number(BigInt(endS));
const lo = Number(BigInt(loS));
const hi = Number(BigInt(hiS));

const b = fs.readFileSync(file);
const e = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(e + 6);
const optSize = b.readUInt16LE(e + 20);
const optOff = e + 24;
const magic = b.readUInt16LE(optOff);
const imgBase = magic === 0x20b
  ? Number(b.readBigUInt64LE(optOff + 24))
  : Number(b.readUInt32LE(optOff + 28));
const secOff = optOff + optSize;
const sections = [];
for (let i = 0; i < nsec; i++) {
  const s = secOff + i * 40;
  sections.push({
    name: b.toString("ascii", s, s + 8).replace(/\0+$/, ""),
    vsize: b.readUInt32LE(s + 8),
    va: b.readUInt32LE(s + 12),
    rawSize: b.readUInt32LE(s + 16),
    raw: b.readUInt32LE(s + 20),
  });
}
const vaToOff = (va) => {
  const rva = va - imgBase;
  for (const s of sections) {
    if (rva >= s.va && rva < s.va + Math.max(s.vsize, s.rawSize)) {
      return s.raw + (rva - s.va);
    }
  }
  return -1;
};
const inRange = (v) => v >= lo && v < hi;
const hex = (n) => "0x" + n.toString(16);

let count = 0;
for (let va = start; va < end; va++) {
  const off = vaToOff(va);
  if (off < 0 || off + 10 > b.length) continue;
  const b1 = b[off];
  const rex = b1 & 0xfc;
  if (rex !== 0x48 && rex !== 0x4c) continue;
  const b2 = b[off + 1];
  if (b2 >= 0xb8 && b2 <= 0xbf) {
    // mov r64, imm64 (B8+rd; REX.W)
    const imm = Number(b.readBigUInt64LE(off + 2));
    if (inRange(imm)) {
      console.log(`${hex(va)}  mov-imm64 → ${hex(imm)}`);
      count++;
    }
    continue;
  }
  if (b2 === 0x8d) {
    // lea r64, [rip+disp32]
    const m = b[off + 2];
    if ((m & 0xc7) === 0x05) {
      const disp = b.readInt32LE(off + 3);
      const t = va + 7 + disp;
      if (inRange(t)) {
        console.log(`${hex(va)}  lea-rip   → ${hex(t)}`);
        count++;
      }
    }
  }
  if (b2 === 0x8b || b2 === 0x89) {
    // mov r64, [rip+disp32] (load) / mov [rip+disp32], r64 (store)
    const m = b[off + 2];
    if ((m & 0xc7) === 0x05) {
      const disp = b.readInt32LE(off + 3);
      const t = va + 7 + disp;
      if (inRange(t)) {
        console.log(`${hex(va)}  ${b2 === 0x8b ? "mov-load " : "mov-store"} → ${hex(t)}`);
        count++;
      }
    }
  }
}
console.log(`— ${count} refs em [${hex(start)},${hex(end)}) → [${hex(lo)},${hex(hi)})`);
