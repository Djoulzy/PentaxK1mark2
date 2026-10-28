/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_regwb(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_20);
  iStack_28 = 0;
  uStack_2c = 0;
  iVar2 = FUN_402d97cc();
  iVar6 = *(int *)(iVar2 + 8);
  iVar2 = FUN_4067992c();
  piVar5 = *(int **)(iVar2 + 0x10);
  if (iVar6 == 0 || piVar5 == (int *)0x0) {
    FUN_4067cd44(0x402d9ed0);
  }
  else {
    if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (2 < iStack_20)) {
      uVar3 = FUN_4020b80c(param_2[1],0);
      FUN_4067cd44(0x402d9e78,uVar3);
      uVar7 = param_2[2];
      iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,uVar7,1,&uStack_2c);
      if (iVar2 == 0) {
        FUN_4067c0f4(2,0,0x402da210,uVar7);
      }
      else {
        iVar2 = (**(code **)(*piVar5 + 0x28))(piVar5,uStack_2c,&iStack_28);
        if (iVar2 != 0) {
          iVar2 = FUN_406832d8(iStack_28 + 8);
          FUN_4067a4ec(iVar2,iStack_28 + 8);
          iVar4 = (**(code **)(*piVar5 + 0x1c))(piVar5,uStack_2c,iVar2 + 8,iStack_28);
          if (iVar4 != 0) {
            (**(code **)(*piVar5 + 0x18))(piVar5,uStack_2c);
            FUN_4067cd44(0x402da284,uVar7);
            iVar2 = FUN_4051d3f8(iVar6,uVar3,iVar2,iStack_28 + 8,1);
            if (iVar2 == 0) {
              uVar3 = 0x402da2b4;
            }
            else {
              uVar3 = 0x402da294;
            }
            FUN_4067cd44(uVar3);
            FUN_4067cd44(0x402da24c);
            return 0;
          }
        }
        FUN_4067c0f4(2,0);
        (**(code **)(*piVar5 + 0x18))(piVar5,uStack_2c);
      }
      return 0;
    }
    uStack_24 = *(undefined4 *)(iRam402d9ee0 + 0xc);
    FUN_40679338(*param_2,0x402da2d0,&uStack_24,1);
  }
  return 0xffffffff;
}

