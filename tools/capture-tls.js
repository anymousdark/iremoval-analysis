// Servidor TLS local de CAPTURA (porta 443) para observar o update-check.
// Uso: node tools\capture-tls.js <pfx> <senha> [corpo-version33]
// Responde version33.txt com o corpo dado (default igual ao servidor real)
// e resto neutro; regista TUDO em dumps/capture-log.jsonl.
// Requer redirecao DNS (hosts) — ver tools\hosts-redirect.ps1 / hosts-revert.ps1.
// Nullable, sem dependencias: https nativo do node.
const https = require("https");
const fs = require("fs");
const path = require("path");

const [,, pfxPath, pass, versionBody = "7.2"] = process.argv;
if (!pfxPath || !pass) {
  console.error("uso: node capture-tls.js <pfx> <senha> [corpo-version33]");
  process.exit(2);
}
const logFile = path.join(__dirname, "..", "dumps", "capture-log.jsonl");

const server = https.createServer(
  { pfx: fs.readFileSync(pfxPath), passphrase: pass },
  (req, res) => {
    const chunks = [];
    req.on("data", (c) => chunks.push(c));
    req.on("end", () => {
      const body = Buffer.concat(chunks);
      const url = req.url || "/";
      const entry = {
        ts: new Date().toISOString(),
        method: req.method,
        host: req.headers.host,
        url,
        headers: req.headers,
        bodyLen: body.length,
        body: body.slice(0, 4096).toString("utf8"),
      };
      fs.appendFileSync(logFile, JSON.stringify(entry) + "\n");
      console.log(entry.method, entry.host + url, "body=" + entry.bodyLen);
      if (url.includes("version33")) {
        res.writeHead(200, { "Content-Type": "text/plain" });
        res.end(versionBody);
        return;
      }
      res.writeHead(200, { "Content-Type": "application/json" });
      res.end(JSON.stringify({ status: "capture-only" }));
    });
  },
);

server.listen(443, "127.0.0.1", () => console.log("TLS capture em https://127.0.0.1:443"));
server.on("error", (e) => {
  console.error("ERRO: " + e.message);
  process.exit(1);
});
