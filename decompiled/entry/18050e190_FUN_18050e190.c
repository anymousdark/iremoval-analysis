/* 18050e190  FUN_18050e190  body=84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050e190(undefined2 param_1)

{
  undefined2 local_20 [4];
  undefined2 *local_18;
  undefined4 local_10;
  longlong local_8;
  
  local_8 = _DAT_180fe7000;
  local_18 = local_20;
  local_10 = 1;
  local_20[0] = param_1;
  FUN_18050e1f0(&local_18);
  if (local_8 != _DAT_180fe7000) {
    func_0x00018000cd70();
  }
  return;
}

