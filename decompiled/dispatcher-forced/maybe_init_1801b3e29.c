/* 1801b3e29  maybe_init  body=17 */

void maybe_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  int iStack_2c;
  
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  iStack_2c = (int)param_1[1];
  lVar1 = *param_1;
  if (iStack_2c == 0) {
    lStack_40 = param_1[3];
    uStack_38 = param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    iStack_2c = -1;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  else {
    if (iStack_2c == 1) goto code_r0x0001801b3f57;
    if (lRam0000000180806578 != 0) {
      func_0x000180002fbc();
    }
    func_0x00018033cd30(*(undefined8 *)(lRam0000000180fe05e0 + 0x20),&lStack_50,4);
    lStack_40 = lStack_50;
    uStack_38 = uStack_48;
    if (((uStack_48 & 4) != 0) || ((*(uint *)(lStack_50 + 0x34) & 0x1600000) == 0)) {
      *(undefined4 *)(param_1 + 1) = 0;
      func_0x00018000c790(param_1 + 3,lStack_50);
      *(undefined4 *)(param_1 + 4) = (undefined4)uStack_38;
      uVar6 = func_0x00018068bae0(param_1,param_1 + 2);
      func_0x0001806df200(&lStack_40,uVar6);
      return;
    }
  }
  if ((*(uint *)(lStack_40 + 0x34) & 0x11000000) != 0x1000000) {
    func_0x000180373b40();
  }
code_r0x0001801b3f57:
  while( true ) {
    if (iStack_2c == 1) {
      lStack_60 = param_1[5];
      uStack_58 = param_1[6];
      param_1[5] = 0;
      param_1[6] = 0;
      iStack_2c = -1;
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    else {
      lVar10 = *(longlong *)(lVar1 + 0x18);
      if (lVar10 == 0) {
        lVar10 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar10 + 8);
      }
      if (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x24) != '\0') {
        func_0x000180303190(0x46);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lStack_80 = (ulonglong)uVar4 << 0x20;
      lStack_88 = lVar10;
      (**(code **)(**(longlong **)(lVar1 + 8) + 0xd0))
                (*(longlong **)(lVar1 + 8),&lStack_70,&lStack_88,*(longlong *)(lVar1 + 0x30));
      uVar8 = uStack_58;
      lVar10 = lStack_70;
      lStack_60 = lStack_70;
      uStack_58._7_1_ = SUB81(uVar8,7);
      uStack_58._0_7_ = (uint7)(uint6)uStack_68;
      if (lStack_70 != 0) {
        lVar7 = func_0x000180370420(0x180900730,lStack_70);
        if (lVar7 == 0) {
          uVar4 = (*pcRam0000000180819b50)(lVar10,(longlong)uStack_58._4_2_);
        }
        else {
          uVar4 = *(uint *)(lVar7 + 0x34) & 0x1600000;
        }
        if (uVar4 == 0) {
          iStack_2c = 1;
          *(undefined4 *)(param_1 + 1) = 1;
          func_0x00018000c910();
          param_1[5] = lStack_60;
          uVar6 = func_0x00018068bae0(param_1,param_1 + 2);
          func_0x00018070d780(&lStack_60,uVar6);
          return;
        }
      }
    }
    lVar10 = lStack_60;
    if (lStack_60 == 0) {
      uVar8 = uStack_58 & 0xffffffff;
    }
    else {
      lVar7 = func_0x000180370420(0x180900730,lStack_60);
      if (lVar7 == 0) {
        uVar8 = (*pcRam0000000180821430)(lVar10,(longlong)uStack_58._4_2_);
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        if ((*(uint *)(lVar7 + 0x34) & 0x11000000) != 0x1000000) {
          func_0x000180373b40(lVar7,0);
        }
        uVar8 = (ulonglong)*(uint *)(lVar7 + 0x38);
      }
    }
    if ((int)uVar8 == 0) break;
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))
              (*(longlong **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),0,uVar8,
               *(undefined8 *)(lVar1 + 0x20),0);
    func_0x0001803411c0(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x20));
    func_0x0001801b3ae0(lVar1);
    iVar5 = func_0x0001801b3ca0(lVar1);
    if (iVar5 != 0) {
code_r0x0001801b41e9:
      *(undefined4 *)(param_1 + 1) = 0xfffffffe;
      param_1 = param_1 + 2;
      if (*param_1 == 0) {
        if (lRam0000000180806578 != 0) {
          func_0x000180002fbc();
        }
        func_0x00018000c790(param_1,*(undefined8 *)(lRam0000000180fe05e0 + 0x20));
      }
      else {
        func_0x0001805c5600(*param_1,0);
      }
      return;
    }
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x40);
  uStack_78 = uStack_78 & 0xffffffff;
  func_0x00018032f430();
  uStack_78 = CONCAT44(1,(undefined4)uStack_78);
  if (*(int *)(*(longlong *)(lVar1 + 0x48) + 0x1c) + *(int *)(*(longlong *)(lVar1 + 0x48) + 0x18) !=
      0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar9 = func_0x000180340c00();
    func_0x000180645f80(uVar2,uVar9);
    func_0x000180340dc0(*(undefined8 *)(lVar1 + 0x48),0);
  }
  func_0x000180645f80(*(undefined8 *)(lVar1 + 0x40),0);
  if (iStack_2c < 0) {
    func_0x00018032f6a0(uVar6);
  }
  func_0x0001801b3ca0(lVar1,1);
  goto code_r0x0001801b41e9;
}

