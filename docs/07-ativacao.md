# 07 — Protocolo de ativação: estrutura + harness de captura

Estado: estrutura estática reconstruída; formatos exatos de pedido/resposta
só aparecem em runtime (URLs e códigos vivem atrás do dispatcher; ver `06`).
Para observar o tráfego real existe o harness `tools/capture-server.js`.

---

## 1. Superfície confirmada (estático, UTF-16 completo em `.rdata`)

| Caminho | Papel inferido |
|---|---|
| `/iremovalActivation/ars2.php` | ativação (variante ars2) |
| `/iremovalActivation/auth3.php` | autenticação |
| `/iremovalActivation/checkm8.php` | variante checkm8 |
| `/iremovalActivation/iact9.php` | ativação |
| `/iremovalActivation/mf5.php`, `/mf6.php`, `/mf7.php` | variantes mf5/6/7 |
| `/pub.php` | publicação |
| `/version33.txt` | verificação de versão |
| `/Payax0.php` (em `iremovalpro.com`) | pagamento |

Host: `s13.iremovalpro.com` (ativação), `iremovalpro.com` (pagamento),
`iremovalpro.co` (principal). Header custom: **`X-iRemovalPRO-Version`**.

Modelo: **roteador por variante** — o sufixo do caminho seleciona
exploit/plataforma (checkm8 vs mf5/6/7 vs ars2/auth3/iact9), não há endpoint
único. Ver `notes/02-backend.md` §1 e `dumps/iocs.json`.

Nota de método: leituras fragmentadas (`ars2.ph`, `version33.tx`) que
aparecem em extratores ASCII-stepped são **artefato de extração** — no
binário as strings UTF-16 estão completas em `.rdata`. Não há ofuscação por
concatenação nestes literais.

## 2. O que falta (só em runtime)

- Verbos HTTP e formato dos corpos (POST form? JSON?). No C# da casca não
  há um literal de URL (tudo passa por códigos do dispatcher) e os corpos
  são montados em runtime.
- Respostas do servidor (material de sessão) — por definição, só no fio.

## 3. Harness: `tools/capture-server.js`

```powershell
node tools\capture-server.js [porta=8080]
```

Responde 200 JSON neutro a tudo e grava cada pedido em
`dumps/capture-log.jsonl` (método, URL, headers, corpo até 4 KB).
Para capturar o fluxo real: redirecionar o tráfego da app (ex. `hosts`) e
executar um fluxo com dispositivo. Sem dispositivo/ação do utilizador, a
app não emite pedidos de ativação — o harness fica à escuta.

Validado com sonda local (`POST /iremovalActivation/auth3.php` com
`X-iRemovalPRO-Version` → 200 + linha de log completa).
