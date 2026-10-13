/* 1801b95b0  FUN_1801b95b0  body=107 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b95b0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = _DAT_180fdfdb8;
  if (*(longlong *)(_DAT_180fdfdb8 + 0x10) == 0) {
    uVar2 = func_0x00018000c510(0x1808e1bf8);
    func_0x000180005ea6(uVar2,*(undefined8 *)(lVar1 + 8));
    func_0x00018000c720(lVar1 + 0x10,uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

