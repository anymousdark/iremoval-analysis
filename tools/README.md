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
| `pe-dirs.js` | Headers PE32+: secções + os 16 data directories, com RVA→secção resolvido |
| `pe-imports.js` | Import table **real** (data dir #1): DLLs + funções — substitui `pe-imp-exp.js` |
| `pe-except.js` | Tabela de exceções real (dir #3) vs. secção *nomeada* `.pdata` (deteta nomes enganosos) |
| `pe-imp-exp.js` | (obsoleto) imports/exports — não lida com o layout de diretórios não-padrão |
| `va-read.js` | Lê bytes por VA (resolve secção → offset de ficheiro) |
| `checkcfg.js` | Valida/limpa JSONC (tira comentários e vírgulas finais) |
| `find-macho.js` | Localiza binários **Mach-O/FAT** embutidos num ficheiro (expande fatias FAT; mostra ID/LOAD_DYLIB/RPATH, BUILD minos e extents) — ex.: o kit iOS dentro do motor |

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
| `blob-stats.js` | Estatística de blob: entropia, blocos 16 B repetidos (detetor ECB), magias, histograma |
| `seg-scan.js` | Varre uma região em blocos finos: entropia + heurística de código x86 (separa código de ruído/cifra) |

## Xrefs / cripto

| Ficheiro | Uso |
|---|---|
| `xref-sbox.js` | Xrefs x64 a um alvo de dados (rip-relative `lea`/`mov` + imediato), todas as secções |
| `scan-code-refs.js` | Direção inversa: varre uma faixa de código e lista `mov imm64`/`lea rip`/`mov [rip]` (load/store) com alvo dentro de uma janela de VAs (descobrir tokens/globais de um handler) |
| `scan-ptr.js` | Procura ponteiros/RVAs para um VA na PE inteira + interpreta `.reloc` |
| `verify.js` | Sanidade do scanner: conta refs rip-relative `.text` → `.rdata` |
| `decrypt-lab.js` | Laboratório AES: chaves candidatas (top-entropia) × CBC/ECB/CTR × IVs, com score |

## Dumps / memória

| Ficheiro | Uso |
|---|---|
| `mdmp-read.js` | Lê VAs de imagem (ex. `0x18078f9a0`) de um minidump MDMP: resolve módulo→base carregada, Memory64→offset, e parseia objetos frozen NativeAOT (`[MT][len][utf16]` + deref de 1 nível); modo `--walk <loVA> <hiVA>` varre a faixa e lista todo objeto String (inventário frozen) |

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
