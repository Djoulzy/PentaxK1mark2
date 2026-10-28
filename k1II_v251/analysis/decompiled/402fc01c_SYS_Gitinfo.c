/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_Gitinfo(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [32];
  undefined4 auStack_10 [2];
  
  iVar1 = FUN_402fbe24();
  iVar1 = *(int *)(iVar1 + 4);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    auStack_10[0] = 0;
    FUN_40683cc4(auStack_30,0x20);
    FUN_4050f814(iVar1,auStack_10,auStack_30);
    FUN_4067cd44(0x402fc1a0);
    FUN_4067cd44(0x402fc1c4,auStack_10[0]);
    FUN_4067cd44(0x402fc1dc,auStack_30);
    FUN_4067cd44(0x402fc018);
    FUN_4050f80c(iVar1,auStack_10,auStack_30);
    FUN_4067cd44(0x402fc1f4);
    FUN_4067cd44(0x402fc1c4,auStack_10[0]);
    FUN_4067cd44(0x402fc1dc,auStack_30);
    FUN_4067cd44(0x402fc018);
    FUN_4050f76c(iVar1,auStack_10,auStack_30);
    FUN_4067cd44(0x402fc218);
    FUN_4067cd44(0x402fc1c4,auStack_10[0]);
    FUN_4067cd44(0x402fc1dc,auStack_30);
    FUN_4067cd44(0x402fc018);
    FUN_4050f658(iVar1,auStack_10,auStack_30);
    FUN_4067cd44(0x402fc23c);
    FUN_4067cd44(0x402fc1c4,auStack_10[0]);
    FUN_4067cd44(0x402fc1dc,auStack_30);
    FUN_4067cd44(0x402fc018);
    uVar2 = 0;
  }
  return uVar2;
}

