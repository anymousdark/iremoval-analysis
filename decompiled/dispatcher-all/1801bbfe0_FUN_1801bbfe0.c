/* 1801bbfe0  FUN_1801bbfe0  body=185 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bbfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0;
  if (_DAT_180805c08 != 0) {
    func_0x0001800011d0();
  }
  if (DAT_180805c10 != '\0') {
    lVar1 = func_0x00018000c630(0x1809b8c30,3);
    func_0x00018000c720(lVar1 + 0x10,param_1);
    func_0x00018000c720(lVar1 + 0x18,param_2);
    func_0x00018000c720(lVar1 + 0x20,param_3);
    local_30 = 0x18075f57c;
    local_28 = 2;
    func_0x0001802d67c0(&local_30,lVar1);
    return;
  }
  func_0x0001802d5f80(param_1,param_2,param_3);
  return;
}

