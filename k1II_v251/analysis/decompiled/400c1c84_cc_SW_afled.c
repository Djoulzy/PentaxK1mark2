/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_afled(void)

{
  int iVar1;
  
  iVar1 = FUN_40091284();
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_40009c8c(0,0,0x400c1eec);
  }
  else {
    FUN_4009863c(*(int *)(iVar1 + 0xc),1);
  }
  return 0;
}

