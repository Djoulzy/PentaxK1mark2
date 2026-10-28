/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_osdump(undefined4 param_1,undefined4 param_2)

{
  cc_SYS_tskt();
  cc_SYS_semt(param_1,param_2);
  cc_SYS_mtxt(param_1,param_2);
  cc_SYS_flgt(param_1,param_2);
  cc_SYS_cyct(param_1,param_2);
  cc_SYS_almt(param_1,param_2);
  cc_SYS_mplt(param_1,param_2);
  cc_SYS_ost(param_1,param_2);
  cc_SYS_txt(param_1,param_2);
  return 0;
}

