/* 1801b44d0  bind  body=97 */

void bind(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    func_0x0001802e15d0(0x1807d3f20);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(char *)(param_1 + 0xe4) == '\0') && (*(char *)(param_1 + 0xe5) == '\0')) {
    func_0x00018000c720(param_1 + 0x40);
    return;
  }
  uVar2 = func_0x00018000c510(0x18085a558);
  func_0x0001802f9d10(uVar2,0x180795bf8);
  func_0x00018000cfe0(uVar2);
  return;
}

