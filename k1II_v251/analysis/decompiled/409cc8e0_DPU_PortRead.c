/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 DPU_PortRead(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_14;
  
  uStack_14 = param_4;
  uVar1 = FUN_40677b5c();
  uVar1 = FUN_40677c28(uVar1,0x12a);
  if (0 < param_1) {
    FUN_4067c0f4(0,0,0x409ccc3c,uRam409ccc38,*param_2);
    if ((1 < param_1) && (iVar2 = FUN_40211b84(param_2[1],0x409ccc48,&uStack_14), iVar2 < 7)) {
      FUN_402f42ec(uVar1,uStack_14 & 0xff);
      FUN_409cc83c();
    }
  }
  return 0;
}

