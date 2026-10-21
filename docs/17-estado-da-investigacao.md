# 17 — Estado da investigação (consolidação 2026-10-21)

Este documento **consolida e verifica** o que já estava no workspace: separa o
que está provado do que é inferência, regista correções e identifica o trabalho
que ficou por consolidar. Serve de base para a próxima fase.

> **Escopo**: engenharia reversa estática/defensiva do pacote iRemoval PRO
> 5.2.1. Não contém reimplementação, nem lógica operacional de bypass.

---

## 1. TL;DR

1. O pacote é uma **casca WPF ofuscada** (`iRemoval PRO.exe`) + **motor
   NativeAOT x64** (`iremovalpro.dll`) + **toolkits libimobiledevice** em
   `ref/toolkits/`.
2. A fronteira casca↔motor são **3 exports**: `Action`, `SetCallbacks`,
   `SetWinInfo`. O `Action` é um switch de opcodes 1..10.
3. O motor **não implementa** o stack USB/lockdown: orquestra
   `libimobiledevice`/`ideviceproxy` e processos-filho.
4. O material **por-aparelho** vem do servidor (`s13.iremovalpro.com`,
   roteador `/iremovalActivation/*.php`); o material **device-side base**
   (tweak + executáveis iOS) está embutido em `.rdata`.
5. O binário tem um **gate local** que mata a aplicação aos ~12 s, antes de
   qualquer rede ou contacto com o dispositivo.
6. A camada anti-análise é agressiva: secções falsas, `.pdata` de decoy, IAT
   reduzida, ilhas de ruído, `__debugbreak`, e um **matador de processos de
   análise a cada ~2 s**.
7. A tese antiga de “13 MB encriptados + decryptor AES” foi **retratada**: não
   existe blob cifrado único; a S-box é do runtime .NET.
8. Há **trabalho decompilado não consolidado** (batch de 2026-10-19) que
   cobre precisamente o guard de ambiente e o fluxo de ligação ao dispositivo.

---

## 2. Inventário e reprodutibilidade

### 2.1 Artefactos

| Ficheiro | Bytes | SHA-256 |
|---|---:|---|
| `iRemoval PRO.exe` | 2 792 448 | `07452a1e12fe3a36519611b3932ae43cd2c64093981c047a788fa1939e424db7` |
| `iremovalpro.dll` | 34 363 904 | `d15effa6dfad0e49cde444cec49f41cb81405d5266558333aaf4674b90a76701` |
| `iremovalpro_engine.exe` (cópia de análise, `IMAGE_FILE_DLL` limpo) | 34 363 904 | `0bfc506483549ccac8b19e6dba99e68d5d57098f119ca56f8153d086e37d094f` |

O `engine.exe` é byte-a-byte igual ao DLL exceto os bits `IMAGE_FILE_DLL` em
`Characteristics`; não há alteração de código.

### 2.2 Documentação e dados

| Item | Estado |
|---|---|
| `docs/01`–`docs/17` | 17 documentos; `12`, `13`, `15`, `17` corrigem leituras anteriores |
| `decompiled/csharp/` | 187 ficheiros, ~254 mil linhas (casca ILSpy) |
| `decompiled/entry/`, `dispatcher-*/`, `exports/` | pseudocode Ghidra |
| `decompiled/gates/` | **não consolidado** — 36 funções (2026-10-19) |
| `dumps/` | strings, bplist, metadata, dump de memória (383 MB), ProcMon |
| `evidence/iremoval-evidence.json` | 45,36 MB, **4 registos**, só do EXE gerido |
| `tools/` | ~30 scripts de análise + Ghidra helpers |
| `ghidra-project/` | DB local, fora do git |

---

## 3. O que está provado

### 3.1 Arquitetura e fronteira

| Afirmação | Evidência | Confiança |
|---|---|---|
| Casca = .NET Framework 4.7.2/WPF, 313 tipos, 308 nomes hex | metadata CLI + ILSpy (`06`) | observado |
| Motor = .NET 8 NativeAOT, PE32+ x64, 11 secções, ImageBase `0x180000000` | headers PE (`08`) | observado |
| Exports = `Action` `0x180542810`, `SetCallbacks` `0x180542b30`, `SetWinInfo` `0x180542b60`, `DotNetRuntimeDebugHeader` | export table (`08`) | observado |
| EXE chama os 3 exports via P/Invoke (6 ImplMap ANSI/Unicode) | metadata (`03`) | observado |
| `Action` = switch 1..10 | pseudocode (`03`) | observado |
| Handlers 2/3 abrem URLs (`iremovalpro.com`, `t.me/iremoval`) | strings + pseudocode (`15`) | observado |
| 4/5/7/9 são stubs ou alocam `ProcessStartInfo` sem string própria | xrefs (`15` §7) | derivado |
| A faixa `RVA 0x1B0000–0x1C0000` é a BCL `System.Diagnostics.Process`, não um scheduler do produto | 6 strings SR + layout (`15`) | observado |
| `SetCallbacks` guarda tabela de UI em `_DAT_180806b40` | pseudocode (`03`) | observado |

