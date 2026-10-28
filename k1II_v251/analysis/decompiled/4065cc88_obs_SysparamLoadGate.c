/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_SysparamLoadGate(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  FUN_4063e044();
  iVar1 = obs_SysparamCondition();
  if (iVar1 == 0) {
    return;
  }
  FUN_4067ab8c(100);
  iVar1 = obs_LoadSysparamFile(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

