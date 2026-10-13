/* 180521f20  FUN_180521f20  body=32 */

undefined8 FUN_180521f20(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 3) {
                    /* WARNING: Could not emulate address calculation at 0x000180521f2e */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(FUN_180521f20 + *(uint *)((ulonglong)param_1 * 4 + 0x180cb2918)))
                      (FUN_180521f20 + *(uint *)((ulonglong)param_1 * 4 + 0x180cb2918));
    return uVar1;
  }
  return 0;
}

