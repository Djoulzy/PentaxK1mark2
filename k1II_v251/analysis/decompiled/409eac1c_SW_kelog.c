/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SW_kelog(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_18);
  iVar3 = FUN_402698c4();
  uVar5 = *(undefined4 *)(iVar3 + 4);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if ((iStack_18 < 2) || (cVar1 = FUN_4020b80c(param_2[1],0), cVar1 != '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_4041b1f0(uVar5,uVar4);
    FUN_4067cd44(0x409eadc0);
    uVar5 = 0;
  }
  else {
    auStack_20[0] = *(undefined4 *)(iRam409ea7e8 + 0xa8);
    FUN_40679338(*param_2,0x409eade0,auStack_20,1);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

