/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_setwrite(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 2) {
    return 0xffffffff;
  }
  iVar1 = FUN_4066f214(*(undefined4 *)(param_2 + 4));
  FUN_4067cd44(0x409f4420,iVar1 != 0);
  uVar2 = FUN_409f459c();
  FUN_409f4da8(uVar2,iVar1 != 0);
  return 0;
}

