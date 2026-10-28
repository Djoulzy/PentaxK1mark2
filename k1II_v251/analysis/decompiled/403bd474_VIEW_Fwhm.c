/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_Fwhm(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_4067cd44(0x403bd590,param_1);
  FUN_402675cc();
  iVar1 = FUN_40449e00();
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(*piVar2 + 0x1c))(piVar2,uRam403bd5b0,0);
  (**(code **)(*piVar2 + 0x18))(piVar2,uRam403bd5b4,0);
  FUN_4067cd44(0x403bd5b8);
  return 0;
}

