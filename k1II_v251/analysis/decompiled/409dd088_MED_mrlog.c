/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mrlog(void)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(iRam409dcb30 + 1) ^ 1;
  *(byte *)(iRam409dcb30 + 1) = bVar2;
  if (bVar2 == 0) {
    uVar1 = 0x409dd2c8;
  }
  else {
    uVar1 = 0x409dd2b8;
  }
  FUN_4067cd44(uVar1);
  return 0;
}

