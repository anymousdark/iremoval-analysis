/* 180507400  FUN_180507400  body=413 */

undefined8 FUN_180507400(undefined8 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  int local_30 [2];
  
  plVar2 = (longlong *)func_0x00018000c550();
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 2) = 4;
  *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
  *(undefined1 *)((longlong)plVar2 + 0x15) = 1;
  plVar2[3] = -1;
  plVar2[1] = 0;
  FUN_1805030f0(param_1,param_2,plVar2,0,local_30);
  lVar3 = func_0x000180004bd4();
  iVar1 = *(int *)(lVar3 + 0xf8);
  if (iVar1 < 0x19) {
    if (iVar1 == 6) goto LAB_18050751d;
    if (iVar1 != 0x18) goto LAB_180507543;
  }
  else {
    if (iVar1 == 0x57) {
      if (param_3 != '\0') {
        (**(code **)(*plVar2 + 0x38))(plVar2,1);
        func_0x0001802d2050(plVar2);
        return 0;
      }
LAB_180507543:
      uVar4 = func_0x00018000c510(0x18085c3c8);
      uVar5 = func_0x0001803a0220(iVar1,0);
      func_0x00018030c710(uVar4,uVar5);
      uVar4 = func_0x00018000cfe0(uVar4);
      return uVar4;
    }
    if (iVar1 != 0x7a) goto LAB_180507543;
  }
  (**(code **)(*plVar2 + 0x38))(plVar2,1);
  func_0x0001802d2050(plVar2);
  if (-1 < local_30[0]) {
    uVar4 = FUN_180509950();
    iVar1 = FUN_1805030f0(param_1,param_2,uVar4,local_30[0],local_38);
    if (iVar1 != 0) {
      return uVar4;
    }
    uVar4 = func_0x00018000c510(0x18085c3c8);
    uVar5 = func_0x000180376920();
    func_0x00018030c710(uVar4,uVar5);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  func_0x00018039cff0();
LAB_18050751d:
  uVar4 = func_0x00018000c510(0x180858908);
  func_0x0001802e1350(uVar4,0x1807872c0);
  uVar4 = func_0x00018000cfe0(uVar4);
  return uVar4;
}

