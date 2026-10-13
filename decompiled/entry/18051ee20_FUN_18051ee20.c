/* 18051ee20  FUN_18051ee20  body=127 */

undefined8 FUN_18051ee20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = func_0x000180372610();
  if ((iVar1 != 0) && (uVar3 = *(byte *)(param_1 + 0x2e) - 3, uVar3 < 0x2c)) {
                    /* WARNING: Could not emulate address calculation at 0x00018051ee6a */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((ulonglong)*(uint *)((ulonglong)uVar3 * 4 + 0x180cb26d8) + 0x18051ee33))();
    return uVar2;
  }
  return 1;
}

