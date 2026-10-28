/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_index(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = iRam409f35b4;
  if (param_1 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_4066f214();
  }
  *(undefined4 *)(iVar1 + 4) = uVar2;
  FUN_4067cd44(0x409f41c8,uVar2);
  return 0;
}

