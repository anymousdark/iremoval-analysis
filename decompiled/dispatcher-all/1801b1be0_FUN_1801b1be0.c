/* 1801b1be0  FUN_1801b1be0  body=80 */

undefined8 FUN_1801b1be0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = func_0x0001802e15d0(0x1807d0ae0);
    return uVar1;
  }
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_1801b2530(*(undefined4 *)(param_1 + 0x30),param_2 + 0xc,*(int *)(param_2 + 8),0,0);
  return uVar1;
}

