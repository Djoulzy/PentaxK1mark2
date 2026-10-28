/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_IsFeatureActivatable(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 < 0x14) && (*(int *)(param_1 + param_2 * 0xc + 0x10) == 0)) &&
     (iVar1 = obs_GetFeatureAvailability(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

