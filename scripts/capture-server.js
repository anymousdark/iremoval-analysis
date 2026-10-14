// Servidor local de CAPTURA para estudo do protocolo de ativação.
//
// NÃO emite ativações válidas: responde 200 JSON neutro e REGISTA tudo
// (método, URL, headers incl. X-iRemovalPRO-Version, corpo) em capture-log.jsonl.
// Uso de investigação: redirecionar o tráfego da app (ex.: ficheiro hosts,
// ponto de acesso controlado) e observar que pedidos ela faz, quando, e com
// que formato — sem modificar o produto. Requer fluxo real (dispositivo +
// ação do utilizador); sem isso, a app não emite pedidos de ativação.
//
//   node scripts\capture-server.js [porta=8080]
//
// Endpoints imitados (ver docs/07-ativacao.md): ars2, auth3, checkm8, iact9,
// mf5/mf6/mf7, pub.php, version33.txt, Payax0.php
const http = require("http");
const fs = require("fs");
const path = require("path");

const port = Number(process.argv[2] || 8080);
const logFile = path.join(__dirname, "..", "dumps", "capture-log.jsonl");

const KNOWN = [
  "/iremovalActivation/ars2.php",
  "/iremovalActivation/auth3.php",
  "/iremovalActivation/checkm8.php",
  "/iremovalActivation/iact9.php",
  "/iremovalActivation/mf5.php",
  "/iremovalActivation/mf6.php",
  "/iremovalActivation/mf7.php",
  "/pub.php",
  "/version33.txt",
  "/Payax0.php",
];

const server = http.createServer((req, res) => {
  const chunks = [];
  req.on("data", (c) => chunks.push(c));
  req.on("end", () => {
    const body = Buffer.concat(chunks);
    const entry = {
      ts: new Date().toISOString(),
      method: req.method,
      url: req.url,
      known: KNOWN.some((k) => (req.url || "").includes(k.replace(".php", "").replace(".txt", ""))),
      headers: req.headers,
      bodyLen: body.length,
      body: body.slice(0, 4096).toString("utf8"),
    };
    fs.appendFileSync(logFile, JSON.stringify(entry) + "\n");
    console.log(entry.method, entry.url, "headers=" + Object.keys(entry.headers).length, "body=" + entry.bodyLen);
    res.writeHead(200, { "Content-Type": "application/json" });
    res.end(JSON.stringify({ status: "capture-only", echo: { method: entry.method, url: entry.url } }));
  });
});

server.listen(port, "127.0.0.1", () => console.log("capture a ouvir em http://127.0.0.1:" + port + " -> " + logFile));
