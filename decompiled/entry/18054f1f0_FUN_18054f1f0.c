/* 18054f1f0  FUN_18054f1f0  body=206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18054f1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = func_0x00018000c510(0x180893168);
  func_0x0001804d0000(uVar1);
  uVar3 = uVar1;
  if (_DAT_1808065e8 != 0) {
    func_0x00018000313c();
  }
  uVar2 = func_0x0001803ac5f0(*(undefined8 *)(_DAT_180fe0688 + 8),param_1);
  uVar2 = func_0x0001804ce840(uVar1,uVar2);
  uVar2 = func_0x0001802e1f40(uVar2);
  uVar3 = func_0x0001802d73c0(uVar2,0x18075f940,0x180759410,param_4,uVar3);
  if (_DAT_180806420 != 0) {
    func_0x000180002e7c();
  }
  uVar3 = func_0x000180329ea0(*(undefined8 *)(_DAT_180fe0530 + 8),uVar3);
  (*_DAT_18080fdc0)(uVar1);
  return uVar3;
}

