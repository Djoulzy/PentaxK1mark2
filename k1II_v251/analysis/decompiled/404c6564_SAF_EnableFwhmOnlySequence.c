/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SAF_EnableFwhmOnlySequence(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (1 < param_1) {
    iVar2 = FUN_404c4910();
    cVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    *(bool *)(iVar2 + 0x108) = cVar1 != '\0';
    if (2 < param_1) {
      cVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 8),0);
      *(char *)(iVar2 + 0x10a) = cVar1;
      if (cVar1 != '\0') {
        return 0;
      }
    }
    *(undefined1 *)(iVar2 + 0x10a) = 3;
  }
  return 0;
}

