/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_rtest(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_406832d8(0x10);
  iVar3 = 0;
  do {
    uVar2 = FUN_406832d8(0x40);
    puVar1[iVar3] = uVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_40683170(*puVar1,0x409e0620);
  FUN_40683170(puVar1[1],0x409e0318);
  FUN_40683170(puVar1[2],0x409e063c);
  FUN_40683170(puVar1[3],0x409e06ec);
  uVar2 = FUN_409a1270();
  FUN_409a1938(uVar2,0x1e);
  AUD_test(4,puVar1);
  iVar3 = 0;
  do {
    FUN_40683358(puVar1[iVar3]);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_40683358(puVar1);
  return 0;
}

