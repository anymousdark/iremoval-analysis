/* 1801bc120  FUN_1801bc120  body=52 */

undefined8 FUN_1801bc120(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = func_0x00018000c510(0x180857d40);
    func_0x00018000c810(param_1 + 0x28,uVar1,0);
  }
  return *(undefined8 *)(param_1 + 0x28);
}

