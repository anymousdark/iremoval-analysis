/* 180533770  FUN_180533770  body=357 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180533770(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  
  lVar2 = func_0x00018000c510(0x180898be0);
  uVar3 = func_0x00018000c510(0x1808ec788);
  func_0x00018067a9c0(uVar3,0,0);
  func_0x00018000c720(lVar2 + 8,uVar3);
  if ((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) {
    lVar4 = func_0x00018000c510(0x1808990c0);
    *(undefined8 *)(lVar4 + 0x10) = 0x180759410;
    FUN_1805305a0(lVar4,param_2);
    (*_DAT_180823490)(*(undefined8 *)(lVar2 + 8),0x18077a010,lVar4);
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 8) != 0)) {
    lVar4 = func_0x00018000c510(0x1808990c0);
    *(undefined8 *)(lVar4 + 0x10) = 0x180759410;
    FUN_1805305a0(lVar4,param_3);
    (*_DAT_180823490)(*(undefined8 *)(lVar2 + 8),0x180789428,lVar4);
  }
  FUN_180532740(param_1,0x180780a00,lVar2,1);
  lVar2 = FUN_18052fbd0();
  iVar1 = (*_DAT_180822730)(*(undefined8 *)(lVar2 + 8),0x180778ad8);
  if (iVar1 == 0) {
    local_38 = (*_DAT_180818f40)(*(undefined8 *)(lVar2 + 8),0x1807bd868);
  }
  else {
    local_38 = (*_DAT_180818f40)(*(undefined8 *)(lVar2 + 8),0x180778ad8);
  }
  return local_38;
}

