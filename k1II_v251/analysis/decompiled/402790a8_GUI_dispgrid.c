/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong GUI_dispgrid(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_1;
  uStack_10 = param_2;
  FUN_406793bc(&uStack_14);
  iVar2 = FUN_40669e34();
  uVar1 = uRam40279234;
  FUN_4067ca30(iVar2 != 0,0x40279204,0x402791e8,0x53);
  FUN_4067cd44(0x40279238);
  uVar3 = FUN_4066d394(iVar2);
  FUN_4066d3a8(iVar2,uVar3 ^ 1);
  FUN_4066b658(iVar2,0,0,1);
  return (ulonglong)uVar1 << 0x20;
}

