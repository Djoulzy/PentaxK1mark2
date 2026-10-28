/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong serdes_addr(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_1;
  uStack_10 = param_2;
  FUN_406793bc(&uStack_14);
  uVar2 = FUN_40677b5c();
  iVar3 = FUN_40677c28(uVar2,0x130);
  uVar1 = uRam4026e554;
  FUN_4067ca30(iVar3 != 0,0x4026e4d0,uRam4026e454,0x23b);
  FUN_4067cd44(0x4026e558);
  FUN_4026dff8(iVar3);
  return (ulonglong)uVar1 << 0x20;
}

