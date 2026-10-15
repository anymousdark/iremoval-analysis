// Minimal PE/CLI metadata reader: TypeRef + #US user strings
const fs = require("fs");
const path = process.argv[2];
const b = fs.readFileSync(path);

const u8 = (o) => b.readUInt8(o);
const u16 = (o) => b.readUInt16LE(o);
const u32 = (o) => b.readUInt32LE(o);
const u64 = (o) => b.readBigUInt64LE(o);

// --- PE headers ---
const e_lfanew = u32(0x3c);
const numSections = u16(e_lfanew + 6);
const sizeOpt = u16(e_lfanew + 20);
const optOff = e_lfanew + 24;
const magic = u16(optOff);
const ddOff = magic === 0x20b ? optOff + 112 : optOff + 96;
const clrRva = u32(ddOff + 14 * 8);

const secOff = optOff + sizeOpt;
const sections = [];
for (let i = 0; i < numSections; i++) {
  const o = secOff + i * 40;
  sections.push({
    name: b.slice(o, o + 8).toString("ascii").replace(/\0.*$/, ""),
    va: u32(o + 12), vsz: u32(o + 8), raw: u32(o + 20), rsz: u32(o + 16),
  });
}
const rva2off = (rva) => {
  for (const s of sections) {
    const sz = Math.max(s.vsz, s.rsz);
    if (rva >= s.va && rva < s.va + sz) return s.raw + (rva - s.va);
  }
  throw new Error("RVA not found: 0x" + rva.toString(16));
};

// --- CLI header ---
const cliOff = rva2off(clrRva);
const metaRva = u32(cliOff + 8);
const metaOff = rva2off(metaRva);

// --- Metadata root ---
if (u32(metaOff) !== 0x424a5342) throw new Error("bad metadata signature");
const verLen = u32(metaOff + 12);
const verStr = b.slice(metaOff + 16, metaOff + 16 + verLen).toString("ascii").replace(/\0.*$/, "");
let p = metaOff + 16 + verLen;
p += 2; // flags
const nStreams = u16(p); p += 2;
const streams = {};
for (let i = 0; i < nStreams; i++) {
  const off = u32(p); p += 4;
  const size = u32(p); p += 4;
  let name = "";
  while (u8(p) !== 0) { name += String.fromCharCode(u8(p)); p++; }
  p++; p += (4 - ((name.length + 1) % 4)) % 4;
  streams[name] = { off: metaOff + off, size };
}
console.log("# metadata version:", verStr);
console.log("# streams:", Object.keys(streams).join(", "));

// --- #~ tables ---
const t = streams["#~"] || streams["#-"];
let q = t.off;
const heapSizes = u8(q + 6);
const valid = u64(q + 8);
const strBig = (heapSizes & 1) !== 0, guidBig = (heapSizes & 2) !== 0, blobBig = (heapSizes & 4) !== 0;
q += 24;
const rowCounts = {};
for (let i = 0; i < 64; i++) {
  if ((valid >> BigInt(i)) & 1n) { rowCounts[i] = Number(u32(q)); q += 4; }
}
const tablesStart = q;
console.log("# tables present:", Object.keys(rowCounts).map(k => `${k}:${rowCounts[k]}`).join(" "));

// index sizes
const strIdx = strBig ? 4 : 2;
const guidIdx = guidIdxSize();
function guidIdxSize() { return guidBig ? 4 : 2; }
const blobIdx = blobBig ? 4 : 2;
const simple = (n) => (rowCounts[n] >= 65536 ? 4 : 2);
const coded = (tables, tagBits) => {
  const max = Math.max(...tables.map((n) => rowCounts[n] || 0));
  return max >= (1 << (16 - tagBits)) ? 4 : 2;
};

const T = { Module: 0, TypeRef: 1, TypeDef: 2, Field: 4, MethodDef: 6, Param: 8,
  InterfaceImpl: 9, MemberRef: 10, Constant: 11, CustomAttribute: 12,
  DeclSecurity: 14, ClassLayout: 15, FieldLayout: 16, StandAloneSig: 17,
  EventMap: 18, Event: 20, PropertyMap: 21, Property: 23, MethodSemantics: 24,
  MethodImpl: 25, ModuleRef: 26, TypeSpec: 27, ImplMap: 28, FieldRVA: 29,
  Assembly: 32, AssemblyRef: 35 };

