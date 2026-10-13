/* 18053aa60  FUN_18053aa60  body=75 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_18053aa60(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = func_0x0001802d1920();
  uVar1 = func_0x0001802d5660(uVar1,0x180761988);
  uVar1 = FUN_18054f000(uVar1);
  iVar2 = func_0x0001802d3ee0(uVar1,0x180765ec8);
  if (iVar2 == 0) {
    func_0x0001801b4d10();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

