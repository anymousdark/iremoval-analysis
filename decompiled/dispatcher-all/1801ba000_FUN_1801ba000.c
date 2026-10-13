/* 1801ba000  FUN_1801ba000  body=245 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801ba000(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int local_20 [2];
  
  if (_DAT_180807c00 != 0) {
    func_0x0001800041fc();
  }
  lVar5 = _DAT_180fe2518;
  lVar2 = func_0x0001805a0c00(*(undefined8 *)(_DAT_180fe2518 + 8),0x100);
  while( true ) {
    iVar6 = *(int *)(lVar2 + 8) << 2;
    iVar1 = func_0x0001801af3a0(lVar2,iVar6,local_20);
    if (iVar1 == 0) {
      uVar4 = func_0x00018000c510(0x18085d748);
      func_0x00018032b7e0(uVar4);
      lVar5 = func_0x00018000cfe0(uVar4);
      return lVar5;
    }
    if (local_20[0] != iVar6) break;
    iVar1 = *(int *)(lVar2 + 8);
    func_0x0001805a0e60(*(undefined8 *)(lVar5 + 8),lVar2,0);
    lVar2 = func_0x0001805a0c00(*(undefined8 *)(lVar5 + 8),iVar1 * 2);
  }
  lVar3 = func_0x00018000c630(0x1809b9598,
                              (longlong)((int)((local_20[0] >> 0x1f & 3U) + local_20[0]) >> 2));
  func_0x0001802db4e0(lVar2,lVar3,*(undefined4 *)(lVar3 + 8));
  func_0x0001805a0e60(*(undefined8 *)(lVar5 + 8),lVar2,0);
  return lVar3;
}

