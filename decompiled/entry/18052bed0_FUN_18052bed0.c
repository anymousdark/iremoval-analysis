/* 18052bed0  FUN_18052bed0  body=265 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052bed0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  (**(code **)(lVar3 + 0xf8))(param_1,0,0);
  uVar2 = func_0x00018000c630(0x1809b90e0,8);
  iVar1 = (**(code **)(lVar3 + 0x108))(param_1,uVar2,0,8);
  if (iVar1 != 8) {
    lVar3 = func_0x00018000c510(0x180898ed0);
    func_0x0001802dcfb0(lVar3);
    *(undefined8 *)(lVar3 + 8) = 0x180786a60;
    func_0x00018000cfe0(lVar3);
    return;
  }
  if (_DAT_1808065e8 != 0) {
    func_0x00018000313c();
  }
  lVar3 = func_0x0001803510a0(*(undefined8 *)(_DAT_180fe0688 + 8),uVar2,0,6);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == 6)) &&
     (*(longlong *)(lVar3 + 0xc) == 0x69006c00700062 && *(int *)(lVar3 + 0x14) == 0x740073)) {
    return;
  }
  lVar3 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(lVar3);
  *(undefined8 *)(lVar3 + 8) = 0x180786ae0;
  func_0x00018000cfe0(lVar3);
  return;
}

