/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void NET_find(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_108 [260];
  
  FUN_406833b0(auStack_108,uRam409edeb0,0x100);
  FUN_409eda0c(auStack_108,0);
  FUN_409eda0c(auStack_108,1);
  FUN_40683170(auStack_108,0x409edeb4);
  FUN_409eda0c(auStack_108,0);
  FUN_409eda0c(auStack_108,1);
  FUN_40683170(auStack_108,0x409edec0);
  FUN_409eda0c(auStack_108,0);
  FUN_409eda0c(auStack_108,1);
  FUN_40683170(auStack_108,0x409edecc);
  FUN_409eda0c(auStack_108,0);
  FUN_409eda0c(auStack_108,1);
                    /* WARNING: Could not recover jumptable at 0x409edc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

