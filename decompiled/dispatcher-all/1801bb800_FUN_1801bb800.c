/* 1801bb800  FUN_1801bb800  body=338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801bb800(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  longlong local_48;
  
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uVar6 = _DAT_180805bf8;
  while( true ) {
    local_70 = (ulonglong)uVar6;
    func_0x00018000c9a0(local_98);
    lVar3 = func_0x0001800bf9f6(local_70);
    func_0x00018000c9f0(local_98);
    if (lVar3 == 0) {
      func_0x000180303200();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    local_50 = 0;
    local_48 = lVar3;
    iVar2 = FUN_1801b05c0(5,lVar3,uVar6);
    if (iVar2 != -0x3ffffffc) break;
    uVar6 = local_50 + 0x2800;
    func_0x0001803a1ef0(local_48);
  }
  if (-1 < iVar2) {
    _DAT_180805bf8 = local_50 + 0x2800;
    if (-1 < local_50) {
      lStack_60 = local_48;
      local_58 = CONCAT44(local_58._4_4_,local_50);
      local_68 = FUN_1801bb980(&lStack_60,param_1,param_2);
      FUN_1801bb953(auStack_b8);
      return local_68;
    }
    uVar4 = func_0x000180302930();
    return uVar4;
  }
  uVar4 = func_0x00018000c510(0x18085d748);
  func_0x00018032b830(uVar4,iVar2);
  uVar5 = func_0x00018000c510(0x18085a558);
  func_0x0001802f9d40(uVar5,0x180776c20,uVar4);
  uVar4 = func_0x00018000cfe0(uVar5);
  return uVar4;
}

