// Scanner xrefs x64 alargado: varre TODAS as seccoes.
// node xref-sbox.js <pe> <fileOffHex> [...]
const fs = require("fs");
const [,, file, ...hexArgs] = process.argv;
const b = fs.readFileSync(file);

const lfanew = b.readUInt32LE(0x3c);
const coff = lfanew + 4;
const numSec = b.readUInt16LE(coff + 2);
const sizeOpt = b.readUInt16LE(coff + 16);
const optOff = coff + 20;
const magic = b.readUInt16LE(optOff);
const imageBase = magic === 0x20b ? Number(b.readBigUInt64LE(optOff + 24)) : b.readUInt32LE(optOff + 28);
const secOff = optOff + sizeOpt;

const secs = [];
for (let i = 0; i < numSec; i++) {
  const o = secOff + i * 40;
  const name = b.toString("ascii", o, o + 8).replace(/\0.*$/, "");
  const chars = b.readUInt32LE(o + 36);
  secs.push({ name, vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), raw: b.readUInt32LE(o + 20), rawSize: b.readUInt32LE(o + 16), chars });
}
const imgBase = imageBase;
function off2va(off) { for (const s of secs) if (off >= s.raw && off < s.raw + s.rawSize) return imgBase + s.vaddr + (off - s.raw); return null; }

const targets = hexArgs.map(h => Number(h.startsWith("0x") ? h : "0x" + h));
for (const t of targets) {
  const va = off2va(t);
  console.log(`\n== alvo off=0x${t.toString(16)} VA=0x${va.toString(16)} ==`);
  const rvaT = va - imgBase; // RVA correto
  const immHits = [], ripNear = [];
  for (const s of secs) {
    const start = s.raw, end = Math.min(s.raw + s.rawSize, b.length);
    if (end - start < 8 || s.raw === 0) continue;
    const base = imgBase + s.vaddr - s.raw; // va = base + fileoff
    // imm32: RVA do alvo OU low-32 da VA absoluta
    for (let i = start; i <= end - 4; i++) {
      const w = b.readUInt32LE(i);
      if (w === (rvaT >>> 0)) immHits.push({ sec: s.name, off: i, kind: "RVA" });
      else if (w === (va >>> 0)) immHits.push({ sec: s.name, off: i, kind: "low32" });
    }
    // rip-relative: qualquer lea/mov com destino dentro de +/-0x800 da VA
    for (let i = start; i <= end - 7; i++) {
      let p = i, pre = 0;
      while (p < end && ((b[p] >= 0x40 && b[p] <= 0x4f) || b[p] === 0x66 || b[p] === 0x67)) { p++; pre++; if (pre > 4) break; }
      const op = b[p];
      if (op !== 0x8d && op !== 0x8b) continue;
      if ((b[p + 1] & 0xc7) !== 0x05) continue;
      const disp = b.readInt32LE(p + 2);
      const dest = imgBase + s.vaddr + (p + 6 - s.raw) + disp;
      if (dest >= va - 0x800 && dest <= va + 0x800) ripNear.push({ sec: s.name, off: i, dest, op: op === 0x8d ? "lea" : "mov" });
    }
  }
  console.log(`imm32=${immHits.length} ripNear=${ripNear.length}`);
  for (const h of immHits.slice(0, 20)) console.log(`  imm32[${h.kind}] @${h.sec}:0x${h.off.toString(16)}`);
  for (const h of ripNear.slice(0, 40)) console.log(`  ${h.op} @${h.sec}:0x${h.off.toString(16)} -> 0x${h.dest.toString(16)}`);
}
