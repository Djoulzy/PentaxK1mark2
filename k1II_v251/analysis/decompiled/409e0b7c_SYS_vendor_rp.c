/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_vendor_rp(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 2) {
    return 0xffffffff;
  }
  iVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
  iVar2 = FUN_409e072c();
  return *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 0xc) + iVar1 * 4 + 8);
}

