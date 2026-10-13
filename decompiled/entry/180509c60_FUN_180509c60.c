/* 180509c60  FUN_180509c60  body=209 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180509c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  
  local_38 = 0;
  if (_DAT_180806ab0 != 0) {
    func_0x000180001b71();
  }
  if (DAT_180806ab8 != '\0') {
    lVar1 = func_0x00018000c630(0x1809b8c30,4);
    func_0x00018000c720(lVar1 + 0x10,param_1);
    func_0x00018000c720(lVar1 + 0x18,param_2);
    func_0x00018000c720(lVar1 + 0x20,param_3);
    func_0x00018000c720(lVar1 + 0x28,param_4);
    local_38 = 0x18075f57c;
    local_30 = 2;
    func_0x0001802d67c0(&local_38,lVar1);
    return;
  }
  func_0x0001802d5fd0(param_1,param_2,param_3,param_4);
  return;
}

