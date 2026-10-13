/* 18052ef40  FUN_18052ef40  body=234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18052ef40(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (_DAT_1808065e8 != 0) {
    func_0x00018000313c();
  }
  lVar2 = _DAT_180fe0688;
  lVar1 = func_0x0001803510a0(*(undefined8 *)(_DAT_180fe0688 + 8),param_1,0,6);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 8) == 6)) &&
     (*(longlong *)(lVar1 + 0xc) == 0x69006c00700062 && *(int *)(lVar1 + 0x14) == 0x740073)) {
    lVar2 = func_0x0001803510a0(*(undefined8 *)(lVar2 + 8),param_1,6,2);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 8) == 2)) && (*(int *)(lVar2 + 0xc) == 0x300030)) {
      return 1;
    }
    uVar3 = func_0x00018000c510(0x18085ab98);
    uVar4 = func_0x0001802d5700(0x1807a7df0,lVar2,0x18075ad78);
    func_0x0001802fb7f0(uVar3,uVar4);
    uVar3 = func_0x00018000cfe0(uVar3);
    return uVar3;
  }
  return 0;
}

