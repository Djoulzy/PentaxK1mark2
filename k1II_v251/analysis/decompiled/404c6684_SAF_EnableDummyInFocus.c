/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SAF_EnableDummyInFocus(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 2) {
    cVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    iVar2 = FUN_404c4910();
    *(bool *)(iVar2 + 0x10e) = cVar1 != '\0';
  }
  return 0;
}