### 3.2 Cadeia de execução reconstruída

```
iRemoval PRO.exe (WPF ofuscado)
  │ SetWinInfo / SetCallbacks / Action(opcode)
  ▼
iremovalpro.dll (NativeAOT)
  ├─ guard de ambiente: processos de análise, filtros USB, admin
  ├─ rede: backend de licença/ativação (HTTPS)
  ├─ Process.Start → cmd.exe / ideviceproxy / pnputil / iRa1n
  ├─ libimobiledevice → usbmuxd → lockdown/TLS
  │    ├─ mobileactivation
  │    ├─ AFC
  │    └─ mobilebackup2
  └─ device-side: tweak + identityd/payload (binários embutidos)
```

O motor é um **orquestrador**: o transporte é libimobiledevice; o trabalho
device-side é feito por binários Apple embutidos e material vindo do servidor.

### 3.3 Payloads embutidos (correção quantitativa)

`tools/find-macho.js` encontra **6 cabeçalhos Mach-O/FAT** em `.rdata`
(4 imagens Apple: 1 dylib FAT com 2 fatias + 3 executáveis):

| # | offset | tipo | arch | iOS mín | tamanho | leitura |
|---|---|---|---:|---:|---:|---|
| 1 | `0x8514bc` | FAT (nfat=2) | arm64 + arm64e | 14.4 | — | contentor |
| 1a | `0x8554bc` | DYLIB | arm64 | 14.4 | 89 952 B | `blackhound.dylib` |
| 1b | `0x86d4bc` | DYLIB | arm64e | 14.4 | 89 632 B | `blackhound.dylib` |
| 2 | `0x8832e1` | EXECUTE | arm64 | 12.0 | 142 032 B | DeviceManagement/SpringBoardServices/Catalyst |
| 3 | `0x8a5db6` | EXECUTE | arm64 | 13.1 | 158 672 B | EmbeddedDataReset (erase) |
| 4 | `0x8ec191` | EXECUTE | arm64 | 14.1 | 71 616 B | MobileActivation + entitlement `…spi=true` |

O `blackhound.dylib` carrega `CydiaSubstrate`, tem 12 símbolos `__logos` e
hooka `MobileActivationDaemon` (`validateActivationDataSignature…`,
`handleActivationInfo…`). Os executáveis 2–4 são candidatos a `identityd` e
helpers de erase; a atribuição exacta ainda não está fechada.

> **Correção**: `docs/10` §11 dizia “5 cabeçalhos”. O output actual do
> `find-macho.js` é **6** (FAT + 2 fatias + 3 executáveis). A contagem de
> *imagens* é 4; a de *cabeçalhos* é 6.

### 3.4 Rede e ativação

| Indicador | Valor |
|---|---|
| Hosts | `s13.iremovalpro.com`, `iremovalpro.com`, `iremovalpro.co` |
| Caminhos | `/iremovalActivation/{ars2,auth3,checkm8,iact9,mf5,mf6,mf7}.php`, `/pub.php`, `/version33.txt`, `/Payax0.php` |
| Header | `X-iRemovalPRO-Version` |
| Modelo | roteador por variante de exploit/plataforma, não endpoint único |

Os literais estão **completos em UTF-16** em `.rdata` e no dump. As leituras
fragmentadas (`.ph`, `.tx`) são artefacto de extractores ASCII-stepped — ver
§5.

### 3.5 Gate local

| Observação | Evidência |
|---|---|
| Diálogo “Error! Unable to check for updates.” aos ~10 s | UIA + ProcMon (`09`) |
| `exit(1)` aos ~12 s | ProcMon (`09`) |
| Zero TCP/UDP/DNS/ficheiros/registo antes da saída | ProcMon (`09`) |
| Com iPhone emparelhado, zero `usbmux`/`lockdown`/USB | ProcMon (`09`) |
| Gate é local e pré-rede/pré-dispositivo | conclusão de `09` |

