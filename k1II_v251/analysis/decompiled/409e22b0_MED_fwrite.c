/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fwrite(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  
  iVar7 = 0;
  uStack_20 = param_1;
  puStack_1c = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_20);
  piVar1 = piRam409e1744;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (*piRam409e1744 == 0) {
      FUN_4067cd44(uRam409e2578);
    }
    else {
      iVar3 = FUN_4067992c();
      piVar6 = *(int **)(iVar3 + 0x10);
      FUN_4067ca30(piVar6 != (int *)0x0,uRam409e1ee4,uRam409e1ee0,0x1a6,uRam409e254c);
      iVar3 = iRam409e226c;
      pcVar2 = (char *)FUN_406832d8(iRam409e226c);
      FUN_4067cd44(0x409e2550);
      do {
        iVar4 = FUN_408a594c(pcVar2,iVar3);
        if (iVar4 < 0) {
          if (iVar7 != 0) {
LAB_409e23c8:
            FUN_4067cd44(0x409e257c);
            goto LAB_409e23fc;
          }
          break;
        }
        FUN_4067cd44(0x409e2574);
        iVar7 = FUN_4068312c(pcVar2);
        if (iVar7 == 1) {
          if (*pcVar2 == '.') goto LAB_409e23c8;
        }
        else if (iVar3 < iVar7) break;
        iVar7 = (**(code **)(*piVar6 + 0x20))(piVar6,*piVar1,pcVar2);
        if (iVar7 == 0) break;
        *pcVar2 = '\n';
        iVar7 = (**(code **)(*piVar6 + 0x20))(piVar6,*piVar1,pcVar2,1);
      } while (iVar7 != 0);
      FUN_40635960(piVar6);
      uVar5 = FUN_409e1684();
      FUN_4067cd44(0x409e2594,uVar5);
LAB_409e23fc:
      FUN_40683358(pcVar2);
    }
    uVar5 = 0;
  }
  else {
    uStack_24 = *(undefined4 *)(iRam409e17d4 + 0xc);
    FUN_40679338(*param_2,0x409e25b0,&uStack_24,1);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

