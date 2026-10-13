/* 18052b280  FUN_18052b280  body=120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b280(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(int *)(param_1 + 0x1c) - 1;
  if (uVar1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00018052b29b */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)((ulonglong)uVar1 * 4 + 0x180cb2b20) + 0x18052b285))();
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 8) {
    (**(code **)(**(longlong **)(_DAT_180fe0e90 + 8) + 0x58))
              (*(longlong **)(_DAT_180fe0e90 + 8),param_2,param_3 * 8);
    return;
  }
  lVar2 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(lVar2);
  *(undefined8 *)(lVar2 + 8) = 0x18075c588;
  func_0x00018000cfe0(lVar2);
  return;
}

