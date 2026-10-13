/* 1801b9620  FUN_1801b9620  body=96 */

undefined8 FUN_1801b9620(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00018032f430();
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar2 = FUN_1801b98e0(param_1,0);
      func_0x00018000c720(param_1 + 0x20,uVar2);
    }
    func_0x00018032f6a0(uVar1);
  }
  return *(undefined8 *)(param_1 + 0x20);
}