O gatilho exacto (licença/HWID/data/blacklist) continua **não localizado
estaticamente**; só o comportamento é observado.

### 3.6 Anti-análise (mapa consolidado)

| Técnica | Evidência |
|---|---|
| Nomes de secção falsos (`RZ`, `.CFY`, `.CJz`, `hydrated`) | `13` §1 |
| `.pdata` de decoy (H≈7,94, sem xref) | `13` §1 |
| IAT reduzida: 15 funções, 1 por DLL, 30 slots | `13` §2 |
| Ilhas de ruído com estatística de bytes aleatórios | `13` §3 |
| Heap `hydrated` só em runtime | `05` §5 |
| `IsDebuggerPresent` + `__debugbreak()` | `13`/`03`/`04` |
| `CheckForInjectedModules`, `GetExtendedTcpTable`, `KillProc` | `01` §4.5 |
| **Matador de processos de análise a cada ~2 s** | **novo: batch 2026-10-19, §4.1** |
| **Verificação de filtros USB (`UPPERFILTERS`)** | **novo: batch 2026-10-19, §4.4** |

### 3.7 Runtime e memória

| Métrica | Valor |
|---|---:|
| Dump `ipro-01.dmp` | 383 234 505 B (~365 MiB) |
| Strings “interessantes” em runtime | 28 616 únicas |
| Strings estáticas | 2 773 |
| Novas em runtime | 26 275 |
| Objectos frozen NativeAOT (walk dirigido) | 5 711 |
| Entradas de excepção reais (`.CJz`) | 45 598 |

As 5 711 strings frozen e as 28 616 strings “interessantes” são inventários
diferentes (objectos NativeAOT vs extracção livre); não são contraditórios.

---

## 4. Trabalho não consolidado (batch 2026-10-19)

`decompiled/gates/` contém 36 funções descompiladas em 2026-10-19, ainda
**fora do git e sem documento**. A leitura preliminar mostra que não são
“gates de versão” isolados; são o **guard de ambiente + fluxo de ligação ao
dispositivo**:

### 4.1 Matador de processos (`FUN_180541900`)

Laço infinito que:

1. enumera processos (`Process.GetProcesses`);
2. compara nomes com uma tabela de strings;
3. se houver correspondência, mata a ferramenta com `Process.Kill`
   (`0x1801b57d0` → `0x1801af1a0` → `TerminateProcess(handle, -1)`);
   - **sniffers** (`WireShark`, `CharlesProxy`, `Fiddler`, `Fiddler
     Everywhere`) → mata também o **próprio** iRemoval com
     `GetCurrentProcess().Kill()` (`0x1801b4d10` → `0x1801b57d0`) — fail-fast;
   - restantes (`python`, `powershell`, `ghidra`, `3uTools`, …) → só mata a
     ferramenta e continua;
4. se não houver correspondência, dorme 2×1000 ms e repete.

Nomes encontrados na tabela (IOC defensivo): `WireShark`, `CharlesProxy`,
`Fiddler`, `Fiddler Everywhere`, `python`, `powershell`, `conemu`,
`mobaxterm`, `hyper`, `wsl`, `bash`, `cscript`, `git-bash`, `ghidra`, `HxD`,
`3uTools`, `ida`, entre outros. O objectivo é duplo: **anti-análise** e
**anti-concorrência** (3uTools).

### 4.2 Runner do `ideviceproxy` (`FUN_18053bf20`)

Monta `ProcessStartInfo` com `cmd.exe` e o comando
`/c ideviceproxy … com.iremovalpro.bypass --stream`; faz polling do output
com timeout e reconhece estados `Retry`, `Internet`, `Activated`, `Unknown`.
Mostra o aviso “Tap 'Allow' if a popup is displayed on the device…”.

### 4.3 Router de estado/mensagens (`FUN_18053d720`)

Cadeia de comparações (estado/nome do dispositivo) que selecciona a mensagem
de UI. As quatro strings de versão de `docs/10` §12 são **ramos desta função**,
não uma função de roteamento de versão isolada. Mensagens incluem:

- `Only iOS 15.0 to 16.6.1 supported for now..`
- `This iOS Version is not supported yet`
- `Your Device iOS version is NOT supported! … 17.0.1 … 18.5 … 26.0 …`
- `This device looks like not activation locked!`
- `Your device is already activated!`
- `Your device model is not supported! Only A12+`
- `Your device has been temporarily blocked in our system.`
- `Your device is supported for A12+ bypass!..`
- `Contact your provider to register your Serial Number and bypass it instantly!`

