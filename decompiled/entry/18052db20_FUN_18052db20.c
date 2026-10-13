/* 18052db20  FUN_18052db20  body=65 */

undefined8 FUN_18052db20(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 < 0x100) {
    return 0;
  }
  if (0xffff < uVar1) {
    if (0xffffffff < uVar1) {
      return 3;
    }
    return 2;
  }
  return 1;
}

