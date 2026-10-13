/* 1801b8780  FUN_1801b8780  body=247 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801b8780(int param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28 [3];
  uint local_1c;
  
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  if (param_1 != 0) {
    iVar2 = FUN_1801b8730(param_2);
    if (iVar2 == 0) {
      local_38 = (longlong *)func_0x0001801af290(0x101000,0);
      iVar2 = (**(code **)(*local_38 + 0x30))(local_38);
      if (iVar2 == 0) {
        local_28[0] = 0;
        iVar2 = FUN_1801b8f70(local_38,local_28,local_30);
        local_1c = (uint)(iVar2 == 0);
      }
      else {
        lVar4 = func_0x000180004bd4();
        if (*(int *)(lVar4 + 0xf8) != 0x57) {
          (*_DAT_18080ef30)(local_38);
          goto LAB_1801b882c;
        }
        local_1c = 0;
      }
      FUN_1801b8877(auStack_58);
      return (ulonglong)local_1c;
    }
  }
LAB_1801b882c:
  lVar4 = FUN_1801b8bd0(param_2);
  if (lVar4 != 0) {
    uVar3 = func_0x0001806c84b0(lVar4,param_1,0,*(undefined4 *)(lVar4 + 8));
    return (ulonglong)(~uVar3 >> 0x1f);
  }
  func_0x000180302d90(2);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

