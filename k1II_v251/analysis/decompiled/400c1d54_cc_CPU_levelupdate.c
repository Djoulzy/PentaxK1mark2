/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_CPU_levelupdate(void)

{
  int iVar1;
  undefined4 in_r3;
  
  FUN_40009c8c(0,0,0x400c1f28,in_r3,in_r3);
  iVar1 = FUN_40099564();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_4000a064(iVar1 != 0,0x400c1f40,0x400c1be8,0x5ed,uRam400c1f3c);
  FUN_4009aa6c(iVar1);
  return 0;
}

