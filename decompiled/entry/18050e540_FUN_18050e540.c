/* 18050e540  FUN_18050e540  body=109 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050e540(undefined8 param_1)

{
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  local_30 = _DAT_180fe7000;
  local_18 = local_238;
  uStack_10 = 0x100;
  uStack_20 = 0;
  FUN_18050e5c0(param_1,&local_28);
  FUN_180509e00(&local_28);
  if (local_30 != _DAT_180fe7000) {
    func_0x00018000cd70();
  }
  return;
}

