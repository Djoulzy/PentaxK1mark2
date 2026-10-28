/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_GetSpecModel(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*pbRam408d9d90 & 1) == 0) && (iVar1 = FUN_406831b6(pbRam408d9d90), iVar1 != 0)) {
    uVar2 = obs_SpecModelInitialize(uRam408d9d94);
    FUN_4067e474(uVar2,0x408d98a4,uRam408d9d98);
  }
  return uRam408d9d94;
}

