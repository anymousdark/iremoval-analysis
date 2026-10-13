/* 1801b8570  FUN_1801b8570  body=58 */

void FUN_1801b8570(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1801b0f70(*(undefined8 *)(param_1 + 8));
  *(char *)(param_1 + 0x14) = (char)iVar1;
  if (iVar1 == 0) {
    lVar2 = func_0x000180004bd4();
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0xf8);
  }
  return;
}