### 4.4 Helpers de estado do dispositivo

- `FUN_18053a260`: lê
  `HKLM\SYSTEM\CurrentControlSet\Control\Class\{36fc9e60-…}` e o valor
  `UPPERFILTERS`; compara com nomes de filtros USB (ex. `EUsbHubFilter`,
  `USBPcap`) → detecção de captura USB.
- `FUN_18053c680`: lança/consulta `com.apple.mobileactivationd` com timeout de
  300 s e compara o resultado com `activated`.
- `FUN_18053d560`: verifica um estado binário/identificador contra constantes
  (`0x180cb2ce0`…) e devolve 0/1.

### 4.5 Leitura

O batch descreve o **arranque hostil** do produto: limpar o ambiente
(processos/filtros), lançar o túnel, verificar `mobileactivationd`, escolher a
mensagem de estado. Isto complementa `docs/09` (gate) e `docs/14`
(anti-análise) e deve ser consolidado antes de avançar para o protocolo de
ativação.

---

## 5. Correções e retratações

| # | Leitura antiga | Leitura actual | Evidência |
|---|---|---|---|
| 1 | “Região encriptada de 13 MB” | não existe; H=7,49, código x86-64 + zeros + ilhas | `12` |
| 2 | “AES bespoke + S-box do produto” | S-box é do runtime .NET; 0 xref estático | `12` |
| 3 | “Nenhum payload embutido” | 4 imagens Apple / 6 cabeçalhos Mach-O em `.rdata` | `10` §11 + §3.3 |
| 4 | “5 cabeçalhos Apple” | **6** (FAT + 2 fatias + 3 executáveis) | `find-macho.js`, 2026-10-21 |
| 5 | “Dispatcher com 3 canais do motor” | BCL `System.Diagnostics.Process` | `15` |
| 6 | “Imports = lista de strings” | IAT real: 15 funções, 1 por DLL | `13` |
| 7 | “URLs montadas em runtime (fragmentos `.ph`)” | literais completos em `.rdata`/dump; fragmentos são artefacto de extracção | `07` §1 + `notes/02` §7 |
| 8 | “Função de roteamento de versão” | router de estado/mensagens; versões são ramos | §4.3 |
| 9 | `0x103` = `ERROR_MORE_DATA` | `STILL_ACTIVE` | `15` |
| 10 | Gate “100% em memória” | comportamento confirmado; gatilho estático ainda aberto | `09` + §6 |
| 11 | `after` = cauda de `WaitForExit` | `after` = **`Process.Kill`**: acesso `0x1001`, `TerminateProcess(handle, -1)`, `ERROR_ACCESS_DENIED` + `STILL_ACTIVE` | `05` §4, `15` §1.7, assembly |

As contradições mais relevantes são a #7 e a #11: `docs/06` §4 ainda afirma
que os fragmentos `.ph` provam montagem em runtime, e `docs/05`/`15` chamavam
`Kill` de `WaitForExit`. As leituras correctas são as de `docs/07` §1 e desta
consolidação.

---

## 6. Cobertura e qualidade

### 6.1 O que está forte

- Estrutura do pacote, exports, IAT, secções e camada de empacotamento.
- Fronteira casca↔motor e semântica dos opcodes 2/3.
- Payloads Apple embutidos (magias, arquitetura, mins, dentes de carga).
- Superfície de rede e IOCs.
- Gate local (comportamento) e anti-análise.
- Reprodutibilidade (hashes, scripts, dumps, bundles).

### 6.2 O que está fraco

- **Cobertura nativa**: 45 598 funções de excepção; o pseudocode revisto é uma
  fracção pequena e boa parte é BCL/runtime.
- **Lógica própria**: concentrada em `0x18053xxxx–0x18055xxxx`, mas ainda sem
  mapa de funções “produto vs BCL”.
- **Dinâmica**: uma execução de ~25 s, sem licença válida, sem fluxo de
  dispositivo, sem captura de servidor.
- **REA**: o bundle só tem 4 registos do EXE gerido; não há evidência nativa
  do motor no bundle (apesar de o Ghidra/REA serem usados).
- **Batch 2026-10-19**: descompilado, mas não documentado nem verificado
  cruzado.

### 6.3 Hierarquia de evidência

