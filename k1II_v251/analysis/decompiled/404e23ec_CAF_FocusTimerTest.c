/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_FocusTimerTest(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  FUN_4067cd44(0x404e2520);
  iVar2 = FUN_404c0eec();
  piVar6 = *(int **)(iVar2 + 8);
  uVar7 = FUN_404c0eec();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar2 = *(int *)((int)uVar7 + 4);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 4;
  }
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  (**(code **)(*piVar6 + 0x18))(piVar6,iVar4);
  if (param_1 < 2) {
    return 0;
  }
  uVar3 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
  if (param_1 < 3) {
    FUN_404c40ec(piVar6);
    FUN_404c46b4(piVar6,uVar3,0);
    FUN_4067ab8c(10);
LAB_404e24ac:
    FUN_404c471c(piVar6);
    FUN_404c4128(piVar6);
  }
  else {
    sVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 8),0);
    if (sVar1 == 0) {
      FUN_404c40ec(piVar6);
      uVar5 = 0;
    }
    else {
      if (sVar1 != 1) {
        if (sVar1 != 2) {
          return 0;
        }
        goto LAB_404e24ac;
      }
      FUN_404c40ec(piVar6);
      uVar5 = 1;
    }
    FUN_404c46b4(piVar6,uVar3,uVar5);
  }
  return 0;
}

