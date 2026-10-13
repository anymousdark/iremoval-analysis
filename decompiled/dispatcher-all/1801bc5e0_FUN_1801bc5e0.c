/* 1801bc5e0  FUN_1801bc5e0  body=127 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bc5e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (_DAT_180805c18 != 0) {
    func_0x00018000219c();
  }
  lVar1 = *(longlong *)(_DAT_180fdfdd0 + 0x10);
  if (lVar1 != 0) {
    lVar2 = func_0x00018000c510(0x180839b58);
    func_0x00018000c720(lVar2 + 8,param_1);
    (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 8),0,lVar2);
  }
  uVar3 = FUN_1801bc4a0(param_1);
  uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_1801bcb60(uVar3,uVar4,param_1);
  return;
}

