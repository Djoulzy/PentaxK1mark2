/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 com_stat(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    if (iStack_14 == 3) {
      iVar2 = FUN_4066f1e0(param_2[2],0x4032ab70);
      if (iVar2 == 0) {
        FUN_406792e4(0x4032ab70);
      }
      else {
        iVar2 = FUN_4066f1e0(param_2[2],0x4032ab74);
        if (iVar2 == 0) {
          uStack_20 = uRam4032ab7c;
          uStack_1c = uRam4032ab80;
          FUN_4067cd44(&uStack_20);
        }
      }
    }
    iVar2 = FUN_4066f1e0(param_2[1],0x4032ab84);
    if (iVar2 == 0) {
      FUN_4032a81c();
      return 0;
    }
    iVar2 = FUN_4066f1e0(param_2[1],0x4032ab88);
    if (iVar2 == 0) {
      FUN_4032a814();
      return 0;
    }
  }
  else {
    uStack_20 = *(undefined4 *)(iRam4032ab4c + 0x10);
    uStack_1c = *(undefined4 *)(iRam4032ab4c + 0x14);
    FUN_40679338(*param_2,0x4032ab50,&uStack_20,2);
  }
  return 0xffffffff;
}

