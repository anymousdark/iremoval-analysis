/* 180509920  FUN_180509920  body=26 */

bool FUN_180509920(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(longlong *)(param_1 + 8) == -1;
  }
  return true;
}

