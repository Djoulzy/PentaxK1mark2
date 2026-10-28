/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

bool obs_SysparamCondition(void)

{
  int iVar1;
  
  iVar1 = FUN_40497bbc();
  FUN_406716e4(*(undefined4 *)(iVar1 + 4),3);
  iVar1 = FUN_403a3a04();
  return *(int *)(iVar1 + 4) == iRam403a3a78;
}

