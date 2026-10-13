/* 1801b4fc0  execute  body=553 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void execute(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_1801b4670(param_1);
  lVar3 = FUN_1801b4460(param_1);
  lVar5 = *(longlong *)(lVar3 + 8);
  if (lVar5 == 0) {
    lVar5 = 0x180759410;
  }
  if (*(int *)(lVar5 + 8) == 0) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x180772bb8);
    func_0x00018000cfe0(uVar4);
    return;
  }
  if ((*(longlong *)(lVar3 + 0x40) != 0) && (*(char *)(lVar3 + 0x7d) == '\0')) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x18079f768);
    func_0x00018000cfe0(uVar4);
    return;
  }
  if ((*(longlong *)(lVar3 + 0x50) != 0) && (*(char *)(lVar3 + 0x7e) == '\0')) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x18079f8c0);
    func_0x00018000cfe0(uVar4);
    return;
  }
  if ((*(longlong *)(lVar3 + 0x48) != 0) && (*(char *)(lVar3 + 0x7f) == '\0')) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x18079f6b8);
    func_0x00018000cfe0(uVar4);
    return;
  }
  lVar5 = *(longlong *)(lVar3 + 0x10);
  if (lVar5 == 0) {
    lVar5 = 0x180759410;
  }
  if (*(int *)(lVar5 + 8) != 0) {
    iVar2 = FUN_1801b9270(lVar3);
    if (iVar2 != 0) {
      uVar4 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar4,0x180792c50);
      func_0x00018000cfe0(uVar4);
      return;
    }
  }
  iVar2 = FUN_1801b9270(lVar3);
  if (iVar2 != 0) {
    lVar5 = FUN_1801b9200(lVar3);
    iVar2 = (*_DAT_180818220)(*(undefined8 *)(lVar5 + 8));
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        lVar5 = FUN_1801b9200(lVar3);
        lVar5 = (*_DAT_180818d40)(*(undefined8 *)(lVar5 + 8),iVar6);
        if (lVar5 == 0) {
          uVar4 = func_0x00018000c510(0x180858988);
          func_0x0001802e1570(uVar4,0x1807cbc10,0x18076c890);
          func_0x00018000cfe0(uVar4);
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
  }
  if (*(char *)(param_1 + 0xf1) == '\0') {
    func_0x0001803718e0(0x180769d98,0x180805be4);
    if (*(char *)(lVar3 + 0x83) == '\0') {
      FUN_1801b5c40(param_1,lVar3);
      return;
    }
    FUN_1801b7320(param_1,lVar3);
    return;
  }
  func_0x000180303090(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

