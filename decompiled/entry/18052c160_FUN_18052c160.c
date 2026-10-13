/* 18052c160  FUN_18052c160  body=360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18052c160(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_1 == (longlong *)0x0) {
    uVar3 = func_0x00018000c510(0x180858988);
    func_0x0001802e1530(uVar3,0x1807cdf28);
    uVar5 = func_0x00018000cfe0(uVar3);
    return uVar5;
  }
  if (*param_1 == 0x1808988a0) {
    uVar6 = 1;
    uVar3 = (*_DAT_18081bee0)(param_1[1]);
    iVar1 = (*_DAT_1808124d0)(uVar3);
    while (iVar1 != 0) {
      uVar4 = (*_DAT_18081bf50)(uVar3);
      iVar1 = FUN_18052c160(uVar4);
      uVar6 = uVar6 + iVar1;
      iVar1 = (*_DAT_1808124d0)(uVar3);
    }
    (*_DAT_18080fb50)(uVar3);
    return (ulonglong)uVar6;
  }
  if (*param_1 == 0x180898be0) {
    iVar1 = 1;
    uVar3 = (*_DAT_180822160)(param_1[1]);
    uVar3 = (*_DAT_18081bee0)(uVar3);
    iVar2 = (*_DAT_1808124d0)(uVar3);
    while (iVar2 != 0) {
      uVar4 = (*_DAT_18081bf50)(uVar3);
      iVar2 = FUN_18052c160(uVar4);
      iVar1 = iVar1 + iVar2;
      iVar2 = (*_DAT_1808124d0)(uVar3);
    }
    (*_DAT_18080fb50)(uVar3);
    uVar3 = (*_DAT_1808213c0)(param_1[1]);
    iVar2 = (*_DAT_180818260)(uVar3);
    return (ulonglong)(uint)(iVar2 + iVar1);
  }
  return 1;
}

