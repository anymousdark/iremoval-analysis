/* 180509f90  FUN_180509f90  body=107 */

void FUN_180509f90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)(*(int *)(param_1 + 0x18) - uVar2) < *(int *)(param_1 + 8)) {
    FUN_18050a050(param_1,uVar2);
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 <= *(uint *)(param_1 + 0x18)) {
    lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2;
    if (uVar2 <= *(uint *)(param_1 + 0x18) - uVar3) {
      func_0x0001802ce8c0(lVar1,uVar4,(ulonglong)uVar2 * 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
      return;
    }
    func_0x000180302960(lVar1);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  func_0x000180302930();
  return;
}

