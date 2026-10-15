// Laboratorio decriptografador: tenta AES c/ chaves candidatas extraidas do proprio binario.
// Uso: node tools\decrypt-lab.js <blob> [haystack] [--off N] [--top 100]
// - candidatos: janelas 16/24/32B de maior entropia no haystack (fora do span do blob)
// - modos: aes-128/192/256 x cbc/ecb/ctr; IVs: zeros e primeiro-bloco
// - score nos 1os 4096 bytes: razao printavel + bonus por magias (MZ, bplist, PNG, {, [)
// - limita-se a CBC/ECB/CTR (sem GCM: precisa tag; sem XTS). Limite documentado, nao falha silenciosa.
const crypto = require("crypto");
const fs = require("fs");

function entropy(buf) {
  const f = new Array(256).fill(0);
  for (const v of buf) f[v]++;
  let h = 0;
  for (const c of f) {
    if (!c) continue;
    const p = c / buf.length;
    h -= p * Math.log2(p);
  }
  return h;
}

function candidates(hay, sizes, top, exclude) {
  const out = [];
  for (const n of sizes) {
    const scored = [];
    for (let i = 0; i + n <= hay.length; i += n) {
      if (exclude && i + n >= exclude[0] && i < exclude[1]) continue;
      scored.push([entropy(hay.subarray(i, i + n)), i]);
    }
    scored.sort((a, b) => b[0] - a[0]);
    const seen = new Set();
    for (const [h, i] of scored) {
      const k = hay.subarray(i, i + n).toString("hex");
      if (seen.has(k)) continue;
      seen.add(k);
      out.push({ n, key: Buffer.from(k, "hex"), h });
      if (out.filter((x) => x.n === n).length >= top) break;
    }
  }
  return out;
}

function score(pt) {
  const s = pt.subarray(0, 4096);
  let p = 0;
  for (const v of s) if ((v >= 32 && v < 127) || v === 10 || v === 13 || v === 9) p++;
  let sc = p / s.length;
  const head = s.subarray(0, 8).toString("binary");
  if (head.startsWith("MZ") || head.startsWith("bplist") || head.startsWith("\x89PNG")) sc += 0.3;
  const t = s.subarray(0, 200).toString("utf8");
  if (/https?:|{[^{}]{4,}|"[\w-]{2,}":/.test(t)) sc += 0.15;
  return sc;
}

async function main() {
  const args = process.argv.slice(2);
  const blobPath = args[0];
  const hayPath = args[1] && !args[1].startsWith("--") ? args[1] : null;
  const get = (name, def) => {
    const i = args.indexOf(name);
    return i >= 0 ? Number(args[i + 1]) : def;
  };
  const off = get("--off", 0), top = get("--top", 100);
  if (!blobPath) { console.error("uso: node decrypt-lab.js <blob> [haystack] [--off N] [--top K]"); process.exit(2); }
  const blob = fs.readFileSync(blobPath);
  const hay = hayPath ? fs.readFileSync(hayPath) : blob;
  const st = fs.statSync(blobPath);
  const blobOff = hayPath && st ? null : null;
  const keys = candidates(hay, [16, 24, 32], top, null);
  console.log("candidatos=" + keys.length + " blob=" + blob.length + " off=" + off);
  const algos = [[16, "aes-128"], [24, "aes-192"], [32, "aes-256"]];
  const modes = ["cbc", "ecb", "ctr"];
  const ivs = [Buffer.alloc(16, 0), "first"];
  const hits = [];
  for (const { n, key } of keys) {
    const alg = algos.find((a) => a[0] === n)[1];
    for (const m of modes) {
      for (const ivm of ivs) {
        try {
          let data = blob.subarray(off), iv = ivm === "first" ? null : ivm;
          if (ivm === "first") {
            if (m === "ecb") continue;
            iv = data.subarray(0, 16); data = data.subarray(16);
          }
          const d = crypto.createDecipheriv(alg + "-" + m, key, iv);
          d.setAutoPadding(true);
          const pt = Buffer.concat([d.update(data.subarray(0, 65536)), d.final()]);
          const sc = score(pt);
          if (sc > 0.72) {
            hits.push({ alg: alg + "-" + m, iv: ivm, key: key.toString("hex"), score: sc.toFixed(3), head: pt.subarray(0, 96).toString("utf8").replace(/[^\x20-\x7e]/g, ".") });
            console.log("HIT " + alg + "-" + m + " iv=" + ivm + " score=" + sc.toFixed(3) + " key=" + key.toString("hex"));
          }
        } catch {}
      }
    }
  }
  console.log("hits=" + hits.length + (hits.length ? "" : " (nada acima de 0.72 = chave/modo fora do espaco tentado)"));
}
main();
