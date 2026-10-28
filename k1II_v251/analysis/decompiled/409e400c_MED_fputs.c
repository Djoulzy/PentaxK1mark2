/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fputs(int param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 auStack_2c [2];
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_24);
  iVar3 = FUN_4067992c();
  piVar6 = *(int **)(iVar3 + 0x10);
  FUN_4067ca30(piVar6 != (int *)0x0,uRam409e3450,uRam409e344c,0x51e,uRam409e4198);
  piVar1 = piRam409e419c;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (*piRam409e419c != 0) {
      uVar4 = FUN_406832d8(0x400);
      FUN_4067a4ec(uVar4,0x400);
      for (iVar3 = 1; iVar3 < iStack_24; iVar3 = iVar3 + 1) {
        FUN_407040fc(uVar4,param_2[iVar3]);
        if (iVar3 == iStack_24 + -1) {
          uVar5 = 0x409e415c;
        }
        else {
          uVar5 = 0x409e41a0;
        }
        FUN_407040fc(uVar4,uVar5);
      }
      uVar5 = FUN_4068312c(uVar4);
      iVar3 = (**(code **)(*piVar6 + 0x20))(piVar6,*piVar1,uVar4,uVar5);
      if (iVar3 == 0) {
        uVar5 = 0x409e41ec;
      }
      else {
        uVar5 = 0x409e41d4;
      }
      FUN_4067cd44(uVar5);
      FUN_40683358(uVar4);
      return 0xffffffff;
    }
    FUN_4067cd44(0x409e41a4);
  }
  auStack_2c[0] = *(undefined4 *)(iRam409e41b8 + 0x38);
  FUN_40679338(*param_2,0x409e41bc,auStack_2c,1);
  return 0xffffffff;
}

