# 08 — `iremovalpro.dll` por dentro: seções, entrada, imports/exports

Levantamento direto dos headers PE (sem Ghidra). Binário: PE32+ x64,
ImageBase `0x180000000`, **11 seções**, 34.363.904 bytes, .NET 8 NativeAOT.

---

## 1. Tabela de seções (nome, VA, tamanho virtual, tamanho/raw no ficheiro)

```
.text     va=0x1000     vsz=0xC8A98    rawsz=0xC8C00    raw=0x400
.managed  va=0xCA000    vsz=0x677FC8   rawsz=0x678000   raw=0xC9000
hydrated  va=0x742000   vsz=0x2B25F8   rawsz=0x0        raw=0x0        <- só runtime
.rdata    va=0x9F5000   vsz=0x5E6590   rawsz=0x5E6600   raw=0x741000
.data     va=0xFDC000   vsz=0x357F0    rawsz=0xB200     raw=0xD27600
.pdata    va=0x1012000  vsz=0x83118    rawsz=0x83200    raw=0xD32800
`RZ       va=0x1096000  vsz=0x974673   rawsz=0x974800   raw=0xDB5A00
.CFY      va=0x1A0B000  vsz=0x120      rawsz=0x200      raw=0x172A200
.CJz      va=0x1A0C000  vsz=0x9991E8   rawsz=0x999200   raw=0x172A400
.rsrc     va=0x23A6000  vsz=0x32C      rawsz=0x400      raw=0x20C3600
.reloc    va=0x23A7000  vsz=0x1E10     rawsz=0x2000     raw=0x20C3A00
```

Nomes não-convencionais (`.managed`, `hydrated`, `` `RZ ``, `.CFY`, `.CJz`)
= link/pack custom, não toolset NativeAOT padrão. `hydrated` não tem bytes
no ficheiro: heap frozen + relocações materializados pelo loader (ver `05`
§5). O aviso do Ghidra ("mais de 100 segmentos") refere fragmentação do
endereçamento em análise, não o ficheiro (que tem 11 seções).

## 2. Entry point

- RVA `0x1CEAA4B` → VA `0x181CEAA4B` (região `.CJz`, código compilado).
- Primeiros bytes: `F7 DA 0F C9 41 F6 DA 49 0F 4B D0 …`
  (`not edx; bswap ecx; …`) — stub de arranque do runtime NativeAOT,
  não lógica do produto.

## 3. Exports: exatamente 3 + marcador

| VA | Nome | Doc |
|---|---|---|
| `0x180542810` | `Action` | `03` §3 (dispatcher opcodes 1..10) |
| `0x180542b30` | `SetCallbacks` | `03` §1 (tabela UI) |
| `0x180542b60` | `SetWinInfo` | `03` §2 (blob dispositivo) |
| — | `DotNetRuntimeDebugHeader` | marcador NativeAOT, não é API |

Pseudocode em `decompiled/exports/`. É a fronteira inteira casca↔motor
(EXE→ImplMap ×6: 3 funções × ANSI/Unicode).

## 4. Imports: superfície do sistema

> **Corrigido em `docs/13` (2026-10-15):** a lista abaixo é de *strings*, não
> da IAT real. A import table efetiva (data directory #1, em `.CJz`) tem
> **1 função por DLL** (15 DLLs, 30 slots de IAT) — tabela reduzida/ofuscada.
> Ver `docs/13` §2.

Nativos (via descritores PE + strings): `kernel32`, `ntdll`, `user32`,
`ws2_32`, `winhttp`, `bcrypt`, `advapi32`, `shell32`, `sspicli`, `ole32`,
`psapi`, `FirewallAPI`, `Normaliz`, família `api-ms-win-crt-*`.
Destaques:

- **`FirewallAPI.dll`** — manipulação de regras de firewall (exceção para
  o túnel local). Cruza com o `ideviceproxy` de `02` §2.
- **`QRCoder.dll`** (ref. managed) — geração de QR (casa com
  `qrImage`/`SCAN TO PAY!` de `01` §2.4).
- `winhttp` + `ws2_32` — HTTP(S) e sockets nativos (canal de ativação).
- `GetModuleHandle` (kernel32), `NtQueryVirtualMemory` (ntdll, anti-análise),
  `dlsym`/`libdl.so.2` (nome Linux = caminho morto, ver `01` §2.3).
- Facade managed (`System.*`) + `System.Management` (WMI) — ver `01` §2.2.

## 5. Ferramentas

- `pe-imp-exp.js` (Temp): exports/imports via data directories
  (cuidado: este binário tem layout de diretórios não-padrão; a tabela
  acima foi validada por leitura direta, não pelo script).
  **Substituído por `tools/pe-imports.js` / `tools/pe-except.js` (ver `13`).**
- `va-read.js` (Temp): VA→offset **só para seções mapeadas**.
- `strings-at.js` (Temp): strings com offset + bytes vizinhos.
- `entropy.js` (Temp): entropia de Shannon por bloco (caça blobs encriptados).

## 6. Região de alta entropia (candidata a blob encriptado)

Varrimento em blocos de 256 KB (`entropy.js`): média 6,814 bits/byte, com
faixa contínua `0xD40000–0x1A00000` (~13 MB) a H≈7,95–8,0 — ou seja,
aleatório/encriptado/comprimido. Cai sobre o fim de `.pdata` e a seção
`` `RZ `` (nomes não-convencionais; `H=8,0` em `.pdata` é anómalo por si).
Hipótese: store de payload/config encriptado. Por confirmar com carving
dirigido (procurar headers conhecidos dentro da faixa).

> **Corrigido em `docs/12` (2026-10-15):** não é uma faixa contínua de 13 MB.
> Entropia global da faixa = **7,49**, com zeros e **código x86-64**; os blocos
> H≈8 são **mistos** (código AOT em `` `RZ ``/`.CJz` + trechos aleatórios
> pequenos em `.pdata`). "Encriptado" não se sustenta como estava descrito.
