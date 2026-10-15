# tools/ — Scripts de análise

Todos os scripts usados neste workspace. **Node** (sem dependências externas),
**PowerShell** (Windows) e **Ghidra** (Java). Correr a partir da raiz do repo:

```powershell
$node = 'C:\Users\p\AppData\Local\Programs\nodejs\node.exe'
& $node tools\xref-sbox.js "artifacts\original\iremovalpro.dll" 0xa80814
```

## PE / estrutura

| Ficheiro | Uso |
|---|---|
| `pe-meta.js` | Metadata PE/CLI mínima: TypeRef + user strings (`#US`) |
| `pe-imp-exp.js` | Tabelas de imports/exports da PE |
| `va-read.js` | Lê bytes por VA (resolve secção → offset de ficheiro) |
| `checkcfg.js` | Valida/limpa JSONC (tira comentários e vírgulas finais) |

## Strings / conteúdo

| Ficheiro | Uso |
|---|---|
| `strings.js` | Strings ASCII/Unicode com comprimento mínimo |
| `strings-full.js` | Strings (passagem completa, saída maior) |
| `strings-at.js` | Strings que casam um padrão/regex |
| `entropy.js` | Entropia de Shannon por bloco — acha regiões encriptadas/comprimidas |

## Carving / código embutido

| Ficheiro | Uso |
|---|---|
| `carve.js` | Extrai uma região (offset+len) para ficheiro |
| `find-pe.js` | Procura cabeçalhos `MZ`/PE embutidos |
| `find-magic.js` | Procura magias de ficheiro (`bplist`, zip, PNG, …) |
| `find-const.js` | Constantes cripto (S-box AES, K do SHA-256, sigma ChaCha) |
| `try-inflate.js` | Tenta gunzip/inflate/`inflateRaw`/brotli sobre uma região |

## Xrefs / cripto

| Ficheiro | Uso |
|---|---|
| `xref-sbox.js` | Xrefs x64 a um alvo de dados (rip-relative `lea`/`mov` + imediato), todas as secções |
| `scan-ptr.js` | Procura ponteiros/RVAs para um VA na PE inteira + interpreta `.reloc` |
| `verify.js` | Sanidade do scanner: conta refs rip-relative `.text` → `.rdata` |
| `decrypt-lab.js` | Laboratório AES: chaves candidatas (top-entropia) × CBC/ECB/CTR × IVs, com score |

## Dispositivo / lockdown (só leitura)

| Ficheiro | Uso |
|---|---|
| `lockdown-read.ps1` | Leitor lockdown via P/Invoke (libimobiledevice open-source). Lê string+uint por chave/domínio |

## Rede / protocolo

| Ficheiro | Uso |
|---|---|
| `capture-server.js` | Servidor local de captura do protocolo de update/ativação (regista tudo em JSONL) |
| `capture-tls.js` | Servidor TLS local (porta 443) para o *update-check* |
| `hosts-redirect.ps1` | Redireciona hosts do produto para 127.0.0.1 (temporário, **elevado**) |
| `hosts-revert.ps1` | Reverte o redirecionamento de hosts (**elevado**) |

## Instrumentação (elevado, 1 clique UAC)

| Ficheiro | Uso |
|---|---|
| `procmon-trace.ps1` | Trace ProcMon da app (~25 s) → `dumps/procmon/` |
| `dump-admin.ps1` | Dump de memória elevado da app |
| `run-admin.ps1` | Corre a app elevada com o CWD correto + dump em quente |

## Ghidra

| Ficheiro | Uso |
|---|---|
| `ghidra/decompile.cmd` | Wrapper headless (Ghidra + JDK) |
| `ghidra/DumpDecomp.java` | Exporta descompilação de procedimentos |
| `ghidra/Exports.java` | Exporta símbolos/tabela de funções |

> **Nota de escopo:** ferramentas de análise/servidores de captura. Não contêm
> nem geram reimplementação do produto, ativações válidas ou bypass.
