/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_utest(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  uint uVar7;
  undefined4 extraout_r1_00;
  undefined1 *puVar8;
  undefined4 extraout_r1_01;
  int iVar9;
  undefined8 uVar10;
  uint auStack_188 [2];
  uint auStack_180 [5];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [256];
  undefined1 auStack_50 [36];
  undefined4 auStack_2c [2];
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  FUN_40636018(auStack_180 + 4);
  FUN_406eda94(&uStack_160);
  FUN_40677f14(auStack_50);
  auStack_188[0] = uRam409e3a60;
  auStack_180[0] = 0;
  auStack_180[1] = 0;
  auStack_180[2] = 0;
  auStack_180[3] = 0;
  pcVar1 = (char *)FUN_406793bc(&iStack_24,param_2);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    auStack_2c[0] = *(undefined4 *)(iRam409e2c7c + 0x34);
    FUN_40679338(*param_2,0x409e3f74,auStack_2c,1);
LAB_409e3b98:
    FUN_40677f78(auStack_50);
    FUN_406edaac(&uStack_160);
    FUN_40636030(auStack_180 + 4);
    return 0xffffffff;
  }
  iVar2 = FUN_4067992c();
  uVar5 = uRam409e3a64;
  iVar9 = *(int *)(iVar2 + 0x10);
  FUN_4067ca30(iVar9 != 0,uRam409e3450,uRam409e344c,0x46b,uRam409e3a64);
  iVar2 = FUN_40960848();
  FUN_4067ca30(iVar2 != 0,0x409e3a68,uRam409e344c,0x46d,uVar5);
  iVar3 = FUN_406358a4(iVar9,auStack_188,auStack_180 + 4);
  if (iVar3 == 0) {
    FUN_40635960(iVar9);
    uVar5 = FUN_409e1684();
    puVar8 = (undefined1 *)(auStack_188[0] & 0xff);
    uVar6 = 0x409e3eac;
LAB_409e3b94:
    FUN_4067cd44(uVar6,puVar8,uVar5);
    goto LAB_409e3b98;
  }
  uStack_160 = uStack_16c;
  uStack_15c = uStack_168;
  uStack_158 = auStack_180[4];
  uStack_154 = uStack_164;
  FUN_4067cd44(0x409e3a74,uStack_16c);
  FUN_4067cd44(0x409e3a98,uStack_15c);
  FUN_4067cd44(0x409e3abc,uStack_158);
  FUN_4067cd44(0x409e3ae0,uStack_154);
  uVar5 = extraout_r1;
  if (3 < iStack_24) {
    iVar3 = 0;
    do {
      FUN_4067e440(auStack_150,0x409e3b04,auStack_188,param_2[1]);
      FUN_40210900(auStack_150,param_2[iVar3 + 2],0xf4);
      iVar4 = FUN_4063581c(iVar9,auStack_150,auStack_50);
      if (iVar4 == 0) {
        FUN_40635960(iVar9);
        uVar5 = FUN_409e1684();
        puVar8 = auStack_150;
        uVar6 = 0x409e3ed0;
        goto LAB_409e3b94;
      }
      uVar10 = FUN_4096087c(iVar2,auStack_50,&uStack_160);
      uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
      auStack_180[iVar3 * 2] = (uint)uVar10;
      auStack_180[iVar3 * 2 + 1] = uVar7;
      FUN_4067cd44(0x409e3b10,iVar3,(uint)uVar10,uVar7);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    uVar5 = extraout_r1_00;
    if (3 < iStack_24) {
      uVar10 = FUN_4096089c(iVar2,auStack_180[2],auStack_180[0] + auStack_180[2],
                            auStack_180[1] + auStack_180[3] +
                            (uint)CARRY4(auStack_180[0],auStack_180[2]),2,&uStack_160);
      uVar5 = 0x409e3b38;
      goto LAB_409e3c04;
    }
  }
  uVar10 = FUN_4096089c(iVar2,uVar5,0,0,0,&uStack_160);
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_4067cd44(0x409e3efc,uVar5,(int)uVar10,uVar5);
  uStack_158 = 0;
  uVar10 = FUN_4096089c(iVar2,extraout_r1_01,0,0,0,&uStack_160);
  uVar5 = 0x409e3f24;
LAB_409e3c04:
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_4067cd44(uVar5,uVar6,(int)uVar10,uVar6);
  uVar10 = FUN_409608d4(iVar2,&uStack_160);
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_4067cd44(0x409e3f4c,uVar5,(int)uVar10,uVar5);
  FUN_40677f78(auStack_50);
  FUN_406edaac(&uStack_160);
  FUN_40636030(auStack_180 + 4);
  return 0;
}

