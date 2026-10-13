/* 18054f000  FUN_18054f000  body=168 */

void FUN_18054f000(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = func_0x00018000c510(0x18085fba8);
  *(undefined4 *)(lVar2 + 0x20) = 0x7fffffff;
  uVar3 = func_0x00018000c630(0x1809b9178,0x10);
  func_0x00018000c720(lVar2 + 8,uVar3);
  uVar3 = func_0x00018035a5b0(1);
  lVar4 = func_0x000180359f30(param_1,0x18075f3e8,uVar3);
  uVar7 = 0;
  iVar1 = *(int *)(lVar4 + 8);
  if (0 < iVar1) {
    do {
      lVar5 = FUN_18054f0b0(*(undefined8 *)(lVar4 + 0x10 + uVar7 * 8));
      if (lVar5 != 0) {
        func_0x000180341fd0(lVar2,lVar5 + 0xc,*(undefined4 *)(lVar5 + 8));
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar1);
  }
  uVar3 = func_0x000180340c00(lVar2);
  FUN_18054f1f0(uVar3);
  return;
}

