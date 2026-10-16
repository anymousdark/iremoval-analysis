# 05 — Dispatcher: `get_context` / `configure` / `submit` / `after`

Fecha o passo pedido em `03-api-nativa.md` §6: o dispatcher real vive em
`RVA 0x1B0000–0x1C0000` (`artifacts/patched/dispatcher-region.bin`, 64 KB).
Pseudocode em `decompiled/dispatcher-all/` (`get_context`, `configure`,
`submit`, `after` nomeadas; resto `FUN_*`).

> **Revisão 2026-10-16 (ver `15`):** as funções nomeadas são internos do
> `System.Diagnostics.Process` (BCL): `configure` = `EnsureState`, `submit` =
> `Process.Start(ProcessStartInfo)`, `after` = cauda de `WaitForExit`.
> O objeto `0x180839620` ≈ `Process` (`+0x20` = `MachineName`). As 6 strings
> de exceção estão em §6.

> Ciclo de vida de uma operação: `get_context()` aloca o contexto →
> `configure(ctx, flags)` arma a state machine → `submit(job)` enfileira e
> despacha → `after(...)` espera e levanta exceção gerenciada em caso de falha.

---

## 1. Objeto partilhado: MethodTable `0x180839620`

`get_context` e `submit` alocam o **mesmo tipo**. Layout observado:

| Offset | Uso |
|---|---|
| `+0x18` | handle (lido por `configure` bit 0x1) |
| `+0x20` | slot de callback (default `0x180760738`, ver §4) |
| `+0x28` | handle da operação pendente (criado por `configure` bit 0x8) |
| `+0xd0` | id (thread/gate, via `func_0x0001801af850`) |
| `+0xe4` | flag "ativo" (`1` após `configure` bit 0x1) |
| `+0xe5`, `+0xe6` | flags de estado lidas pela state machine |

`get_context` (`0x1801b4d10`, 97 bytes): aloca, zera `+0x28`, põe o default
em `+0x20`, grava o id em `+0xd0`, marca `+0xe4 = 1`. É só um construtor.

Isto casa com `03` §3: os opcodes 8/10 chamam `*(state+0x20)` e
`*(state+0x28)` — os mesmos dois slots. As "duas vagas de operação pendente"
são os campos `+0x20/+0x28` deste objeto.

---

## 2. `configure` — state machine por flags (`0x1801b48b0`, 500 bytes)

`configure(ctx, flags)` testa bits e opera nos campos acima:

| Bit | Condição | Efeito |
|---|---|---|
| `0x20` | `+0xe4` e `+0xe5` zerados | levanta exceção (string `0x18078f9a0`) |
| `0x1` | `+0xe4` zero | recursão `configure(ctx, 0x20)`; lê id do handle `+0x18`; `+0xe4 = 1` (ativa) |
| `0x2` | `+0xe6` setado | levanta exceção (string `0x18077eae8`) |
| `0x8` | `+0x28` vazio | garante bits `5`; `+0x28 = FUN_1801b8a20(id, slot+0x20)` — cria o handle da operação a partir do (id, callback) |
| `0x10` | sempre | valida via `FUN_1801b43b0`; dois modos de falha com strings distintas (`0x180795cd8`, `0x180795e78`) |

Padrão de exceção gerenciada (repetido 6×): aloca tipo `0x18085a558` (ou
`0x18085ac08`), anexa a string (`func_0x0001802f9d10` /
`func_0x0001802fb850`) e lança (`func_0x00018000cfe0`). As strings moram na
seção `hydrated` como objetos managed "frozen" (não são texto C puro).

---

## 3. `submit` — enfileira, despacha ou morre (`0x1801b51f0`, 87 bytes)

Caminho normal: aloca o contexto, prepara (`…b4370`), enfileira o job
(`…b44d0`), despacha (`…b4fc0`, retorna bool), devolve o contexto ou `0`.

Caminho nulo: `func_0x0001802e15d0(0x1807d21d8)` e depois **`swi(3)` =
`__debugbreak()`** — fail-fast deliberado em `submit(NULL)`. O argumento
`0x1807d21d8` também é código (seção `hydrated`), i.e. um handler passado ao
fail-fast, não uma string. Segunda armadilha confirmada (a primeira está no
opcode 1, ver `03` §5).

---

## 4. `after` — espera INFINITA e exceção HResult (`0x1801b57d0`, 202 bytes)

```c
plVar6 = FUN_1801b6d70(param_1, 0x1001, 0);
iVar5 = (*(plVar6 + 0x30))(plVar6);          // poll
if (iVar5 == 0) {
    iVar5 = func_0x0001801af1a0(plVar6, 0xffffffff);   // espera INFINITA
    ...
    *(lVar2 + 0x48) = 0x80131500;                     // HResult
    func_0x00018000c720(lVar2 + 8, uVar4);            // inner
    *(lVar2 + 0x48) = 0x80131501;
    *(lVar2 + 0x48) = 0x80004005;                     // E_FAIL
    ...
    if (iVar5 == 5) { ... if (aiStack_28[0] != 0x103) goto fim; }  // 0x103 = STILL_ACTIVE
    func_0x00018000cfe0(lVar2);                       // throw
    swi(3); (*pcVar1)();                              // __debugbreak
}
(*pcRam...eec0)(plVar6);                              // cleanup via helper do runtime
```

