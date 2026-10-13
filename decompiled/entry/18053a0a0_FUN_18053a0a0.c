/* 18053a0a0  FUN_18053a0a0  body=327 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18053a0a0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = func_0x00018000c550(0x180839620);
  func_0x0001801b4370(lVar2);
  lVar3 = func_0x00018000c510(0x180839830);
  *(undefined8 *)(lVar3 + 8) = 0x1807c4e08;
  uVar4 = func_0x0001802d63a0(0x18075a0d0,param_1);
  uVar4 = func_0x0001802d5660(0x180760bb8,uVar4);
  func_0x00018000c720(lVar3 + 0x10,uVar4);
  *(undefined1 *)(lVar3 + 0x83) = 0;
  *(undefined1 *)(lVar3 + 0x7e) = 1;
  *(undefined1 *)(lVar3 + 0x7c) = 1;
  func_0x0001801b44d0(lVar2,lVar3);
  func_0x0001801b4fc0(lVar2);
  lVar3 = func_0x00018000c510(0x1808e28b0);
  func_0x00018000c720(lVar3 + 8,*(undefined8 *)(_DAT_180fe2178 + 8));
  func_0x0001801b4540(lVar2);
  lVar5 = func_0x000180362420();
  while (lVar5 != 0) {
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    uVar1 = *(uint *)(lVar3 + 0x10);
    if (uVar1 < *(uint *)(*(longlong *)(lVar3 + 8) + 8)) {
      *(uint *)(lVar3 + 0x10) = uVar1 + 1;
      func_0x00018000c720(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)uVar1 * 8);
    }
    else {
      func_0x000180645350(lVar3);
    }
    func_0x0001801b4540(lVar2);
    lVar5 = func_0x000180362420();
  }
  if (*(char *)(lVar2 + 0xf1) == '\0') {
    func_0x0001801b4670();
    *(undefined1 *)(lVar2 + 0xf1) = 1;
  }
  func_0x0001802d2050();
  return lVar3;
}

