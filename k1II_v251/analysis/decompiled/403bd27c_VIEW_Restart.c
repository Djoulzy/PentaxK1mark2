/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_Restart(void)

{
  int iVar1;
  
  FUN_4067cd44(0x403bd37c);
  iVar1 = FUN_40449e00();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_4067ca30(iVar1 != 0,0x403bd3a4,uRam403bd3a0,0x7f3,uRam403bd39c);
  *(undefined1 *)(iRam403bd3b8 + iVar1) = 1;
  FUN_4067cd44(0x403bd3bc);
  return 0;
}

