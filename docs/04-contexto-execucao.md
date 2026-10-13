# 04 — Motor de execução: contexto, rotas e tratamento de erro

Pseudocode Ghidra da faixa `RVA 0x1B0000–0x1C0000`
(`artifacts/patched/dispatcher-region.bin`, 64 KB, análise de 1,55 min).
Saídas em `decompiled/dispatcher*/`.

> Continuação direta de `03-api-nativa.md`. Aqui está **o que** `Action`
> despacha quando o opcode é executado.

---

## 1. Objeto de contexto — layout reconstruído

Tipo `0x180839620`, alocado por `get_context` / `submit` / `maybe_mid`.
Todos os offsets abaixo foram confirmados em pelo menos um inicializador.

| Off | Tam | Campo | Origem |
|---|---|---|---|
| `+0x00` | 8 | type handle / vtable | alocador |
| `+0x18` | 8 | sessão/handle | `bind`, `validate`, `PATH_A/B` |
| `+0x20` | 8 | nome (default `0x180760738`) | `init`, `get_context`, `maybe_mid` |
| `+0x28` | 8 | handle resolvido | `configure &8`, `maybe_after` |
| `+0x30` | 8 | lista interna | `get_list`, `check_conflict` |
| `+0x38` | 8 | parâmetro | `PATH_A/B`, `maybe_after` |
| `+0x40` | 8 | objeto operação | `get_obj`, `bind`, `execute` |
| `+0x48` | 8 | canal 3 | `execute`, `validate`, `PATH_A` |
| `+0x50` | 8 | canal 2 | `execute`, `validate`, `PATH_A` |
| `+0x60` | 8 | canal A | `validate`, `PATH_A/B` |
| `+0x68` | 8 | canal B | `validate`, `PATH_A/B` |
| `+0x70` | 8 | canal C | `validate`, `PATH_A/B` |
| `+0x78` | 4 | parâmetro numérico | `PATH_A/B` |
| `+0x7c` | 1 | flag | `PATH_A` → `0x8000000` |
| **`+0x7d`** | 1 | **pronto: canal +0x40** | `execute`, `PATH_A/B` |
| **`+0x7e`** | 1 | **pronto: canal +0x50** | idem |
| **`+0x7f`** | 1 | **pronto: canal +0x48** | idem |
| `+0x80` | 1 | variante | `PATH_B` → `0x14000000070` vs `0x54000000070` |
| `+0x81`/`+0x82` | 1 | modo (0/1/2) | `PATH_A` |
| **`+0x83`** | 1 | **seletor de rota** | opcode 2 seta `=1`; `execute` bifurca |
| `+0x88`,`+0x90` | 8 | objetos auxiliares | `validate` |
| `+0xa0`,`+0xa8` | 8 | contadores | `maybe_after` |
| **`+0xd0`** | 4 | **handle numérico** | `get_context` ← `func_…2d1810()` |
| `+0xd8` | 4 | último Win32 error | `FUN_1801b6d70` |
| `+0xdc`,`+0xe0` | 4 | estado de canal | `validate` (0 / 2) |
| `+0xe4` | 1 | inicializado | `get_context` = 1 |
| `+0xe5` | 1 | sessão válida | `execute`/`bind`/`PATH_A/B` |
| `+0xe6` | 1 | modo | `maybe_mid` |
| `+0xe7,e8,e9,ea` | 1 | estado | `PATH_A/B` (`+0xea` → `FUN_1801b58d0`) |
| `+0xec` | 1 | "connectado" | `FUN_1801b43b0`, `maybe_after` |
| `+0xed,ef,f0,f1,f2,f5,f6,f7` | 1 | estado | `validate`/`maybe_after`/`execute` |

---

## 2. Ciclo de vida

