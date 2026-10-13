/* 18050d080  FUN_18050d080  body=424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050d080(undefined8 param_1,longlong param_2,char param_3,char param_4,undefined8 param_5,
                  undefined4 param_6)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  if (_DAT_180806af8 != 0) {
    func_0x000180003e1c();
  }
  lVar2 = _DAT_180fe0e10;
  iVar3 = func_0x00018067ba80(*(undefined8 *)(_DAT_180fe0e10 + 8),param_2,&lStack_30);
  if (iVar3 != 0) {
    iVar3 = func_0x0001802d3d20(param_2,0x1807c1ff0);
    if (iVar3 == 0) {
      if (((param_4 != '\0') && (*(int *)(param_2 + 8) == 2)) &&
         ((iVar3 = *(int *)(param_2 + 0xc), iVar3 == 0x6c004c ||
          ((iVar3 == 0x75004c || (iVar3 == 0x74004c)))))) {
        plVar4 = (longlong *)func_0x00018067b280(*(undefined8 *)(lVar2 + 8),0x1807c1ff0);
        if (plVar4 == (longlong *)0x0) {
          func_0x000180724f60(0x1807f91a8,0x1807c1ff0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lStack_30 = *plVar4;
      }
      uVar5 = FUN_18050ce70(param_1);
      if (param_3 != '\0') {
        uVar6 = 0;
        if (0 < *(int *)(lStack_30 + 8)) {
          do {
            if (*(uint *)(lStack_30 + 8) <= uVar6) {
              func_0x00018039d020();
              return;
            }
            func_0x000180341740(uVar5,-*(short *)(lStack_30 + 0xc + (ulonglong)uVar6 * 2));
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < *(int *)(lStack_30 + 8));
        }
        return;
      }
      func_0x000180341280(uVar5,lStack_30);
      return;
    }
  }
  FUN_18050ef00(&uStack_40,param_2,param_3,param_5,param_6);
  local_50 = uStack_40;
  uStack_48 = local_38;
  FUN_18050cf20(param_1,&local_50);
  return;
}

