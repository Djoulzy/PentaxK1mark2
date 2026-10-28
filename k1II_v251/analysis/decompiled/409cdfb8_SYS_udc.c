/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_udc(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 2) {
      FUN_409cdc20(0x409ce1c0);
      FUN_4067cd44(0x409ce1c4);
      FUN_4067cd44(0x409ce1dc);
      iVar5 = 0xfa;
      do {
        uVar2 = FUN_40677b5c();
        uVar2 = FUN_40677c28(uVar2,iVar5);
        uVar3 = FUN_403e4304();
        iVar4 = FUN_403e429c(uVar2);
        if (iVar4 == 0) {
          uVar2 = 0x409cded0;
        }
        else {
          uVar2 = 0x409cdec8;
        }
        FUN_4067cd44(0x409ce1f4,iVar5 + -0xfa,uVar2,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x100);
      FUN_4067cd44(0x409ce1a4);
      return 0;
    }
    FUN_4067cd44(uRam409ce1a8);
  }
  auStack_20[0] = *(undefined4 *)(iRam409cde4c + 4);
  FUN_40679338(*param_2,0x409ce1ac,auStack_20,1);
  return 0xffffffff;
}

