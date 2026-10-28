/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

uint obs_CheckFunctionReleaseCode(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_7c [32];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [8];
  
  FUN_408da028(auStack_5c,param_1);
  FUN_4067490c(auStack_14);
  uVar1 = FUN_40674920(auStack_14);
  iVar2 = FUN_40497bbc();
  FUN_406716e4(*(undefined4 *)(iVar2 + 4),0xb);
  FUN_4045f3e4();
  uVar3 = FUN_4045f2dc();
  FUN_40683cc4(auStack_3c,0x14);
  FUN_4067ca30(1,0x408da254,0x408da234,0x9d,uRam408da230);
  FUN_40683ff4(auStack_3c,uVar3,0x14);
  uVar5 = 0;
  FUN_40683cc4(auStack_28,0x14);
  do {
    obs_ComputeFunctionReleaseHash(auStack_7c,uVar1,uVar5 & 0xff,auStack_3c);
    iVar2 = FUN_4020e748(auStack_5c,auStack_7c,0x20);
    if (iVar2 == 0) break;
    obs_ComputeFunctionReleaseHash(auStack_7c,uVar1,uVar5 & 0xff,auStack_28);
    iVar4 = FUN_4020e748(auStack_5c,auStack_7c,0x20);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = uVar5 - 0x13;
      uVar5 = uVar5 + 1;
    }
  } while (iVar2 < 0 != (iVar4 != 0 && SBORROW4(uVar5,0x14)));
  FUN_40674910(auStack_14);
  return uVar5 & 0xff;
}

