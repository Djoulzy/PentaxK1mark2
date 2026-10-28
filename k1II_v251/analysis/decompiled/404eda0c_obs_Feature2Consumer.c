/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_Feature2Consumer(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = obs_GetSpecModel();
  iVar2 = obs_GetFeatureAvailability(uVar1,2);
  if (iVar2 == 0) {
    uVar1 = FUN_404eda4c();
    FUN_4065fcdc(uVar1,0x26,0);
    iVar2 = FUN_402530e8();
    iVar2 = *(int *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x998) = 0;
    *(undefined1 *)(iVar2 + 0xf22) = 0;
    *(undefined1 *)(iVar2 + 0x14ac) = 0;
    *(undefined1 *)(iVar2 + 0x1a36) = 0;
    *(undefined1 *)(iVar2 + 0x1fc0) = 0;
    return;
  }
  return;
}

