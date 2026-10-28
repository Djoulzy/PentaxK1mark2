/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_FeatureTrialRemaining(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_2 < 0x14) {
    uStack_10 = 0;
    iVar1 = FUN_4068978c();
    FUN_40689fd8(*(undefined4 *)(iVar1 + 4),&uStack_10);
    iVar1 = param_1 + param_2 * 0xc;
    FUN_408d9b4c(param_1,*(undefined4 *)(iVar1 + 0x14),uStack_10,*(undefined4 *)(iVar1 + 0x10));
  }
  return;
}

