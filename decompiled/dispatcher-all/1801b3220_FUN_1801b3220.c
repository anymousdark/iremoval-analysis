/* 1801b3220  FUN_1801b3220  body=428 */

undefined8
FUN_1801b3220(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5,int param_6
             ,char param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_24 [4];
  longlong local_20;
  longlong local_18;
  
  local_18 = 0;
  local_20 = 0;
  if (param_2 == 0) {
    uVar2 = func_0x0001802e15d0(0x1807c4398);
    return uVar2;
  }
  if (param_5 == 0) {
    uVar2 = func_0x0001802e15d0(0x1807c4b30);
    return uVar2;
  }
  if (param_3 < 0) {
    uVar2 = func_0x0001806c8650(param_3,0x1807c4370);
    return uVar2;
  }
  if (param_4 < 0) {
    uVar2 = func_0x0001806c8650(param_4,0x1807c4348);
    return uVar2;
  }
  if (*(int *)(param_2 + 8) - param_3 < param_4) {
    uVar2 = func_0x00018000c510(0x180858a08);
    func_0x0001802e1670(uVar2,0x1807c4398,0x180783bf0);
    uVar2 = func_0x00018000cfe0(uVar2);
    return uVar2;
  }
  if ((param_6 < 0) || (iVar1 = *(int *)(param_5 + 8), iVar1 < param_6)) {
    uVar2 = func_0x00018000c510(0x180858a08);
    func_0x0001802e1670(uVar2,0x1807c49d8,0x180783e10);
    uVar2 = func_0x00018000cfe0(uVar2);
    return uVar2;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_4 == 0) && ((*(char *)(param_1 + 0x2c) == '\0' || (param_7 == '\0')))) {
    return 0;
  }
  local_18 = param_5 + 0x10;
  local_20 = param_2;
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 8) == 0) {
      uVar2 = func_0x00018039d020();
      return uVar2;
    }
    if (param_2 + 0x10 != 0) {
      puVar3 = (undefined1 *)(param_2 + 0x10 + (longlong)param_3);
      goto LAB_1801b3309;
    }
  }
  puVar3 = local_24;
LAB_1801b3309:
  uVar2 = FUN_1801b33e0(param_1,puVar3,param_4,local_18 + (longlong)param_6 * 2,iVar1 - param_6,
                        param_7);
  return uVar2;
}

