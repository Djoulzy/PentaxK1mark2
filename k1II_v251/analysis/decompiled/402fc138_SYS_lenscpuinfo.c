/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void SYS_lenscpuinfo(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  
  iVar1 = FUN_402fbe24();
  uVar2 = 0xffffffff;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_405115f0(*(int *)(iVar1 + 4),&uStack_14);
    FUN_4067cd44(0x402fc260);
    FUN_4067cd44(0x402fc284,uStack_14,uStack_13,uStack_12,uStack_11);
    FUN_4067cd44(0x402fc2ac,uStack_10,uStack_f);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x402fc19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

