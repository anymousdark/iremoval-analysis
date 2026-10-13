/* 180521e50  FUN_180521e50  body=36 */

undefined8 FUN_180521e50(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x000180521e62 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(FUN_180521e50 + *(uint *)((ulonglong)param_1 * 4 + 0x180cb28d0)))
                      (FUN_180521e50 + *(uint *)((ulonglong)param_1 * 4 + 0x180cb28d0));
    return uVar1;
  }
  return 0;
}

