/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 script_osd(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  pcVar5 = (char *)FUN_406793bc(&iStack_24);
  uVar3 = 7;
  uVar4 = 0;
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != 'h')) {
    if (3 < iStack_24) {
      uVar1 = FUN_4020b80c(param_2[1],0);
      uVar2 = FUN_4020b80c(param_2[2],0);
      uVar7 = param_2[3];
      if (4 < iStack_24) {
        uVar3 = FUN_4020b80c(param_2[4],0);
      }
      if (5 < iStack_24) {
        uVar4 = FUN_4020b80c(param_2[5],0);
      }
      uVar6 = FUN_40947e9c();
      FUN_40947f30(uVar6,uVar1,uVar2,uVar7,uVar3,uVar4,0);
      return 0;
    }
    FUN_4067cd44(0x40948350);
  }
  uStack_34 = *puRam40948364;
  uStack_30 = puRam40948364[1];
  uStack_2c = puRam40948364[2];
  FUN_40679338(*param_2,0x40948368,&uStack_34,3);
  return 0xffffffff;
}

