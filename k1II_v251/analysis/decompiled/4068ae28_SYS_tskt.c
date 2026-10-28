/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_tskt(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_406793bc(&iStack_28);
  iVar9 = iRam4068b0ac;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
LAB_4068ae70:
    uStack_38 = *(undefined4 *)(iRam4068b0c4 + 0x2c);
    uStack_34 = *(undefined4 *)(iRam4068b0c4 + 0x30);
    uStack_30 = *(undefined4 *)(iRam4068b0c4 + 0x34);
    FUN_40679338(*param_2,0x4068b0c8,&uStack_38,3);
    return 0xffffffff;
  }
  if (2 < iStack_28) {
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b0b0);
    goto LAB_4068ae70;
  }
  if (iStack_28 != 2) {
    FUN_4068ad54(0x4068b7b4);
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068b7bc);
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068b7c0);
    iVar11 = 1;
    do {
      iVar3 = FUN_403d1b94((int)(short)iVar11,&uStack_60);
      iVar6 = FUN_4067aa84(iVar11);
      if (iVar3 == 0) {
        if (iVar6 == 0) {
          uVar4 = 0;
          pcVar1 = (char *)0x0;
          uVar5 = 0;
LAB_4068b73c:
          uVar7 = FUN_4067aae8(iVar11);
          if (iVar6 == 0) {
            uStack_6c = 0x4068b61c;
          }
          else {
            uStack_6c = 0x4068b62c;
          }
          uVar8 = *(undefined4 *)(iVar9 + (uint)uStack_60 * 4);
          uVar12 = uStack_40;
          pcStack_74 = pcVar1;
          uStack_70 = uVar4;
          pcVar2 = (code *)FUN_40554324();
          uVar4 = 0x4068b7c8;
        }
        else {
          iVar3 = FUN_4067b1cc();
          if (iVar3 == 0) {
            uVar4 = FUN_4067b148(iVar6);
            pcVar1 = (char *)FUN_4067b0b0(iVar6);
            uVar5 = *(undefined4 *)(iVar6 + 0x10);
            goto LAB_4068b73c;
          }
          uVar4 = FUN_4067b148(iVar6);
          pcVar1 = (char *)FUN_4067b0b0(iVar6);
          uVar5 = *(undefined4 *)(iVar6 + 0x10);
          uVar7 = FUN_4067aae8(iVar11);
          uStack_6c = 0x4068b624;
          uVar8 = *(undefined4 *)(iVar9 + (uint)uStack_60 * 4);
          uVar12 = uStack_40;
          pcStack_74 = pcVar1;
          uStack_70 = uVar4;
          pcVar2 = (code *)FUN_40554324();
          uVar4 = uRam4068b7c4;
        }
        (*pcVar2)(uVar4,iVar11,uVar7,(int)sStack_5e,uVar8,uVar12,uVar5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x97);
    goto LAB_4068b798;
  }
  pcStack_74 = (char *)0x0;
  iVar11 = 0;
  uVar10 = 1;
  iVar3 = FUN_4020c174(param_2[1],&pcStack_74,0);
  if (*pcStack_74 == '\0') {
    if (iVar3 == 0) {
      iVar3 = FUN_4067aa68();
    }
    uVar4 = FUN_4067aae8(iVar3);
  }
  else {
    iVar3 = 1;
    do {
      uVar4 = FUN_4067aae8(iVar3);
      uVar5 = FUN_4068312c(param_2[1]);
      iVar6 = FUN_4020fc60(uVar4,param_2[1],uVar5);
      if (iVar6 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x97);
  }
  if (0x95 < iVar3 - 1U) {
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b0dc,param_2[1]);
    return 0xffffffff;
  }
  iVar6 = FUN_403d1b94((int)(short)iVar3,&uStack_60);
  if (iVar6 != 0) {
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b0fc,iVar3,iVar6);
    return 0xffffffff;
  }
  iVar6 = FUN_4067aa84(iVar3);
  FUN_4068ad54(0x4068b124);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b130,uVar4);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b148,iVar3);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b160,*(undefined4 *)(iVar9 + (uint)uStack_60 * 4));
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b178,(int)sStack_5e);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b190,(int)sStack_5c);
  iVar9 = 0;
  do {
    if (uStack_5a == uVar10) {
      iVar11 = iVar9;
      break;
    }
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 << 1;
  } while (iVar9 < 0xf);
  pcVar2 = (code *)FUN_40554324();
  if ((uStack_60 & 4) == 0) {
    uVar4 = 0x4068b1ac;
  }
  else {
    uVar4 = *(undefined4 *)(iRam4068b1a8 + iVar11 * 4);
  }
  (*pcVar2)(0x4068b1c0,uVar4);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b1d8);
  if ((uStack_60 & 4) == 0) {
    pcVar2 = (code *)FUN_40554324();
    uVar4 = 0x4068b524;
LAB_4068b24c:
    (*pcVar2)(uVar4);
  }
  else if (uStack_5a == 0x80) {
    uVar4 = FUN_4066eaec((int)sStack_58);
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b4a0,uVar4,(int)sStack_58);
  }
  else if (uStack_5a < 0x81) {
    if (uStack_5a == 8) {
      uVar4 = FUN_4067b33c((int)sStack_58);
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068b4a0,uVar4,(int)sStack_58);
      pcVar2 = (code *)FUN_40554324();
      uVar4 = 0x4068b4b0;
LAB_4068b310:
      (*pcVar2)(uVar4,iStack_3c);
    }
    else if (uStack_5a < 9) {
      if (uStack_5a == 1 || uStack_5a == 2) {
        pcVar2 = (code *)FUN_40554324();
        uVar4 = 0x4068b49c;
        goto LAB_4068b24c;
      }
      if (uStack_5a == 4) {
        uVar4 = FUN_4063b514((int)sStack_58);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(0x4068b4a0,uVar4,(int)sStack_58);
      }
    }
    else {
      if (uStack_5a == 0x10 || uStack_5a == 0x20) goto LAB_4068b300;
      if (uStack_5a == 0x40) {
        uVar4 = FUN_403d07b4((int)sStack_58);
        pcVar2 = (code *)FUN_40554324();
        uVar5 = 0x4068b4a0;
LAB_4068b338:
        (*pcVar2)(uVar5,uVar4,(int)sStack_58);
      }
    }
  }
  else {
    if (uStack_5a == 0x800) {
LAB_4068b300:
      pcVar2 = (code *)FUN_40554324();
      iStack_3c = (int)sStack_58;
      uVar4 = 0x4068b4cc;
      goto LAB_4068b310;
    }
    if (uStack_5a < 0x801) {
      if ((uStack_5a == 0x100 || uStack_5a == 0x200) || uStack_5a == 0x400) goto LAB_4068b300;
    }
    else {
      if (uStack_5a == 0x1000 || uStack_5a == 0x2000) goto LAB_4068b300;
      if (uStack_5a == 0x4000) {
        uVar4 = FUN_40678380((int)sStack_58);
        pcVar2 = (code *)FUN_40554324();
        uVar5 = 0x4068b4f0;
        goto LAB_4068b338;
      }
    }
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b500);
  if (iStack_54 == -1) {
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b538);
  }
  else {
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(0x4068b518,iStack_54);
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b548,uStack_50);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b560,uStack_4c);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b578,uStack_48);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b590,uStack_44);
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b5ac,uStack_40);
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar6 + 0x10);
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b5c8,uVar4);
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_4067b0b0(iVar6);
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b5e4,uVar4);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_4067b148();
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b600,uVar4);
  if (iVar6 == 0) {
    uVar4 = 0x4068b61c;
  }
  else {
    iVar9 = FUN_4067b1cc(iVar6);
    if (iVar9 == 0) {
      uVar4 = 0x4068b62c;
    }
    else {
      uVar4 = 0x4068b624;
    }
  }
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b630,uVar4);
LAB_4068b798:
  pcVar2 = (code *)FUN_40554324();
  (*pcVar2)(0x4068b804);
  return 0;
}

