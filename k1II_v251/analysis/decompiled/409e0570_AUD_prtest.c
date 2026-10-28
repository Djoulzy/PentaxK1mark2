/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_prtest(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_406832d8(0x10);
  iVar4 = 0;
  do {
    uVar2 = FUN_406832d8(0x40);
    puVar1[iVar4] = uVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_40683170(*puVar1,0x409e0620);
  FUN_40683170(puVar1[1],0x409e031c);
  FUN_40683170(puVar1[2],0x409e063c);
  puVar3 = (undefined1 *)puVar1[3];
  *puVar3 = 0x31;
  puVar3[1] = 0;
  AUD_test(4,puVar1);
  iVar4 = 0;
  do {
    FUN_40683358(puVar1[iVar4]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_40683358(puVar1);
  return 0;
}

