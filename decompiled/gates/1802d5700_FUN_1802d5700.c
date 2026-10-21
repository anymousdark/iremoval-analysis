/* query=1802d5700 containing=1802d5700 name=FUN_1802d5700 body=241 */

undefined8 FUN_1802d5700(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (uVar1 = *(uint *)(param_1 + 8), uVar1 == 0)) {
    uVar3 = FUN_1802d5660(param_2,param_3);
    return uVar3;
  }
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 8), uVar2 != 0)) {
    if ((param_3 != 0) && (*(int *)(param_3 + 8) != 0)) {
      if ((ulonglong)uVar2 + (ulonglong)uVar1 + (ulonglong)*(uint *)(param_3 + 8) < 0x80000000) {
        uVar3 = func_0x00018000c5d0(0x180858040);
        FUN_1802d5430(uVar3,0,param_1);
        FUN_1802d5430(uVar3,uVar1,param_2);
        FUN_1802d5430(uVar3,uVar2 + uVar1,param_3);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_180303230();
    }
    uVar3 = FUN_1802d5660(param_1,param_2);
    return uVar3;
  }
  uVar3 = FUN_1802d5660(param_1,param_3);
  return uVar3;
}

