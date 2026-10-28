/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_AfValueTest(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (-1 < iStack_18) {
      FUN_4067cd44(0x404e2214);
      uVar1 = 1;
      iVar3 = FUN_404c0eec();
      uVar4 = *(undefined4 *)(iVar3 + 4);
      if (iStack_18 == 2) {
        uVar1 = FUN_4020c174(param_2[1],0);
      }
      FUN_404e1e60(uVar4,uVar1);
      FUN_4067cd44(0x404e2230);
    }
    uVar4 = 0;
  }
  else {
    auStack_20[0] = *(undefined4 *)(iRam404e1908 + 0xc);
    FUN_40679338(*param_2,uRam404e1e5c,auStack_20,1);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

