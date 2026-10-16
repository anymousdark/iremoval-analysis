// find-macho.js — localiza e identifica binários Mach-O/FAT embutidos num ficheiro
// Uso: node tools/find-macho.js <ficheiro>
// Lista magias (MachO 32/64 LE, FAT/FAT64), expande fatias FAT e imprime por binário:
// tipo (EXECUTE/DYLIB), cputype/subtype, BUILD (platform/minos/sdk), ID/LOAD_DYLIB/RPATH
// e extent (max fileoff+filesize dos segmentos). Não extrai nada — só lê/identifica.
"use strict";
const fs = require("fs");

const path = process.argv[2];
if (!path) {
  console.log("uso: node tools/find-macho.js <ficheiro>");
  process.exit(1);
}
const b = fs.readFileSync(path);
const u32 = (o) => (o + 4 <= b.length ? b.readUInt32LE(o) : null);
const u64 = (o) => (o + 8 <= b.length ? Number(b.readBigUInt64LE(o)) : 0);
const strAt = (o, max) => { let e = o; while (e < o + max && e < b.length && b[e] !== 0) e++; return b.toString("latin1", o, e); };

const MAGICS = [
  { name: "MachO64LE", pat: Buffer.from([0xcf, 0xfa, 0xed, 0xfe]) },
  { name: "MachO32LE", pat: Buffer.from([0xce, 0xfa, 0xed, 0xfe]) },
  { name: "FAT", pat: Buffer.from([0xca, 0xfe, 0xba, 0xbe]), entry: 20 },
  { name: "FAT64", pat: Buffer.from([0xca, 0xfe, 0xba, 0xbf]), entry: 32 },
];
const CPU = { 0x7: "x86", 0xc: "arm", 0x1000007: "x86_64", 0x100000c: "arm64" };
const FT = { 1: "object", 2: "EXECUTE", 4: "CORE", 6: "DYLIB", 8: "BUNDLE" };

function parseMachO(base, tag) {
  if (u32(base) !== 0xfeedfacf) { console.log("  " + tag + " @0x" + base.toString(16) + ": header inválido"); return; }
  const cputype = u32(base + 4), cpusub = u32(base + 8), filetype = u32(base + 12), ncmds = u32(base + 16);
  const ftn = FT[filetype] || ("ft" + filetype);
  const cpn = CPU[cputype] || ("cpu0x" + cputype.toString(16));
  console.log("  == " + tag + " @0x" + base.toString(16) + "  " + ftn + " " + cpn + "(sub=0x" + cpusub.toString(16) + ") ncmds=" + ncmds);
  let o = base + 32, end = base;
  for (let i = 0; i < ncmds; i++) {
    if (o + 8 > b.length) break;
    const cmd = u32(o), cmdsz = u32(o + 4);
    if (cmdsz < 8 || o + cmdsz > b.length) break;
    if (cmd === 0x19) {
      const fo = u64(o + 40), fs = u64(o + 48);
      if (fs > 0 && base + fo + fs > end) end = base + fo + fs;
    } else if (cmd === 0xc || cmd === 0xd || cmd === 0x18 || cmd === 0x8000001f || cmd === 0x1c || cmd === 0x8000001c) {
      const tn = { 0xc: "LOAD ", 0xd: "ID   ", 0x18: "WEAK ", 0x8000001f: "REEXP", 0x1c: "RPATH", 0x8000001c: "RPATH" }[cmd];
      console.log("     " + tn + " " + strAt(o + u32(o + 8), 256));
    } else if (cmd === 0x32) {
      console.log("     BUILD platform=" + u32(o + 8) + " minos=0x" + u32(o + 12).toString(16) + " sdk=0x" + u32(o + 16).toString(16));
    }
    o += cmdsz;
  }
  console.log("     extent: 0x" + base.toString(16) + " .. 0x" + end.toString(16) + " (" + (end - base) + "B)");
}

let total = 0;
for (const m of MAGICS) {
  let i = b.indexOf(m.pat);
  while (i !== -1) {
    total++;
    if (m.entry) {
      const nf = b.readUInt32BE(i + 4);
      console.log("== " + m.name + " @0x" + i.toString(16) + " nfat=" + nf);
      for (let k = 0; nf > 0 && nf < 8 && k < nf; k++) {
        const o = i + 8 + k * m.entry;
        if (o + m.entry > b.length) break;
        const ct = b.readUInt32BE(o), cs = b.readUInt32BE(o + 4), off = b.readUInt32BE(o + 8), size = b.readUInt32BE(o + 12), align = b.readUInt32BE(o + 16);
        console.log("   arch" + k + ": cputype=0x" + ct.toString(16) + " cpusub=0x" + cs.toString(16) + " off=0x" + off.toString(16) + " size=0x" + size.toString(16) + " align=" + align);
        parseMachO(i + off, "arch" + k);
      }
    } else {
      console.log("== " + m.name + " @0x" + i.toString(16));
      parseMachO(i, m.name);
    }
    i = b.indexOf(m.pat, i + 1);
  }
}
console.log("total: " + total + " cabeçalho(s) Mach-O/FAT em " + path);
