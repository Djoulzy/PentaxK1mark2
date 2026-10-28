/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mrinf(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  char *pcVar2;
  ushort uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'h')) || (iStack_18 < 3)) {
    uStack_20 = *(undefined4 *)(iRam409dcb40 + 0x20);
    uStack_1c = *(undefined4 *)(iRam409dcb40 + 0x24);
    FUN_40679338(*param_2,0x409dd2e4,&uStack_20,2);
    return 0xffffffff;
  }
  uVar3 = 0;
  do {
    do {
      uVar1 = uVar3 + 1;
      FUN_4067cd44(0x409dd2d8,uVar3);
      MED_mread(iStack_18,param_2);
      FUN_4067ab8c(500);
      uVar3 = uVar1;
    } while (uVar1 < 10000);
    uVar3 = 0;
  } while( true );
}

