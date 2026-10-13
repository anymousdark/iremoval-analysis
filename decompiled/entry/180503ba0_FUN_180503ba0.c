/* 180503ba0  FUN_180503ba0  body=105 */

void FUN_180503ba0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong local_10;
  longlong lStack_8;
  
  local_10 = 0;
  lStack_8 = 0;
  if (param_1 == 0) {
    FUN_180503a60(&local_10);
    return;
  }
  lVar1 = (longlong)*(int *)(param_1 + 8) * 2;
  if (((int)(uint)lVar1 == lVar1) && ((uint)lVar1 < 0x10000)) {
    local_10 = (ulonglong)CONCAT22((short)lVar1,(short)lVar1);
    lStack_8 = param_1 + 0xc;
    FUN_180503a60(&local_10);
    return;
  }
  func_0x00018039cff0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

