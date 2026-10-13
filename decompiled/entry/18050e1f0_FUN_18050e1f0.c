/* 18050e1f0  FUN_18050e1f0  body=200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050e1f0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  longlong local_38;
  ulonglong uStack_30;
  
  lVar3 = _DAT_180fe0e18;
  local_38 = 0;
  uStack_30 = 0;
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < 3) {
    UNRECOVERED_JUMPTABLE =
         (code *)((ulonglong)*(uint *)((ulonglong)uVar1 * 4 + 0x180cb1de0) + 0x18050e213);
                    /* WARNING: Could not emulate address calculation at 0x00018050e22b */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return;
  }
  iVar5 = uVar1 * 2;
  if (uVar1 - 1 < uVar1) {
    if (*(short *)(lVar2 + (ulonglong)(uVar1 - 1) * 2) == -1) {
      iVar5 = iVar5 + -1;
    }
    uStack_30 = (ulonglong)uVar1;
    lVar4 = *(longlong *)(_DAT_180fe0e18 + 0x18);
    local_38 = lVar2;
    if (lVar4 == 0) {
      lVar4 = func_0x00018000c510(0x1808fb308);
      func_0x000180006a82(lVar4,*(undefined8 *)(lVar3 + 8));
      func_0x00018000c720(lVar3 + 0x18,lVar4);
    }
    func_0x0001806cf060(iVar5 + 3,&local_38,lVar4);
    return;
  }
  func_0x00018039d020();
  return;
}

