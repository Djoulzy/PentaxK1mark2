/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_FineFocus(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iStack_30;
  int iStack_2c;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  FUN_4067cd44(0x403bd864,param_1);
  iVar1 = FUN_402675cc();
  piVar5 = *(int **)(iVar1 + 0x10);
  FUN_40449e00();
  iVar2 = FUN_406793bc(&iStack_30,param_2);
  iVar1 = iRam403bd88c;
  uVar3 = uRam403bd888;
  if (iVar2 == 0) {
    if (iStack_30 != 2) {
      if (2 < iStack_30) {
        uVar4 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0,10);
        iVar2 = FUN_4020c174(*(undefined4 *)(param_2 + 8),0,10);
        if (iVar2 < 0xb) {
          if (iVar2 < 0) {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 10;
        }
        FUN_4067cd44(0x403bd890,uVar4,iVar2);
        for (iVar6 = 0; iVar6 < iVar2; iVar6 = iVar6 + 1) {
          *(undefined1 *)(iVar1 + 0xb) = 0;
          (**(code **)(*piVar5 + 0x20))(piVar5,uVar3,uVar4);
          iVar7 = 0;
          do {
            if (*(char *)(iVar1 + 0xb) != '\0') goto LAB_403bd7d8;
            FUN_4067ab8c(100);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x1e);
          if (*(char *)(iVar1 + 0xb) == '\0') goto LAB_403bd7f4;
LAB_403bd7d8:
        }
      }
      goto LAB_403bd7e4;
    }
    uVar4 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0,10);
    FUN_4067cd44(0x403bd890,uVar4,0);
    *(undefined1 *)(iVar1 + 0xb) = 0;
    (**(code **)(*piVar5 + 0x20))(piVar5,uVar3,uVar4);
    iVar2 = 0;
    do {
      if (*(char *)(iVar1 + 0xb) != '\0') goto LAB_403bd7e4;
      FUN_4067ab8c(100);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    if (*(char *)(iVar1 + 0xb) != '\0') goto LAB_403bd7e4;
LAB_403bd7f4:
    uVar3 = 0x403bd8e8;
  }
  else {
    uVar3 = 0x403bd400;
  }
  FUN_4067cd44(uVar3);
LAB_403bd7e4:
  FUN_4067cd44(0x403bd8c4);
  return 0;
}

