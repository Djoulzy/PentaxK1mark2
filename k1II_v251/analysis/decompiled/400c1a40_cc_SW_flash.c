/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_flash(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uStack_14;
  
  uStack_14 = param_4;
  iVar2 = FUN_4009b668();
  iVar2 = *(int *)(iVar2 + 4);
  FUN_4000a064(iVar2 != 0,0x400c1c04,0x400c1be8,0x4fa,uRam400c1be4);
  if (param_1 < 2) {
    FUN_40009c8c(0,0,0x400c1c14);
    return 1;
  }
  iVar3 = FUN_400f2070(*(undefined4 *)(param_2 + 4),0x400c1bbc,&uStack_14);
  if ((iVar3 == 1) && ((int)uStack_14 < 0xf)) {
    FUN_40009c8c(0,0,0x400c1c2c);
    FUN_4009b7a0(iVar2,1);
    sVar1 = FUN_4009b7a0(iVar2,uStack_14 & 0xffff);
    FUN_40009c8c(0,0,0x400c1c40,(int)sVar1);
    return 0;
  }
  FUN_40009c8c(0,0,0x400c1bc0,*(undefined4 *)(param_2 + 4));
  return 2;
}

