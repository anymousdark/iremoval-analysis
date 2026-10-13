/* 1805092b0  FUN_1805092b0  body=46 */

void FUN_1805092b0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) + 5;
  if (uVar1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0001805092c9 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)((ulonglong)uVar1 * 4 + 0x180cb1da8) + 0x1805092b4))();
    return;
  }
  return;
}

