/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

bool obs_EnableFeatureBit(undefined4 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0x13 < param_2) {
    FUN_4067ca30(0,0x408d9800,0x408d97f0,0x156,uRam408d9da4);
  }
  else {
    uVar1 = *(undefined1 *)(iRam408d983c + (param_2 >> 5));
    uVar2 = obs_GetSpecialFeatureFlagData(uVar1);
    uVar3 = obs_FeatureBitMask(param_2);
    uVar4 = FUN_40259764(uVar2);
    FUN_4025975c(uVar2,uVar4 | uVar3);
    FUN_40259730(uVar2,uRam408d9da0);
    iVar5 = FUN_40497bbc();
    FUN_40673e54(*(undefined4 *)(iVar5 + 4),uVar1);
    FUN_408d99d8(param_1,param_2);
  }
  return 0x13 >= param_2;
}

