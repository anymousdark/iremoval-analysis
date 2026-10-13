/* 18053a040  FUN_18053a040  body=90 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_18053a040(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x00018000c630(0x1809b8ce8,1);
  *(undefined8 *)(lVar1 + 0x10) = 0x180766198;
  lVar1 = func_0x0001802d7b00(param_1,0,lVar1,0x7fffffff,0);
  if (1 < *(uint *)(lVar1 + 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00018039d020();
  return;
}

