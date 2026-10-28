/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_LoadSysparamFile(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  char acStack_c14 [128];
  undefined1 auStack_b94 [128];
  undefined1 auStack_b14 [128];
  undefined1 auStack_a94 [128];
  undefined1 auStack_a14 [128];
  undefined1 auStack_994 [128];
  undefined1 auStack_914 [128];
  undefined1 auStack_894 [128];
  undefined1 auStack_814 [1792];
  char acStack_114 [132];
  undefined4 auStack_90 [3];
  char *pcStack_84;
  undefined1 auStack_78 [20];
  int iStack_64;
  int iStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_28;
  
  uVar8 = 0;
  iStack_28 = param_1;
  iVar5 = FUN_4067992c();
  piVar9 = *(int **)(iVar5 + 0x10);
  FUN_4067ca30(piVar9 != (int *)0x0,0x4065b2a8,0x4065b290,0x38d,uRam4065b28c);
  auStack_90[0] = 0;
  FUN_40677f14(auStack_78);
  uStack_4c = uRam4065b2bc;
  uStack_48 = uRam4065b2c0;
  uStack_44 = uRam4065b2c4;
  uStack_40 = uRam4065b2c8;
  FUN_4067c0f4(0,0,0x4065b2cc);
  iVar5 = FUN_4063581c(piVar9,&uStack_4c,auStack_78);
  if (iVar5 != 0) {
    iVar5 = iStack_64;
    if (0x400 < iStack_64) {
      iVar5 = 0x400;
    }
    FUN_4067c0f4(0,0,0x4065b2fc,iVar5);
    iVar6 = (**(code **)(*piVar9 + 0x14))(piVar9,&uStack_4c,1,auStack_90);
    if (iVar6 != 0) {
      pcVar7 = (char *)FUN_406832d8(iVar5);
      if (pcVar7 != (char *)0x0) {
        FUN_40683cc4(acStack_114,0x80);
        pcVar10 = (char *)0x0;
        pcStack_84 = (char *)0x0;
        FUN_4067c0f4(0,0,0x4065b334);
        iVar6 = (**(code **)(*piVar9 + 0x1c))(piVar9,auStack_90[0],pcVar7,iVar5);
        if (iVar6 != 0) {
          FUN_4067c0f4(0,0,0x4065b360);
          bVar2 = false;
          iStack_54 = iStack_28 + 0x100;
          bVar3 = false;
          iStack_3c = 0;
          for (pcVar11 = pcVar7; (pcVar11 < pcVar7 + iVar5 && (cVar1 = *pcVar11, cVar1 != '#'));
              pcVar11 = pcVar11 + 1) {
            if (cVar1 == '[') {
              bVar2 = true;
              bVar3 = false;
              pcVar10 = acStack_114;
            }
            else if (cVar1 == ']') {
              *pcVar10 = '\0';
              pcStack_84 = acStack_c14;
              bVar2 = false;
              bVar3 = true;
              iStack_3c = 0;
            }
            else if (bVar2) {
              *pcVar10 = cVar1;
              pcVar10 = pcVar10 + 1;
            }
            else if ((cVar1 != '\r' && cVar1 != '\n') && cVar1 != ' ') {
              if (bVar3) {
                if (cVar1 == ',') {
                  iStack_3c = iStack_3c + 1;
                  *pcStack_84 = '\0';
                  pcStack_84 = acStack_c14 + iStack_3c * 0x80;
                }
                else if (cVar1 == '@') {
                  bVar3 = false;
                  iStack_3c = iStack_3c + 1;
                  *pcStack_84 = '\0';
                  pcStack_84 = acStack_c14 + iStack_3c * 0x80;
                  FUN_4067c0f4(0,0,0x4065b854,acStack_114,acStack_c14);
                  iVar6 = FUN_40683ba0(acStack_114,0x4065b870);
                  if (iVar6 == 0) {
                    iVar6 = FUN_4066f214(acStack_c14);
                    *(bool *)(iStack_28 + 9) = iVar6 != 0;
                  }
                  else {
                    iVar6 = FUN_40683ba0(acStack_114,0x4065b87c);
                    if (iVar6 == 0) {
LAB_4065c0c4:
                      *(undefined1 *)(iStack_28 + 6) = 1;
                      *(undefined1 *)(iStack_28 + 8) = 1;
                    }
                    else {
                      iVar6 = FUN_40683ba0(acStack_114,0x4065b888);
                      if (iVar6 == 0) {
                        *(undefined1 *)(iStack_28 + 6) = 1;
                        iVar6 = FUN_4066f214(acStack_c14);
                        *(bool *)(iStack_28 + 7) = iVar6 != 0;
                      }
                      else {
                        iVar6 = FUN_40683ba0(acStack_114,0x4065b894);
                        if (iVar6 == 0) {
                          iVar6 = FUN_4066f214(acStack_c14);
                          *(bool *)(iStack_28 + 0x13) = iVar6 != 0;
                          goto LAB_4065c0c4;
                        }
                        iVar6 = FUN_40683ba0(acStack_114,0x4065b8a0);
                        if (iVar6 == 0) {
                          iVar6 = FUN_4066f214(acStack_c14);
                          *(bool *)(iStack_28 + 0x14) = iVar6 != 0;
                        }
                        else {
                          iVar6 = FUN_40683ba0(acStack_114,0x4065b8b4);
                          if (iVar6 == 0) {
                            iVar6 = FUN_4066f214(acStack_c14);
                            *(bool *)(iStack_28 + 0x94) = iVar6 != 0;
                          }
                          else {
                            iVar6 = FUN_40683ba0(acStack_114,0x4065b8cc);
                            if (iVar6 == 0) {
                              iVar6 = FUN_4066f214(acStack_c14);
                              *(bool *)(iStack_28 + 0xb) = iVar6 != 0;
                            }
                            else {
                              iVar6 = FUN_40683ba0(acStack_114,0x4065b8e0);
                              if (iVar6 == 0) {
                                iVar6 = FUN_4066f214(acStack_c14);
                                *(bool *)(iStack_28 + 0xc) = iVar6 != 0;
                              }
                              else {
                                iVar6 = FUN_40683ba0(acStack_114,0x4065b8f4);
                                if (iVar6 == 0) {
                                  iVar6 = FUN_4066f214(acStack_c14);
                                  *(bool *)(iStack_28 + 0xd) = iVar6 != 0;
                                }
                                else {
                                  iVar6 = FUN_40683ba0(acStack_114,0x4065b908);
                                  if (iVar6 == 0) {
                                    iVar6 = FUN_4066f214(acStack_c14);
                                    *(bool *)(iStack_28 + 0xe) = iVar6 != 0;
                                  }
                                  else {
                                    iVar6 = FUN_40683ba0(acStack_114,0x4065b91c);
                                    if (iVar6 == 0) {
                                      iVar6 = FUN_4066f214(acStack_c14);
                                      *(bool *)(iStack_28 + 0xf) = iVar6 != 0;
                                      uVar4 = FUN_4066f214(auStack_b94);
                                      *(undefined2 *)(iStack_28 + 0x10) = uVar4;
                                    }
                                    else {
                                      iVar6 = FUN_40683ba0(acStack_114,0x4065b92c);
                                      if (iVar6 == 0) {
                                        iVar6 = FUN_4066f214(acStack_c14);
                                        *(bool *)(iStack_28 + 0x12) = iVar6 != 0;
                                      }
                                      else {
                                        iVar6 = FUN_40683ba0(acStack_114,0x4065b93c);
                                        if (iVar6 == 0) {
                                          iVar6 = FUN_4066f214(acStack_c14);
                                          *(bool *)(iStack_28 + 10) = iVar6 != 0;
                                        }
                                        else {
                                          iVar6 = FUN_40683ba0(acStack_114,0x4065b948);
                                          if (iVar6 == 0) {
                                            iVar6 = FUN_4066f214(acStack_c14);
                                            *(bool *)(iStack_28 + 0xa8) = iVar6 != 0;
                                            uVar8 = FUN_4066f214(auStack_b94);
                                            *(undefined4 *)(iStack_28 + 0xac) = uVar8;
                                          }
                                          else {
                                            iVar6 = FUN_40683ba0(acStack_114,0x4065b954);
                                            if (iVar6 == 0) {
                                              iVar6 = FUN_4066f214(acStack_c14);
                                              *(bool *)(iStack_28 + 0xb1) = iVar6 != 0;
                                              uVar4 = FUN_4066f214(auStack_b94);
                                              *(undefined2 *)(iStack_28 + 0xb2) = uVar4;
                                            }
                                            else {
                                              iVar6 = FUN_40683ba0(acStack_114,0x4065b964);
                                              if (iVar6 == 0) {
                                                iVar6 = FUN_4066f214(acStack_c14);
                                                *(bool *)(iStack_28 + 0xb5) = iVar6 != 0;
                                                uVar4 = FUN_4066f214(auStack_b94);
                                                *(undefined2 *)(iStack_28 + 0xb6) = uVar4;
                                                uVar4 = FUN_4066f214(auStack_b14);
                                                *(undefined2 *)(iStack_28 + 0xb8) = uVar4;
                                              }
                                              else {
                                                iVar6 = FUN_40683ba0(acStack_114,0x4065b970);
                                                if (iVar6 == 0) {
                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                  *(bool *)(iStack_28 + 0xba) = iVar6 != 0;
                                                  uVar4 = FUN_4066f214(auStack_b94);
                                                  *(undefined2 *)(iStack_28 + 0xbc) = uVar4;
                                                  uVar4 = FUN_4066f214(auStack_b14);
                                                  *(undefined2 *)(iStack_28 + 0xbe) = uVar4;
                                                }
                                                else {
                                                  iVar6 = FUN_40683ba0(acStack_114,0x4065b97c);
                                                  if (iVar6 == 0) {
                                                    iVar6 = FUN_4066f214(acStack_c14);
                                                    *(bool *)(iStack_28 + 0xc4) = iVar6 != 0;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065b988);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0xc5) = iVar6 != 0;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065b998);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0xc6) = iVar6 != 0;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065b9ac)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 199) = iVar6 != 0;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065b9bc);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 200) = iVar6 != 0;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065b9d4);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              bVar12 = iVar6 != 0;
                                                              *(bool *)(iStack_28 + 0xc9) = bVar12;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065b9e0);
                                                              if (iVar6 != 0) {
                                                                iVar6 = FUN_40683ba0(acStack_114,
                                                                                     0x4065b9ec);
                                                                if (iVar6 == 0) {
                                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                                  *(bool *)(iStack_28 + 0xcb) =
                                                                       iVar6 != 0;
                                                                }
                                                                else {
                                                                  iVar6 = FUN_40683ba0(acStack_114,
                                                                                       0x4065ba04);
                                                                  if (iVar6 == 0) {
                                                                    iVar6 = FUN_4066f214(acStack_c14
                                                                                        );
                                                                    *(bool *)(iStack_28 + 0xcc) =
                                                                         iVar6 != 0;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_40683ba0(acStack_114
                                                                                         ,0x4065ba18
                                                                                        );
                                                                    if (iVar6 == 0) {
                                                                      iVar6 = FUN_4066f214(
                                                  acStack_c14);
                                                  *(bool *)(iStack_28 + 0xcd) = iVar6 != 0;
                                                  uVar8 = FUN_4066f214(auStack_b94);
                                                  *(undefined4 *)(iStack_28 + 0xd0) = uVar8;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065ba20);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0xd4) = iVar6 != 0;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065ba2c);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0xd5) = iVar6 != 0;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065ba44)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 0xd6) = iVar6 != 0;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065ba64);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 0xd7) = iVar6 != 0
                                                            ;
                                                            uVar4 = FUN_4066f214(auStack_b94);
                                                            *(undefined2 *)(iStack_28 + 0xd8) =
                                                                 uVar4;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065ba74);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              *(bool *)(iStack_28 + 0xda) =
                                                                   iVar6 != 0;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065ba8c);
                                                              if (iVar6 == 0) {
                                                                iVar6 = FUN_4066f214(acStack_c14);
                                                                *(bool *)(iStack_28 + 0xdb) =
                                                                     iVar6 != 0;
                                                              }
                                                              else {
                                                                iVar6 = FUN_40683ba0(acStack_114,
                                                                                     0x4065baa4);
                                                                if (iVar6 == 0) {
                                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                                  *(bool *)(iStack_28 + 0xdc) =
                                                                       iVar6 != 0;
                                                                }
                                                                else {
                                                                  iVar6 = FUN_40683ba0(acStack_114,
                                                                                       0x4065babc);
                                                                  if (iVar6 == 0) {
                                                                    iVar6 = FUN_4066f214(acStack_c14
                                                                                        );
                                                                    *(bool *)(iStack_28 + 0xdd) =
                                                                         iVar6 != 0;
                                                                    uVar4 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined2 *)
                                                                     (iStack_28 + 0xde) = uVar4;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_40683ba0(acStack_114
                                                                                         ,0x4065bad8
                                                                                        );
                                                                    if (iVar6 == 0) {
                                                                      iVar6 = FUN_4066f214(
                                                  acStack_c14);
                                                  *(bool *)(iStack_28 + 0xe0) = iVar6 != 0;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065baf0);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0xe1) = iVar6 != 0;
                                                      uVar4 = FUN_4066f214(auStack_b94);
                                                      *(undefined2 *)(iStack_28 + 0xe2) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_b14);
                                                      *(undefined2 *)(iStack_28 + 0xe4) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_a94);
                                                      *(undefined2 *)(iStack_28 + 0xe6) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_a14);
                                                      *(undefined2 *)(iStack_28 + 0xe8) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_994);
                                                      *(undefined2 *)(iStack_28 + 0xea) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_914);
                                                      *(undefined2 *)(iStack_28 + 0xec) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_894);
                                                      *(undefined2 *)(iStack_28 + 0xee) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_814);
                                                      *(undefined2 *)(iStack_28 + 0xf0) = uVar4;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065bb04);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0xf2) = iVar6 != 0;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065bb1c)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 0xf3) = iVar6 != 0;
                                                          uVar4 = FUN_4066f214(auStack_b94);
                                                          *(undefined2 *)(iStack_28 + 0xf4) = uVar4;
                                                          uVar4 = FUN_4066f214(auStack_b14);
                                                          *(undefined2 *)(iStack_28 + 0xf6) = uVar4;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065bb2c);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 0xf8) = iVar6 != 0
                                                            ;
                                                            uVar8 = FUN_4066f214(auStack_b94);
                                                            *(undefined4 *)(iStack_28 + 0xfc) =
                                                                 uVar8;
                                                            uVar8 = FUN_4066f214(auStack_b14);
                                                            *(undefined4 *)(iStack_28 + 0x100) =
                                                                 uVar8;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065be10);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              *(bool *)(iStack_28 + 0x104) =
                                                                   iVar6 != 0;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065be24);
                                                              if (iVar6 == 0) {
                                                                iVar6 = FUN_4066f214(acStack_c14);
                                                                *(bool *)(iStack_28 + 0x105) =
                                                                     iVar6 != 0;
                                                                uVar8 = FUN_4066f214(auStack_b94);
                                                                *(undefined4 *)(iStack_28 + 0x108) =
                                                                     uVar8;
                                                                uVar8 = FUN_4066f214(auStack_b14);
                                                                *(undefined4 *)(iStack_28 + 0x10c) =
                                                                     uVar8;
                                                                uVar8 = FUN_4066f214(auStack_a94);
                                                                *(undefined4 *)(iStack_28 + 0x110) =
                                                                     uVar8;
                                                              }
                                                              else {
                                                                iVar6 = FUN_40683ba0(acStack_114,
                                                                                     0x4065be34);
                                                                if (iVar6 == 0) {
                                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                                  *(bool *)(iStack_28 + 0x114) =
                                                                       iVar6 != 0;
                                                                  uVar8 = FUN_4066f214(auStack_b94);
                                                                  *(undefined4 *)(iStack_28 + 0x118)
                                                                       = uVar8;
                                                                  uVar8 = FUN_4066f214(auStack_b14);
                                                                  *(undefined4 *)(iStack_28 + 0x11c)
                                                                       = uVar8;
                                                                  uVar8 = FUN_4066f214(auStack_a94);
                                                                  *(undefined4 *)(iStack_28 + 0x120)
                                                                       = uVar8;
                                                                }
                                                                else {
                                                                  iVar6 = FUN_40683ba0(acStack_114,
                                                                                       0x4065be48);
                                                                  if (iVar6 == 0) {
                                                                    iVar6 = FUN_4066f214(acStack_c14
                                                                                        );
                                                                    *(bool *)(iStack_28 + 0x7c) =
                                                                         iVar6 != 0;
                                                                    uVar8 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined4 *)
                                                                     (iStack_28 + 0x84) = uVar8;
                                                                    uVar8 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined4 *)
                                                                     (iStack_28 + 0x88) = uVar8;
                                                                    uVar8 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined4 *)
                                                                     (iStack_28 + 0x8c) = uVar8;
                                                                    uVar8 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined4 *)
                                                                     (iStack_28 + 0x90) = uVar8;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_40683ba0(acStack_114
                                                                                         ,0x4065be58
                                                                                        );
                                                                    if (iVar6 == 0) {
                                                                      iVar6 = FUN_4066f214(
                                                  acStack_c14);
                                                  *(bool *)(iStack_28 + 0x7d) = iVar6 != 0;
                                                  uVar8 = FUN_4066f214(auStack_b94);
                                                  *(undefined4 *)(iStack_28 + 0x80) = uVar8;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065be68);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0x124) = iVar6 != 0;
                                                      uVar4 = FUN_4066f214(auStack_b94);
                                                      *(undefined2 *)(iStack_54 + 0x26) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_b14);
                                                      *(undefined2 *)(iStack_54 + 0x28) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_a94);
                                                      *(undefined2 *)(iStack_54 + 0x2a) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_a14);
                                                      *(undefined2 *)(iStack_54 + 0x2c) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_994);
                                                      *(undefined2 *)(iStack_54 + 0x2e) = uVar4;
                                                      uVar4 = FUN_4066f214(auStack_914);
                                                      *(undefined2 *)(iStack_54 + 0x30) = uVar4;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065be80);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0x132) = iVar6 != 0;
                                                        uVar4 = FUN_4066f214(auStack_b94);
                                                        *(undefined2 *)(iStack_54 + 0x34) = uVar4;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065be98)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 0x136) = iVar6 != 0;
                                                          uVar4 = FUN_4066f214(auStack_b94);
                                                          *(undefined2 *)(iStack_54 + 0x38) = uVar4;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065beb0);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 0x13a) =
                                                                 iVar6 != 0;
                                                            uVar4 = FUN_4066f214(auStack_b94);
                                                            *(undefined2 *)(iStack_54 + 0x3c) =
                                                                 uVar4;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065bec4);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              *(bool *)(iStack_28 + 0x13e) =
                                                                   iVar6 != 0;
                                                              uVar4 = FUN_4066f214(auStack_b94);
                                                              *(undefined2 *)(iStack_54 + 0x40) =
                                                                   uVar4;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065bedc);
                                                              if (iVar6 == 0) {
                                                                iVar6 = FUN_4066f214(acStack_c14);
                                                                *(bool *)(iStack_28 + 0x142) =
                                                                     iVar6 != 0;
                                                                uVar4 = FUN_4066f214(auStack_b94);
                                                                *(undefined2 *)(iStack_54 + 0x44) =
                                                                     uVar4;
                                                              }
                                                              else {
                                                                iVar6 = FUN_40683ba0(acStack_114,
                                                                                     0x4065bef4);
                                                                if (iVar6 == 0) {
                                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                                  *(bool *)(iStack_28 + 0x146) =
                                                                       iVar6 != 0;
                                                                  uVar4 = FUN_4066f214(auStack_b94);
                                                                  *(undefined2 *)(iStack_54 + 0x48)
                                                                       = uVar4;
                                                                  uVar4 = FUN_4066f214(auStack_b14);
                                                                  *(undefined2 *)(iStack_54 + 0x4a)
                                                                       = uVar4;
                                                                }
                                                                else {
                                                                  iVar6 = FUN_40683ba0(acStack_114,
                                                                                       0x4065bf0c);
                                                                  if (iVar6 == 0) {
                                                                    iVar6 = FUN_4066f214(acStack_c14
                                                                                        );
                                                                    *(bool *)(iStack_28 + 0x14c) =
                                                                         iVar6 != 0;
                                                                    uVar4 = FUN_4066f214(auStack_b94
                                                                                        );
                                                                    *(undefined2 *)
                                                                     (iStack_54 + 0x4e) = uVar4;
                                                                    uVar4 = FUN_4066f214(auStack_b14
                                                                                        );
                                                                    *(undefined2 *)
                                                                     (iStack_54 + 0x50) = uVar4;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_40683ba0(acStack_114
                                                                                         ,0x4065bf28
                                                                                        );
                                                                    if (iVar6 == 0) {
                                                                      iVar6 = FUN_4066f214(
                                                  acStack_c14);
                                                  *(bool *)(iStack_28 + 0x152) = iVar6 != 0;
                                                  uVar4 = FUN_4066f214(auStack_b94);
                                                  *(undefined2 *)(iStack_54 + 0x54) = uVar4;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065bf40);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0x156) = iVar6 != 0;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065bf54);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0x157) = iVar6 != 0;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065bf68)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 0x158) = iVar6 != 0;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065bf7c);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 0x159) =
                                                                 iVar6 != 0;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065bf98);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              *(bool *)(iStack_28 + 0x15a) =
                                                                   iVar6 != 0;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065bfac);
                                                              if (iVar6 == 0) {
                                                                iVar6 = FUN_4066f214(acStack_c14);
                                                                *(bool *)(iStack_28 + 0x15b) =
                                                                     iVar6 != 0;
                                                              }
                                                              else {
                                                                iVar6 = FUN_40683ba0(acStack_114,
                                                                                     0x4065bfc4);
                                                                if (iVar6 == 0) {
                                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                                  *(bool *)(iStack_28 + 0x15c) =
                                                                       iVar6 != 0;
                                                                }
                                                                else {
                                                                  iVar6 = FUN_40683ba0(acStack_114,
                                                                                       0x4065bfdc);
                                                                  if (iVar6 == 0) {
                                                                    iVar6 = FUN_4066f214(acStack_c14
                                                                                        );
                                                                    *(bool *)(iStack_28 + 0x1c1) =
                                                                         iVar6 != 0;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_40683ba0(acStack_114
                                                                                         ,0x4065bfec
                                                                                        );
                                                                    if (iVar6 == 0) {
                                                                      iVar6 = FUN_4066f214(
                                                  acStack_c14);
                                                  *(bool *)(iStack_28 + 0x1c3) = iVar6 != 0;
                                                  }
                                                  else {
                                                    iVar6 = FUN_40683ba0(acStack_114,0x4065c000);
                                                    if (iVar6 == 0) {
                                                      iVar6 = FUN_4066f214(acStack_c14);
                                                      *(bool *)(iStack_28 + 0x1c4) = iVar6 != 0;
                                                    }
                                                    else {
                                                      iVar6 = FUN_40683ba0(acStack_114,0x4065c014);
                                                      if (iVar6 == 0) {
                                                        iVar6 = FUN_4066f214(acStack_c14);
                                                        *(bool *)(iStack_28 + 0x1c5) = iVar6 != 0;
                                                      }
                                                      else {
                                                        iVar6 = FUN_40683ba0(acStack_114,0x4065c028)
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = FUN_4066f214(acStack_c14);
                                                          *(bool *)(iStack_28 + 0x1c6) = iVar6 != 0;
                                                        }
                                                        else {
                                                          iVar6 = FUN_40683ba0(acStack_114,
                                                                               0x4065c040);
                                                          if (iVar6 == 0) {
                                                            iVar6 = FUN_4066f214(acStack_c14);
                                                            *(bool *)(iStack_28 + 0x1ea) =
                                                                 iVar6 != 0;
                                                            uVar8 = FUN_4066f214(auStack_b94);
                                                            *(undefined4 *)(iStack_28 + 0x1ec) =
                                                                 uVar8;
                                                          }
                                                          else {
                                                            iVar6 = FUN_40683ba0(acStack_114,
                                                                                 0x4065c048);
                                                            if (iVar6 == 0) {
                                                              iVar6 = FUN_4066f214(acStack_c14);
                                                              *(bool *)(iStack_28 + 0x1f0) =
                                                                   iVar6 != 0;
                                                              uVar8 = FUN_4066f214(auStack_b94);
                                                              *(undefined4 *)(iStack_28 + 500) =
                                                                   uVar8;
                                                            }
                                                            else {
                                                              iVar6 = FUN_40683ba0(acStack_114,
                                                                                   0x4065c050);
                                                              if (iVar6 == 0) {
                                                                iVar6 = FUN_4066f214(acStack_c14);
                                                                *(bool *)(iStack_28 + 0x1f8) =
                                                                     iVar6 != 0;
                                                                uVar8 = FUN_4066f214(auStack_b94);
                                                                *(undefined4 *)(iStack_28 + 0x1fc) =
                                                                     uVar8;
                                                              }
                                                              else {
                                                                FUN_40659da8(iStack_28,acStack_114,
                                                                             acStack_c14);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_4065cc44;
                                                  }
                                                  iVar6 = FUN_4066f214(acStack_c14);
                                                  bVar12 = iVar6 != 0;
                                                  *(bool *)(iStack_28 + 0xca) = bVar12;
                                                  }
                                                  *(bool *)(iStack_28 + 6) = bVar12;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  *pcStack_84 = cVar1;
                  pcStack_84 = pcStack_84 + 1;
                }
              }
              else if (cVar1 == '\x1a') break;
            }
LAB_4065cc44:
          }
        }
      }
      FUN_40683358(pcVar7);
      uVar8 = 1;
    }
    (**(code **)(*piVar9 + 0x18))(piVar9,auStack_90[0]);
  }
  FUN_40677f78(auStack_78);
  return uVar8;
}

