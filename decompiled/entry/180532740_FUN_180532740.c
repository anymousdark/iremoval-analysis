/* 180532740  FUN_180532740  body=970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180532740(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  lVar2 = func_0x00018000c510(0x180898be0);
  uVar3 = func_0x00018000c510(0x1808ec788);
  func_0x00018067a9c0(uVar3,0,0);
  func_0x00018000c720(lVar2 + 8,uVar3);
  lVar4 = func_0x00018000c510(0x1808990c0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar4 + 0x10) = 0x180759410;
  FUN_1805305a0(lVar4,uVar3);
  (*_DAT_180823460)(*(undefined8 *)(lVar2 + 8),0x180789d20,lVar4);
  lVar4 = func_0x00018000c510(0x1808990c0);
  *(undefined8 *)(lVar4 + 0x10) = 0x180759410;
  FUN_1805305a0(lVar4,param_2);
  (*_DAT_180823460)(*(undefined8 *)(lVar2 + 8),0x180799410,lVar4);
  if (param_3 != 0) {
    uVar3 = (*_DAT_18081d4f0)(*(undefined8 *)(param_3 + 8));
    iVar1 = (*_DAT_180812500)(uVar3);
    while (iVar1 != 0) {
      (*_DAT_18081d540)(uVar3,&local_58);
      local_78 = local_58;
      uStack_70 = uStack_50;
      (*_DAT_1808208f0)(*(undefined8 *)(lVar2 + 8),&local_78);
      iVar1 = (*_DAT_180812500)(uVar3);
    }
    (*_DAT_18080fbf0)(uVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    FUN_1805342c0(lVar4,lVar2,1);
    lVar2 = FUN_1805340c0(lVar4);
    if (lVar2 != 0) {
      lVar2 = FUN_18052fbd0();
      goto LAB_1805328db;
    }
  }
  lVar2 = 0;
LAB_1805328db:
  if (lVar2 == 0) {
    lVar2 = func_0x00018000c510(0x180898be0);
    uVar3 = func_0x00018000c510(0x1808ec788);
    func_0x00018067a9c0(uVar3,0,0);
    func_0x00018000c720(lVar2 + 8,uVar3);
  }
  if (param_4 != '\0') {
    (*_DAT_180818f00)(*(undefined8 *)(lVar2 + 8),0x180799410);
    lVar4 = FUN_180530050();
    iVar1 = func_0x0001802d3ee0(*(undefined8 *)(lVar4 + 0x10),param_2);
    if (iVar1 == 0) {
      FUN_18052d5f0(lVar2,0x180799410);
      lVar2 = FUN_180530050();
      uVar3 = func_0x00018000c510(0x180899868);
      uVar5 = func_0x0001802d5800(0x180783990,*(undefined8 *)(lVar2 + 0x10),0x18075ad48,param_2);
      FUN_180534ff0(uVar3,uVar5);
      lVar2 = func_0x00018000cfe0(uVar3);
      return lVar2;
    }
  }
  iVar1 = (*_DAT_180823f70)(*(undefined8 *)(lVar2 + 8),0x18077be40,&uStack_40);
  if (iVar1 != 0) {
    lVar2 = FUN_180530050();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      uStack_60 = 0;
    }
    else {
      uVar3 = func_0x00018039c600(0x180899300);
      local_88 = lVar2 + 0xc;
      uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar2 + 8));
      func_0x0001802cff20(uVar3,&local_88,0,0,&uStack_60);
    }
    func_0x00018036f5f0(&local_68,0x1809f4160,uStack_60);
    if ((char)local_68 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_180533cd0(local_68._4_4_);
    }
    if (lVar4 == 0) {
      lVar4 = func_0x00018000c510(0x180899868);
      *(undefined4 *)(lVar4 + 0x50) = 0xffffff00;
      *(undefined4 *)(lVar4 + 0x48) = 0x80131500;
      func_0x00018000c720(lVar4 + 8,lVar2);
    }
    lVar2 = func_0x00018000cfe0(lVar4);
    return lVar2;
  }
  iVar1 = (*_DAT_180823f70)(*(undefined8 *)(lVar2 + 8),0x18079a130,&local_48);
  if (iVar1 != 0) {
    lVar4 = FUN_180530050();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 8) == 7)) &&
       (*(longlong *)(lVar4 + 0xc) == 0x6c006900610046 &&
        *(longlong *)(lVar4 + 0x12) == 0x6500720075006c)) {
      uVar3 = func_0x00018000c510(0x180899868);
      FUN_180534f70(uVar3);
      lVar2 = func_0x00018000cfe0(uVar3);
      return lVar2;
    }
  }
  return lVar2;
}

