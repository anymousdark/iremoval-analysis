const fs = require("fs");
let s = fs.readFileSync(process.argv[2], "utf8");
s = s.replace(/(^|[^:])\/\/.*$/gm, "$1");
s = s.replace(/,(\s*[}\]])/g, "$1"); // JSONC: vírgulas finais
const j = JSON.parse(s);
console.log("JSONC OK");
console.log("model      = " + j.model);
console.log("mcp        = " + Object.keys(j.mcp.servers).join(", "));
console.log("startup    = " + j.mcp.timeout.startup + "ms");
console.log("providers  = " + Object.keys(j.providers).join(", "));
console.log("modelos    = " + Object.keys(j.providers.codecraft.models).length + " em codecraft");
