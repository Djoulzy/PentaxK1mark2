/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_Change(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_18;
  int iStack_14;
  
  iStack_18 = param_1;
  iStack_14 = param_2;
  FUN_4067cd44(0x403bd3e0,param_1);
  FUN_402675cc();
  iVar1 = FUN_40449e00();
  piVar3 = *(int **)(iVar1 + 4);
  iVar1 = FUN_406793bc(&iStack_18,param_2);
  if (iVar1 == 0) {
    if (1 < iStack_18) {
      uVar2 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0,10);
      FUN_4067cd44(0x403bd550,uVar2);
      (**(code **)(*piVar3 + 0x18))(piVar3,uRam403bd568,uVar2);
    }
  }
  else {
    FUN_4067cd44(0x403bd400);
  }
  FUN_4067cd44(0x403bd56c);
  return 0;
}

