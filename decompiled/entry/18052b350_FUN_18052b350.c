/* 18052b350  FUN_18052b350  body=456 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b350(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  lVar5 = func_0x00018000c630(0x1809b90e0,1);
  lVar6 = *param_1;
  iVar2 = (**(code **)(lVar6 + 0x108))(param_1,lVar5,0,1);
  if (iVar2 != 1) {
    lVar6 = func_0x00018000c510(0x180898ed0);
    func_0x0001802dcfb0(lVar6);
    *(undefined8 *)(lVar6 + 8) = 0x180776d68;
    func_0x00018000cfe0(lVar6);
    return;
  }
  bVar1 = *(byte *)(lVar5 + 0x10);
  if ((bVar1 & 0xf) != 0xf) {
    lVar6 = func_0x00018000c510(0x180898d98);
    *(byte *)(lVar6 + 0xc) = bVar1;
    *(uint *)(lVar6 + 8) = bVar1 & 0xf;
    return;
  }
  iVar2 = (**(code **)(lVar6 + 0x108))(param_1,lVar5,0,1);
  if (iVar2 != 1) {
    lVar6 = func_0x00018000c510(0x180898ed0);
    func_0x0001802dcfb0(lVar6);
    *(undefined8 *)(lVar6 + 8) = 0x180776d10;
    func_0x00018000cfe0(lVar6);
    return;
  }
  if ((int)(uint)*(byte *)(lVar5 + 0x10) >> 4 == 1) {
    dVar7 = (double)func_0x0001802d21c0(_DAT_180cb2b30,(double)(*(byte *)(lVar5 + 0x10) & 0xf));
    lVar5 = func_0x00018000c630(0x1809b90e0,(longlong)(int)dVar7);
    iVar2 = *(int *)(lVar5 + 8);
    iVar3 = (**(code **)(lVar6 + 0x108))(param_1,lVar5,0,iVar2);
    if (iVar3 == iVar2) {
      uVar4 = FUN_18052bbc0(lVar5,*(undefined8 *)(_DAT_180fe0e90 + 8));
      lVar6 = func_0x00018000c510(0x180898d98);
      *(byte *)(lVar6 + 0xc) = bVar1;
      *(undefined4 *)(lVar6 + 8) = uVar4;
      return;
    }
    lVar6 = func_0x00018000c510(0x180898ed0);
    func_0x0001802dcfb0(lVar6);
    *(undefined8 *)(lVar6 + 8) = 0x180776cb0;
    func_0x00018000cfe0(lVar6);
    return;
  }
  lVar6 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(lVar6);
  *(undefined8 *)(lVar6 + 8) = 0x180786818;
  func_0x00018000cfe0(lVar6);
  return;
}

