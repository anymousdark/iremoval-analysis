/* 18052e7a0  FUN_18052e7a0  body=234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052e7a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  
  local_18 = 0;
  if (_DAT_180806b28 != 0) {
    func_0x000180003edc();
  }
  iVar1 = func_0x00018067ba80(*(undefined8 *)(_DAT_180fe0e80 + 0x10),param_1,&local_18);
  if (iVar1 != 0) {
    uVar2 = func_0x0001802d3060(local_18);
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(_DAT_180fe07e0 + 8) + 0x50))
                       (*(longlong **)(_DAT_180fe07e0 + 8),uVar2,0);
    if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0x180898f90)) {
      plVar3 = (longlong *)func_0x0001803706a0(0x180898f90,plVar3);
    }
    if (plVar3 == (longlong *)0x0) {
      func_0x00018000c510(0x180898dd0);
    }
    return;
  }
  lVar4 = func_0x00018000c510(0x180898ed0);
  uVar2 = func_0x0001802d5700(0x1807bc760,param_1,0x18075b570);
  func_0x0001802dcfb0(lVar4);
  func_0x00018000c720(lVar4 + 8,uVar2);
  func_0x00018000cfe0(lVar4);
  return;
}

