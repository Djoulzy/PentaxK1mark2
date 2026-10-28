/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined1 obs_GetFeatureAvailability(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x14) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + param_2);
  }
  else {
    FUN_4067ca30(0,0x408d9880,0x408d980c,0x142,uRam408d9d9c);
  }
  return uVar1;
}