- `0xffffffff` = espera sem timeout (padrão `WaitForSingleObject INFINITE`).
- HResults `.NET`: `0x80131500` (`COR_E_EXCEPTION`), `0x80131501`,
  `0x80004005` (`E_FAIL`) gravados em `+0x48` do objeto de exceção
  (tipo `0x18085d748`, inner em `+8`).
- `0x103` = 259 = `STILL_ACTIVE`: o ramo verifica o exit code de thread.
- Falhou tudo → `throw` + `__debugbreak()`. Terceira armadilha.

---

## 5. Seção `hydrated`: só existe em runtime (correção)

A tabela de seções deste binário mostra:

```
hydrated  va=0x742000  vsz=0x2B25F8  rawsz=0x0  raw=0x0
```

2,8 MB **sem bytes no ficheiro** — materializada pelo loader (heap frozen
do NativeAOT + relocações). Os literais `0x180760738` (default do slot
`+0x20`), `0x1807d21d8` (arg do fail-fast) e as 6 strings de exceção da
`configure` caem aqui (RVAs `0x76xxxx`–`0x7xxxxx` ∈ `hydrated`).

Consequência honesta: **só os VALORES dos ponteiros são conhecidos
estaticamente** (via pseudocode Ghidra); o conteúdo é runtime-only.
Leituras byte-a-byte anteriores destes endereços via mapeamento ingénuo
VA→ficheiro caíram em seções não relacionadas e ficam **retiradas**.

Em compensação, os endpoints (`https://s13…`, `Payax0.php`, …) estão
completos em UTF-16 na seção **`.rdata`** estática (ver `07` §1) — as
leituras fragmentadas (`ars2.ph`) eram artefacto de scanner ASCII-stepped,
não ofuscação. Ferramenta: `va-read.js` (Temp) continua válida para seções
mapeadas (`.text`, `.rdata`, …).

---

## 6. Quadro fechado

```
EXE --Action(opcode)--> motor ─┬─ opcodes 2..7/9: alloc job + submit()
                               ├─ opcode 1: get_context + configure + thread 4KB
                               ├─ opcodes 8/10: call slots +0x20/+0x28
                               └─ erros: exceção gerenciada (HResult) + swi(3)
get_context: alloc 0x180839620, default+0x20, id+0xd0, ativo+0xe4
configure:   bits 0x1/0x2/0x8/0x10/0x20 sobre +0x18/+0x20/+0x28/+0xd0/+0xe4/+0xe5/+0xe6
submit:      prepare → enqueue → dispatch → ctx|0  (NULL → fail-fast + swi(3))
after:       poll → wait INFINITE → HResult throw → swi(3) / cleanup runtime
```

**Fechado (2026-10-16)** — as 6 strings foram extraídas do dump
`dumps/mem/ipro-01.dmp` com `tools/mdmp-read.js` (VA de imagem → offset
MDMP; parser de string frozen NativeAOT `[MT][len][utf16]`):

| VA (imagem) | String extraída | MT da exceção |
|---|---|---|
| `0x18078f9a0` | `No process is associated with this object.` | `0x18085a558` |
| `0x18077eb58` | `Feature requires a process identifier.` | `0x18085a558` |
| `0x18077eae8` | `Feature is not supported for remote machines.` | `0x18085ac08` |
| `0x180795b58` | `Process has exited, so the requested information is not available.` | `0x18085a558` |
| `0x180795cd8` | `Process must exit before requested information can be determined.` | `0x18085a558` |
| `0x180795e78` | `Process was not started by this object, so requested information cannot be determined.` | `0x18085a558` |

Repro:
`node tools\mdmp-read.js dumps\mem\ipro-01.dmp 0x18078f9a0 0x18077eb58 0x18077eae8 0x180795b58 0x180795cd8 0x180795e78`

Proveniência: família SR do **`System.Diagnostics.Process`** (BCL .NET 8) —
`<System.Diagnostics.Process.dll` consta nas strings estáticas
(`dumps/dll-strings.txt` @ `0x7459af`) e o dump traz as mensagens de
deprecação da própria classe. Leitura de trabalho (a revisar na auditoria
de cobertura): a `configure` casa com o padrão `EnsureState` (bits por
estado, cada falha com o seu throw) sobre um objeto de **processo**
(`+0xd0` id, `+0xe4` ativo, `+0xe5` exited, `+0xe6` remote) — coerente com
o ciclo do `ideviceproxy` (subprocesso do motor).

Ainda em aberto (não crítico): MethodTable `0x180839620` por nome — em
curso via REA (`inspect_native_data_type`, metadata `dotnet-nativeaot`).
