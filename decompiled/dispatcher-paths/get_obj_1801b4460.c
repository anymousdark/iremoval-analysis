/* 1801b4460  get_obj  body=107 */

undefined8 get_obj(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if ((*(char *)(param_1 + 0xe4) != '\0') || (*(char *)(param_1 + 0xe5) != '\0')) {
      uVar1 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar1,0x180795e78);
      uVar1 = func_0x00018000cfe0(uVar1);
      return uVar1;
    }
    uVar1 = func_0x00018000c510(0x180839830);
    func_0x00018000c720(param_1 + 0x40,uVar1);
  }
  return *(undefined8 *)(param_1 + 0x40);
}

