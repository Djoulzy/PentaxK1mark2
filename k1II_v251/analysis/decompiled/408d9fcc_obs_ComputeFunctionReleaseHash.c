/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_ComputeFunctionReleaseHash
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  FUN_408d9f70(auStack_90);
  FUN_408d9f10(auStack_70,param_3);
  FUN_408d9eb0(auStack_50,param_4);
  FUN_408d9e40(auStack_30,auStack_90,auStack_70,auStack_50);
  FUN_408d9e08(param_1,auStack_30);
  return;
}

