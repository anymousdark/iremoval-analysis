/* 180542810  Action  body=713 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Action(int param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00018000f220(&uStack_38);
  if (param_1 == 1) {
    lVar3 = func_0x0001801b4d10();
    func_0x0001801b48b0(lVar3,3);
    lVar3 = func_0x0001801ba100(*(undefined4 *)(lVar3 + 0xd0));
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    uVar4 = func_0x00018000c510(0x180893b38);
    func_0x0001804d4b90(uVar4);
    uVar5 = func_0x00018000c550();
    func_0x00018035b1d0(uVar5,uVar6,3,1,1,0x1000,0,0);
    uVar6 = func_0x0001804ce960(uVar4,uVar5);
    (*pcRam000000018080fd40)(uVar5);
    uVar6 = func_0x0001802e4d00(uVar6);
    func_0x000180318640();
    uVar5 = func_0x000180318c20();
    if (lRam0000000180806748 != 0) {
      func_0x00018000194a();
    }
    if (cRam0000000180806750 == '\0') {
      uVar5 = func_0x0001806d8f60(uVar5,0x1807629f0);
    }
    else {
      uVar5 = func_0x000180324060(0x1807629f0);
    }
    iVar2 = func_0x0001802d3ee0(uVar6,uVar5);
    if (iVar2 == 0) {
      func_0x0001801b4d10();
      func_0x0001801b57d0();
    }
    (*pcRam000000018080fd40)(uVar4);
    if (*(longlong *)(_DAT_180fe0ea8 + 8) != 0) {
      uVar6 = func_0x00018000c510(0x180858230);
      func_0x0001802dcfc0(uVar6,0x18077f450);
      func_0x00018000cfe0(uVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = func_0x00018000c510(0x18089a8c0);
    func_0x00018053a730(uVar6);
    func_0x00018000c720(_DAT_180fe0ea8 + 8,uVar6);
  }
  else if (param_1 == 2) {
    FUN_180542570();
  }
  else if (param_1 == 3) {
    func_0x0001805425a0();
  }
  else if (param_1 == 4) {
    func_0x0001805425d0();
  }
  else if (param_1 == 5) {
    func_0x000180542610();
  }
  else if (param_1 == 6) {
    FUN_180542650();
  }
  else if (param_1 == 7) {
    func_0x000180542690();
  }
  else if (param_1 == 8) {
    func_0x0001801a3930(*(undefined8 *)(*(longlong *)(_DAT_180fe0ea8 + 8) + 0x20),0);
  }
  else if (param_1 == 9) {
    func_0x0001805426d0();
  }
  else if (param_1 == 10) {
    func_0x0001801a3930(*(undefined8 *)(*(longlong *)(_DAT_180fe0ea8 + 8) + 0x28),0);
  }
  func_0x00018000f380(&uStack_38);
  return;
}

