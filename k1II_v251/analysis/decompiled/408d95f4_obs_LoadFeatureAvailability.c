/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_LoadFeatureAvailability(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint auStack_64 [16];
  
  FUN_40683cc4(auStack_64,0x40);
  FUN_4067ca30(1,0x408d981c,0x408d980c,0xde,uRam408d9808);
  iVar1 = iRam408d983c;
  iVar6 = 0;
  do {
    puVar7 = auStack_64 + iVar6;
    obs_GetSpecialFeatureFlagData(*(undefined1 *)(iVar1 + iVar6));
    iVar3 = FUN_40259718();
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_40259764();
    }
    iVar3 = iRam408d9840;
    iVar6 = iVar6 + 1;
    *puVar7 = uVar4;
  } while (iVar6 < 0x10);
  uVar4 = 0;
  do {
    if (((*(char *)(iVar3 + uVar4 * 2 + param_3) != '\0') ||
        (uVar8 = auStack_64[(uVar4 & 0xff) >> 5], uVar5 = obs_FeatureBitMask(), (uVar5 & uVar8) != 0
        )) || (uVar2 = 0, *(char *)(param_4 + uVar4 * 0xc + 8) != '\0')) {
      uVar2 = 1;
    }
    *(undefined1 *)(param_2 + uVar4) = uVar2;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  return;
}

