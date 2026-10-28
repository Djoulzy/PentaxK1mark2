/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_ost(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [4];
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  int iStack_58;
  int iStack_48;
  int iStack_40;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  uStack_2c = param_1;
  puStack_28 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_2c);
  iVar11 = 0;
  iStack_40 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iStack_48 = 0;
  iStack_58 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    auStack_34[0] = *puRam4068dab8;
    FUN_40679338(*param_2,0x4068e5d4,auStack_34,1);
    return 0xffffffff;
  }
  FUN_403d0f84(auStack_74);
  iVar4 = 1;
  if (0 < sStack_70) {
    do {
      iVar2 = FUN_403d1d1c((int)(short)iVar4,auStack_94);
      iVar11 = iVar11 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_70);
  }
  iVar4 = 1;
  if (0 < sStack_6e) {
    do {
      iVar2 = FUN_4035618c((int)(short)iVar4,auStack_90);
      iVar10 = iVar10 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_6e);
  }
  iVar4 = 1;
  if (0 < sStack_66) {
    do {
      iVar2 = FUN_406ffc08((int)(short)iVar4,auStack_90);
      iStack_40 = iStack_40 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_66);
  }
  iVar4 = 1;
  if (0 < sStack_6c) {
    do {
      iVar2 = FUN_403d1524((int)(short)iVar4,auStack_90);
      iVar9 = iVar9 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_6c);
  }
  iVar4 = 1;
  if (0 < sStack_68) {
    do {
      iVar2 = FUN_403560dc((int)(short)iVar4,auStack_90);
      iStack_48 = iStack_48 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_68);
  }
  iVar4 = 1;
  if (0 < sStack_5e) {
    do {
      iVar2 = FUN_406ffcbc((int)(short)iVar4,auStack_90);
      iVar8 = iVar8 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_5e);
  }
  iVar4 = 1;
  if (0 < sStack_5c) {
    do {
      iVar2 = FUN_4031191c((int)(short)iVar4,auStack_90);
      iVar7 = iVar7 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_5c);
  }
  iVar4 = 1;
  if (0 < sStack_64) {
    do {
      iVar2 = FUN_4044e070((int)(short)iVar4,auStack_88);
      iVar6 = iVar6 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_64);
  }
  iVar4 = 1;
  if (0 < sStack_62) {
    do {
      iVar2 = FUN_40355ea0((int)(short)iVar4,auStack_88);
      iStack_58 = iStack_58 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_62);
  }
  iVar4 = 1;
  if (0 < sStack_60) {
    do {
      iVar2 = FUN_4041d008((int)(short)iVar4,auStack_90);
      iVar5 = iVar5 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_60);
  }
  FUN_4068ad54(0x4068e3d0);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e3d4);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e3fc);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e428,iVar11,(int)sStack_70,*puRam4068e424);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e450,iVar10,(int)sStack_6e,*puRam4068e44c);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e478,iStack_40,(int)sStack_66,*puRam4068e474);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e4a0,iVar9,(int)sStack_6c,*puRam4068e49c);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e4c8,iStack_48,(int)sStack_68,*puRam4068e4c4);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e4f0,iVar8,(int)sStack_5e,*puRam4068e4ec);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e518,iVar7,(int)sStack_5c,*puRam4068e514);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e53c,iVar6,(int)sStack_64);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e560,iStack_58,(int)sStack_62);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e584,iVar5,(int)sStack_60);
  pcVar3 = (code *)FUN_40554324();
  (*pcVar3)(0x4068e3f8);
  return 0;
}

