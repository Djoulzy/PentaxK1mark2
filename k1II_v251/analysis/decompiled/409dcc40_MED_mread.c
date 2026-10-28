/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mread(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_28 = param_1;
  puStack_24 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_28);
  if (((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) || (iStack_28 < 3)) {
    uStack_34 = *(undefined4 *)(iRam409dcb40 + 0x10);
    uStack_30 = *(undefined4 *)(iRam409dcb40 + 0x14);
    FUN_40679338(*param_2,0x409dd02c,&uStack_34,2);
    return 0xffffffff;
  }
  iVar2 = FUN_4066f214(param_2[1]);
  iVar3 = FUN_4066f214(param_2[2]);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  bVar8 = false;
  if ((3 < iStack_28) &&
     ((iVar4 = FUN_4066f214(param_2[3]), iVar4 < 1 || (bVar8 = iVar4 < 2, 1 < iVar4)))) {
    bVar8 = false;
  }
  uVar5 = FUN_4035f1e4();
  piVar6 = (int *)FUN_4035fcdc(uVar5,bVar8);
  FUN_4067ca30(piVar6 != (int *)0x0,0x409dcb94,0x409dcb7c,0x104,uRam409dcfec);
  iVar4 = (**(code **)(*piVar6 + 0x24))(piVar6);
  pcVar1 = pcRam409dcb30;
  if (iVar4 == 0) {
    uVar5 = 0x409dcc28;
LAB_409dcdf0:
    FUN_4067cd44(uVar5,bVar8);
  }
  else {
    if (*pcRam409dcb30 == '\0') {
      iVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,0);
      *pcVar1 = (char)iVar4;
      if (iVar4 == 0) {
        uVar5 = 0x409dcbf0;
        goto LAB_409dcdf0;
      }
    }
    uVar7 = iVar3 * 0x200;
    uVar5 = FUN_406832d8(uVar7);
    FUN_4020f00c(uVar5,uVar7,0xff);
    iVar2 = (**(code **)(*piVar6 + 0x1c))(piVar6,iVar2,iVar3,uVar5);
    if (iVar2 == 0) {
      FUN_4067cd44(0x409dd010,bVar8);
    }
    else {
      FUN_4067cd44(0x409dcff0,bVar8);
      if (pcVar1[1] != '\0') {
        if (0xa00 < uVar7) {
          uVar7 = 0xa00;
        }
        FUN_4067944c(uVar5,uVar7 & 0xffff,1,0);
        FUN_4067cd44(0x409dd00c);
      }
    }
    FUN_40683358(uVar5);
  }
  return 0;
}

