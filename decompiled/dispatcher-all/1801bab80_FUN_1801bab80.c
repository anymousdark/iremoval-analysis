/* 1801bab80  FUN_1801bab80  body=35 */

undefined8 FUN_1801bab80(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x0001801bab8e */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(FUN_1801bab80 + *(uint *)((ulonglong)param_1 * 4 + 0x180caab50)))
                      (FUN_1801bab80 + *(uint *)((ulonglong)param_1 * 4 + 0x180caab50));
    return uVar1;
  }
  return 0xd;
}

