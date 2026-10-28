/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_swr(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar2 = (char *)FUN_4000afd8(&iStack_10);
  uVar1 = 2;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (1 < iStack_10) {
      uVar1 = FUN_400f2268(param_2[1],0);
    }
    FUN_400bfd0c(0x1d,uVar1);
    uVar3 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam400bffe8 + 0x3c);
    FUN_4000af54(*param_2,0x400c094c,auStack_18,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

