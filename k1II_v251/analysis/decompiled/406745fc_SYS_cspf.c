/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_cspf(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_30 [32];
  
  FUN_40683cc4(auStack_30,0x20);
  iVar4 = 0x80;
  do {
    FUN_4067e440(auStack_30,0x40674860,iVar4 + -0x7f);
    FUN_406792e4(auStack_30);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x90);
  uVar1 = FUN_40677b5c();
  uVar1 = FUN_40677c28(uVar1,0x12d);
  uVar2 = FUN_4067825c();
  uVar3 = FUN_40678400(uVar2,0x4200,0);
  iVar4 = 0;
  if ((uVar3 & 0x1f) != 0) {
    iVar4 = 0x20 - (int)uVar3 % 0x20;
  }
  FUN_4067a4ec(uVar3 + iVar4,0x4200);
  iVar4 = FUN_4025c088(uVar1,0x1160,0x20,uVar3 + iVar4);
  uVar1 = FUN_4067825c();
  FUN_40678550(uVar1,uVar3,0xffffffff,0);
  if (iVar4 == 0) {
    uVar1 = 0x4067487c;
  }
  else {
    uVar1 = 0x40674880;
  }
  FUN_4067cd44(0x40674884,uVar1);
  return 0;
}

