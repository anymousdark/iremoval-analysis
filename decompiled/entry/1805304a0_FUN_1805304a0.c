/* 1805304a0  FUN_1805304a0  body=91 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805304a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x70))();
  if (_DAT_180806380 != 0) {
    func_0x000180002dbc();
  }
  if (*(longlong *)(_DAT_180fe04e8 + 0x18) == 0) {
    uVar1 = func_0x000180327160();
  }
  else {
    uVar1 = func_0x0001803272a0();
  }
  func_0x0001802fc640(uVar2,0,uVar1);
  return;
}

