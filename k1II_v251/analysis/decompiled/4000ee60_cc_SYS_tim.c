/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong cc_SYS_tim(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_14 < 2) {
      FUN_4000edf4(0x4000ef94);
      FUN_40009864(0x4000efa4);
      FUN_40009864(0x4000efc8);
      uVar2 = FUN_40006df0();
      uVar2 = FUN_40006ea4(uVar2,0xab);
      uVar3 = FUN_4001bff0();
      iVar4 = FUN_4001bffc(uVar2);
      if (iVar4 == 0) {
        uVar2 = 0x4000eff8;
      }
      else {
        uVar2 = 0x4000eff0;
      }
      FUN_40009864(0x4000f008,0x4000f000,uVar2,uVar3);
      FUN_40009864(0x4000ef44);
      return (ulonglong)uStack_18 << 0x20;
    }
    FUN_40009864(0x4000ef5c);
  }
  uStack_18 = *puRam4000ef70;
  FUN_4000af54(*param_2,0x4000ef74,&uStack_18,1);
  return CONCAT44(uStack_18,0xffffffff);
}

