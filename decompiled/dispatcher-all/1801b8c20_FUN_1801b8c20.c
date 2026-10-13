/* 1801b8c20  FUN_1801b8c20  body=208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801b8c20(longlong param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong local_30;
  undefined8 local_28;
  short *psStack_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = 0;
  psStack_20 = (short *)0x0;
  local_18 = 0;
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  iVar2 = func_0x0001802d4460();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  if (uVar3 <= *(uint *)(param_1 + 8)) {
    psVar1 = (short *)(param_1 + 0xc + (ulonglong)uVar3 * 2);
    iVar2 = *(uint *)(param_1 + 8) - uVar3;
    if ((iVar2 == 1) && (*psVar1 == 0x2e)) {
      return 0;
    }
    lVar4 = func_0x0001801afce0();
    if (lVar4 == 0) {
      local_30 = 0;
      uVar6 = 0;
    }
    else {
      local_30 = lVar4 + 0xc;
      uVar6 = *(undefined4 *)(lVar4 + 8);
    }
    local_18 = CONCAT44(local_18._4_4_,iVar2);
    local_28 = CONCAT44(local_28._4_4_,uVar6);
    psStack_20 = psVar1;
    iVar2 = func_0x0001802fab70(&psStack_20,&local_30,5);
    return (ulonglong)(iVar2 == 0);
  }
  uVar5 = func_0x000180302e10(0x21);
  return uVar5;
}

