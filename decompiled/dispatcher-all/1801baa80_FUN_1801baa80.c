/* 1801baa80  FUN_1801baa80  body=197 */

undefined8 FUN_1801baa80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = func_0x00018000c510(0x1808398d0);
  uVar6 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      lVar1 = param_2 + 0x10 + uVar6 * 0x28;
      if (uVar2 < *(uint *)(lVar1 + 0x24)) {
        uVar3 = func_0x000180302930();
        return uVar3;
      }
      iVar5 = uVar2 - *(uint *)(lVar1 + 0x24);
      if ((*(uint *)(lVar1 + 0x1c) & 0x100) == 0) {
        if (iVar5 < 4) goto LAB_1801bab66;
      }
      else if (iVar5 < 8) {
LAB_1801bab66:
        uVar3 = func_0x000180302e10(0x28);
        return uVar3;
      }
      uVar4 = *(int *)(lVar1 + 8) - 0xb;
      if (uVar4 < 9) {
        UNRECOVERED_JUMPTABLE =
             (code *)((ulonglong)*(uint *)((ulonglong)uVar4 * 4 + 0x180caab28) + 0x1801baa8f);
                    /* WARNING: Could not emulate address calculation at 0x0001801bab0b */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)((ulonglong)uVar4,UNRECOVERED_JUMPTABLE);
        return uVar3;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_2 + 8));
  }
  return uVar3;
}

