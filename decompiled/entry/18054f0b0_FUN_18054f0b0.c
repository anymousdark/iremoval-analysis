/* 18054f0b0  FUN_18054f0b0  body=246 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18054f0b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = func_0x00018000c510(0x180893168);
  func_0x0001804d0000(uVar1);
  uVar2 = func_0x00018000c550();
  func_0x00018035b1d0(uVar2,param_1,3,1,1,0x1000,0,0);
  uVar3 = func_0x0001804ce960(uVar1,uVar2);
  uVar3 = func_0x0001802e1f40(uVar3);
  uVar3 = func_0x0001802d73c0(uVar3,0x18075f940,0x180759410);
  if (_DAT_180806420 != 0) {
    func_0x000180002e7c();
  }
  uVar3 = func_0x000180329ea0(*(undefined8 *)(_DAT_180fe0530 + 8),uVar3);
  (*_DAT_18080fdb0)(uVar2);
  (*_DAT_18080fdb0)(uVar1);
  return uVar3;
}

