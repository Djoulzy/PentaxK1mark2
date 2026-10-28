/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_UnlockBayer(undefined4 param_1)

{
  int iVar1;
  
  FUN_4067cd44(0x403bd624,param_1);
  FUN_402675cc();
  iVar1 = FUN_40449e00();
  (**(code **)(**(int **)(iVar1 + 4) + 0x18))(*(int **)(iVar1 + 4),uRam403bd5fc,0);
  FUN_4067cd44(0x403bd648);
  return 0;
}

