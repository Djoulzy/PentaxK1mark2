/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SW_levelinfo(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [20];
  
  FUN_4067c0f4(0,0,0x409eae00);
  iVar1 = FUN_406765c4();
  FUN_404c0234(*(undefined4 *)(iVar1 + 0x20),auStack_34);
  FUN_4067c0f4(0,0,0x409eae10);
  iVar1 = 0;
  do {
    FUN_4067c0f4(0,2,0x409eae1c,iVar1,auStack_34[iVar1]);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x12);
  uVar2 = FUN_403cfde8();
  FUN_403cff10(uVar2,10,0,auStack_20,0x12);
  FUN_4067c0f4(0,2,0x409eae28);
  iVar1 = 0;
  do {
    FUN_4067c0f4(0,2,0x409eae1c,iVar1,auStack_20[iVar1]);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x12);
  return 0;
}

