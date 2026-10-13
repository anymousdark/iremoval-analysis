/* 1801ba1e0  FUN_1801ba1e0  body=159 */

void FUN_1801ba1e0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 5;
  do {
    FUN_1801b9800(param_1,0x180765b98);
    lVar1 = FUN_1801ba2c0(param_1,0xe6,0xe8);
    iVar3 = iVar3 + -1;
    if (*(int *)(lVar1 + 8) != 0) break;
  } while (iVar3 != 0);
  if (*(int *)(lVar1 + 8) != 0) {
    return;
  }
  uVar2 = func_0x00018000c510(0x18085a558);
  func_0x0001802f9d10(uVar2,0x180795d70);
  func_0x00018000cfe0(uVar2);
  return;
}

