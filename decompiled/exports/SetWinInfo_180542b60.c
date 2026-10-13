/* 180542b60  SetWinInfo  body=461 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetWinInfo(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00018000f220(&uStack_40);
  lVar2 = func_0x000180375050(param_1);
  if (lVar2 == 0) {
    lVar2 = 0x180759410;
  }
  lVar3 = func_0x000180375050(param_2);
  if (lVar3 == 0) {
    lVar3 = 0x180759410;
  }
  lVar4 = func_0x000180375050(param_3);
  if (lVar4 == 0) {
    lVar4 = 0x180759410;
  }
  lVar5 = func_0x000180375050(param_4);
  if (lVar5 == 0) {
    lVar5 = 0x180759410;
  }
  func_0x00018000c720(_DAT_180fe0ea8 + 0x18,lVar5);
  uVar6 = func_0x0001802d5700(lVar2,lVar3,lVar4);
  uVar7 = func_0x00018000c510(0x1808939e8);
  func_0x0001804d49e0(uVar7);
  if (lRam00000001808065a8 != 0) {
    func_0x00018000303c();
  }
  uVar6 = (**(code **)(**(longlong **)(_DAT_180fe0628 + 8) + 0x98))
                    (*(longlong **)(_DAT_180fe0628 + 8),uVar6);
  lVar2 = func_0x00018000c510(0x18085fba8);
  lVar3 = func_0x0001804ce840(uVar7,uVar6);
  *(undefined4 *)(lVar2 + 0x20) = 0x7fffffff;
  uVar6 = func_0x00018000c630(0x1809b9178,0x10);
  func_0x00018000c720(lVar2 + 8,uVar6);
  uVar9 = 0;
  iVar1 = *(int *)(lVar3 + 8);
  if (0 < iVar1) {
    do {
      lVar4 = func_0x0001802fe740(*(undefined1 *)(lVar3 + 0x10 + uVar9),0x1807bf8e0,0);
      if (lVar4 != 0) {
        func_0x000180341fd0(lVar2,lVar4 + 0xc);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar1);
  }
  func_0x000180340c00(lVar2);
  uVar6 = func_0x000180340c00(lVar2);
  func_0x00018000c720(_DAT_180fe0ea8 + 0x10,uVar6);
  (*pcRam000000018080fd50)(uVar7);
  func_0x00018000f380(&uStack_40);
  return;
}

