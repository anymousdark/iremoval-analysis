/* 18050b6d0  FUN_18050b6d0  body=47 */

void FUN_18050b6d0(longlong param_1)

{
  code *pcVar1;
  
  if ((param_1 != -10000) && (0x1387ffffb1df < param_1 - 1U)) {
    FUN_180521dd0(9);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

