/* 1801b8e20  FUN_1801b8e20  body=321 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1801b8e20(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  plVar3 = (longlong *)func_0x0001801af290(param_2,0,param_1);
  lVar4 = func_0x000180004bd4();
  iVar1 = *(int *)(lVar4 + 0xf8);
  iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
  if (iVar2 == 0) {
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,1);
  func_0x0001802d2050(plVar3);
  if (param_1 == 0) {
    uVar5 = func_0x00018000c510(0x18085d748);
    func_0x00018032b830(uVar5,5);
    plVar3 = (longlong *)func_0x00018000cfe0(uVar5);
    return plVar3;
  }
  if (iVar1 != 5) {
    iVar2 = FUN_1801b8780(param_1,0x180760738);
    if (iVar2 == 0) {
      if (param_3 == '\0') {
        if (_DAT_180805c00 != 0) {
          func_0x00018000217c();
        }
        return *(longlong **)(_DAT_180fdfdc8 + 8);
      }
      uVar5 = func_0x00018000c510(0x18085a558);
      uVar6 = func_0x0001802fca40(param_1);
      uVar6 = FUN_1801b1310(0x1807720e0,uVar6);
      func_0x0001802f9d10(uVar5,uVar6);
      plVar3 = (longlong *)func_0x00018000cfe0(uVar5);
      return plVar3;
    }
  }
  uVar5 = func_0x00018000c510(0x18085d748);
  func_0x00018032b830(uVar5,iVar1);
  plVar3 = (longlong *)func_0x00018000cfe0(uVar5);
  return plVar3;
}

