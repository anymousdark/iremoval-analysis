# 15 — Revisão BCL: o "dispatcher" é o `System.Diagnostics.Process`

Auditoria de cobertura do pseudocode (2026-10-16). Cruza
`decompiled/entry` (269 funções), `decompiled/dispatcher-all` (79),
`decompiled/exports` (3) com as strings extraídas de
`dumps/mem/ipro-01.dmp`.

> **O que muda.** A leitura de `04`/`05` descrevia a faixa
> `RVA 0x1B0000–0x1C0000` como um "gerenciador de sessões com três canais"
> **do motor**. A auditoria mostra que essa faixa contém os internos do
> **`System.Diagnostics.Process` / `ProcessStartInfo`** da BCL .NET 8
> (compilados no NativeAOT): o motor usa o `Process` para spawnar/monitorar
> processos-filho (toolkits) e abrir URLs. O *comportamento* descrito em `04`
> continua correto; mudam a **proveniência (BCL, não código próprio)** e
> vários nomes de campo. Correções pontuais em §4.

---

## 1. Evidências

### 1.1 As 6 strings de `configure` são o SR do `Process`

Extraídas do dump com `tools/mdmp-read.js` (tabela completa em `05` §6).
São exatamente as mensagens de `Process.EnsureState(State)`:
"No process is associated with this object.",
"Feature requires a process identifier.",
"Feature is not supported for remote machines.",
"Process has exited, so the requested information is not available.",
"Process must exit before requested information can be determined.",
"Process was not started by this object, so requested information cannot be determined."

Proveniência: `<System.Diagnostics.Process.dll` consta nas strings estáticas
(`dumps/dll-strings.txt` @ `0x007459af`); o dump traz ainda as mensagens de
deprecação da própria classe.

### 1.2 Objeto `0x180839620` ≈ `Process`

| Off | Leitura antiga (`04` §1 / `05` §1) | Leitura revisada |
|---|---|---|
| `+0x18` | "sessão/handle" | handle de processo (`SafeProcessHandle`) |
| `+0x20` | "nome" / "slot de callback" | `MachineName` — default `0x180760738` = string **`"."`** (máquina local; confirmada no dump) |
| `+0x28` | "handle resolvido" | handle aberto sob demanda |
| `+0xd0` | "handle numérico" | `_processId` (int) |
| `+0xe4` | "inicializado" | flag (id presente) — vira `1` quando o id é lido do handle |
| `+0xe5` | "sessão válida" | flag de estado do processo |
| `+0xe6` | "modo" | flag *remote machine* |

### 1.3 `configure` = `Process.EnsureState(State)`

Cada bit testa um estado e a falha lança a mensagem correspondente
(mapa em `05` §2): `0x20`/`0x1`/`0x2`/`0x8`/`0x10` ↔ "No process…",
"Feature requires a process identifier.", "…remote machines.",
"Process has exited…", "Process must exit…" / "…not started by this object.".

### 1.4 `submit` = `Process.Start(ProcessStartInfo)` (estático)

`submit(psi)`: aloca `Process` → ctor (`init`) → `_startInfo = psi` (`bind`,
`+0x40`) → executa → devolve `Process` ou `null`; `psi == NULL` → fail-fast
`swi(3)`.

### 1.5 `ProcessStartInfo` (`0x180839830`)

- `+8` = `FileName` (string frozen);
- `+0x83` = `UseShellExecute`;
- `execute` bifurca por `+0x83` → `PATH_A` (0) / `PATH_B` (1).

### 1.6 Opcode 2 do `Action` abre `https://iremovalpro.com`

`FUN_180542570`: `psi.FileName = "https://iremovalpro.com"` (VA `0x1807ca4f8`,
lida no dump); `psi.UseShellExecute = 1`; `submit(psi)`. A rota `PATH_B` é
**ShellExecuteEx**: descritor com `cbSize = 0x70` (`SHELLEXECUTEINFO`) e erros
`0x78`/`0xC1`/`0xD8` = `CALL_NOT_IMPLEMENTED`/`BAD_EXE_FORMAT`/
`EXE_MACHINE_TYPE_MISMATCH`.

### 1.7 `after` = cauda de `WaitForExit`

Espera infinita + leitura de exit-code com `0x103` = **`STILL_ACTIVE`** +
exceção montada com `GetLastWin32Error` (thread `+0xF8`) → cara de
`Win32Exception`.

### 1.8 Notificação ao shell

`FUN_1805427d0(bool)` → tabela de callbacks (`SetCallbacks`), opcode `6`,
string `"True"`/`"False"` (VAs `0x1807b9748`/`0x18077eac8` confirmadas no
dump).

---

## 2. Leitura revisada do motor

O `iremovalpro.dll` é um aplicativo nativo .NET 8 (NativeAOT) que:

