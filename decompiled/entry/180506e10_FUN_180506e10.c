/* 180506e10  FUN_180506e10  body=370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180506e10(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_28 [2];
  char local_20 [8];
  
  if (param_2 == 0) {
    func_0x0001802e15d0(0x1807c2520);
    return;
  }
  lVar3 = func_0x00018000c510(0x180896f18);
  func_0x00018000c720(lVar3 + 8,param_1);
  func_0x00018000c720(lVar3 + 0x10,param_2);
  uVar4 = FUN_180506a20(*(undefined8 *)(lVar3 + 8));
  func_0x00018000c720(lVar3 + 8,uVar4);
  plVar5 = (longlong *)FUN_180507260(0x2000000,0,local_20,local_28);
  if (plVar5 != (longlong *)0x0) {
    iVar2 = FUN_180509920(plVar5);
    if (iVar2 == 0) {
      if (local_20[0] == '\0') {
        (**(code **)(*plVar5 + 0x38))(plVar5,1);
        func_0x0001802d2050(plVar5);
      }
      else {
        if (_DAT_180806aa0 != 0) {
          func_0x000180003d9c();
        }
        func_0x00018063f700(*(undefined8 *)(_DAT_180fe0de8 + 0x28),plVar5);
      }
      lVar6 = func_0x000180332f30();
      uVar4 = func_0x00018000c510(0x18085e028);
      func_0x000180006a52(uVar4,lVar3);
      if (lVar6 != 0) {
        func_0x000180333170(lVar6,uVar4,0);
        return;
      }
      func_0x000180333600();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,1);
    func_0x0001802d2050(plVar5);
  }
  uVar4 = func_0x00018000c510(0x18085c3c8);
  uVar7 = func_0x0001803a0220(local_28[0],0);
  func_0x00018030c710(uVar4,uVar7);
  func_0x00018000cfe0(uVar4);
  return;
}

