/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_reg(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) || (iStack_18 < 4)) {
LAB_408bb320:
    uStack_28 = *(undefined4 *)(iRam408ba824 + 0x18);
    uStack_24 = *(undefined4 *)(iRam408ba824 + 0x1c);
    FUN_40679338(*param_2,0x408bb5e4,&uStack_28,2);
    return 0xffffffff;
  }
  puVar2 = (uint *)FUN_4020b80c(param_2[2],0);
  iVar3 = FUN_4020b80c(param_2[3],0);
  iVar4 = FUN_40683ba0(param_2[1],0x408bb5d8);
  if (iVar4 == 0) {
    FUN_4067cd44(0x408bb5f8,puVar2);
    FUN_4067cd44(0x408bb608);
    if (iVar3 == 1) {
      FUN_40683ff4(auStack_20,puVar2,1);
      uVar7 = auStack_20[0];
LAB_408bb468:
      uVar7 = uVar7 & 0xff;
      uVar6 = 0x408bb654;
      goto LAB_408bb3b0;
    }
    if (iVar3 == 2) {
      FUN_40683ff4(auStack_20,puVar2,2);
      uVar7 = auStack_20[0];
LAB_408bb49c:
      uVar7 = uVar7 & 0xffff;
      uVar6 = 0x408bb65c;
      goto LAB_408bb3b0;
    }
    if (iVar3 != 4) {
LAB_408bb3c8:
      FUN_4067cd44(0x408bb61c,uRam408bb618,iVar3);
      return 0xffffffff;
    }
    puVar5 = auStack_20;
  }
  else {
    iVar4 = FUN_40683ba0(param_2[1],0x408bb5dc);
    if (iVar4 != 0) {
      FUN_4067cd44(uRam408bb5e0);
      goto LAB_408bb320;
    }
    FUN_4067cd44(0x408bb5f8,puVar2);
    FUN_4067cd44(0x408bb63c);
    if (iVar3 == 1) {
      uVar7 = FUN_4020b80c(param_2[4],0);
      auStack_20[0] = CONCAT31(auStack_20[0]._1_3_,(char)uVar7);
      FUN_40683ff4(puVar2,auStack_20,1);
      goto LAB_408bb468;
    }
    if (iVar3 == 2) {
      uVar7 = FUN_4020b80c(param_2[4],0);
      auStack_20[0] = CONCAT22(auStack_20[0]._2_2_,(short)uVar7);
      FUN_40683ff4(puVar2,auStack_20,2);
      goto LAB_408bb49c;
    }
    if (iVar3 != 4) goto LAB_408bb3c8;
    auStack_20[0] = FUN_4020b80c(param_2[4],0);
    puVar5 = puVar2;
    puVar2 = auStack_20;
  }
  FUN_40683ff4(puVar5,puVar2);
  uVar6 = 0x408bb64c;
  uVar7 = auStack_20[0];
LAB_408bb3b0:
  FUN_4067cd44(uVar6,uVar7);
  FUN_4067cd44(0x408bb614);
  return 0;
}

