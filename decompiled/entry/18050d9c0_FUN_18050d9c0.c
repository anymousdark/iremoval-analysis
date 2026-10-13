/* 18050d9c0  FUN_18050d9c0  body=75 */

undefined8 FUN_18050d9c0(ushort param_1)

{
  uint uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = *(byte *)((ulonglong)(uint)param_1 + 0x180c88e10) & 0x1f;
  }
  else {
    uVar1 = func_0x0001803115a0();
  }
  if ((uVar1 - 8 < 0x11) && ((0x1fc7dU >> (uVar1 - 8 & 0x1f) & 1) != 0)) {
    return 0;
  }
  return 1;
}

