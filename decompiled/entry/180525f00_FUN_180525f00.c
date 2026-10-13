/* 180525f00  FUN_180525f00  body=65 */

void FUN_180525f00(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = func_0x00018000c630(0x1809b9b10);
  uVar3 = 0;
  iVar1 = *(int *)(lVar2 + 8);
  if (0 < iVar1) {
    do {
      *(longlong *)(lVar2 + 0x10 + (ulonglong)uVar3 * 8) = 1L << ((byte)uVar3 & 0x3f);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return;
}

