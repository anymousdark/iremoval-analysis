/* 18052e890  FUN_18052e890  body=498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_18052e890(byte param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  byte bVar14;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (_DAT_180806b28 != 0) {
    func_0x000180003edc();
  }
  bVar14 = param_1 & 0xf0;
  if (bVar14 == 0) {
    if (param_2 == 0) {
      plVar11 = (longlong *)func_0x00018000c510(0x180898dd0);
      return plVar11;
    }
    if (param_2 == 0xf) {
      plVar11 = (longlong *)func_0x00018000c510(0x180898c80);
      return plVar11;
    }
  }
  if (bVar14 == 0x60) {
    plVar11 = (longlong *)func_0x00018000c510(0x1808990c0);
    plVar11[2] = 0x180759410;
    FUN_1805305a0(plVar11,0x180759410);
    *(undefined1 *)(plVar11 + 3) = 1;
    return plVar11;
  }
  iVar10 = func_0x000180595600(*(undefined8 *)(_DAT_180fe0e80 + 8),bVar14,&uStack_20);
  if (iVar10 != 0) {
    uVar12 = func_0x0001802d3060(uStack_20);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(_DAT_180fe07e0 + 8) + 0x50))
                        (*(longlong **)(_DAT_180fe07e0 + 8),uVar12,0);
    if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0x180898f90)) {
      plVar11 = (longlong *)func_0x0001803706a0(0x180898f90,plVar11);
    }
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)func_0x00018000c510(0x180898dd0);
    }
    return plVar11;
  }
  func_0x000180373230(&local_48,0x1a,1);
  uVar9 = uRam00000001807bc7cc;
  uVar12 = _DAT_1807bc7c4;
  uVar8 = uRam00000001807bc7c0;
  uVar7 = uRam00000001807bc7bc;
  uVar6 = uRam00000001807bc7b8;
  if ((uint)local_28 < (uint)local_38) {
    plVar11 = (longlong *)func_0x000180302930();
    return plVar11;
  }
  puVar1 = (undefined4 *)(lStack_30 + (local_38 & 0xffffffff) * 2);
  if ((uint)local_28 - (uint)local_38 < 0x1a) {
    func_0x0001803735a0(&local_48,0x1807bc7a8);
  }
  else {
    uVar2 = CONCAT44(_DAT_1807bc7d8,_DAT_1807bc7d4);
    uVar4 = CONCAT44(uRam00000001807bc7e0,uRam00000001807bc7dc);
    uVar3 = CONCAT44(uRam00000001807bc7dc,_DAT_1807bc7d8);
    uVar5 = CONCAT44(uRam00000001807bc7e4,uRam00000001807bc7e0);
    *puVar1 = _DAT_1807bc7b4;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(undefined8 *)(puVar1 + 4) = uVar12;
    *(undefined8 *)(puVar1 + 6) = uVar9;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    *(undefined8 *)(puVar1 + 10) = uVar4;
    *(undefined8 *)(puVar1 + 9) = uVar3;
    *(undefined8 *)(puVar1 + 0xb) = uVar5;
    local_38 = CONCAT44(local_38._4_4_,(uint)local_38 + 0x1a);
  }
  func_0x0001806acc20(&local_48,param_1);
  lVar13 = func_0x00018000c510(0x180898ed0);
  uVar12 = func_0x0001803733f0(&local_48);
  func_0x0001802dcfb0(lVar13);
  func_0x00018000c720(lVar13 + 8,uVar12);
  plVar11 = (longlong *)func_0x00018000cfe0(lVar13);
  return plVar11;
}

