/* 18052c0b0  FUN_18052c0b0  body=81 */

void FUN_18052c0b0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = (param_2 & 0xff) - 1;
  if (uVar2 < 4) {
    UNRECOVERED_JUMPTABLE =
         (code *)((ulonglong)*(uint *)((ulonglong)uVar2 * 4 + 0x180cb2b48) + 0x18052c0b7);
                    /* WARNING: Could not emulate address calculation at 0x00018052c0c8 */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((ulonglong)uVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  lVar1 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(lVar1);
  *(undefined8 *)(lVar1 + 8) = 0x1807867d0;
  func_0x00018000cfe0(lVar1);
  return;
}

