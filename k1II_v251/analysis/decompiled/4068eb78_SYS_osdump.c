/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_osdump(undefined4 param_1,undefined4 param_2)

{
  SYS_tskt();
  SYS_semt(param_1,param_2);
  SYS_mtxt(param_1,param_2);
  SYS_flgt(param_1,param_2);
  SYS_mbxt(param_1,param_2);
  SYS_cyct(param_1,param_2);
  SYS_almt(param_1,param_2);
  SYS_mpft(param_1,param_2);
  SYS_mplt(param_1,param_2);
  SYS_ost(param_1,param_2);
  SYS_txt(param_1,param_2);
  return 0;
}

