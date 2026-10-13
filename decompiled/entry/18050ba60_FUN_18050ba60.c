/* 18050ba60  FUN_18050ba60  body=215 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18050ba60(undefined4 param_1,char param_2,undefined8 param_3,undefined4 param_4,
                      longlong *param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  
  (**(code **)(*param_5 + 0x30))(param_5,param_6);
  lVar1 = param_5[5];
  if (*(int *)(*(longlong *)(lVar1 + 0x50) + 8) == 0) {
    lVar1 = func_0x00018039d020();
    return lVar1;
  }
  if (0 < *(int *)(*(longlong *)(lVar1 + 0x50) + 0x10)) {
    if (param_2 == '\0') {
      func_0x00018000c720(lVar1 + 8,param_3);
      param_5[5] = 0;
    }
    else if (param_7 != '\0') {
      *(undefined8 *)(lVar1 + 8) = 0;
      return 0;
    }
    FUN_18050b000(lVar1,*(undefined4 *)((longlong)param_5 + 0x4c),param_4,param_1);
    return lVar1;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  if (_DAT_180806ac8 != 0) {
    func_0x000180003ddc();
  }
  return *(longlong *)(_DAT_180fe0df8 + 8);
}

