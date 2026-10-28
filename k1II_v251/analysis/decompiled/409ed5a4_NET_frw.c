/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void NET_frw(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_108 [260];
  
  FUN_406833b0(auStack_108,uRam409ed808,0x100);
  FUN_409ed2cc(auStack_108);
  FUN_409ed518(auStack_108);
  FUN_409ed2cc(auStack_108);
  FUN_40683170(auStack_108,0x409ed390);
  FUN_409ed2cc(auStack_108);
  FUN_409ed518(auStack_108);
  FUN_409ed2cc(auStack_108);
  FUN_40683170(auStack_108,0x409ed3a8);
  FUN_409ed2cc(auStack_108);
  FUN_409ed518(auStack_108);
  FUN_409ed2cc(auStack_108);
                    /* WARNING: Could not recover jumptable at 0x409ed624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

