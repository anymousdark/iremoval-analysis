/* 1801b33e0  FUN_1801b33e0  body=343 */

undefined8
FUN_1801b33e0(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
             char param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (param_2 == 0) {
    uVar3 = func_0x0001802e15d0(0x1807c4398);
    return uVar3;
  }
  if (param_4 == 0) {
    uVar3 = func_0x0001802e15d0(0x1807c4b30);
    return uVar3;
  }
  if (param_3 < 0) {
    uVar3 = func_0x0001806c8650(param_3,0x1807c4348);
    return uVar3;
  }
  if (-1 < param_5) {
    if (param_5 != 0) {
      if (((param_3 < 1) || (param_6 != '\0')) ||
         (iVar1 = FUN_1801b38c0(param_1,param_2,param_3), iVar1 == 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(param_2 + (param_3 + -1));
      }
      if (cVar4 != '\0') {
        param_3 = param_3 + -1;
      }
      if (*(char *)(param_1 + 0x2c) == '\0') {
        if (0 < param_3) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
          uVar3 = FUN_1801b25f0(uVar2,param_2,param_3,param_4,param_5);
          *(char *)(param_1 + 0x2c) = cVar4;
          return uVar3;
        }
        *(char *)(param_1 + 0x2c) = cVar4;
      }
      else if ((param_3 != 0 || cVar4 != '\0') || param_6 != '\0') {
        uVar3 = FUN_1801b2fa0(param_1,param_2,param_3,param_4,param_5);
        *(char *)(param_1 + 0x2c) = cVar4;
        return uVar3;
      }
    }
    return 0;
  }
  uVar3 = func_0x0001806c8650(param_5,0x1807c49b0);
  return uVar3;
}

