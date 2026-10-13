/* 1801b4670  validate  body=478 */

void validate(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0xe4) == '\0') && (*(char *)(param_1 + 0xe5) == '\0')) {
    return;
  }
  func_0x00018032f430();
  FUN_1801b5250(param_1);
  func_0x00018032f6a0(param_1);
  if (*(char *)(param_1 + 0xe5) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),1);
    func_0x0001802d2050();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0xe5) = 0;
  }
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x180760738;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0xdc) == 2) {
      lVar1 = *(longlong *)(param_1 + 0x88);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x55) = 1;
        lVar1 = *(longlong *)(lVar1 + 0x30);
        if (*(char *)(lVar1 + 0x24) != '\0') goto LAB_1801b479c;
        iVar3 = func_0x0001803328b0(lVar1);
        if (iVar3 != 0) {
          func_0x000180332920(lVar1,0);
        }
      }
    }
    else if (*(int *)(param_1 + 0xdc) != 0) goto LAB_1801b4784;
    func_0x000180361a60(*(undefined8 *)(param_1 + 0x60),1);
  }
LAB_1801b4784:
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (*(int *)(param_1 + 0xe0) == 2) {
      lVar1 = *(longlong *)(param_1 + 0x90);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x55) = 1;
        lVar1 = *(longlong *)(lVar1 + 0x30);
        if (*(char *)(lVar1 + 0x24) != '\0') {
LAB_1801b479c:
          func_0x000180303190(0x46);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar3 = func_0x0001803328b0(lVar1);
        if (iVar3 != 0) {
          func_0x000180332920(lVar1,0);
        }
      }
    }
    else if (*(int *)(param_1 + 0xe0) != 0) goto LAB_1801b47f7;
    func_0x000180361a60(*(undefined8 *)(param_1 + 0x70),1);
  }
LAB_1801b47f7:
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0xf2) == '\0')) {
    func_0x000180362d40(lVar1,1);
    func_0x0001802d2050(lVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_1801b4eb0();
  return;
}

