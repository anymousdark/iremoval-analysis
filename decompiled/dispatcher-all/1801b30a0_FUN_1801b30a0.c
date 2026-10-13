/* 1801b30a0  FUN_1801b30a0  body=326 */

ulonglong FUN_1801b30a0(longlong param_1,longlong param_2,int param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_80 [44];
  longlong local_54;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (param_2 == 0) {
    uVar3 = func_0x0001802e15d0(0x1807c4398);
    return uVar3;
  }
  if (-1 < param_3) {
    if ((param_3 < 1) || (param_4 != '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_1801b38c0(param_1,param_2,param_3);
    }
    local_48 = param_3;
    if (cVar1 != '\0') {
      local_48 = param_3 + -1;
    }
    if (*(char *)(param_1 + 0x2c) == '\0') {
      if (0 < local_48) {
        local_44 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
        uVar4 = 0;
        uVar5 = 0;
        local_4c = 0;
        local_54 = param_2;
        func_0x00018000c9a0(local_80);
        uVar2 = func_0x0001800bf642(local_44,local_4c,local_54,local_48,uVar4,uVar5);
        func_0x00018000c9f0(local_80);
        if (0 < (int)uVar2) {
          return (ulonglong)uVar2;
        }
        uVar4 = func_0x00018000c510(0x180858908);
        func_0x0001802e1350(uVar4,0x1807a09f0);
        uVar3 = func_0x00018000cfe0(uVar4);
        return uVar3;
      }
    }
    else if (param_4 != '\0' || (cVar1 != '\0' || local_48 != 0)) {
      uVar3 = FUN_1801b2fa0(param_1,param_2,local_48,0,(ulonglong)uVar2 << 0x20);
      return uVar3;
    }
    return 0;
  }
  uVar3 = func_0x0001806c8650(param_3,0x1807c5de8);
  return uVar3;
}

