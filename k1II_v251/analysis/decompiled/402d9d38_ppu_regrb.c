/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_regrb(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_24);
  uStack_2c = 0;
  iVar2 = FUN_402d97cc();
  iVar6 = *(int *)(iVar2 + 8);
  iVar2 = FUN_4067992c();
  piVar5 = *(int **)(iVar2 + 0x10);
  if (iVar6 == 0 || piVar5 == (int *)0x0) {
    FUN_4067cd44(0x402d9ed0);
    return 0xffffffff;
  }
  if (((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) || (iStack_24 < 4)) {
    uStack_28 = *(undefined4 *)(iRam402d9ee0 + 8);
    FUN_40679338(*param_2,0x402d9ee4,&uStack_28,1);
    return 0xffffffff;
  }
  uVar3 = FUN_4020b80c(param_2[1],0);
  FUN_4067cd44(0x402d9e78,uVar3);
  iVar2 = FUN_4020b80c(param_2[2],0);
  FUN_4067cd44(0x402d9f40,iVar2);
  uVar7 = param_2[3];
  iVar4 = FUN_406832d8(iVar2 + 8);
  FUN_4067a4ec(iVar4,iVar2 + 8);
  iVar6 = FUN_4051d570(iVar6,uVar3,iVar4,iVar2 + 8,1);
  if (iVar6 == 0) {
    uVar3 = 0x402d9f54;
  }
  else {
    FUN_4067cd44(0x402d9f70);
    iVar6 = (**(code **)(*piVar5 + 0x14))(piVar5,uVar7,0,&uStack_2c);
    if (iVar6 == 0) {
      FUN_4067c0f4(2,0,0x402da210,uVar7);
      return 0;
    }
    iVar2 = (**(code **)(*piVar5 + 0x20))(piVar5,uStack_2c,iVar4 + 8,iVar2);
    if (iVar2 == 0) {
      FUN_4067c0f4(2,0,0x402da228,uVar7);
    }
    (**(code **)(*piVar5 + 0x18))(piVar5,uStack_2c);
    FUN_4067cd44(0x402da240,uVar7);
    uVar3 = 0x402da24c;
  }
  FUN_4067cd44(uVar3);
  return 0;
}

