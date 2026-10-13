/* 1801b2e90  FUN_1801b2e90  body=262 */

undefined8 FUN_1801b2e90(longlong param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_14 [4];
  longlong local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    uVar1 = func_0x0001802e15d0(0x1807c4398);
    return uVar1;
  }
  if (param_3 < 0) {
    uVar1 = func_0x0001806c8650(param_3,0x1807cb428);
    return uVar1;
  }
  if (param_4 < 0) {
    uVar1 = func_0x0001806c8650(param_4,0x1807c5de8);
    return uVar1;
  }
  if (*(int *)(param_2 + 8) - param_3 < param_4) {
    uVar1 = func_0x00018000c510(0x180858a08);
    func_0x0001802e1670(uVar1,0x1807c4398,0x180783bf0);
    uVar1 = func_0x00018000cfe0(uVar1);
    return uVar1;
  }
  if (param_4 == 0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      return 0;
    }
    if (param_5 == '\0') {
      return 0;
    }
  }
  local_10 = param_2;
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 8) == 0) {
      uVar1 = func_0x00018039d020();
      return uVar1;
    }
    if (param_2 + 0x10 != 0) {
      puVar2 = (undefined1 *)(param_2 + 0x10 + (longlong)param_3);
      goto LAB_1801b2f23;
    }
  }
  puVar2 = local_14;
LAB_1801b2f23:
  uVar1 = FUN_1801b30a0(param_1,puVar2,param_4,param_5);
  return uVar1;
}

