/* 1801b38c0  FUN_1801b38c0  body=116 */

undefined8 FUN_1801b38c0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1801b2de0(param_1,*(undefined1 *)(param_2 + (param_3 + -1)));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2c) == '\0') goto LAB_1801b3925;
  while( true ) {
    iVar1 = iVar1 + 1;
LAB_1801b3925:
    if (param_3 <= iVar1) break;
    iVar2 = FUN_1801b2de0(param_1,*(undefined1 *)(param_2 + iVar1));
    if ((iVar2 != 0) && (iVar1 = iVar1 + 1, param_3 <= iVar1)) {
      return 1;
    }
  }
  return 0;
}

