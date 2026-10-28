/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_rcb(int param_1,undefined4 *param_2)

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
    iVar2 = FUN_400f2268(param_2[1],0);
    if (iVar2 == 0) {
      FUN_40009864(0x40008618);
    }
    else {
      iVar2 = FUN_4000a8d0();
      uVar3 = FUN_4000b3d4(iVar2 == 0);
      FUN_40009864(0x400085f8,uVar3);
    }
    uVar3 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam40007cb8 + 8);
    FUN_4000af54(*param_2,0x40008638,auStack_18,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

