/* 18050a000  FUN_18050a000  body=70 */

void FUN_18050a000(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  
  FUN_18050a050(param_1,1);
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 2) = param_2;
    *(uint *)(param_1 + 8) = uVar1 + 1;
  }
  else {
    FUN_18050a000(param_1,param_2);
  }
  return;
}

