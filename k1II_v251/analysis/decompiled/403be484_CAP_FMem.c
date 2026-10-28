/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong CAP_FMem(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_4067cd44(0x403be610);
  uStack_1c = 0;
  uStack_18 = 0;
  uVar2 = FUN_40674b78();
  FUN_40674c08(uVar2,&uStack_1c,&uStack_18,1,param_2);
  uVar4 = uStack_18;
  uVar2 = uRam403be62c;
  uVar3 = FUN_40683b6c(uStack_18,uRam403be62c);
  uVar1 = uStack_1c;
  uVar2 = FUN_40683b6c(uStack_1c,uVar2);
  FUN_4067cd44(0x403be630,uVar2,uVar3,uVar1);
  FUN_4067cd44(0x403be658);
  return (ulonglong)uVar4 << 0x20;
}

