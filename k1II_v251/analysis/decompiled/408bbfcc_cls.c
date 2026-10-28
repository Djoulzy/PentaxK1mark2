/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong cls(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = uRam408bc020;
  uStack_10 = param_2;
  uStack_c = param_3;
  FUN_4068a828(&uStack_8,4);
  uStack_10 = uRam408bc024;
  uStack_c = uRam408bc028;
  FUN_4068a828(&uStack_10,6);
  return (ulonglong)uStack_10 << 0x20;
}

