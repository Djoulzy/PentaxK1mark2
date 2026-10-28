/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_GetCurrentLensClass(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [136];
  
  FUN_40661274(auStack_90);
  iVar1 = FUN_406765c4();
  FUN_40661368(*(undefined4 *)(iVar1 + 4),auStack_90);
  uVar2 = obs_ClassifyLens(auStack_90);
  thunk_FUN_402fade0(auStack_90);
  return uVar2;
}

