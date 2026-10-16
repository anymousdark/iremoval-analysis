// mdmp-read.js — lê VAs (base de imagem 0x180000000) de um minidump MDMP do Windows
// Uso: node tools/mdmp-read.js <dump.dmp> <imgVA> [imgVA ...] [--module iremovalpro] [--imgbase 0x180000000]
//      node tools/mdmp-read.js <dump.dmp> --walk <loImgVA> <hiImgVA> [--strmt 0x180858040]
// Resolve: ModuleListStream (#4) → base carregada; Memory64ListStream (#9) → VA→offset.
// Tenta parsear objeto string NativeAOT na imagem do módulo: [MT u64][len i32][utf16 ...]
// e um nível de deref (u64+0 / u64+8), imprimindo tudo o que casar.
// Modo --walk: varre a faixa de imgVA de 8 em 8 bytes e lista todo objeto String
// (MT == System.String); inventário da tabela frozen/hydrated do dump.
"use strict";
const fs = require("fs");

const argv = process.argv.slice(2);
if (argv.length < 2) {
  console.log("uso: node tools/mdmp-read.js <dump.dmp> <imgVA> [...] [--module substr] [--imgbase 0x180000000]");
  console.log("     varredura: node tools/mdmp-read.js <dump.dmp> --walk <loImgVA> <hiImgVA> [--strmt 0x180858040]");
  process.exit(1);
}
const dumpPath = argv.shift();
let modulePat = "iremovalpro";
let imgBase = 0x180000000n;
let walkLo = null, walkHi = null;
let strmtVA = 0x180858040n; // MethodTable de System.String (imgVA; default do dump ipro-01)
const targets = [];
for (let i = 0; i < argv.length; i++) {
  if (argv[i] === "--module") { modulePat = String(argv[++i]).toLowerCase(); continue; }
  if (argv[i] === "--imgbase") { imgBase = BigInt(argv[++i]); continue; }
  if (argv[i] === "--walk") { walkLo = BigInt(argv[++i]); walkHi = BigInt(argv[++i]); continue; }
  if (argv[i] === "--strmt") { strmtVA = BigInt(argv[++i]); continue; }
  targets.push(BigInt(argv[i]));
}

const fd = fs.openSync(dumpPath, "r");
const fileSize = fs.fstatSync(fd).size;
const readAt = (off, len) => {
  const b = Buffer.alloc(len);
  const n = fs.readSync(fd, b, 0, len, off);
  return n < len ? b.subarray(0, n) : b;
};
const hex = (v) => "0x" + v.toString(16);

// --- header MDMP ---
const hdr = readAt(0, 32);
if (hdr.toString("latin1", 0, 4) !== "MDMP") { console.error("não é um minidump MDMP"); process.exit(1); }
const nStreams = hdr.readUInt32LE(8);
const dirOff = hdr.readUInt32LE(12);
const dir = readAt(dirOff, nStreams * 12);
let memStreamOff = null, modStreamOff = null;
for (let i = 0; i < nStreams; i++) {
  const t = dir.readUInt32LE(i * 12);
  const rva = dir.readUInt32LE(i * 12 + 8);
  if (t === 9) memStreamOff = rva;  // Memory64ListStream
  if (t === 4) modStreamOff = rva;  // ModuleListStream
}
if (memStreamOff == null) { console.error("sem Memory64ListStream"); process.exit(1); }

// --- módulo ---
let base = null, imgSize = 0n, modName = "";
if (modStreamOff != null) {
  const mh = readAt(modStreamOff, 16);
  const nMods = mh.readUInt32LE(0);
  const mb = readAt(modStreamOff, Math.min(4 + nMods * 108, 4 * 1024 * 1024));
  for (let i = 0; i < nMods; i++) {
    const o = 4 + i * 108;
    if (o + 24 > mb.length) break;
    const nameRva = mb.readUInt32LE(o + 20); // ModuleNameRva (após Base+Size+CheckSum+TimeDateStamp)
    if (!nameRva || nameRva > fileSize - 8) continue;
    const sLen = readAt(nameRva, 4).readUInt32LE(0);
    if (sLen <= 2 || sLen > 1024) continue;
    const nm = readAt(nameRva + 4, sLen).toString("utf16le").replace(/\0.*$/s, "");
    if (nm.toLowerCase().includes(modulePat)) {
      base = mb.readBigUInt64LE(o);
      imgSize = BigInt(mb.readUInt32LE(o + 8));
      modName = nm;
    }
  }
}
if (base == null) { console.error("módulo não encontrado no dump:", modulePat); process.exit(1); }
console.log("módulo: " + modName);
console.log("base:   " + hex(base) + "  size: " + hex(imgSize));

