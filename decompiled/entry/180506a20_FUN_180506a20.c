/* 180506a20  FUN_180506a20  body=101 */

longlong FUN_180506a20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18 [2];
  
  iVar1 = FUN_180509920();
  if (iVar1 != 0) {
    return param_1;
  }
  local_18[0] = 0;
  func_0x0001803774e0(param_1,local_18);
  lVar2 = FUN_1805068f0(*(undefined8 *)(param_1 + 8));
  if ((char)local_18[0] != '\0') {
    func_0x000180377520(param_1,0);
  }
  return lVar2;
}

