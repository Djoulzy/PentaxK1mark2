/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_log(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [60];
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_1c);
  iVar4 = iRam408ba848;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) goto LAB_408bafc8;
  iVar6 = iRam408ba848 + 0x18;
  if (iStack_1c < 2) {
    FUN_4067df14();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba84c,uVar2);
    FUN_4067df34();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba860,uVar2);
    FUN_4067cd44(0x408ba874);
    FUN_4067e1f4(uRam408ba888);
    FUN_4067cd44(0x408ba88c);
    iVar3 = FUN_4067df68();
    FUN_4067cd44(0x408ba890,*(undefined4 *)(iVar4 + iVar3 * 4));
    iVar3 = FUN_4067df9c();
    FUN_4067cd44(0x408ba8a4,*(undefined4 *)(iVar4 + iVar3 * 4));
    iVar3 = FUN_4067dfd0();
    FUN_4067cd44(0x408ba8b8,*(undefined4 *)(iVar4 + iVar3 * 4));
    iVar4 = FUN_4067e004();
    FUN_4067cd44(0x408ba8cc,*(undefined4 *)(iVar6 + iVar4 * 4));
    iVar4 = FUN_4067e038();
    FUN_4067cd44(0x408ba8e0,*(undefined4 *)(iVar6 + iVar4 * 4));
    FUN_4067e058();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba8f4,uVar2);
    FUN_4067e078();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba908,uVar2);
    FUN_4067e098();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba91c,uVar2);
    FUN_4067e0dc();
    uVar2 = FUN_4067989c();
    FUN_4067cd44(0x408ba930,uVar2);
    return 0;
  }
  iVar3 = FUN_40683ba0(param_2[1],0x408baba0);
  if (iVar3 == 0) {
    if (2 < iStack_1c) {
      iVar6 = FUN_408ba688(param_2[2]);
      uVar9 = FUN_4067df40();
      if ((int)uVar9 == 0) {
        uVar5 = *(undefined4 *)(iVar4 + iVar6 * 4);
        uVar2 = 0x408bac08;
LAB_408bab98:
        FUN_4067cd44(uVar2,uVar5);
        return 0;
      }
LAB_408bad00:
      uVar2 = 0x408baec0;
LAB_408bad04:
      FUN_4067cd44(uVar2,(int)((ulonglong)uVar9 >> 0x20));
      return (int)uVar9;
    }
  }
  else {
    iVar3 = FUN_40683ba0(param_2[1],0x408baba8);
    if (iVar3 == 0) {
      if (2 < iStack_1c) {
        iVar6 = FUN_408ba688(param_2[2]);
        uVar9 = FUN_4067df74();
        if ((int)uVar9 == 0) {
          uVar5 = *(undefined4 *)(iVar4 + iVar6 * 4);
          uVar2 = 0x408bac20;
          goto LAB_408bab98;
        }
        goto LAB_408bad00;
      }
    }
    else {
      iVar3 = FUN_40683ba0(param_2[1],0x408babb0);
      if (iVar3 == 0) {
        if (2 < iStack_1c) {
          iVar6 = FUN_40683ba0(param_2[2],0x408bac00);
          if (iVar6 == 0) {
            FUN_4067df20(1);
            uVar2 = 0x408bac50;
LAB_408bab34:
            FUN_4067cd44(uVar2);
            return 0;
          }
          iVar6 = FUN_40683ba0(param_2[2],0x408bac04);
          if (iVar6 == 0) {
            FUN_4067df20(0);
            uVar2 = 0x408bac64;
            goto LAB_408bab34;
          }
          iVar6 = FUN_408ba688(param_2[2]);
          uVar9 = FUN_4067dfa8();
          if ((int)uVar9 == 0) {
            uVar5 = *(undefined4 *)(iVar4 + iVar6 * 4);
            uVar2 = 0x408bac38;
            goto LAB_408bab98;
          }
          goto LAB_408bad00;
        }
      }
      else {
        iVar4 = FUN_40683ba0(param_2[1],0x408babb8);
        if (iVar4 == 0) {
          if (2 < iStack_1c) {
            iVar4 = FUN_408ba62c(param_2[2]);
            uVar9 = FUN_4067dfdc();
            if ((int)uVar9 == 0) {
              uVar5 = *(undefined4 *)(iVar6 + iVar4 * 4);
              uVar2 = 0x408bac78;
              goto LAB_408bab98;
            }
            goto LAB_408bad00;
          }
        }
        else {
          iVar4 = FUN_40683ba0(param_2[1],0x408babc0);
          if (iVar4 == 0) {
            if (2 < iStack_1c) {
              iVar4 = FUN_408ba62c(param_2[2]);
              uVar9 = FUN_4067e010();
              if ((int)uVar9 == 0) {
                uVar5 = *(undefined4 *)(iVar6 + iVar4 * 4);
                uVar2 = 0x408bac90;
                goto LAB_408bab98;
              }
              goto LAB_408bad00;
            }
          }
          else {
            iVar4 = FUN_40683ba0(param_2[1],0x408babc8);
            if (iVar4 == 0) {
              if (2 < iStack_1c) {
                iVar4 = FUN_40683ba0(param_2[2],0x408bac00);
                if (iVar4 == 0) {
                  FUN_4067e044(1);
                  uVar2 = 0x408bae94;
                  goto LAB_408bab34;
                }
                uVar8 = FUN_40683ba0(param_2[2],0x408bac04);
                uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
                if ((int)uVar8 == 0) {
                  FUN_4067e044(0);
                  uVar2 = 0x408baea8;
                  goto LAB_408bab34;
                }
                goto LAB_408bad00;
              }
            }
            else {
              iVar4 = FUN_40683ba0(param_2[1],0x408babd0);
              if (iVar4 == 0) {
                if (2 < iStack_1c) {
                  iVar4 = FUN_40683ba0(param_2[2],0x408bac00);
                  if (iVar4 == 0) {
                    FUN_4067e064(1);
                    uVar2 = 0x408baee4;
                    goto LAB_408bab34;
                  }
                  uVar8 = FUN_40683ba0(param_2[2],0x408bac04);
                  uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
                  if ((int)uVar8 == 0) {
                    FUN_4067e064(0);
                    uVar2 = 0x408baed0;
                    goto LAB_408bab34;
                  }
                  goto LAB_408bad00;
                }
              }
              else {
                iVar4 = FUN_40683ba0(param_2[1],0x408babd8);
                if (iVar4 == 0) {
                  if (2 < iStack_1c) {
                    iVar4 = FUN_40683ba0(param_2[2],0x408bac00);
                    if (iVar4 == 0) {
                      FUN_4067e084(1);
                      uVar2 = 0x408baf0c;
                      goto LAB_408bab34;
                    }
                    uVar8 = FUN_40683ba0(param_2[2],0x408bac04);
                    uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
                    if ((int)uVar8 == 0) {
                      FUN_4067e084(0);
                      uVar2 = 0x408baef8;
                      goto LAB_408bab34;
                    }
                    goto LAB_408bad00;
                  }
                }
                else {
                  iVar4 = FUN_40683ba0(param_2[1],0x408babe0);
                  if (iVar4 == 0) {
                    if (2 < iStack_1c) {
                      iVar4 = FUN_40683ba0(param_2[2],0x408bac00);
                      if (iVar4 == 0) {
                        FUN_4067e0a4(1);
                        uVar2 = 0x408baf38;
                        goto LAB_408bab34;
                      }
                      uVar8 = FUN_40683ba0(param_2[2],0x408bac04);
                      uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
                      if ((int)uVar8 == 0) {
                        FUN_4067e0a4(0);
                        uVar2 = 0x408baf20;
                        goto LAB_408bab34;
                      }
                      goto LAB_408bad00;
                    }
                  }
                  else {
                    iVar4 = FUN_40683ba0(param_2[1],0x408babe8);
                    if (iVar4 == 0) {
                      FUN_4067d308(param_2[2]);
                      uVar2 = 0x408baf4c;
                      goto LAB_408bab34;
                    }
                    iVar4 = FUN_40683ba0(param_2[1],0x408babf0);
                    if (iVar4 == 0) {
                      uVar8 = FUN_4067d32c();
                      uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
                      if ((int)uVar8 != 0) {
                        uVar2 = 0x408baf5c;
                        goto LAB_408bab34;
                      }
                      uVar2 = 0x408baf6c;
                      goto LAB_408bad04;
                    }
                    iVar4 = FUN_40683ba0(param_2[1],0x408babf8);
                    if (iVar4 == 0) {
                      FUN_4067de1c(0);
                      return 0;
                    }
                    iVar4 = FUN_40683ba0(param_2[1],0x408bac00);
                    if ((iVar4 == 0) || (iVar4 = FUN_40683ba0(param_2[1],0x408bac04), iVar4 == 0)) {
                      iVar4 = FUN_40683ba0(param_2[1],0x408bac00);
                      bVar7 = iVar4 == 0;
                      if (iStack_1c < 3) {
                        if (bVar7) {
                          FUN_4067df00(1);
                          uVar2 = 0x408baf78;
                        }
                        else {
                          FUN_4067df00(0);
                          uVar2 = 0x408baf88;
                        }
                        FUN_4067cd44(uVar2);
                        FUN_4067e258();
                        return 0;
                      }
                      uVar9 = FUN_4067e0ec(bVar7,param_2 + 2,iStack_1c + -2);
                      if ((int)uVar9 == 0) {
                        FUN_4067df00(!bVar7);
                        return 0;
                      }
                      goto LAB_408bad00;
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
  FUN_4067cd44(0x408baec0);
LAB_408bafc8:
  FUN_406833b0(auStack_58,uRam408bb218,0x38);
  FUN_40679338(*param_2,0x408bb21c,auStack_58,0xe);
  return 0xffffffff;
}