```
get_context()      cria objeto, +0xd0 = handle, +0xe4 = 1
   │
   ├─ configure(ctx, flags)      inicialização preguiçosa por máscara de bits
   │
   ├─ bind(ctx, op)              liga objeto de operação em +0x40
   │
   └─ execute(ctx)               valida → bifurca por +0x83
          ├─ obj+0x83 == 0 → PATH_A (FUN_1801b5c40)
          └─ obj+0x83 == 1 → PATH_B (FUN_1801b7320)
                                 │
                                 ▼
                          ctx+0xe5 = 1   (sessão estabelecida)
                          ctx+0xd0 = id devolvido
```

`validate(ctx)` (**antes** de cada `execute`) é o **reset**: fecha todos os
canais, limpa `+0xe4/+0xe5/+0xe6`, restaura o nome default, e dependendo de
`+0xdc`/`+0xe0` (0 ou 2) faz flush ou descarte dos canais `+0x60`/`+0x70`.

---

## 3. `configure(ctx, flags)` — máquina por máscara de bits

| Bit | Condição | Ação | Mensagem |
|---|---|---|---|
| `0x20` | `+0xe4==0 && +0xe5==0` | erro | `0x18078f9a0` |
| `0x01` | `+0xe4==0` | se `+0xe5==0` → recursão com `0x20` + erro; senão `+0xd0 = f(+0x18)`, `+0xe4=1` | `0x18077eb58` |
| `0x02` | `+0xe6 != 0` | erro | `0x18077eae8` |
| `0x08` | `+0x28 == 0` | recursão `5`; `+0x28 = FUN_1801b8a20(+0xd0,+0x20)`; erro se null | `0x180795b58` |
| `0x10` | — | `FUN_1801b43b0(ctx)`; erro se 0 ou `+0xe5==0` | `0x180795cd8` / `0x180795e78` |

`Action` opcode 1 chama `configure(ctx, 3)` = `0x01|0x02`.

A recursão (`&1` → `&0x20`, `&8` → `&5`) é **ordenação de dependências**:
cada bit exige os anteriores resolvidos.

---

## 4. Resolução por handle numérico

`FUN_1801b8a20(id, param)` — procura um objeto por `id`:

```c
if (!enumerable(param)) {
    arr = FUN_1801bb800(id | (1<<32), 0);     // lookup direto
    if (arr.count == 1) return arr[0x10];
} else {
    list = FUN_1801ba140(param, 1);
    for (i = 0; i < list.count; i++)
        if (*(int*)(list[i] + 100) == id)     // +100 = 0x64
            return list[i];
}
return 0;
```

Ou seja: existe uma **tabela de handles** onde o `id` (4 bytes) casa com o
campo em **offset 100 (0x64)** dos objetos. Duas estratégias: lookup direto
por hash e varredura linear.

---

## 5. `open_handle(id, flags, flag)` — carregamento de módulo

```c
h = func_0x1801af290(flags, 0, id);
err = GetLastError();                    // *(func_0x180004bd4() + 0xf8)
if (vtable[6](h) == 0) return h;         // +0x30 == 0 → sucesso
vtable[7](h, 1);                          // +0x38 → release
if (id == 0) throw ERROR_ACCESS_DENIED;  // via func_…32b830(…, 5)
if (err != 5 /*ACCESS_DENIED*/) {
    if (!validate_name(id, 0x180760738)) {
        if (!flag) return singleton(_DAT_180fdfdc8 + 8);
        throw formatted(0x1807720e0, idToString(id));
    }
}
throw Win32Exception(err);
```

Os códigos de erro tratados ao redor são **erros de carregamento Win32**:

| Valor | Constante Win32 |
|---|---|
| `5` | `ERROR_ACCESS_DENIED` |
| `0x78` (120) | `ERROR_CALL_NOT_IMPLEMENTED` |
| `0xc1` (193) | `ERROR_BAD_EXE_FORMAT` |
| `0xd8` (216) | `ERROR_EXE_MACHINE_TYPE_MISMATCH` |
| `0x103` (259) | `ERROR_MORE_DATA` (tolerado) |

