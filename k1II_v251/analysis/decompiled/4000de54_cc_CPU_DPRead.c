/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_CPU_DPRead(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_14;
  
  uStack_14 = param_4;
  uVar1 = FUN_40006df0();
  uVar1 = FUN_40006ea4(uVar1,0x129);
  if (0 < param_1) {
    FUN_40009c8c(0,0,0x4000df18,uRam4000df14,*param_2);
    if ((1 < param_1) && (iVar2 = FUN_400f2070(param_2[1],0x4000df24,&uStack_14), iVar2 < 7)) {
      FUN_4000c0b8(uVar1,uStack_14 & 0xff);
      FUN_4000ddb0();
    }
  }
  return 0;
}

