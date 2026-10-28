/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 sdio_write(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  
  uVar2 = FUN_409cae14(0,1,0x78,0,0,in_r3);
  uVar1 = uRam409cb0b0;
  uVar3 = FUN_4044ddb0(uRam409cb0b0,uVar2);
  uVar2 = FUN_409cae14(0,1,0x79,0,0);
  uVar4 = FUN_4044ddb0(uVar1,uVar2);
  uVar2 = FUN_409cae14(0,1,0x7a,0,0);
  uVar5 = FUN_4044ddb0(uVar1,uVar2);
  uVar3 = uVar3 & 0xff | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  FUN_4067c0f4(1,0,0x409cb0b4,uVar3);
  uVar2 = FUN_406832d8(0x100);
  FUN_4020f00c(uVar2,0x100,0xf0);
  uVar1 = uRam409cb0c4;
  uVar6 = FUN_4060d868(1,1,uVar3,1,1,0);
  FUN_4044ddec(uVar1,uVar6,0x100,uVar2);
  FUN_406795e8(uVar2,0x100,1);
  FUN_40683358(uVar2);
  return 0;
}

