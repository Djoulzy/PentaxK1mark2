/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ILM_Ui(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_18)) {
    iVar2 = FUN_4066f1e0(param_2[1],0x409e9210);
    if ((iVar2 == 0) || (iVar3 = FUN_4066f1e0(param_2[1],0x409e9214), iVar3 == 0)) {
      iVar3 = FUN_402ebbd8();
      if (iVar2 == 0) {
        FUN_40687cc0();
        return 0;
      }
      FUN_40687ccc(*(undefined4 *)(iVar3 + 8),0);
      return 0;
    }
    FUN_4067cd44(uRam409e91c8,param_2[1]);
  }
  auStack_20[0] = *(undefined4 *)(iRam409e8c08 + 0x14);
  FUN_40679338(*param_2,0x409e91e8,auStack_20,1);
  return 0xffffffff;
}