// --- Memory64 ---
const mh2 = readAt(memStreamOff, 16);
const nRanges = Number(mh2.readBigUInt64LE(0));
const baseRva = Number(mh2.readBigUInt64LE(8));
const rangesBuf = readAt(memStreamOff + 16, nRanges * 16);
const ranges = [];
for (let i = 0; i < nRanges; i++) {
  ranges.push({
    start: rangesBuf.readBigUInt64LE(i * 16),
    size: rangesBuf.readBigUInt64LE(i * 16 + 8),
  });
}
// offsets acumulados (dados das ranges são sequenciais a partir de baseRva)
let cum = BigInt(baseRva);
for (const r of ranges) { r.file = cum; cum += r.size; }
function vaToFile(va) {
  let lo = 0, hi = ranges.length - 1;
  while (lo <= hi) {
    const mid = (lo + hi) >> 1;
    const r = ranges[mid];
    if (va < r.start) hi = mid - 1;
    else if (va >= r.start + r.size) lo = mid + 1;
    else return Number(r.file + (va - r.start));
  }
  for (const r of ranges) if (va >= r.start && va < r.start + r.size) return Number(r.file + (va - r.start));
  return null;
}
const printable = (s) => s.replace(/[^\x20-\x7e]/g, ".");
function scanUtf16(off, maxBytes) {
  let end = off, lim = Math.min(off + maxBytes, fileSize);
  while (end + 1 < lim) {
    if (readAt(end, 2).readUInt16LE(0) === 0) break;
    end += 2;
  }
  return readAt(off, end - off).toString("utf16le");
}
// tenta ler objeto string NativeAOT [MT][len][chars] em runVA (VA de runtime)
function tryString(runVA, label) {
  const off = vaToFile(runVA);
  if (off == null) { console.log(`  [${label}] VA ${hex(runVA)} fora do dump`); return null; }
  const head = readAt(off, 16);
  if (head.length < 12) return null;
  const mt = head.readBigUInt64LE(0);
  const len = head.readInt32LE(8);
  let text = null, how = "";
  if (len > 0 && len <= 512) {
    text = readAt(off + 12, len * 2).toString("utf16le");
    how = `objlen=${len}`;
  } else {
    text = scanUtf16(off + 12, 384);
    how = `scan(len=${len})`;
  }
  const clean = printable(text).replace(/\s+$/, "");
  if (clean.length >= 3) {
    console.log(`  [${label}] MT=${hex(mt)} ${how} text=${JSON.stringify(clean.slice(0, 200))}`);
    return clean;
  }
  console.log(`  [${label}] MT=${hex(mt)} ${how} (sem texto imprimível)`);
  return null;
}

for (const imgVA of targets) {
  const runVA = base + (imgVA - imgBase);
  console.log("\n=== " + hex(imgVA) + "  → runtime " + hex(runVA) + " ===");
  const off = vaToFile(runVA);
  if (off == null) { console.log("  VA não presente em nenhuma range do dump"); continue; }
  console.log("  dump off " + hex(BigInt(off)));
  const raw = readAt(off, 112);
  for (let row = 0; row < raw.length; row += 16) {
    const slice = raw.subarray(row, row + 16);
    console.log("  " + slice.toString("hex").replace(/(.{8})(?=..)/g, "$1 ").padEnd(40) + " |" + printable(slice.toString("latin1")));
  }
  tryString(runVA, "str@+0");
  // deref: dois u64 iniciais, se apontarem para dentro da imagem
  for (const poff of [0, 8]) {
    if (poff + 8 > raw.length) continue;
    const p = raw.readBigUInt64LE(poff);
    if (p >= base && p < base + imgSize && p !== runVA) {
      console.log(`  ptr@+${poff} → ${hex(p)}`);
      tryString(p, `*+${poff}`);
    }
  }
  // varredura crua UTF-16 do próprio local (pode não ser objeto)
  const cru = printable(scanUtf16(off, 384)).replace(/\s+$/, "");
  if (cru.length >= 3) console.log(`  raw-utf16@+0: ${JSON.stringify(cru.slice(0, 200))}`);
}

// --- modo varredura: lista objetos String numa faixa de imgVA ---------------
if (walkLo != null) {
  const strmtRun = base + (strmtVA - imgBase);
  const endRun = base + (walkHi - imgBase);
  let found = 0;
  for (let va = base + (walkLo - imgBase); va + 16n <= endRun; va += 8n) {
    const off = vaToFile(va);
    if (off == null || off + 12 > fileSize) continue;
    const head = readAt(off, 16);
    if (head.length < 12 || head.readBigUInt64LE(0) !== strmtRun) continue;
    const len = head.readInt32LE(8);
    if (len <= 0 || len > 2048) continue;
    const txt = readAt(off + 12, len * 2).toString("utf16le");
    const clean = printable(txt);
    if (clean.length < 3) continue;
    console.log(hex(imgBase + (va - base)) + "\t" + len + "\t" + JSON.stringify(clean));
    found++;
  }
  console.error("--walk: " + found + " strings em [" + hex(walkLo) + "," + hex(walkHi) + ")");
}
