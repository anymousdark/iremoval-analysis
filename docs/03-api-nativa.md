# 03 — API nativa: `Action` / `SetCallbacks` / `SetWinInfo`

Pseudocode Ghidra 12.1.4 da região `0x180500000–0x180560000`
(`artifacts/patched/entry-region.bin`, 393 KB, análise de 2,1 min).
Arquivos em `decompiled/exports/`.

> O EXE ofuscado chama exatamente essas três funções via P/Invoke
> (`iRemoval PRO.exe` → `ImplMap` ×6). Esta é a fronteira inteira entre a
> casca .NET e o motor nativo.

---

## 1. `SetCallbacks` — trivial

```c
void SetCallbacks(undefined8 param_1) {
  undefined1 auStack_18[16];
  func_0x00018000f220(&auStack_18);        // enter (frame de excecao/lock)
  _DAT_180806b40 = param_1;                // guarda o ponteiro da tabela
  func_0x00018000f380(&auStack_18);        // leave
}
```

Guarda um único ponteiro no global **`_DAT_180806b40`**.

Confirmação de que é a **tabela de callbacks de UI** vem de
`FUN_1805427d0`:

```c
void FUN_1805427d0(undefined8 param_1, char param_2) {
  uVar1 = param_2 ? 0x1807b9748 : 0x18077eac8;   // escolhe 1 de 2 strings
  func_0x0001800cf0c0(6, param_1, uVar1, _DAT_180806b40);   // opcode 6
}
```

Ou seja: notificações ao EXE são feitas **chamando a tabela com um opcode
numérico**. Aqui, opcode `6` + uma string. Espelha o lado gerenciado
(`SetContent`, `SetProgress`, `SetVisibility`, …).

Os epílogos `f220`/`f380` são os frames de exceção do NativeAOT
(`RhExceptionHandling`), presentes em **toda** função — não são lógica.

---

## 2. `SetWinInfo` — ingere um blob de bytes

```c
void SetWinInfo(undefined8 p1, undefined8 p2, undefined8 p3, undefined8 p4) {
  lVar2 = resolve(p1); if (!lVar2) lVar2 = 0x180759410;   // default vazio
  lVar3 = resolve(p2); if (!lVar3) lVar3 = 0x180759410;
  lVar4 = resolve(p3); if (!lVar4) lVar4 = 0x180759410;
  lVar5 = resolve(p4); if (!lVar5) lVar5 = 0x180759410;

  store_global(_DAT_180fe0ea8 + 0x18, lVar5);             // 4o param salvo

  uVar6 = build(lVar2, lVar3, lVar4);
  uVar7 = alloc_type(0x1808939e8);
  prep(uVar7);

  // chamada virtual no offset 0x98
  uVar6 = (**(code**)(**(longlong**)(_DAT_180fe0628 + 8) + 0x98))
              (obj(_DAT_180fe0628 + 8), uVar6);

  lVar2 = alloc_type(0x18085fba8);
  lVar3 = consume(uVar7, uVar6);
  *(int*)(lVar2 + 0x20) = 0x7fffffff;                      // int.MaxValue
  store(_DAT_180fe0ea8 + 0x10, build_list(lVar2));
  release(uVar7);
}
```

### Leitura

- 4 strings, cada uma com fallback para um literal vazio (`0x180759410`).
- O 4º parâmetro é persistido sozinho em `_DAT_180fe0ea8+0x18`; os 3
  primeiros são combinados.
- O laço final tem a assinatura inconfundível de um **array .NET**:

  ```c
  iVar1 = *(int*)(lVar3 + 8);            // count
  do {
    lVar4 = map(*(byte*)(lVar3 + 0x10 + i), 0x1807bf8e0, 0);  // elemento i (1 byte)
    if (lVar4) append(lVar2, lVar4 + 0xc);
  } while (++i < iVar1);
  ```

  `count` em `+8`, elementos a partir de `+0x10`, **1 byte cada** →
  `byte[]`/string UTF-8.
- `*(int*)(lVar2 + 0x20) = 0x7fffffff` é `int.MaxValue` — capacidade/
  limite de um buffer ou `CountdownEvent`.
- Resultado final gravado em `_DAT_180fe0ea8 + 0x10`.

**Conclusão**: `SetWinInfo` recebe a identidade do dispositivo/aplicativo da
casca .NET (serial, modelo, e o 4º campo isolado — provavelmente o
identificador de sessão/licença) e a materializa como objetos internos,
incluindo uma chamada virtual (`+0x98`) num objeto global.

---

## 3. `Action` — dispatcher por opcode