| Nível | Exemplos |
|---|---|
| Observado | headers, exports, IAT, strings, dump, ProcMon, `find-macho` |
| Derivado | semântica dos opcodes, fluxo de activação, papéis dos executáveis |
| Inferido | intenção do autor, correspondência exacta `identityd`, motivo do gate |

---

## 7. Lacunas abertas (priorizadas)

| # | Lacuna | Impacto | Como fechar |
|---|---|---|---|
| A | Gatilho exacto do gate local | alto | análise estática da cadeia de licença; sem a contornar |
| B | Opcodes 1/4/5/6/7/8/9/10 do `Action` | alto | REA `analyze_function` + pseudocode |
| C | Qual dos 3 executáveis é `identityd`; papéis exactos | alto | strings/símbolos/entitlements in-place |
| D | Cadeia de entrega dos Mach-O (paths, seleção, assinatura) | alto | xrefs às strings `/private/var/root/*` |
| E | Corpos de pedido/resposta do servidor | alto | captura em ambiente legal + dispositivo |
| F | `MissingValue` no lockdown do iPhone de teste | médio | confirmar iOS/Developer Mode; matriz de leitura |
| G | Nomes das MethodTables (`Process`, `ProcessStartInfo`, `Win32Exception`) | médio | metadata nativa via REA |
| H | Consolidação do batch 2026-10-19 | médio | `docs/18` + revisão |
| I | Fronteira exacta 15.0–16.6.1 vs 17.0.1+ | médio | cruzar strings com branches reais |
| J | Ordem temporal guard ↔ gate | baixo/médio | ProcMon com timestamps + decompilação |

---

## 8. Próximos passos recomendados

### P0 — fechar o que já existe

1. Consolidar o batch 2026-10-19 num `docs/18-guard-ambiente.md` com:
   - mapa das funções, xrefs e strings;
   - IOCs do matador de processos;
   - sequência `ideviceproxy` → `mobileactivationd` → mensagem.
2. **Feito 2026-10-21**: `docs/10` §11 (6 cabeçalhos), `docs/06` §4 (URLs
   completas), `docs/14` §2 (matador + filtros USB), `docs/05`/`15` (`Kill`).
3. **Feito 2026-10-21**: índice do `README.md` actualizado com `15`–`17`;
   falta indexar o futuro `docs/18`.

### P1 — evidência nativa REA

1. Abrir o `engine.exe` no REA (já feito nesta sessão) e analisar:
   `0x18053bf20`, `0x18053d720`, `0x180541900`, `0x180542810`.
2. Exportar um bundle REA nativo com essas observações (hoje o bundle só
   cobre o EXE gerido).
3. Resolver as MethodTables via metadata nativa (`inspect_native_data_type`).

### P2 — payloads device-side

1. Mapear `LC_MAIN`, entitlements e strings dos 3 executáveis **in-place**
   (sem extrair para ficheiro, mantendo a fronteira actual).
2. Cruzar com as strings `/private/var/root/identityd`, `-1/-2/-3`,
   `/payload` e `chmod +x` para identificar o `identityd`.
3. Confirmar o bundle `com.iremovalpro.bypass` e os hooks Logos.

### P3 — protocolo e validação

1. Melhorar o harness de captura (`tools/capture-server.js`) sem o operar
   contra servidores reais.
2. Matriz de lockdown (iOS, Developer Mode, re-pair) para explicar
   `MissingValue`.
3. Só com ambiente legal e dispositivo próprio: captura de tráfego para
   documentar formatos (sem reproduzir bypass).

---

## 9. Reprodutibilidade

```powershell
# hashes
Get-FileHash artifacts\original\iremovalpro.dll -Algorithm SHA256
Get-FileHash artifacts\original\'iRemoval PRO.exe' -Algorithm SHA256
Get-FileHash artifacts\patched\iremovalpro_engine.exe -Algorithm SHA256

# payloads Apple
node tools\find-macho.js artifacts\patched\iremovalpro_engine.exe

# strings frozen do dump
node tools\mdmp-read.js dumps\mem\ipro-01.dmp 0x1807b74e8 0x180792ac8 0x1807c07b8

# batch 2026-10-19
Get-ChildItem decompiled\gates\*.c
```

---

## 10. Limites

- Este documento descreve **o que o binário faz** e **como se defender** dele;
  não é um guia de operação.
- As atribuições “identityd”, “erase helper” e “intenção do autor” continuam
  **inferidas** até prova directa.
- A análise dinâmica de fluxos reais exige licença/dispositivo e enquadramento
  legal; sem isso, o protocolo de activação permanece observável apenas na
  superfície estática.
