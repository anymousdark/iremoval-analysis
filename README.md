# iRemoval PRO 5.2.1 — Ambiente de Análise

Workspace de engenharia reversa estática do pacote
`Documents\iRemoval PRO Premium Edition 5.2.1`.

> **Escopo**: análise e documentação do funcionamento do binário.
> Este workspace **não** contém e não produz reimplementação do produto,
> nem lógica de bypass de ativação/lista de bloqueio.

---

## Diretórios

| Pasta | Conteúdo |
|---|---|
| `artifacts/original/` | Binários originais como distribuídos (não modificar) |
| `artifacts/patched/` | Cópias de trabalho com patches de análise (ex.: limpeza de `IMAGE_FILE_DLL`) |
| `docs/` | Documentação técnica gerada — índice em §Documentação |
| `decompiled/` | Saídas de decompilação: C# da casca, exports/dispatcher nativos |
| `dumps/` | Saídas de extração: strings, metadata de tabela CLI |
| `evidence/` | Bundles exportados do REA (JSON determinístico) |
| `ghidra-project/` | Projeto Ghidra headless (local, fora do git — DB binário regenerável) |
| `notes/` | Observações de análise |
| `tools/` | Scripts reutilizáveis de análise (Node, PowerShell, Ghidra) — ver `tools/README.md` |

---

## Documentação

| # | Documento |
|---|---|
| 01 | `docs/01-arquitetura.md` — Arquitetura do pacote |
| 03 | `docs/03-api-nativa.md` — API nativa: `Action` / `SetCallbacks` / `SetWinInfo` |
| 04 | `docs/04-contexto-execucao.md` — Motor de execução: contexto, rotas e tratamento de erro |
| 05 | `docs/05-dispatcher.md` — Dispatcher: `get_context` / `configure` / `submit` / `after` |
| 06 | `docs/06-csharp-fonte.md` — Código-fonte C# recuperado (casca) + memória |
| 07 | `docs/07-ativacao.md` — Protocolo de ativação: estrutura + harness de captura |
| 08 | `docs/08-dll-internals.md` — `iremovalpro.dll` por dentro: seções, entrada, imports/exports |
| 09 | `docs/09-gate-saida.md` — Gate de saída: diálogo aos ~10s, `exit(1)` aos ~12s |
| 10 | `docs/10-payloads.md` — Payloads embutidos: levantamento completo |
| 11 | `docs/11-lockdown-fronteira.md` — Fronteira do lockdown (iPhone próprio, emparelhado) |
| 12 | `docs/12-correcao-entropia.md` — **Correção**: a "região encriptada de 13 MB" não existe |
| 13 | `docs/13-protecao-empacotador.md` — Camada de proteção (empacotador/ofuscador) e imports reais |
| 14 | `docs/14-relatorio-defensivo.md` — Relatório defensivo: proteções do binário e deteção (IOCs, YARA) |
| 15 | `docs/15-revisao-bcl-process.md` — Revisão: o "dispatcher" é o `System.Diagnostics.Process` |
| 16 | `docs/16-acervo-bruto.md` — Acervo bruto completo (Release) |
| 17 | `docs/17-estado-da-investigacao.md` — Consolidação: provas, correções, lacunas e próximos passos |

---

## Alvos

| Arquivo | Tipo | Papel |
|---|---|---|
| `iRemoval PRO.exe` | .NET Framework 4.7.2, WPF, PE32 x86, AnyCPU | Shell de UI, ofuscado |
| `iremovalpro.dll` | .NET 8 **NativeAOT**, PE32+ x64 | Motor real |
| `ref\toolkits\*` | Binários nativos de terceiros | `libimobiledevice` + OpenSSL |

`iRemoval PRO.exe` roda como x64 em Windows x64, portanto carrega o
`iremovalpro.dll` de 64 bits. O motor é o DLL; o EXE é casca.

---

## Ferramentas

- **REA** (`rea-agents` v6.3.0) via MCP no OpenCode — análise gerenciada e nativa.
- **Ghidra 12.1.4** `C:\tools\ghidra\ghidra_12.1.4_PUBLIC` — descompilação nativa.
- **JDK 21 (Temurin)** `C:\tools\jdk21\jdk-21.0.12.1+1` — runtime do Ghidra.

Wrapper de ambiente para o servidor MCP: `C:\tools\rea-env.cmd`
(injeta `GHIDRA_INSTALL_DIR`, `JAVA_HOME` e `REA_GHIDRA_STARTUP_TIMEOUT_MS`).

### Por que um `.exe` em `artifacts/patched/`?

O Ghidra do REA recusa imagens `IMAGE_FILE_DLL` (`target_role_unsupported`).
`iremovalpro_engine.exe` é uma cópia byte-a-byte com apenas os bits
`IMAGE_FILE_DLL` (0x2000) limpos em `Characteristics` — o resultado é
`0x0022` (application, 32-bit-machine flag), classificado como
**aplicativo nativo x86_64**. Nenhum código foi alterado.

O diretório CLI (data directory #14) já estava zerado — NativeAOT não usa
o header CLR convencional, expõe o export `DotNetRuntimeDebugHeader` —
então `managed = false` e o Ghidra aceita sem mais alterações.

---

## Regenerar os dumps

```powershell
$node = 'C:\Users\p\AppData\Local\Programs\nodejs\node.exe'
& $node tools\pe-meta.js  "artifacts\original\iremovalpro.dll"  > dumps\meta-out.txt
& $node tools\strings.js  "artifacts\original\iremovalpro.dll"  > dumps\dll-strings.txt
```

---

## Reprodutibilidade

| Item | Valor |
|---|---|
| `iRemoval PRO.exe` SHA-256 | `07452a1e…e424db7` (2 792 448 bytes) |
| `iremovalpro.dll` SHA-256 | ver `artifacts\original\` (34 363 904 bytes) |
| `iremovalpro_engine.exe` SHA-256 | `0bfc506483549ccac8b19e6dba99e68d5d57098f119ca56f8153d086e37d094f` |
| Bundle REA | 43,26 MB, 4 registros |
