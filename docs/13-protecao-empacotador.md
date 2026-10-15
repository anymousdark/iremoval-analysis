# 13 — Camada de proteção (empacotador/ofuscador) e imports reais

Sessão de 2026-10-15. Prova direta do que `08` §1 suspeitava ("link/pack
custom, não toolset NativeAOT padrão") e do que `notes/02` §5 chamava
"dicionário de preenchimento usado pelo ofuscador/empacotador".

Ferramentas: `tools/pe-dirs.js`, `tools/pe-imports.js`, `tools/pe-except.js`,
`tools/seg-scan.js`, `tools/blob-stats.js`.

---

## 1. Nomes de secção enganosos (provado pelos data directories)

A tabela de exceções **real** (data directory #3) **não** está na secção
chamada `.pdata`:

| Directory | RVA | Secção resolvida |
|---|---|---|
| #3 Exception | `0x231f880` size `0x85968` | **`.CJz`** (file `0x203dc80`) |
| #1 Import | `0x1c8c038` | **`.CJz`** |
| #12 IAT | `0x1a0b000` | **`.CFY`** |
| #9 TLS | `0xec7580` | `.rdata` |
| #0 Export / #2 Resource / #5 Reloc / #10 LoadConfig | — | `.rdata` / `.rsrc` / `.reloc` / `.CJz` |

- A tabela em `.CJz` é **válida**: 45 598 entradas de 12 B, **3000/3000**
  monotónicas com `begin=0xc450, 0xc560, 0xc6a0…`, funções de 38–511 B e
  `unwind` agrupado em `0xfd1bb8` (`.rdata`).
- A secção **chamada `.pdata`** (RVA `0x1012000`, `0x83118` B, file `0xd32800`)
  interpretada como `RUNTIME_FUNCTION` dá lixo:
  `begin=0x34f47296 end=0xaa1a1b1c`.
- Essa secção falsa é referenciada **apenas pelo próprio cabeçalho de secção**
  (file `0x25c`) — nenhum código a lê. É **preenchimento/decoy**, e a `08` §6
  mostra que é uniforme (H≈7,94).

→ **Conclusão:** os nomes de secção não são fiáveis; `.pdata` é um falso
`.pdata` de decoy, a exceção verdadeira foi para `.CJz`.

---

## 2. Import table reduzida — 1 função por DLL

O `IAT` (`.CFY`) tem exatamente `0xf0` = 240 B = **30 slots** = 15 funções +
15 terminadores. As 15 DLLs importam **uma única** função cada:

```
ADVAPI32!RegOpenKeyExW            bcrypt!BCryptDestroyHash
CRYPT32!CertFreeCertificateChainEngine   IPHLPAPI!GetNetworkParams
KERNEL32!IsDebuggerPresent        ncrypt!NCryptSetProperty
ole32!CoUninitialize              USER32!LoadStringW
WS2_32!WSARecv                    api-ms-win-crt-heap!free
api-ms-win-crt-math!nanf          api-ms-win-crt-string!strcmp
api-ms-win-crt-convert!strtoull   api-ms-win-crt-runtime!abort
api-ms-win-crt-stdio!__stdio_common_vfprintf
```

Observações:

- **Isto não é um import table NativeAOT normal** (um binário AOT importa
  centenas de funções). É uma **tabela reduzida/ofuscada**: uma âncora por
  DLL, com o resto resolvido em runtime.
- Todas as funções de cripto presentes são de **limpeza**
  (`BCryptDestroyHash`, `NCryptSetProperty`, `CertFreeCertificateChainEngine`)
  — nenhuma de init/encriptação. Ou seja, **a chave não é passada a uma API
  Windows num local estático**.
- Isto **substitui** a lista de nomes em `08` §4, que vinha de *strings*
  (`ntdll`, `winhttp`, `sspicli`, `FirewallAPI`, …) e não da IAT real.

Correção relacionada: `pe-imp-exp.js` (Temp) falhava neste layout; foi
substituído por `tools/pe-imports.js`.

---

## 3. Código vs. ruído (resolução fina, blocos de 4 KB)

`tools/seg-scan.js` separa código de dados uniformes pela estatística de bytes:

| Região | Média H | Blocos código | Blocos uniformes | Leitura |
|---|---|---|---|---|
| `` `RZ `` (`0xdb5a00`, 9,9 MB) | 7,03 | 2009/2420 | 206 | **código x86-64** (`rex≈0.07`) com ilhas |
| `.CJz` (`0x172a400`) | 6,99 | 2078/2457 | 375 | ilhas no início, depois tabelas |
| `.pdata` falso (`0xd32800`) | **7,94** | 0/131 | 131 | 100% ruído |

Os blocos "uniformes" têm exatamente a estatística de **bytes aleatórios**:
`P(0xe8/0xe9)=0.0078`, `P(0xc3)=0.0078`, `P(rex)=0.0156` — não é código.
Em `0xF80000` (`` `RZ ``) há instruções reais encadeadas
(`48 8b 5c 24 30` = `mov rbx,[rsp+0x30]`; `e8 …` = `call rel32`) com H≈8, ou
seja, **densidade de código explica H alta**; já os blocos uniformes isolados
são ruído/comprimido/cifra.

---

## 4. Veredito

O binário foi tratado por um **empacotador/ofuscador custom** (marcador de
build `notes/02` §4: *"Blackhound iRemovalPro Public build 0.7.1 @2022"*) que:

1. **renomeia seções** (`\`RZ`, `.CFY`, `.CJz`, `.managed`, `hydrated`) e
   **põe um `.pdata` falso** de decoy;
2. **insere blocos de ruído** (o "bloco de ruído" de `notes/02` §5 e as ilhas
   uniformes aqui);
3. **reduz/ofusca a import table** (1 função por DLL);
4. deixa o `entrypoint` (`0x1CEAA4B`) e a exceção real em `.CJz`, e o heap
   materializado em `hydrated` (sem bytes no ficheiro).

**Não há evidência de um payload cifrado único recuperável estaticamente.**
O material de sessão de ativação vem do **servidor** em runtime
(`notes/02` §6) e é aplicado no dispositivo por um tweak (Logos/CydiaSubstrate,
`notes/02` §3.2). Um "decryptor" sobre o ficheiro não tem alvo.

> Escopo: descreve **o que protege/ofusca** o binário. Não desmonta nem
> reproduz a lógica de bypass.
