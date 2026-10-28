/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void CAP_wait_still(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = FUN_402675cc();
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar1 = FUN_403726c8();
  uVar4 = *(undefined4 *)(iVar1 + 8);
  while( true ) {
    uVar2 = (uint)*(byte *)(iVar3 + 299);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = *(uint *)(iVar3 + 0xa4);
    }
    if ((bVar5 && uVar2 == 0) && (iVar1 = FUN_402fcafc(uVar4), iVar1 == 0)) break;
    FUN_4067ab8c(200);
  }
  return;
}