```c
void Action(int opcode) {
  enter_frame();
  if      (opcode == 1)  { …caminho pesado… }
  else if (opcode == 2)  FUN_180542570();
  else if (opcode == 3)  func_0x0001805425a0();
  else if (opcode == 4)  func_0x0001805425d0();
  else if (opcode == 5)  func_0x000180542610();
  else if (opcode == 6)  FUN_180542650();
  else if (opcode == 7)  func_0x000180542690();
  else if (opcode == 8)  call_slot(*(state + 0x20), 0);
  else if (opcode == 9)  func_0x0001805426d0();
  else if (opcode == 10) call_slot(*(state + 0x28), 0);
  leave_frame();
}
```

É um **`switch` sobre um inteiro 1..10** — o canal de comando que o EXE usa
para acionar operações.

### Opcode 1 — o pesado

```c
ctx = get_context();
configure(ctx, 3);
obj = *( *(ctx + 0xd0) + 0x18 );
s   = alloc_string(0x180893b38);
prep(s);
t   = alloc_threadctx();
stack = make_stack(3, 1, 1, 0x1000, 0, 0);   // 0x1000 = 4096 → TAMANHO DE PILHA
jump_thread(*(pcRam000000018080fd40), t);    // ponteiro global = helper do runtime
…
if (error) {
    msg = alloc_string(0x180858230);
    log(msg, 0x18077f450);
    report();
    swi(3);          // __debugbreak()  ← armadilha
    return;
}
state = alloc(0x18089a8c0);
begin(state);
store(state + 8, state);
```

- `0x1000` como 6º argumento de `make_stack` = **4096 bytes de pilha** →
  criação de thread.
- `pcRam000000018080fd40` é ponteiro global para um **helper do runtime
  NativeAOT** (criação/arranque de thread ou de `Task`).
- O caminho de erro termina em **`swi(3)` = `__debugbreak()`** —
  ponto de interrupção deliberado, artefato anti-análise típico
  (quebra desmontadores automáticos).

### Opcodes 2..7 e 9 — handlers curtos

Cada um monta um objeto de configuração e o submete. Exemplo real
(opcode 2):

```c
void FUN_180542570(void) {
  o = alloc_type(0x180839830);
  *(o + 8)    = 0x1807ca4f8;    // token de tipo/string
  *(o + 0x83) = 1;              // flag booleana
  submit(o);                    // func_0x0001801b51f0
}
```

Opcode 6 é diferente — prepara `0xffffffff` e despacha:

```c
void FUN_180542650(void) {
  init(&uStack_10);
  local_18 = CONCAT44(local_18._4_4_, 0xffffffff);
  dispatch(&local_18);          // func_0x0001807071a0
}
```

### Opcodes 8 e 10 — duas vagas de operação pendente

```c
opcode 8  →  call(*( *(state + 0x20) ), 0)
opcode 10 →  call(*( *(state + 0x28) ), 0)
```

Despacham através de **dois slots** (`+0x20` e `+0x28`) do objeto de estado
global — o padrão de **duas operações assíncronas em andamento**. No lado
gerenciado isso casa com os dois botões principais da UI (`Activate` /
`Erase`), cada um com o seu `async`.

---

## 4. Tabela-resumo da fronteira

| Export | Papel | Aparência |
|---|---|---|
| `SetCallbacks` | grava tabela de UI em `_DAT_180806b40` | 3 linhas |
| `SetWinInfo` | ingere 4 strings + `byte[]`, monta estado, 1 chamada virtual `+0x98` | ~40 linhas |
| `Action` | `switch(opcode 1..10)` → cria thread / submete job / despacha slot | ~70 linhas |
| `DotNetRuntimeDebugHeader` | marcador NativeAOT | não é API |

Estado global:
```
_DAT_180806b40       tabela de callbacks de UI (vinda do EXE)
_DAT_180fe0ea8+0x10  blob processado por SetWinInfo
_DAT_180fe0ea8+0x18  4o parametro de SetWinInfo
_DAT_180fe0628+8     objeto com vtable (slot 0x98 chamado)
pcRam...18080fd40    helper do runtime (thread/task)
```

---

## 5. Artefatos anti-análise encontrados aqui

- `swi(3)` / `__debugbreak()` no caminho de erro do opcode 1.
- `FUN_180542710` → `WARNING: Bad instruction - Truncating control flow`:
  bytes indecodificáveis interrompem a desmontagem (ilha de dados ou
  armadilha).
- `More than 100 address segments have been created` no carregamento —
  layout de seções incomum que fragmenta o endereçamento.

---

## 6. Próximo passo natural

Os handlers 2..7/9 são todos wrappers de ~50 bytes em torno de
`func_0x0001801b51f0` (submissão) e `func_0x0001801b4d10` (contexto).
O **dispatcher real** está em `0x1801b4xxx` — fora da região que analisei.

Para seguir, extrair e analisar a faixa `RVA 0x1B0000–0x1C0000`
(VA `0x1801B0000–0x1801C0000`) com o mesmo método:
```powershell
# 64 KB em volta de func_0x0001801b4d10 / func_0x0001801b51f0
decompile.cmd 0  # após novo extract
```
