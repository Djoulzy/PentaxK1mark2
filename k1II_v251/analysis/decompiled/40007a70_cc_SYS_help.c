/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_help(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_4000afd8(&uStack_10);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4000a978(uStack_10,param_2);
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *puRam40007cb8;
    FUN_4000af54(*param_2,0x40007cbc,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

