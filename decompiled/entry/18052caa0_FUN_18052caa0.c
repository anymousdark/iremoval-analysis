/* 18052caa0  FUN_18052caa0  body=505 */

/* WARNING: Removing unreachable block (ram,0x00018052cc79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052caa0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 uVar9;
  int local_44;
  
  lVar2 = *param_2;
  (**(code **)(lVar2 + 0x120))(param_2,*(undefined8 *)(_DAT_180fe0e78 + 8),0,8);
  lVar6 = func_0x00018000c510(0x180900c60);
  func_0x00018000c720(lVar6 + 8,*(undefined8 *)(_DAT_180fe2548 + 8));
  iVar3 = FUN_18052c160(param_3);
  uVar9 = 4;
  if (iVar3 < 0x8000) {
    uVar9 = 2;
  }
  if (iVar3 < 0x100) {
    uVar9 = 1;
  }
  uVar4 = FUN_18052c320(param_1,param_2,uVar9,lVar6,param_3);
  uVar1 = *(undefined4 *)(lVar6 + 0x10);
  iVar5 = (**(code **)(lVar2 + 0x58))(param_2);
  iVar3 = 4;
  if (iVar5 < 0x8000) {
    iVar3 = 2;
  }
  if (iVar5 < 0x100) {
    iVar3 = 1;
  }
  local_44 = 0;
  if (0 < *(int *)(lVar6 + 0x10)) {
    do {
      uVar8 = iVar3 - 1;
      if (uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00018052cba7 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)*(uint *)(&DAT_180cb2b58 + (ulonglong)uVar8 * 4) + 0x18052cab9))
                  ((ulonglong)uVar8,0,
                   (code *)((ulonglong)*(uint *)(&DAT_180cb2b58 + (ulonglong)uVar8 * 4) +
                           0x18052cab9));
        return;
      }
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)(lVar6 + 0x10));
  }
  lVar6 = func_0x00018000c630(0x1809b90e0,0x20);
  *(char *)(lVar6 + 0x16) = (char)iVar3;
  *(undefined1 *)(lVar6 + 0x17) = uVar9;
  uVar7 = (**(code **)(**(longlong **)(_DAT_180fe0e90 + 8) + 0x38))
                    (*(longlong **)(_DAT_180fe0e90 + 8),uVar1);
  func_0x0001802dc150(uVar7,lVar6,0xc);
  uVar7 = (**(code **)(**(longlong **)(_DAT_180fe0e90 + 8) + 0x38))
                    (*(longlong **)(_DAT_180fe0e90 + 8),uVar4);
  func_0x0001802dc150(uVar7,lVar6,0x14);
  uVar7 = (**(code **)(**(longlong **)(_DAT_180fe0e90 + 8) + 0x38))
                    (*(longlong **)(_DAT_180fe0e90 + 8),iVar5);
  func_0x0001802dc150(uVar7,lVar6,0x1c);
                    /* WARNING: Could not recover jumptable at 0x00018052cd4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x120))(param_2,lVar6,0,0x20);
  return;
}

