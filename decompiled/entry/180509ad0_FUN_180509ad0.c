/* 180509ad0  FUN_180509ad0  body=203 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180509ad0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (_DAT_180806ab0 != 0) {
    func_0x000180001b71();
  }
  if (DAT_180806ab8 != '\0') {
    lVar1 = func_0x00018000c630(0x1809b8c30,2);
    func_0x00018000c720(lVar1 + 0x10,param_1);
    func_0x00018000c720(lVar1 + 0x18,param_2);
    uStack_30 = 0x18075f57c;
    local_28 = CONCAT44(local_28._4_4_,2);
    func_0x0001802d67c0(&uStack_30,lVar1);
    return;
  }
  local_40 = &uStack_20;
  local_38 = CONCAT44(local_38._4_4_,1);
  uStack_20 = param_2;
  func_0x0001802d61e0(0,param_1,&local_40);
  return;
}