`ERROR_BAD_EXE_FORMAT` + `ERROR_EXE_MACHINE_TYPE_MISMATCH` +
`ERROR_ACCESS_DENIED` é a assinatura de **`LoadLibrary`/`GetModuleHandle`
falhando** — binário corrompido ou arquitetura errada.

---

## 6. `PATH_A` (`obj+0x83 == 0`) — três canais com thread cada

Estrutura central:

```c
for (canal in { (+0x40,+0x7d,+0x48), (+0x50,+0x7e), (+0x48,+0x7f) }) {
    if (!ready_flag)  err = makeError(-10 | -11 | -12);
    else              err = resolveChannel(...);

    build stack(local_X, mode, 0x1000, 0);     // 4096 bytes de pilha
    wrap  = alloc(0x180863110);
    *(wrap+0x18) = handleObj;
    *(wrap+0x28) = 0x1000;                     // TAMANHO DE PILHA
    task  = func_0x180369580(threadObj, wrap);
    obj   = alloc();
    func_0x180361880(obj, threadObj, wrap, mode, 0x1000, 0);
    store(ctx + 0x60/0x68/0x70, obj);          // um task por canal
}
```

**Cada canal gera a sua própria thread de 4 KB** e o task resultante fica
guardado em `ctx+0x60`, `+0x68` ou `+0x70` — os mesmos campos que
`validate()` fecha. É por isso que os erros `-10/-11/-12` (canais não
prontos) são tratados **antes** de criar threads.

Validações em `PATH_A`:
- `+0x68 && +0x60` → erro `0x180796138` (dois canais já ativos)
- `+0x81 && +0x82` → erro `0x180796020` (dois modos mutuamente exclusivos)
- modo final: `0` se `!+0x81`; `2` se `!+0x81 && +0x82`; `1` se `+0x81`

Sucesso final:
```c
store(ctx + 0x18, session);
ctx + 0xe5 = 1;                 // sessão estabelecida
if (ctx + 0xea) FUN_1801b58d0(ctx);
ctx + 0xd0 = id_devolvido;      // handle recebido do outro lado
ctx + 0xe4 = 1;
```

---

## 7. `PATH_B` (`obj+0x83 == 1`) — sessão única, sem thread

Muito mais linear e com muitas mais validações negativas:

```
se  obj+0x20 (nome) vazio  OU  obj+0x68 != 0   → erro 0x1807a5d58
se  obj+0x7d | +0x7e | +0x7f                    → erro 0x1807a5c70
se  obj+0x40 != 0                               → erro 0x18079f768
se  obj+0x48 != 0                               → erro 0x18079f6b8
se  obj+0x50 != 0                               → erro 0x18079f8c0
se  obj+0x38 != 0                               → erro 0x1807a5e48
```

Ou seja: **`PATH_B` exige um estado limpo** — nenhum canal, nenhum objeto
operacional. É o caminho de **início de sessão do zero**.

Monta um descritor:
```c
desc = obj+0x80 ? {0x14000000070, obj+0x70} : {0x54000000070, 0};
desc.extra = FUN_1801b7790(obj+0x78);
req = alloc(0x180839678);
*(req + 8) = &desc;
rc  = FUN_1801b85d0(req);
```

Códigos de retorno tratados:
```c
if (rc == 0x78 /*ERROR_CALL_NOT_IMPLEMENTED*/) throw 0x1807bd4d8;
if (rc == 0xc1 || rc == 0xd8)  msg = 0x1807b2000;      // formato/arquitetura
else                            msg = win32ToString(rc);
throw build(msg, rc, ctx);
```

Sucesso:
```c
session = alloc();
*(session+8) = raw_handle;
*(session+0x10) = 4;  *(session+0x14) = 1;  *(session+0x15) = 1;
store(ctx + 0x18, session);
ctx + 0xe5 = 1;
return 1;
```

