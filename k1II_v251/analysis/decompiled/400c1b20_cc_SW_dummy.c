/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_dummy(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  
  FUN_40009c8c(0,0,0x400c1c50,uRam400c1c4c,in_r3);
  uVar1 = FUN_40006df0();
  uVar2 = FUN_400e0504();
  iVar3 = FUN_40006ea4(uVar1,0xa5);
  uVar2 = FUN_400e0544(uVar2,0x7c);
  iVar4 = FUN_40006ea4(uVar1,uVar2);
  if (iVar3 == iVar4) {
    FUN_40009c8c(0,0,0x400c1c54);
  }
  else {
    FUN_40009c8c(0,0,0x400c1c6c,iVar3,iVar4);
  }
  return 0;
}

