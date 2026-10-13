/* 1805045d0  FUN_1805045d0  body=127 */

void FUN_1805045d0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong local_20;
  int local_18 [2];
  longlong local_10;
  
  uVar1 = func_0x0001806fcbb0();
  func_0x000180377270(param_1,uVar1);
  func_0x0001806fcc20(param_1,local_18,0);
  local_20 = 0;
  func_0x0001803772c0(param_1,&local_20);
  if (local_10 != 0) {
    func_0x000180377270(param_1,(local_10 + (longlong)local_18[0] * 0x18) - local_20);
  }
  if (local_20 != 0) {
    func_0x000180377310(param_1);
  }
  return;
}

