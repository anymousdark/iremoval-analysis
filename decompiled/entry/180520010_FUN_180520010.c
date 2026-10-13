/* 180520010  FUN_180520010  body=162 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180520010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  longlong local_res10 [3];
  
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (_DAT_180806ad0 != 0) {
    func_0x000180001b8e();
  }
  if (_DAT_180806ad8 != param_2) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_res10[0] = param_2;
    dVar2 = (double)func_0x000180304540(local_res10);
    *(int *)(param_1 + 100) = (int)(dVar2 + _DAT_180cb27b0);
    lVar1 = func_0x0001800bf606();
    *(longlong *)(param_1 + 0x38) = lVar1 + *(int *)(param_1 + 100);
    if (_DAT_181008818 != 0) {
      func_0x00018000dee0();
    }
    return;
  }
  return;
}

