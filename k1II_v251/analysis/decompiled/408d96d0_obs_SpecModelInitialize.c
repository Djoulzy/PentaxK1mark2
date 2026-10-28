/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

int obs_SpecModelInitialize(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_14;
  
  iVar3 = iRam408d9844 + 0x1c;
  *param_1 = iRam408d9844;
  param_1[1] = iVar3;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uStack_14 = param_4;
  FUN_40683cc4(param_1 + 4,0xf0,param_3,param_4,param_3);
  iVar3 = FUN_4066eb64(param_1 + 0x40);
  uVar1 = uRam408d9848;
  iVar4 = iVar3 + -0x100;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  FUN_4067ca30(1,uRam408d984c,0x408d97f0,0x114,uVar1);
  FUN_4067ca30(1,uRam408d9850,0x408d97f0,0x117,uVar1);
  FUN_4067ca30(1,0x408d9854,0x408d97f0,0x118,uVar1);
  FUN_4066edf4(iVar3,1,0x20,0);
  uVar1 = FUN_406832d8(0x200);
  bVar5 = false;
  *(undefined4 *)(iVar3 + -0xf8) = uVar1;
  FUN_4067490c(&uStack_14);
  iVar2 = FUN_40674914(&uStack_14);
  if ((iVar2 != 0x232) && (bVar5 = iVar2 == 0x255, !bVar5)) {
    FUN_4067ca30(0,0x408d9880,0x408d980c,0xf1,uRam408d987c);
  }
  FUN_40674910(&uStack_14);
  *(bool *)(iVar3 + -0xf4) = bVar5;
  obs_LoadFeatureAvailability(iVar4,*(undefined4 *)(iVar3 + -0xf8),bVar5,iVar3 + -0xf0);
  FUN_408d94c0(iVar4);
  return iVar4;
}

