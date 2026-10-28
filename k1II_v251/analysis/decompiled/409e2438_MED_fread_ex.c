/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fread_ex(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_18)) {
    puVar2 = (undefined4 *)FUN_406832d8(0xc);
    iVar4 = 0;
    do {
      uVar3 = FUN_406832d8(0x100);
      puVar2[iVar4] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    FUN_4070412c(*puVar2,*param_2,0x100);
    FUN_4070412c(puVar2[1],param_2[1],0x100);
    FUN_4070412c(puVar2[2],0x409e25bc,2);
    MED_fopen(3,puVar2);
    iVar4 = 0;
    do {
      FUN_40683358(puVar2[iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    FUN_40683358(puVar2);
    if (*piRam409e1744 != 0) {
      MED_fread(iStack_18,param_2);
      MED_fclose(iStack_18,param_2);
    }
    uVar3 = 0;
  }
  else {
    auStack_20[0] = *(undefined4 *)(iRam409e17d4 + 0x10);
    FUN_40679338(*param_2,0x409e25c0,auStack_20,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

