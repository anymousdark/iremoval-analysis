// Dump dos headers PE32+: secções + os 16 data directories, com RVA resolvido
// para nome de secção. Diagnostica secções "com nome enganoso" (packer).
// Uso: node pe-dirs.js <ficheiro>
const fs = require("fs");
const f = fs.readFileSync(process.argv[2]);
const u16 = o => f.readUInt16LE(o);
const u32 = o => f.readUInt32LE(o);

if (f.toString("ascii", 0, 2) !== "MZ") { console.error("sem MZ"); process.exit(1); }
const pe = u32(0x3c);
if (f.toString("ascii", pe, pe + 4) !== "PE\0\0") { console.error("sem PE"); process.exit(1); }
const coff = pe + 4;
const nSec = u16(coff + 2);
const szOpt = u16(coff + 16);
const opt = coff + 20;
const magic = u16(opt);
const isP = magic === 0x20b;
console.log(`machine=0x${u16(coff).toString(16)} secções=${nSec} optSize=${szOpt} magic=0x${magic.toString(16)} (${isP ? "PE32+" : "PE32"})`);
console.log(`entrypoint RVA=0x${u32(opt + 16).toString(16)}  imageBase=0x${(isP ? Number(f.readBigUInt64LE(opt + 24)) : u32(opt + 28)).toString(16)}`);

const nDir = isP ? u32(opt + 108) : u32(opt + 92);
const dirOff = isP ? opt + 112 : opt + 96;
console.log(`NumberOfRvaAndSizes=${nDir}`);

const secs = [];
const sTab = opt + szOpt;
for (let i = 0; i < nSec; i++) {
  const o = sTab + i * 40;
  const name = f.toString("ascii", o, o + 8).replace(/\0/g, "");
  secs.push({ name, va: u32(o + 12), vsz: u32(o + 8), raw: u32(o + 20), rawsz: u32(o + 16), ch: u32(o + 36) });
  console.log(`  sec ${name.padEnd(9)} va=0x${u32(o + 12).toString(16).padStart(7, "0")} vsz=0x${u32(o + 8).toString(16).padStart(7, "0")} raw=0x${u32(o + 20).toString(16).padStart(7, "0")} rawsz=0x${u32(o + 16).toString(16).padStart(7, "0")} ch=0x${u32(o + 36).toString(16)}`);
}
const secOf = rva => {
  for (const s of secs) if (rva >= s.va && rva < s.va + Math.max(s.vsz, 1)) return s.name;
  return "??";
};

const NAMES = ["Export", "Import", "Resource", "Exception(.pdata)", "Certificate", "BaseReloc", "Debug",
  "Architecture", "GlobalPtr", "TLS", "LoadConfig", "BoundImport", "IAT", "DelayImport", "CLR", "Reserved"];
console.log("--- data directories ---");
for (let i = 0; i < nDir && i < 16; i++) {
  const rva = u32(dirOff + i * 8), sz = u32(dirOff + i * 8 + 4);
  if (!rva && !sz) { console.log(`  [${i}] ${NAMES[i].padEnd(16)} vazio`); continue; }
  console.log(`  [${i}] ${NAMES[i].padEnd(16)} RVA=0x${rva.toString(16).padStart(7, "0")} size=0x${sz.toString(16).padStart(7, "0")} -> ${secOf(rva)}`);
}
