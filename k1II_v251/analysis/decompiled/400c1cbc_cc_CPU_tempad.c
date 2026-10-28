/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_CPU_tempad(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_14;
  
  uStack_14 = param_4;
  iVar1 = FUN_40022584();
  iVar1 = *(int *)(iVar1 + 8);
  uVar2 = FUN_400d8834();
  FUN_40009c8c(0,0,0x400c1efc,*(undefined2 *)(iVar1 + 0x1c),param_3);
  FUN_400d895c(uVar2,0x3a,0,&uStack_14,2);
  FUN_40009c8c(0,0,0x400c1f14,(uStack_14 & 0xff) << 8 | uStack_14 >> 8 & 0xff);
  return 0;
}

