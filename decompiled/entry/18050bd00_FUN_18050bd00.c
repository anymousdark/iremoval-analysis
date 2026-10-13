/* 18050bd00  FUN_18050bd00  body=856 */

/* WARNING: Removing unreachable block (ram,0x00018050bd89) */
/* WARNING: Removing unreachable block (ram,0x00018050c040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18050bd00(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180521d90(7);
  }
  if ((*(byte *)(param_1 + 0x40) & 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8);
  }
  local_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (uVar1 <= *(uint *)(param_2 + 8)) {
    lVar2 = func_0x00018000c510(0x1808e28b0);
    func_0x00018000c720(lVar2 + 8,*(undefined8 *)(_DAT_180fe2178 + 8));
    lVar3 = _DAT_180fe0e00;
    uStack_40 = 0xffffffff00000000;
    lStack_50 = lVar2;
    local_48 = param_2;
    if ((*(byte *)(param_1 + 0x40) & 0x40) == 0) {
      lVar2 = *(longlong *)(_DAT_180fe0e00 + 0x38);
      if (lVar2 == 0) {
        lVar2 = func_0x00018000c510(0x18099cc30);
        func_0x000180006a6a(lVar2,*(undefined8 *)(lVar3 + 8));
        func_0x00018000c720(lVar3 + 0x38,lVar2);
      }
      local_60 = param_2 + 0xc;
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_2 + 8));
      func_0x00018071e300(param_1,0x180803d68,param_2,&local_60,uVar1,&lStack_50,lVar2,2,1);
      lVar3 = lStack_50;
      if (*(int *)(lStack_50 + 0x10) == 0) {
        lVar3 = func_0x00018000c630(0x1809b8ce8,1);
        func_0x00018000c720(lVar3 + 0x10,param_2);
        return lVar3;
      }
      uVar4 = func_0x0001802d8d30(param_2,uStack_40 & 0xffffffff);
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      uVar1 = *(uint *)(lVar3 + 0x10);
      if (uVar1 < *(uint *)(*(longlong *)(lVar3 + 8) + 8)) {
        *(uint *)(lVar3 + 0x10) = uVar1 + 1;
        func_0x00018000c720(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)uVar1 * 8,uVar4);
      }
      else {
        func_0x000180645350(lVar3,uVar4);
      }
    }
    else {
      uStack_40 = CONCAT44(0xffffffff,*(undefined4 *)(param_2 + 8));
      lVar2 = *(longlong *)(_DAT_180fe0e00 + 0x40);
      if (lVar2 == 0) {
        lVar2 = func_0x00018000c510(0x18099cc30);
        func_0x000180006a76(lVar2,*(undefined8 *)(lVar3 + 8));
        func_0x00018000c720(lVar3 + 0x40,lVar2);
      }
      local_60 = param_2 + 0xc;
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_2 + 8));
      func_0x00018071e300(param_1,0x180803d68,param_2,&local_60,uVar1,&lStack_50,lVar2,2,1);
      lVar3 = lStack_50;
      if (*(int *)(lStack_50 + 0x10) == 0) {
        lVar3 = func_0x00018000c630(0x1809b8ce8,1);
        func_0x00018000c720(lVar3 + 0x10,param_2);
        return lVar3;
      }
      uVar4 = func_0x0001802d8d80(param_2,0,uStack_40 & 0xffffffff);
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      uVar1 = *(uint *)(lVar3 + 0x10);
      if (uVar1 < *(uint *)(*(longlong *)(lVar3 + 8) + 8)) {
        *(uint *)(lVar3 + 0x10) = uVar1 + 1;
        func_0x00018000c720(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)uVar1 * 8,uVar4);
      }
      else {
        func_0x000180645350(lVar3,uVar4);
      }
      func_0x000180645e50(lStack_50,0,*(undefined4 *)(lStack_50 + 0x10));
    }
    lVar3 = func_0x000180645ec0();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180521e10(0xe,0);
}

