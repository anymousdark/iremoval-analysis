/* 1801bac00  FUN_1801bac00  body=205 */

undefined8 FUN_1801bac00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar4 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar5 = func_0x00018000c510(0x180839700);
  FUN_1801b86e0();
  uVar7 = 0;
  iVar3 = *(int *)(param_2 + 8);
  if (0 < iVar3) {
    do {
      lVar1 = param_2 + 0x10 + uVar7 * 0x28;
      uVar6 = *(uint *)(lVar1 + 0x24);
      if (uVar2 < uVar6) {
        uVar5 = func_0x000180302930();
        return uVar5;
      }
      iVar8 = uVar2 - uVar6;
      if ((*(uint *)(lVar1 + 0x1c) & 0x100) == 0) {
        if (iVar8 < 4) goto LAB_1801bad0a;
        lVar9 = (longlong)(int)*(longlong *)((ulonglong)uVar6 + lVar4);
      }
      else {
        if (iVar8 < 8) {
LAB_1801bad0a:
          uVar5 = func_0x000180302e10(0x28);
          return uVar5;
        }
        lVar9 = *(longlong *)((ulonglong)uVar6 + lVar4);
      }
      if (*(uint *)(lVar1 + 8) < 0xe) {
        UNRECOVERED_JUMPTABLE =
             (code *)((ulonglong)*(uint *)((ulonglong)*(uint *)(lVar1 + 8) * 4 + 0x180caaba0) +
                     0x1801bac0b);
                    /* WARNING: Could not emulate address calculation at 0x0001801bac9a */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(uVar7,iVar3,lVar9,UNRECOVERED_JUMPTABLE);
        return uVar5;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar3);
  }
  return uVar5;
}

