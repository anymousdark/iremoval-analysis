/* 1801b6d70  FUN_1801b6d70  body=420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801b6d70(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0xe5) != '\0') {
    if (param_3 != '\0') {
      plVar2 = (longlong *)func_0x00018000c510(0x180838e98);
      FUN_1801b0430(plVar2,*(undefined8 *)(param_1 + 0x18));
      iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,0);
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0xe4) == '\0') {
          uVar5 = 0x180772170;
        }
        else {
          uVar5 = func_0x0001802fca40(*(undefined4 *)(param_1 + 0xd0));
          uVar5 = FUN_1801b1310(0x1807720e0,uVar5);
        }
        uVar3 = func_0x00018000c510(0x18085a558);
        func_0x0001802f9d10(uVar3,uVar5);
        lVar4 = func_0x00018000cfe0(uVar3);
        return lVar4;
      }
      (*_DAT_18080ef00)(plVar2);
    }
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
    lVar4 = func_0x00018000c550();
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 4;
    *(undefined1 *)(lVar4 + 0x14) = 0;
    func_0x0001802d2050(lVar4);
    *(undefined1 *)(lVar4 + 0x15) = 1;
    *(undefined8 *)(lVar4 + 8) = uVar5;
    return lVar4;
  }
  configure(param_1,3);
  lVar4 = FUN_1801b8e20(*(undefined4 *)(param_1 + 0xd0),param_2,param_3);
  if ((param_3 != '\0') && ((param_2 & 0x400) != 0)) {
    iVar1 = func_0x0001801aed10(lVar4,param_1 + 0xd8);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xd8) != 0x103)) {
      uVar5 = func_0x00018000c510(0x18085a558);
      uVar3 = func_0x0001802fca40(*(undefined4 *)(param_1 + 0xd0));
      uVar3 = FUN_1801b1310(0x1807720e0,uVar3);
      func_0x0001802f9d10(uVar5,uVar3);
      lVar4 = func_0x00018000cfe0(uVar5);
      return lVar4;
    }
  }
  return lVar4;
}

