/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_PPU_ISPW(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 uStack_1a30;
  undefined1 auStack_1a2c [20];
  int iStack_1a18;
  undefined4 uStack_1a08;
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 auStack_19f8 [2];
  undefined4 uStack_19f0;
  char *pcStack_19ec;
  undefined4 uStack_19e8;
  int iStack_19e4;
  undefined4 uStack_19d8;
  undefined4 uStack_19d4;
  undefined4 uStack_19d0;
  undefined4 uStack_19cc;
  int iStack_19c4;
  char acStack_19b8 [128];
  undefined1 auStack_1938 [128];
  undefined1 auStack_18b8 [128];
  undefined1 auStack_1838 [128];
  undefined1 auStack_17b8 [128];
  undefined1 auStack_1738 [128];
  undefined1 auStack_16b8 [128];
  undefined1 auStack_1638 [128];
  undefined1 auStack_15b8 [128];
  undefined1 auStack_1538 [128];
  undefined1 auStack_14b8 [128];
  undefined1 auStack_1438 [128];
  undefined1 auStack_13b8 [128];
  undefined1 auStack_1338 [128];
  undefined1 auStack_12b8 [128];
  undefined1 auStack_1238 [128];
  undefined1 auStack_11b8 [128];
  undefined1 auStack_1138 [128];
  undefined1 auStack_10b8 [128];
  undefined1 auStack_1038 [128];
  undefined1 auStack_fb8 [128];
  undefined1 auStack_f38 [128];
  undefined1 auStack_eb8 [128];
  undefined1 auStack_e38 [128];
  undefined1 auStack_db8 [128];
  undefined1 auStack_d38 [128];
  undefined1 auStack_cb8 [128];
  undefined1 auStack_c38 [128];
  undefined1 auStack_bb8 [128];
  undefined1 auStack_b38 [128];
  undefined1 auStack_ab8 [128];
  undefined1 auStack_a38 [128];
  undefined1 auStack_9b8 [2304];
  char acStack_b8 [136];
  undefined4 uStack_30;
  int iStack_2c;
  
  uStack_30 = param_1;
  iStack_2c = param_2;
  FUN_406793bc(&uStack_30);
  FUN_4067cd44(0x403bfcc8);
  if (*(int *)(param_2 + 4) != 0) {
    uStack_1a30 = uRam403bfce0;
    uStack_1a08 = uRam403bfce4;
    iVar8 = FUN_4066f1e0(*(int *)(param_2 + 4),&uStack_1a30);
    if (iVar8 == 0) {
      FUN_4067c0f4(1,0,0x403bfd08);
      iVar8 = FUN_40659d60();
      *(undefined1 *)(iVar8 + 0x200) = 1;
      uVar9 = FUN_40677b5c();
      uStack_1a04 = FUN_40677c28(uVar9,0x133);
      iVar8 = FUN_40325bc4();
      uStack_1a08 = *(undefined4 *)(iVar8 + 0x14);
      iVar8 = FUN_40325bc4();
      uStack_1a00 = *(undefined4 *)(iVar8 + 0x10);
      bVar2 = false;
      iVar8 = FUN_4067992c();
      piVar16 = *(int **)(iVar8 + 0x10);
      uStack_1a30 = uRam403bfd2c;
      FUN_4067ca30(piVar16 != (int *)0x0,uRam403bfd34,uRam403bfd30,0xd5b);
      auStack_19f8[0] = 0;
      FUN_40677f14(auStack_1a2c);
      uStack_19d8 = uRam403bfd38;
      uStack_19d4 = uRam403bfd3c;
      uStack_19d0 = uRam403bfd40;
      uStack_19cc = uRam403bfd44;
      iVar8 = FUN_4063581c(piVar16,&uStack_19d8,auStack_1a2c);
      if (iVar8 != 0) {
        iVar8 = iStack_1a18;
        if (0x400 < iStack_1a18) {
          iVar8 = 0x400;
        }
        iVar10 = (**(code **)(*piVar16 + 0x14))(piVar16,&uStack_19d8,1,auStack_19f8);
        if (iVar10 != 0) {
          pcVar11 = (char *)FUN_406832d8(iVar8);
          if (pcVar11 != (char *)0x0) {
            FUN_40683cc4(acStack_b8,0x80);
            pcVar17 = (char *)0x0;
            pcStack_19ec = (char *)0x0;
            iVar10 = (**(code **)(*piVar16 + 0x1c))(piVar16,auStack_19f8[0],pcVar11,iVar8);
            if (iVar10 != 0) {
              bVar3 = false;
              iStack_19e4 = 0;
              iStack_19c4 = 0;
              for (pcVar18 = pcVar11;
                  (pcVar18 < pcVar11 + iVar8 && (cVar1 = *pcVar18, cVar1 != '#'));
                  pcVar18 = pcVar18 + 1) {
                if (cVar1 == '[') {
                  bVar3 = true;
                  pcVar17 = acStack_b8;
                  iStack_19e4 = 0;
                }
                else if (cVar1 == ']') {
                  *pcVar17 = '\0';
                  pcStack_19ec = acStack_19b8;
                  bVar3 = false;
                  iStack_19e4 = 1;
                  iStack_19c4 = 0;
                }
                else if (bVar3) {
                  *pcVar17 = cVar1;
                  pcVar17 = pcVar17 + 1;
                }
                else if ((cVar1 != '\r' && cVar1 != '\n') && cVar1 != ' ') {
                  if (iStack_19e4 == 0) {
                    if (cVar1 == '\x1a') break;
                  }
                  else if (cVar1 == ',') {
                    iStack_19c4 = iStack_19c4 + 1;
                    *pcStack_19ec = '\0';
                    pcStack_19ec = acStack_19b8 + iStack_19c4 * 0x80;
                  }
                  else if (cVar1 == '@') {
                    iStack_19c4 = iStack_19c4 + 1;
                    iStack_19e4 = 0;
                    *pcStack_19ec = '\0';
                    pcStack_19ec = acStack_19b8 + iStack_19c4 * 0x80;
                    iVar10 = FUN_40683ba0(acStack_b8,0x403bfd6c);
                    if (iVar10 == 0) {
                      uVar12 = FUN_4066f214(acStack_19b8);
                      uVar13 = FUN_4066f214(auStack_1938);
                      uVar14 = FUN_4066f214(auStack_18b8);
                      FUN_404f1164(uStack_1a04,(uVar14 & 1) << 4 | uVar12 & 1 | (uVar13 & 7) << 1,
                                   0x101);
                      uVar6 = FUN_4066f214(auStack_1838);
                      FUN_40323a8c(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_17b8);
                      FUN_40323b30(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_1738);
                      FUN_40323b90(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_16b8);
                      FUN_40323bf0(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_1638);
                      FUN_40323c78(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_15b8);
                      FUN_40323ca0(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_1538);
                      FUN_40323cc8(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_14b8);
                      FUN_40323cf0(uStack_1a08,uVar6);
                      uVar9 = FUN_4066f214(auStack_1438);
                      FUN_40323e18(uStack_1a08,uVar9);
                      uVar9 = FUN_4066f214(auStack_13b8);
                      FUN_40323e40(uStack_1a08,uVar9);
                      uVar9 = FUN_4066f214(auStack_1338);
                      FUN_40323e68(uStack_1a08,uVar9);
                      uVar9 = FUN_4066f214(auStack_12b8);
                      FUN_40323e90(uStack_1a08,uVar9);
                      uVar6 = FUN_4066f214(auStack_1238);
                      FUN_40323eb8(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_11b8);
                      FUN_40323ee0(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_1138);
                      FUN_40323f08(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_10b8);
                      FUN_40323f30(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_1038);
                      FUN_40323f58(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_fb8);
                      FUN_40323f80(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_f38);
                      FUN_40323fa8(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_eb8);
                      FUN_40323fd0(uStack_1a08,uVar6);
                      uVar6 = FUN_4066f214(auStack_db8);
                      uVar5 = FUN_4066f214(auStack_e38);
                      FUN_40323ff8(uStack_1a08,uVar5,uVar6);
                    }
                    else {
                      iVar10 = FUN_40683ba0(acStack_b8,0x403bfd74);
                      if (iVar10 == 0) {
                        uVar6 = FUN_4066f214(acStack_19b8);
                        FUN_40324044(uStack_1a08,uVar6);
                        uVar6 = FUN_4066f214(auStack_1938);
                        FUN_4032406c(uStack_1a08,uVar6);
                        uVar6 = FUN_4066f214(auStack_18b8);
                        FUN_40324094(uStack_1a08,uVar6);
                        uVar6 = FUN_4066f214(auStack_1838);
                        FUN_403240bc(uStack_1a08,uVar6);
                      }
                      else {
                        iVar10 = FUN_40683ba0(acStack_b8,0x403bfd80);
                        if (iVar10 == 0) {
                          uVar6 = FUN_4066f214(acStack_19b8);
                          FUN_403240e4(uStack_1a08,uVar6);
                          uVar6 = FUN_4066f214(auStack_1938);
                          FUN_4032410c(uStack_1a08,uVar6);
                          uVar6 = FUN_4066f214(auStack_18b8);
                          FUN_40324134(uStack_1a08,uVar6);
                          uVar6 = FUN_4066f214(auStack_1838);
                          FUN_4032415c(uStack_1a08,uVar6);
                        }
                        else {
                          iVar10 = FUN_40683ba0(acStack_b8,0x403bfd88);
                          if (iVar10 == 0) {
                            uVar12 = FUN_4066f214(acStack_19b8);
                            uVar13 = FUN_4066f214(auStack_1938);
                            uVar14 = FUN_4066f214(auStack_18b8);
                            uVar15 = FUN_4066f214(auStack_1838);
                            FUN_404f20b8(uStack_1a04,
                                         (uVar15 & 3) << 8 |
                                         uVar12 & 1 | (uVar13 & 1) << 1 | (uVar14 & 1) << 2);
                            uVar12 = 0;
                            do {
                              uVar6 = FUN_4066f214(auStack_17b8 + uVar12 * 0x80);
                              FUN_404f20c8(uStack_1a04,uVar6,uVar12 & 0xffff);
                              uVar12 = uVar12 + 1;
                            } while ((int)uVar12 < 0x15);
                            uVar12 = FUN_4066f214(auStack_d38);
                            uVar13 = FUN_4066f214(auStack_cb8);
                            FUN_404f20e0(uStack_1a04,(uVar13 & 0xff) << 8 | uVar12 & 0xff);
                            uVar12 = FUN_4066f214(auStack_c38);
                            uVar13 = FUN_4066f214(auStack_bb8);
                            FUN_404f20f4(uStack_1a04,(uVar13 & 0xff) << 8 | uVar12 & 0xff);
                            uVar6 = FUN_4066f214(auStack_b38);
                            FUN_404f2108(uStack_1a04,uVar6);
                            uVar6 = FUN_4066f214(auStack_ab8);
                            FUN_404f211c(uStack_1a04,uVar6);
                            uVar6 = FUN_4066f214(auStack_a38);
                            FUN_404f2130(uStack_1a04,uVar6);
                            uVar6 = FUN_4066f214(auStack_9b8);
                            FUN_404f2144(uStack_1a04,uVar6);
                          }
                          else {
                            iVar10 = FUN_40683ba0(acStack_b8,0x403bfd90);
                            if (iVar10 == 0) {
                              uVar12 = FUN_4066f214(acStack_19b8);
                              uVar13 = FUN_4066f214(auStack_1938);
                              uVar14 = FUN_4066f214(auStack_18b8);
                              uVar15 = FUN_4066f214(auStack_1838);
                              FUN_404f2158(uStack_1a04,
                                           (uVar15 & 7) << 4 |
                                           uVar12 & 1 | (uVar13 & 1) << 1 | (uVar14 & 1) << 2);
                              uVar12 = 0;
                              do {
                                uVar6 = FUN_4066f214(auStack_17b8 + uVar12 * 0x80);
                                FUN_404f216c(uStack_1a04,uVar6,uVar12 & 0xffff);
                                uVar12 = uVar12 + 1;
                              } while ((int)uVar12 < 0x15);
                              uVar12 = FUN_4066f214(auStack_d38);
                              uVar13 = FUN_4066f214(auStack_cb8);
                              FUN_404f2184(uStack_1a04,(uVar13 & 0xff) << 8 | uVar12 & 0xff);
                              uVar12 = FUN_4066f214(auStack_c38);
                              uVar13 = FUN_4066f214(auStack_bb8);
                              FUN_404f2198(uStack_1a04,(uVar13 & 0xff) << 8 | uVar12 & 0xff);
                            }
                            else {
                              iVar10 = FUN_40683ba0(acStack_b8,0x403bfd98);
                              if (iVar10 == 0) {
                                bVar2 = true;
                                uVar6 = FUN_4066f214(acStack_19b8);
                                FUN_404f21ac(uStack_1a04,uVar6);
                                uVar6 = FUN_4066f214(auStack_1938);
                                FUN_404f21c0(uStack_1a04,uVar6);
                                uVar6 = FUN_4066f214(auStack_18b8);
                                FUN_404f21d4(uStack_1a04,uVar6);
                              }
                              else {
                                iVar10 = FUN_40683ba0(acStack_b8,0x403bfda0);
                                if (iVar10 == 0) {
                                  sVar7 = FUN_4066f214(acStack_19b8);
                                  FUN_4032282c(uStack_1a00,sVar7 != 1);
                                  sVar7 = FUN_4066f214(auStack_1938);
                                  FUN_40322840(uStack_1a00,sVar7 != 1);
                                  sVar7 = FUN_4066f214(auStack_18b8);
                                  FUN_40322854(uStack_1a00,sVar7 != 1);
                                  sVar7 = FUN_4066f214(auStack_1838);
                                  FUN_40322868(uStack_1a00,sVar7 != 1);
                                  sVar7 = FUN_4066f214(auStack_17b8);
                                  FUN_4032287c(uStack_1a00,sVar7 != 1);
                                  sVar7 = FUN_4066f214(auStack_1738);
                                  FUN_40322890(uStack_1a00,sVar7 != 1);
                                }
                                else {
                                  iVar10 = FUN_40683ba0(acStack_b8,0x403bfdac);
                                  if (iVar10 != 0) goto LAB_403c03f8;
                                  uVar4 = FUN_4066f214(acStack_19b8);
                                  FUN_40322818(uStack_1a00,uVar4);
                                }
                                FUN_40323264(uStack_1a00);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    *pcStack_19ec = cVar1;
                    pcStack_19ec = pcStack_19ec + 1;
                  }
                }
LAB_403c03f8:
              }
            }
          }
          FUN_40683358(pcVar11);
        }
        (**(code **)(*piVar16 + 0x18))(piVar16,auStack_19f8[0]);
        if (bVar2) {
          uStack_19f0 = uRam403c07c4;
          pcStack_19ec = pcRam403c07c8;
          uStack_19e8 = uRam403c07cc;
          iStack_19e4 = iRam403c07d0;
          uVar9 = FUN_40674b78();
          iVar8 = FUN_40674bc0(uVar9,0xc008,0,uRam403bf574);
          iVar10 = (**(code **)(*piVar16 + 0x14))(piVar16,&uStack_19f0,1,auStack_19f8);
          if (iVar10 != 0) {
            if ((iVar8 != 0) &&
               (iVar10 = (**(code **)(*piVar16 + 0x1c))(piVar16,auStack_19f8[0],iVar8 + 8,0xc008),
               iVar10 != 0)) {
              FUN_404f6128(uStack_1a04,iVar8,0xc008,0x101);
            }
            (**(code **)(*piVar16 + 0x18))(piVar16,auStack_19f8[0]);
          }
          uVar9 = FUN_40674b78();
          FUN_40674be0(uVar9,iVar8,uRam403bf574);
        }
      }
      FUN_404f3dc8(uStack_1a04,0x101);
      FUN_4067cd44(0x403c07d4);
      FUN_40677f78(auStack_1a2c);
      return 0;
    }
    iVar8 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_1a08);
    if (iVar8 == 0) {
      FUN_4067c0f4(1,0,0x403bfd48);
      iVar8 = FUN_40659d60();
      *(undefined1 *)(iVar8 + 0x200) = 0;
      return 0;
    }
  }
  FUN_4067c0f4(0,0,0x403bfce8);
  return 0;
}

