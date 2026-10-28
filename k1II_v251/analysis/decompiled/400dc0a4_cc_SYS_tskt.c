/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_tskt(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort uStack_60;
  short sStack_5e;
  short sStack_5c;
  ushort uStack_5a;
  short sStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_28 = param_1;
  puStack_24 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_28);
  iVar9 = iRam400dc328;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
LAB_400dc0ec:
    uStack_38 = *(undefined4 *)(iRam400dc340 + 0x2c);
    uStack_34 = *(undefined4 *)(iRam400dc340 + 0x30);
    uStack_30 = *(undefined4 *)(iRam400dc340 + 0x34);
    FUN_4000af54(*param_2,0x400dc344,&uStack_38,3);
    return 0xffffffff;
  }
  if (2 < iStack_28) {
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(0x400dc32c);
    goto LAB_400dc0ec;
  }
  if (iStack_28 != 2) {
    FUN_400dbfd0(0x400dca00);
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400dca08);
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400dca0c);
    iVar11 = 1;
    do {
      iVar3 = FUN_400e6a94((int)(short)iVar11,&uStack_60);
      iVar6 = FUN_400db610(iVar11);
      if (iVar3 == 0) {
        if (iVar6 == 0) {
          uVar4 = 0;
          pcVar1 = (char *)0x0;
          uVar5 = 0;
LAB_400dc984:
          uVar7 = FUN_400db674(iVar11);
          if (iVar6 == 0) {
            uStack_6c = 0x400dc864;
          }
          else {
            uStack_6c = 0x400dc874;
          }
          uVar8 = *(undefined4 *)(iVar9 + (uint)uStack_60 * 4);
          uVar12 = uStack_40;
          pcStack_74 = pcVar1;
          uStack_70 = uVar4;
          pcVar2 = (code *)FUN_400dfae0();
          uVar4 = 0x400dca14;
        }
        else {
          iVar3 = FUN_400dbd58();
          if (iVar3 == 0) {
            uVar4 = FUN_400dbcd4(iVar6);
            pcVar1 = (char *)FUN_400dbc3c(iVar6);
            uVar5 = *(undefined4 *)(iVar6 + 0x10);
            goto LAB_400dc984;
          }
          uVar4 = FUN_400dbcd4(iVar6);
          pcVar1 = (char *)FUN_400dbc3c(iVar6);
          uVar5 = *(undefined4 *)(iVar6 + 0x10);
          uVar7 = FUN_400db674(iVar11);
          uStack_6c = 0x400dc86c;
          uVar8 = *(undefined4 *)(iVar9 + (uint)uStack_60 * 4);
          uVar12 = uStack_40;
          pcStack_74 = pcVar1;
          uStack_70 = uVar4;
          pcVar2 = (code *)FUN_400dfae0();
          uVar4 = uRam400dca10;
        }
        (*pcVar2)(uVar4,iVar11,uVar7,(int)sStack_5e,uVar8,uVar12,uVar5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 6);
    goto LAB_400dc9e4;
  }
  pcStack_74 = (char *)0x0;
  iVar11 = 0;
  uVar10 = 1;
  iVar3 = FUN_400f21f8(param_2[1],&pcStack_74,0);
  if (*pcStack_74 == '\0') {
    if (iVar3 == 0) {
      iVar3 = FUN_400db5f4();
    }
    uVar4 = FUN_400db674(iVar3);
  }
  else {
    iVar3 = 1;
    do {
      uVar4 = FUN_400db674(iVar3);
      uVar5 = FUN_400f25d4(param_2[1]);
      iVar6 = FUN_400f25a2(uVar4,param_2[1],uVar5);
      if (iVar6 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  if (4 < iVar3 - 1U) {
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(0x400dc358,param_2[1]);
    return 0xffffffff;
  }
  iVar6 = FUN_400e6a94((int)(short)iVar3,&uStack_60);
  if (iVar6 != 0) {
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(0x400dc378,iVar3,iVar6);
    return 0xffffffff;
  }
  iVar6 = FUN_400db610(iVar3);
  FUN_400dbfd0(0x400dc3a0);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc3ac,uVar4);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc3c4,iVar3);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc3dc,*(undefined4 *)(iVar9 + (uint)uStack_60 * 4));
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc3f4,(int)sStack_5e);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc40c,(int)sStack_5c);
  iVar9 = 0;
  do {
    if (uStack_5a == uVar10) {
      iVar11 = iVar9;
      break;
    }
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 << 1;
  } while (iVar9 < 0xf);
  pcVar2 = (code *)FUN_400dfae0();
  if ((uStack_60 & 4) == 0) {
    uVar4 = 0x400dc428;
  }
  else {
    uVar4 = *(undefined4 *)(iRam400dc424 + iVar11 * 4);
  }
  (*pcVar2)(0x400dc43c,uVar4);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc454);
  if ((uStack_60 & 4) == 0) {
    pcVar2 = (code *)FUN_400dfae0();
    uVar4 = 0x400dc76c;
LAB_400dc4c4:
    (*pcVar2)(uVar4);
  }
  else if (uStack_5a == 0x80) {
    uVar4 = FUN_400da7d4((int)sStack_58);
    pcVar2 = (code *)FUN_400dfae0();
    uVar5 = 0x400dc6e8;
LAB_400dc588:
    (*pcVar2)(uVar5,uVar4,(int)sStack_58);
  }
  else if (uStack_5a < 0x81) {
    if (uStack_5a == 8) {
      uVar4 = FUN_400d987c((int)sStack_58);
      pcVar2 = (code *)FUN_400dfae0();
      (*pcVar2)(0x400dc6e8,uVar4,(int)sStack_58);
      pcVar2 = (code *)FUN_400dfae0();
      uVar4 = 0x400dc6f8;
LAB_400dc560:
      (*pcVar2)(uVar4,iStack_3c);
    }
    else if (uStack_5a < 9) {
      if (uStack_5a == 1 || uStack_5a == 2) {
        pcVar2 = (code *)FUN_400dfae0();
        uVar4 = 0x400dc6e4;
        goto LAB_400dc4c4;
      }
      if (uStack_5a == 4) {
        uVar4 = FUN_400daf8c((int)sStack_58);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(0x400dc6e8,uVar4,(int)sStack_58);
      }
    }
    else if ((uStack_5a == 0x10 || uStack_5a == 0x20) || uStack_5a == 0x40) goto LAB_400dc550;
  }
  else {
    if (uStack_5a == 0x800) {
LAB_400dc550:
      pcVar2 = (code *)FUN_400dfae0();
      iStack_3c = (int)sStack_58;
      uVar4 = 0x400dc714;
      goto LAB_400dc560;
    }
    if (uStack_5a < 0x801) {
      if ((uStack_5a == 0x100 || uStack_5a == 0x200) || uStack_5a == 0x400) goto LAB_400dc550;
    }
    else {
      if (uStack_5a == 0x1000 || uStack_5a == 0x2000) goto LAB_400dc550;
      if (uStack_5a == 0x4000) {
        uVar4 = FUN_400da264((int)sStack_58);
        pcVar2 = (code *)FUN_400dfae0();
        uVar5 = 0x400dc738;
        goto LAB_400dc588;
      }
    }
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc748);
  if (iStack_54 == -1) {
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(0x400dc780);
  }
  else {
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(0x400dc760,iStack_54);
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc790,uStack_50);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc7a8,uStack_4c);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc7c0,uStack_48);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc7d8,uStack_44);
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc7f4,uStack_40);
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar6 + 0x10);
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc810,uVar4);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_400dbc3c();
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc82c,uVar4);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_400dbcd4();
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc848,uVar4);
  if (iVar6 == 0) {
    uVar4 = 0x400dc864;
  }
  else {
    iVar9 = FUN_400dbd58(iVar6);
    if (iVar9 == 0) {
      uVar4 = 0x400dc874;
    }
    else {
      uVar4 = 0x400dc86c;
    }
  }
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dc878,uVar4);
LAB_400dc9e4:
  pcVar2 = (code *)FUN_400dfae0();
  (*pcVar2)(0x400dca50);
  return 0;
}

