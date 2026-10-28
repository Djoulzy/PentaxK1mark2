/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_ret(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_10)) {
    iVar2 = FUN_400f2824(param_2[1],0x40008050);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      iVar2 = FUN_400f2824(param_2[1],0x40008054);
      uVar3 = 0;
      if (iVar2 != 0) goto LAB_40007f5c;
    }
    FUN_4000abc0(uVar3);
    uVar3 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam40007cb8 + 4);
    FUN_4000af54(*param_2,0x400080f8,auStack_18,1);
LAB_40007f5c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

