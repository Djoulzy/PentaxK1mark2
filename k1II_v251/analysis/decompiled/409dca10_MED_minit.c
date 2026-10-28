/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_minit(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    uVar7 = 0;
    iVar6 = 0;
    if ((1 < iStack_18) && (iVar6 = FUN_4066f214(param_2[1]), iVar6 != 0)) {
      if (iVar6 != 1) goto LAB_409dca68;
      uVar7 = 1;
    }
    uVar3 = FUN_4035f1e4();
    piVar4 = (int *)FUN_4035fcdc(uVar3,uVar7);
    FUN_4067ca30(piVar4 != (int *)0x0,0x409dcb94,0x409dcb7c,0xa1,uRam409dcbec);
    iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4);
    puVar1 = puRam409dcb30;
    if (iVar5 == 0) {
      FUN_4067cd44(0x409dcc28,iVar6);
      *puVar1 = 0;
    }
    else {
      iVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,0);
      *puVar1 = (char)iVar5;
      if (iVar5 == 0) {
        uVar3 = 0x409dcbf0;
      }
      else {
        uVar3 = 0x409dcc0c;
      }
      FUN_4067cd44(uVar3,iVar6);
    }
    uVar3 = 0;
  }
  else {
LAB_409dca68:
    uStack_24 = *(undefined4 *)(iRam409dcb40 + 8);
    uStack_20 = *(undefined4 *)(iRam409dcb40 + 0xc);
    FUN_40679338(*param_2,0x409dcbe0,&uStack_24,2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

