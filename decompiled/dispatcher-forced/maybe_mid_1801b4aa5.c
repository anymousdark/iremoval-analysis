/* 1801b4aa5  maybe_mid  body=192 */

longlong maybe_mid(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_1801b8780(param_1,param_2);
  if (iVar3 != 0) {
    uVar2 = FUN_1801b8730(param_2);
    lVar4 = func_0x00018000c550(0x180839620);
    func_0x0001802d2050();
    *(undefined8 *)(lVar4 + 0x28) = 0;
    func_0x00018000c720(lVar4 + 0x20,param_2);
    *(undefined1 *)(lVar4 + 0xe6) = uVar2;
    *(undefined4 *)(lVar4 + 0xd0) = param_1;
    *(undefined1 *)(lVar4 + 0xe4) = 1;
    *(undefined4 *)(lVar4 + 0xdc) = 0;
    *(undefined4 *)(lVar4 + 0xe0) = 0;
    return lVar4;
  }
  uVar5 = func_0x00018000c510(0x180858908);
  uVar6 = func_0x0001802fca40(param_1);
  uVar6 = FUN_1801b1310(0x180795f40,uVar6);
  func_0x0001802e1350(uVar5,uVar6);
  func_0x00018000cfe0(uVar5);
  pcVar1 = (code *)swi(3);
  lVar4 = (*pcVar1)();
  return lVar4;
}

