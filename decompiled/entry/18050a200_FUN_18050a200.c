/* 18050a200  FUN_18050a200  body=131 */

void FUN_18050a200(longlong param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_4 * 2 - 2;
    if (*(uint *)(param_3 + 8) <= uVar1) goto LAB_18050a27e;
    uVar2 = *(undefined4 *)(param_3 + 0x10 + (ulonglong)uVar1 * 4);
  }
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_4 * 2 - 1;
    if (*(uint *)(param_3 + 8) <= uVar1) {
LAB_18050a27e:
      func_0x00018039d020();
      return;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x10 + (ulonglong)uVar1 * 4);
  }
  func_0x00018000c720(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  func_0x00018000c720(param_1 + 0x18,param_3);
  *(int *)(param_1 + 0x30) = param_4;
  func_0x00018000c720(param_1 + 0x28,param_5);
  return;
}

