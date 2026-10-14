# 09 — Gate de saída: diálogo aos ~10s, exit(1) aos ~12s

Prova por ProcMon (`scripts/procmon-trace.ps1`, PML 158 MB fora do git):

- Motor `iremovalpro.dll` carrega com sucesso (base `0x7ff98b990000`).
- **Zero I/O da app**: sem TCP/UDP, sem DNS (cache limpa → nada resolve),
  sem ficheiros, sem registo, sem `ACCESS DENIED`, sem crash (Event Viewer
  limpo, `procdump -e` sem dump de exceção não-tratada).
- Últimos atos: fechar chaves CTF (teardown GUI) → saída código 1.
- Diálogo observado via UIA: `"Error! Unable to check for updates."` + OK.

Leitura: gate **100% em memória** (família licença/HWID/data — ver struct
`_190F0B08` + enum `_7604AA8F` em `decompiled/csharp/`: `DateExpired`,
`MaxBuildExpired`, `BadHwid`, `Blacklisted`, `RunningTimeOver`).
Gatilho exato invisível estaticamente (fluxos atrás de códigos do
dispatcher). Sem dispositivo e sem licença válida, nenhum fluxo arranca.

Ferramentas: `scripts/procmon-trace.ps1` (elevado, 1 clique UAC) +
`scripts/dump-admin.ps1`. PML/CSV ficam em `dumps/procmon/` (fora do git).
