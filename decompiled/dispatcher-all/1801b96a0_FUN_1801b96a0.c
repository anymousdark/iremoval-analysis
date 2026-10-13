/* 1801b96a0  FUN_1801b96a0  body=351 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b96a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = 0;
  local_40 = 0;
  uVar6 = func_0x000180318b20();
  if (_DAT_180806420 != 0) {
    func_0x000180002e7c();
  }
  lVar9 = _DAT_180fe0530;
  uVar6 = func_0x000180329ea0(*(undefined8 *)(_DAT_180fe0530 + 8),uVar6);
  iVar5 = func_0x0001802d3510(param_1,0x180760738,0);
  if (iVar5 == 0) {
    uVar7 = FUN_1801b95b0();
    uVar7 = func_0x000180329ea0(*(undefined8 *)(lVar9 + 8),uVar7);
  }
  else {
    uVar7 = func_0x000180329ea0(*(undefined8 *)(lVar9 + 8),param_1);
  }
  lVar4 = _DAT_180fdfdb8;
  lVar3 = _DAT_180fdfdb0;
  lVar8 = *(longlong *)(_DAT_180fdfdb8 + 0x18);
  lVar9 = _DAT_180fdfdb0 + 0x10;
  lVar1 = _DAT_180fdfdb0 + 0x18;
  if (lVar8 == 0) {
    lVar8 = func_0x00018000c510(0x18099ccd0);
    func_0x000180005eb2(lVar8,*(undefined8 *)(lVar4 + 8));
    func_0x00018000c720(lVar4 + 0x18,lVar8);
  }
  func_0x000180725190(0x180803d88,lVar9,lVar1,lVar8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  lVar9 = *(longlong *)(lVar4 + 0x20);
  if (lVar9 == 0) {
    lVar9 = func_0x00018000c510(0x18096ce20);
    func_0x000180005ebe(lVar9,*(undefined8 *)(lVar4 + 8));
    func_0x00018000c720(lVar4 + 0x20,lVar9);
  }
  local_48 = uVar7;
  local_40 = uVar6;
  func_0x000180629080(uVar2,&local_48,lVar9);
  return;
}

