/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mcheck(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    uVar5 = 0;
    iVar4 = 0;
    if ((1 < iStack_18) && (iVar4 = FUN_4066f214(param_2[1]), iVar4 != 0)) {
      if (iVar4 != 1) goto LAB_409dc968;
      uVar5 = 1;
    }
    uVar2 = FUN_4035f1e4();
    piVar3 = (int *)FUN_4035fcdc(uVar2,uVar5);
    FUN_4067ca30(piVar3 != (int *)0x0,0x409dcb94,0x409dcb7c,0x62,uRam409dcb78);
    FUN_4067cd44(0x409dcba0,iVar4);
    uVar2 = (**(code **)(*piVar3 + 0x24))(piVar3);
    FUN_4067cd44(0x409dcbb8,uVar2);
    uVar2 = (**(code **)(*piVar3 + 0x28))(piVar3);
    FUN_4067cd44(0x409dcbcc,uVar2);
    uVar2 = 0;
  }
  else {
LAB_409dc968:
    uStack_24 = *puRam409dcb40;
    uStack_20 = puRam409dcb40[1];
    FUN_40679338(*param_2,0x409dcb44,&uStack_24,2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

