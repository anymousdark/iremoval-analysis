/* 180518310  FUN_180518310  body=55 */

undefined4 FUN_180518310(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  lVar1 = func_0x000180370420(0x18094e830);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x10);
  }
  return 1;
}

