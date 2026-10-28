/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_IsFeatureTrialActive(int param_1,uint param_2)

{
  if ((param_2 < 0x14) && (*(char *)(param_1 + param_2 * 0xc + 0x18) != '\0')) {
    return 1;
  }
  return 0;
}

