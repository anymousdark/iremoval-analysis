/* 1801b48b0  configure  body=500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((param_2 & 0x20) != 0) && (*(char *)(param_1 + 0xe4) == '\0')) &&
     (*(char *)(param_1 + 0xe5) == '\0')) {
    uVar1 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar1,0x18078f9a0);
    func_0x00018000cfe0(uVar1);
    return;
  }
  if (((param_2 & 1) != 0) && (*(char *)(param_1 + 0xe4) == '\0')) {
    if (*(char *)(param_1 + 0xe5) == '\0') {
      configure(param_1,0x20);
      uVar1 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar1,0x18077eb58);
      func_0x00018000cfe0(uVar1);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    if (_DAT_180805be8 != 0) {
      func_0x0001800011b3();
    }
    uVar2 = func_0x0001801af850(uVar1);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  if (((param_2 & 2) != 0) && (*(char *)(param_1 + 0xe6) != '\0')) {
    uVar1 = func_0x00018000c510(0x18085ac08);
    func_0x0001802fb850(uVar1,0x18077eae8);
    func_0x00018000cfe0(uVar1);
    return;
  }
  if (((param_2 & 8) != 0) && (*(longlong *)(param_1 + 0x28) == 0)) {
    if ((param_2 & 5) != 5) {
      configure(param_1,5);
    }
    uVar1 = FUN_1801b8a20(*(undefined4 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x20));
    func_0x00018000c720(param_1 + 0x28,uVar1);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar1 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar1,0x180795b58);
      func_0x00018000cfe0(uVar1);
      return;
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar3 = FUN_1801b43b0(param_1);
    if (iVar3 == 0) {
      uVar1 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar1,0x180795cd8);
      func_0x00018000cfe0(uVar1);
      return;
    }
    if (*(char *)(param_1 + 0xe5) == '\0') {
      uVar1 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar1,0x180795e78);
      func_0x00018000cfe0(uVar1);
      return;
    }
  }
  return;
}