---

## 8. Tratamento de erros: duas pilhas sobrepostas

### 8.1 HRESULTs .NET (em `after`)
```c
*(ex + 0x48) = 0x80131500;   // COR_E_EXCEPTION
*(ex + 0x48) = 0x80131501;   // COR_E_SYSTEM
*(ex + 0x48) = 0x80004005;   // E_FAIL
```

### 8.2 Win32 (extraído de um slot TLS)
```c
tls  = func_0x180004bd4();          // base do bloco TLS
err  = *(int*)(tls + 0xf8);         // "LastError"
```
Tolerância explícita: **`0x103` (ERROR_MORE_DATA) nunca é erro** — aparece
em `after`, em `FUN_1801b6d70` e em `open_handle`. É o padrão de quem consome
uma API de buffer variável.

### 8.3 Armadilhas
`swi(3)` (`__debugbreak()`) nos invariantes violados — 8 ocorrências nesta
faixa de 64 KB sozinha:
- `submit` com arg nulo
- `resolve` com type handle diferente de `0x180839750`
- `maybe_init` com `*(obj+0x30)+0x24` setado (`func_…303190(0x46)`)
- `after` em falha não-permitida
- `execute` com `ctx+0xf1` setado
- `validate` com `*(obj+0x30)+0x24` em canal 2

---

## 9. Mapa de mensagens de erro (adresses → papel)

| Addr | Onde |
|---|---|
| `0x18078f9a0` | configure: sem init |
| `0x18077eb58` | configure: bit 1 sem init |
| `0x18077eae8` | configure: bit 2, estado inválido |
| `0x180795b58` | configure: handle nulo |
| `0x180795cd8` / `0x180795e78` | configure &0x10 / get_obj |
| `0x180772bb8` | execute: nome vazio |
| `0x18079f768` / `0x18079f8c0` / `0x18079f6b8` | canal ligado sem flag de pronto |
| `0x180792c50` | execute: conflito |
| `0x1807cbc10` + `0x18076c890` | execute: elemento nulo |
| `0x180795bf8` | bind: estado errado |
| `0x180796138` | PATH_A: dois canais ativos |
| `0x180796020` | PATH_A: modos conflitantes |
| `0x1807a5d58` / `0x1807a5c70` / `0x1807a5e48` | PATH_B: pré-condições |
| `0x1807bd4d8` | PATH_B: rc 0x78 |
| `0x1807b2000` | rc 0xc1/0xd8 (formato/arquitetura) |
| `0x1807720e0` | template "id não encontrado" |
| `0x180772170` | FUN_1801b6d70: sem init |

---

## 10. Síntese

O motor é um **gerenciador de sessões com três canais paralelos**:

1. `Action(opcode)` → cria contexto e submete um objeto de operação.
2. `execute` valida invariantes e bifurca por `obj+0x83`.
3. `PATH_A` (modo 0) sobe **três canais em threads separadas de 4 KB**
   (`ctx+0x60/+0x68/+0x70`); `PATH_B` (modo 1) faz **uma sessão única
   síncrona** a partir do zero.
4. Sucesso marca `ctx+0xe5 = 1` e devolve um handle numérico em `ctx+0xd0`,
   que é reutilizado por `FUN_1801b8a20` na tabela de handles (campo `+0x64`).
5. Toda falha vira exceção .NET com mensagem endereçada em `.managed` e
   HRESULT/Win32 code; violações de invariante viram `__debugbreak()`.

### Limites desta análise
- Os corpos de trabalho real (`FUN_1801b0d60`, `FUN_1801b85d0`,
  `FUN_1801bb800`, `FUN_1801ba140`) estão em outras faixas.
- O significado dos três canais (quais serviços iOS cada um representa)
  precisa ser correlacionado com a tabela de nomes NativeAOT
  (`Driver.*`, `iDevice_*`, `mobileactivation`, `AFC`, `mobilebackup2`).