1. expõe 3 funções à casca (`Action` / `SetCallbacks` / `SetWinInfo`);
2. orquestra o fluxo do produto (HTTP ao backend, dispositivos via toolkits);
3. usa a BCL (`Process`, `Thread`, interop Win32) para **spawnar e monitorar
   processos-filho** e **abrir URLs** via `ShellExecute`.

O que parecia um scheduler próprio na faixa analisada é *plumbing* do
`Process`. **Correção 2026-10-16**: esta frase dizia "nada de payload embutido
no binário" — errado à escala do ficheiro todo: o motor embute sim binários
Apple (`10` §11); o que aqui não existe é payload *do servidor*.

---

## 3. Auditoria de cobertura (situação)

| Conjunto | Qtd | Situação |
|---|---|---|
| `decompiled/entry` (0x180502d20+) | 269 | amostrado; handlers do `Action` (2–10) + runtime/BCL |
| `decompiled/dispatcher-all` (RVA 0x1B0xxx+) | 79 | revisado nesta nota (família `Process`) |
| `decompiled/exports` | 3 | documentado em `03` |

Boa parte da região `entry` é runtime/BCL (idem `dispatcher-all`); a lógica
própria do motor está concentrada nos handlers do `Action`, nos callbacks de
UI e nos pontos de interop.

---

## 4. Correções pontuais

| Onde | Antes | Depois |
|---|---|---|
| `03` §3 opcode 2 | "token de tipo/string" | `FileName = "https://iremovalpro.com"` |
| `04` §1 `+0x20` | nome/slot | `MachineName` (default `"."`) |
| `04` §1 `+0xe6` | modo | flag *remote machine* |
| `04` §5 códigos | `0x103` = `ERROR_MORE_DATA` | `0x103` = `STILL_ACTIVE` |
| `05` §1 | "dispatcher do motor" | família `Process` (BCL) |

---

## 5. Pendências

1. Nomes dos tipos via metadata nativa (REA): `0x180839620` (suspeita:
   `Process`), `0x180839830` (suspeita: `ProcessStartInfo`), `0x180839750`
   (tipo checado pelo `resolve`), `0x18085d748` (suspeita: `Win32Exception`),
   `0x180839678` (wrapper do descritor `PATH_B`).
   Comando:
   `rea inspect-native-data-type artifacts\patched\iremovalpro_engine.exe --address 0x180839620 --provider ghidra`
2. Tokens dos opcodes 3–9 do `Action`: **2 e 3 fechados** (URLs — §7);
   4/7 alocam `psi` sem string própria e 5/9 não referenciam nada — decompile
   pendente (`rea decompile <path> --procedure 0x1805425d0`).
3. Detalhe do `get_context` (qual caminho do `Process`).

---

## 6. Repro

```
node tools\mdmp-read.js dumps\mem\ipro-01.dmp 0x18078f9a0 0x18077eb58 0x18077eae8 0x180795b58 0x180795cd8 0x180795e78
node tools\mdmp-read.js dumps\mem\ipro-01.dmp 0x1807ca4f8 0x1807b9748 0x18077eac8
rea inspect-native-data-type artifacts\patched\iremovalpro_engine.exe --address 0x180839620 --provider ghidra --format json
```

---

## 7. Extras da auditoria (strings do motor, 2026-10-16)

- **Sites de spawn (`ProcessStartInfo`)**: 13 xrefs ao MT `0x180839830` —
  `0x1801b4483` (dispatcher; `get_obj` = lazy-init do `StartInfo`), handlers
  2/3/4/7 do `Action` (`0x180542574/a4/d9/99`) e 8 sites de produto em
  `0x18053a0c7`…`0x180557e4a` (maquinário em `10` §10).
- **Opcodes do `Action`**: 2 = abre `https://iremovalpro.com` (`0x1807ca4f8`);
  3 = abre `https://t.me/iremoval` (`0x1807caa28`); 4 e 7 alocam `psi` sem
  string própria; 5 e 9 **sem nenhuma referência rip/imediato** no binário →
  stubs puros (decompile pendente).
- **Inventário de strings frozen**: 5.711 objetos no dump
  (`tools/mdmp-read.js --walk 0x180740000 0x1809f5000`); endpoints do produto
  com VA em `notes/02` §8; operações de dispositivo em `10` §10.
- Escâneres: `tools/scan-code-refs.js` (o que este código toca) e
  `tools/xref-sbox.js` (quem toca um alvo *file-backed*; **não** cobre VAs da
  região hydrated — para essas, usar a janela exata do `scan-code-refs`).

---

*Gerado na auditoria de 2026-10-16. Evidência bruta: `dumps/mem/ipro-01.dmp`,
`decompiled/`.*
