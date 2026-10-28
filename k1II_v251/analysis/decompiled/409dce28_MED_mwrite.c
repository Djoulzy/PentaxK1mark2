/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mwrite(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_24);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'h')) || (iStack_24 < 3)) {
    uStack_2c = *(undefined4 *)(iRam409dcb40 + 0x18);
    uStack_28 = *(undefined4 *)(iRam409dcb40 + 0x1c);
    FUN_40679338(*param_2,0x409dd07c,&uStack_2c,2);
    return 0xffffffff;
  }
  iVar3 = FUN_4066f214(param_2[1]);
  iVar4 = FUN_4066f214(param_2[2]);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  bVar9 = false;
  if ((3 < iStack_24) &&
     ((iVar5 = FUN_4066f214(param_2[3]), iVar5 < 1 || (bVar9 = iVar5 < 2, 1 < iVar5)))) {
    bVar9 = false;
  }
  uVar6 = FUN_4035f1e4();
  piVar7 = (int *)FUN_4035fcdc(uVar6,bVar9);
  FUN_4067ca30(piVar7 != (int *)0x0,0x409dcb94,0x409dcb7c,0x17e,uRam409dd038);
  iVar5 = (**(code **)(*piVar7 + 0x24))(piVar7);
  pcVar2 = pcRam409dcb30;
  if (iVar5 == 0) {
    FUN_4067cd44(0x409dcc28,bVar9);
  }
  else {
    if (*pcRam409dcb30 == '\0') {
      iVar5 = (**(code **)(*piVar7 + 0xc))(piVar7,0);
      *pcVar2 = (char)iVar5;
      if (iVar5 == 0) {
        FUN_4067cd44(0x409dcbf0);
        return 0;
      }
    }
    uVar1 = iVar4 << 9;
    iVar5 = FUN_406832d8(uVar1);
    FUN_4020f00c(iVar5,uVar1,0xff);
    for (uVar8 = 0; uVar8 < uVar1; uVar8 = uVar8 + 1) {
      *(char *)(iVar5 + uVar8) = (char)uVar8;
    }
    iVar3 = (**(code **)(*piVar7 + 0x18))(piVar7,iVar3,iVar4,iVar5);
    if (iVar3 == 0) {
      uVar6 = 0x409dd05c;
    }
    else {
      uVar6 = 0x409dd03c;
    }
    FUN_4067cd44(uVar6,bVar9);
    FUN_40683358(iVar5);
  }
  return 0;
}

