/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fread(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_1c);
  piVar1 = piRam409e1744;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (*piRam409e1744 == 0) {
      FUN_4067cd44(0x409e1f00);
    }
    else {
      iVar3 = FUN_4067992c();
      piVar6 = *(int **)(iVar3 + 0x10);
      FUN_4067ca30(piVar6 != (int *)0x0,uRam409e1ee4,uRam409e1ee0,0x16c,uRam409e2268);
      uVar5 = uRam409e226c;
      uVar4 = FUN_406832d8(uRam409e226c);
      iVar3 = (**(code **)(*piVar6 + 0x1c))(piVar6,*piVar1,uVar4,uVar5);
      if (iVar3 == 0) {
        FUN_40635960(piVar6);
        uVar5 = FUN_409e1684();
        FUN_4067cd44(0x409e2288,uVar5);
      }
      else {
        FUN_4067ab8c(0xf);
        FUN_4067cd44(0x409e2270);
        FUN_409e2068(uVar4,0x200);
      }
      FUN_40683358(uVar4);
    }
    uVar5 = 0;
  }
  else {
    auStack_24[0] = *(undefined4 *)(iRam409e17d4 + 8);
    FUN_40679338(*param_2,0x409e22a4,auStack_24,1);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

