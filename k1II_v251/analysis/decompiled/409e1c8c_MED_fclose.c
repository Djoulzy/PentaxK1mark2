/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fclose(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_14);
  piVar1 = piRam409e1744;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (*piRam409e1744 != 0) {
      iVar3 = FUN_4067992c();
      piVar5 = *(int **)(iVar3 + 0x10);
      FUN_4067ca30(piVar5 != (int *)0x0,uRam409e1ee4,uRam409e1ee0,0xff,uRam409e1edc);
      iVar3 = (**(code **)(*piVar5 + 0x18))(piVar5,*piVar1);
      if (iVar3 == 0) {
        FUN_40635960(piVar5);
        uVar4 = FUN_409e1684();
        FUN_4067cd44(0x409e1f10,uVar4);
      }
      else {
        FUN_4067cd44(0x409e1ee8);
      }
      return 0;
    }
    FUN_4067cd44(0x409e1f00);
  }
  else {
    auStack_1c[0] = *puRam409e17d4;
    FUN_40679338(*param_2,0x409e1f2c,auStack_1c,1);
  }
  return 0xffffffff;
}

