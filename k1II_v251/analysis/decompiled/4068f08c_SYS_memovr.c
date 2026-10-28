/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_memovr(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [24];
  
  uVar1 = FUN_406832d8(0x14);
  uVar2 = FUN_406832d8(0x14);
  uVar3 = FUN_406832d8(0x14);
  FUN_4020f00c(auStack_28,0x15,0xcc);
  FUN_40683ff4(uVar2,auStack_28,0x15);
  FUN_4067cd44(0x4068f114);
  FUN_40683358(uVar1);
  FUN_4067cd44(0x4068f124);
  FUN_40683358(uVar2);
  FUN_4067cd44(0x4068f134);
  FUN_40683358(uVar3);
  return 0;
}

