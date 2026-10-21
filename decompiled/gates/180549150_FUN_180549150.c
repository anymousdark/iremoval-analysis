/* query=18054918b containing=180549150 name=FUN_180549150 body=1244 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180549150(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uVar1 = *param_1;
  switch(*(undefined4 *)(param_1 + 5)) {
  case 0:
    lStack_38 = param_1[8];
    uStack_30 = param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    break;
  case 1:
    lStack_48 = param_1[10];
    uStack_40 = param_1[0xb];
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    goto LAB_1805492f2;
  case 2:
    lStack_58 = param_1[0xc];
    uStack_50 = param_1[0xd];
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    goto LAB_180549416;
  case 3:
    lStack_68 = param_1[0xe];
    uStack_60 = param_1[0xf];
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    goto LAB_180549508;
  case 4:
    lStack_68 = param_1[0xe];
    uStack_60 = param_1[0xf];
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    goto LAB_180549603;
  default:
    lStack_38 = FUN_180536fe0(uVar1,param_1[1],param_1[7]);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    if ((*(uint *)(lStack_38 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 5) = 0;
      func_0x00018000c790(param_1 + 8,lStack_38);
      *(undefined4 *)(param_1 + 9) = (undefined4)uStack_30;
      uVar1 = FUN_180702e80(0x1807fe2e0,param_1,param_1 + 6);
      FUN_18071d0a0(0x1807ffc58,&lStack_38,uVar1);
      return;
    }
  }
  if ((*(uint *)(lStack_38 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_38,0);
  }
  func_0x00018000c790(param_1 + 1,*(undefined8 *)(lStack_38 + 0x38));
  lStack_48 = FUN_180536d60(uVar1,param_1[1],param_1[7]);
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if ((*(uint *)(lStack_48 + 0x34) & 0x1600000) == 0) {
    *(undefined4 *)(param_1 + 5) = 1;
    func_0x00018000c790(param_1 + 10,lStack_48);
    *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_40;
    uVar1 = FUN_180702e80(0x1807fe2e0,param_1,param_1 + 6);
    FUN_18071d0a0(0x180803b40,&lStack_48,uVar1);
  }
  else {
LAB_1805492f2:
    if ((*(uint *)(lStack_48 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_48,0);
    }
    func_0x00018000c790(param_1 + 2,*(undefined8 *)(lStack_48 + 0x38));
    (*pcRam0000000180819030)(*(undefined8 *)(param_1[2] + 8),0x1807d1fa0);
    lVar2 = FUN_180530050();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 8) != 7)) ||
       (*(longlong *)(lVar2 + 0xc) != 0x460049005f0053 ||
        *(longlong *)(lVar2 + 0x12) != 0x47004500520046)) {
      uVar1 = func_0x00018000c510(0x18089a0c0);
      uVar3 = FUN_1802d5660(param_1[1],0x18075ae60);
      FUN_180536760(uVar1,7,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_18000cfe0(uVar1);
    }
    lStack_58 = FUN_1805371f0(uVar1,param_1[1],param_1[7],1);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if ((*(uint *)(lStack_58 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 5) = 2;
      func_0x00018000c790(param_1 + 0xc,lStack_58);
      *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_50;
      uVar1 = FUN_180702e80(0x1807fe2e0,param_1,param_1 + 6);
      FUN_18070e670(0x180801ec8,&lStack_58,uVar1);
    }
    else {
LAB_180549416:
      if ((*(uint *)(lStack_58 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_58,0);
      }
      param_1[4] = *(undefined8 *)(lStack_58 + 0x38);
      lVar2 = param_1[4];
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        (*pcRam0000000180819030)(*(undefined8 *)(param_1[2] + 8),0x1807d2018);
        lVar4 = FUN_18052fd50();
        lStack_68 = FUN_180536ce0(uVar1,lVar2,*(undefined8 *)(lVar4 + 0x10),param_1[7]);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if ((*(uint *)(lStack_68 + 0x34) & 0x1600000) == 0) {
          *(undefined4 *)(param_1 + 5) = 3;
          func_0x00018000c790(param_1 + 0xe,lStack_68);
          *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_60;
          uVar1 = FUN_180702e80(0x1807fe2e0,param_1,param_1 + 6);
          FUN_18071d0a0(0x180804560,&lStack_68,uVar1);
          return;
        }
LAB_180549508:
        if ((*(uint *)(lStack_68 + 0x34) & 0x11000000) != 0x1000000) {
          FUN_180373b40(lStack_68,0);
        }
        func_0x00018000c790(param_1 + 3,*(undefined8 *)(lStack_68 + 0x38));
        lStack_68 = FUN_180537190(uVar1,param_1[4],param_1[7]);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if ((*(uint *)(lStack_68 + 0x34) & 0x1600000) == 0) {
          *(undefined4 *)(param_1 + 5) = 4;
          func_0x00018000c790(param_1 + 0xe,lStack_68);
          *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_60;
          uVar1 = FUN_180702e80(0x1807fe2e0,param_1,param_1 + 6);
          FUN_18071d0a0(0x180804560,&lStack_68,uVar1);
          return;
        }
LAB_180549603:
        if ((*(uint *)(lStack_68 + 0x34) & 0x11000000) != 0x1000000) {
          FUN_180373b40(lStack_68,0);
        }
        lVar2 = param_1[3];
      }
      *(undefined4 *)(param_1 + 5) = 0xfffffffe;
      param_1[2] = 0;
      param_1[3] = 0;
      plVar5 = param_1 + 6;
      if (*plVar5 == 0) {
        if (lVar2 == 0) {
          if (lRam0000000180809df8 != 0) {
            func_0x00018000471c();
          }
          lVar4 = *(longlong *)(_DAT_180fe5ae8 + 8);
        }
        else {
          lVar4 = func_0x00018000c510(0x1809ace88);
          *(undefined4 *)(lVar4 + 0x34) = 0x1000000;
          func_0x00018000c720(lVar4 + 0x38,lVar2);
        }
        func_0x00018000c790(plVar5,lVar4);
      }
      else {
        FUN_180646380(0x1809ad510,*plVar5,lVar2);
      }
    }
  }
  return;
}

