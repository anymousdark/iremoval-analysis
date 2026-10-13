/* 1801b98e0  FUN_1801b98e0  body=772 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801b98e0(longlong param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  
  local_58 = 0;
  if (_DAT_180805910 != 0) {
    func_0x000180001c3c();
  }
  uVar6 = *(undefined8 *)(_DAT_180fdfad8 + 0x28);
  iVar7 = 0xe;
  iVar9 = 0;
  do {
    if (param_2 == '\0') {
      uVar5 = func_0x0001802d5660(0x180776ef8,*(undefined8 *)(param_1 + 0x18));
      local_68 = (longlong *)func_0x0001800d0280(uVar6,uVar5,0,0);
      if ((local_68 != (longlong *)0x0) && (*local_68 != 0x1809b8ce8)) {
        local_68 = (longlong *)func_0x0001803704c0(0x1809b8ce8,local_68);
      }
    }
    else {
      uVar5 = func_0x0001802d5660(0x18077cd80,*(undefined8 *)(param_1 + 0x18));
      local_68 = (longlong *)func_0x0001800d0280(uVar6,uVar5,0,0);
      if ((local_68 != (longlong *)0x0) && (*local_68 != 0x1809b8ce8)) {
        local_68 = (longlong *)func_0x0001803704c0(0x1809b8ce8,local_68);
      }
    }
    if ((local_68 != (longlong *)0x0) && ((int)local_68[1] != 0)) break;
    iVar7 = iVar7 + -1;
    if (iVar9 == 0) {
      iVar9 = 10;
    }
    else {
      func_0x000180331720(iVar9);
      iVar9 = iVar9 * 2;
    }
  } while (0 < iVar7);
  if (local_68 == (longlong *)0x0) {
    uVar6 = func_0x00018000c510(0x180902de0);
    func_0x0001805aeca0(uVar6,0,0);
  }
  else {
    uVar6 = func_0x00018000c510(0x180902de0);
    uVar1 = *(uint *)(local_68 + 1);
    func_0x0001805aeca0(uVar6,uVar1 >> 1,0);
    iVar9 = 0;
    if (uVar1 >> 1 != 0) {
      do {
        uVar4 = iVar9 * 2;
        if (uVar1 <= uVar4 + 1) {
LAB_1801b9b1a:
          uVar6 = func_0x00018039d020();
          return uVar6;
        }
        lVar8 = local_68[(ulonglong)(uVar4 + 1) + 2];
        if (lVar8 == 0) {
          lVar8 = 0x180759410;
        }
        if (uVar1 <= uVar4) goto LAB_1801b9b1a;
        lVar3 = local_68[(ulonglong)uVar4 + 2];
        if (_DAT_180806380 != 0) {
          func_0x000180002dbc();
        }
        if (lVar3 == 0) {
          local_48[0] = 0;
LAB_1801b9b1f:
          if (param_2 == '\0') {
            uVar6 = func_0x00018000c510(0x18085a558);
            uVar5 = FUN_1801b1310(0x180771ba0,local_68[(ulonglong)uVar4 + 2]);
            func_0x0001802f9d10(uVar6,uVar5);
            uVar6 = func_0x00018000cfe0(uVar6);
            return uVar6;
          }
          uVar6 = func_0x00018000c510(0x18085a558);
          uVar5 = FUN_1801b1310(0x180771ad8,local_68[(ulonglong)uVar4 + 2]);
          func_0x0001802f9d10(uVar6,uVar5);
          uVar6 = func_0x00018000cfe0(uVar6);
          return uVar6;
        }
        uVar2 = *(undefined4 *)(lVar3 + 8);
        if (*(longlong *)(_DAT_180fe04e8 + 0x18) == 0) {
          uVar5 = func_0x000180327160();
        }
        else {
          uVar5 = func_0x0001803272a0();
        }
        local_58 = lVar3 + 0xc;
        local_50 = uVar2;
        iVar7 = func_0x0001806be400(&local_58,7,uVar5,local_48);
        if (iVar7 != 0) goto LAB_1801b9b1f;
        func_0x0001805af0c0(uVar6,local_48[0],lVar8,1);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uVar1 >> 1));
    }
  }
  func_0x0001800cfcd0();
  return uVar6;
}