// row sizes
const szScopeRes = coded([T.Module, T.ModuleRef, T.AssemblyRef, T.TypeRef], 2);
const szDefOrRef = coded([T.TypeDef, T.TypeRef, T.TypeSpec], 2);
const szHasCA = coded([T.MethodDef, T.Field, T.TypeRef, T.TypeDef, T.Param, T.InterfaceImpl, T.MemberRef, T.Module, 35 /*AssemblyRef*/, T.Property, T.Event, T.StandAloneSig, T.ModuleRef, T.TypeSpec, T.Assembly, 44 /*GenericParam*/, 42 /*FieldRVA? no*/], 5);
const szMemberRefParent = coded([T.TypeDef, T.TypeRef, T.ModuleRef, T.MethodDef, T.TypeSpec], 3);
const szHasConstant = coded([T.Field, T.Param, T.Property], 2);

const rowSize = {
  0: 2 + strIdx + guidIdx + guidIdx + guidIdx,                       // Module
  1: szScopeRes + strIdx + strIdx,                                   // TypeRef
  2: 4 + strIdx + strIdx + szDefOrRef + simple(T.Field) + simple(T.MethodDef), // TypeDef
  4: 2 + strIdx + blobIdx,                                           // Field
  6: 4 + 2 + 2 + strIdx + blobIdx + simple(T.Param),                 // MethodDef
  10: szMemberRefParent + strIdx + blobIdx,                          // MemberRef
};

// Only TypeRef (0x01) and ModuleRef (0x1A) needed
function skipTables(target) {
  let off = tablesStart;
  const order = Object.keys(rowCounts).map(Number).sort((a, b) => a - b);
  for (const id of order) {
    if (id === target) return off;
    off += rowCounts[id] * requireRowSize(id, rowCounts);
  }
  return off;
}
function requireRowSize(id, rc) {
  const s = rowSize[id];
  if (s == null) throw new Error("row size for table " + id + " not implemented");
  return s;
}

// read string heap entry
const strHeap = streams["#Strings"];
const strAt = (idx) => {
  let e = strHeap.off + idx, s = "";
  while (b[e] !== 0) { s += String.fromCharCode(b[e]); e++; }
  return s;
};
const usHeap = streams["#US"];

// TypeRef rows
const trOff = skipTables(T.TypeRef);
const trCount = rowCounts[T.TypeRef] || 0;
const trSize = rowSize[T.TypeRef];
const typerefs = [];
let o = trOff;
for (let i = 0; i < trCount; i++) {
  o += szScopeRes; // resolution scope
  const nameIdx = strIdx === 4 ? u32(o) : u16(o); o += strIdx;
  const nsIdx = strIdx === 4 ? u32(o) : u16(o); o += strIdx;
  const ns = strAt(nsIdx);
  typerefs.push((ns ? ns + "." : "") + strAt(nameIdx));
}

// #US strings
const us = [];
{
  let e = usHeap.off + 1;
  const end = usHeap.off + usHeap.size;
  while (e < end) {
    const start = e;
    let len = 0, shift = 0, byte1;
    do { byte1 = b[e++]; len |= (byte1 & 0x7f) << shift; shift += 7; } while (byte1 & 0x80);
    if (len === 0) continue;
    if (e + len > end) break;
    const raw = b.slice(e, e + len);
    e += len;
    // last byte is a terminal byte; payload is UTF-16LE
    const payload = raw.slice(0, len - 1);
    if (payload.length % 2 === 0 && payload.length > 0) {
      let s = "";
      for (let i = 0; i < payload.length; i += 2) s += String.fromCharCode(payload[i] | (payload[i + 1] << 8));
      us.push({ off: start, s });
    }
  }
}

console.log("\n=== TYPeref (" + typerefs.length + ") ===");
console.log(typerefs.join("\n"));

console.log("\n=== #US USER STRINGS (" + us.length + ") ===");
for (const x of us) console.log("0x" + x.off.toString(16).padStart(6, "0") + "  " + JSON.stringify(x.s));
