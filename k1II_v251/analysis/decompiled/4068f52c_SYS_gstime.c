/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void SYS_gstime(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack_c = 0;
  uVar1 = FUN_4041ccf8();
  FUN_4041cd28(uVar1,&uStack_10);
                    /* WARNING: Could not recover jumptable at 0x4068f554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStack_10);
  return;
}

