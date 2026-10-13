/* 18050b690  FUN_18050b690  body=59 */

void FUN_18050b690(uint param_1)

{
  code *pcVar1;
  
  if (((param_1 >> 0xb == 0) && (((param_1 & 0x100) == 0 || ((param_1 & 0xfffffcf4) == 0)))) &&
     (((param_1 & 0x400) == 0 || ((param_1 & 0x140) == 0)))) {
    return;
  }
  FUN_180521dd0(0xb);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

