/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_rtc(int param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  pcVar5 = (char *)FUN_406793bc(&iStack_24);
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != 'h')) {
    if (iStack_24 < 2) {
      uVar6 = 0x40222ef0;
    }
    else {
      uVar6 = FUN_40677b5c(iStack_24);
      uVar6 = FUN_40677c28(uVar6,0xf2);
      iVar7 = FUN_40683ba0(param_2[1],0x40222f04);
      puVar1 = puRam40222f08;
      if (iVar7 == 0) {
        FUN_4067a1f4(auStack_38,*puRam40222f08,1,1,0,0,0,0);
        iVar7 = FUN_402229cc(uVar6,auStack_38);
        FUN_4067cd44(0x40222f40,*puRam40222aa8);
        if (iVar7 == 0) {
          uVar6 = 0x40222f58;
        }
        else {
          uVar6 = 0x40222f54;
        }
        FUN_4067cd44(0x40222f5c,uVar6);
        uVar6 = FUN_4067a468(auStack_38);
        uVar13 = FUN_4067a460(auStack_38);
        uVar9 = FUN_4067a458(auStack_38);
        uVar10 = FUN_4067a3d4(auStack_38);
        uVar11 = FUN_4067a3cc(auStack_38);
        uVar12 = FUN_4067a3c4(auStack_38);
LAB_40223068:
        FUN_4067cd44(0x40222f70,uVar12,uVar11,uVar10,uVar9,uVar13,uVar6);
        if (iVar7 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 0;
        }
        FUN_4067a220(auStack_38);
        return uVar6;
      }
      iVar7 = FUN_40683ba0(param_2[1],0x40222f0c);
      if (iVar7 == 0) {
        FUN_4067a1f4(auStack_38,*puVar1,1,1,0,0,0,0);
        uVar4 = 0;
        FUN_402229cc(uVar6,auStack_38);
        for (iVar7 = 2; iVar7 < iStack_24; iVar7 = iVar7 + 2) {
          iVar8 = FUN_40683ba0(param_2[iVar7],0x40222f9c);
          if (iVar8 == 0) {
            uVar3 = FUN_4020c174(param_2[iVar7 + 1],0);
            FUN_4067a268(auStack_38,uVar3);
          }
          else {
            iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fa0);
            if (iVar8 == 0) {
              uVar2 = FUN_4020c174(param_2[iVar7 + 1],0);
              FUN_4067a270(auStack_38,uVar2);
            }
            else {
              iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fa4);
              if (iVar8 == 0) {
                uVar2 = FUN_4020c174(param_2[iVar7 + 1],0);
                FUN_4067a314(auStack_38,uVar2,0);
              }
              else {
                iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fa8);
                if (iVar8 == 0) {
                  uVar2 = FUN_4020c174(param_2[iVar7 + 1],0);
                  FUN_4067a378(auStack_38,uVar2);
                }
                else {
                  iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fac);
                  if (iVar8 == 0) {
                    uVar2 = FUN_4020c174(param_2[iVar7 + 1],0);
                    FUN_4067a388(auStack_38,uVar2);
                  }
                  else {
                    iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fb0);
                    if (iVar8 == 0) {
                      uVar2 = FUN_4020c174(param_2[iVar7 + 1],0);
                      FUN_4067a398(auStack_38,uVar2);
                    }
                    else {
                      iVar8 = FUN_40683ba0(param_2[iVar7],0x40222fb4);
                      if (iVar8 == 0) {
                        uVar4 = FUN_4020c174(param_2[iVar7 + 1],0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar7 = FUN_40222890(uVar6,auStack_38,uVar4);
        if (iVar7 == 0) {
          uVar13 = 0x40222f58;
        }
        else {
          uVar13 = 0x40222f54;
        }
        FUN_4067cd44(0x402230d8,uVar13);
        FUN_402229cc(uVar6,auStack_38);
        uVar6 = FUN_4067a468(auStack_38);
        uVar13 = FUN_4067a460(auStack_38);
        uVar9 = FUN_4067a458(auStack_38);
        uVar10 = FUN_4067a3d4(auStack_38);
        uVar11 = FUN_4067a3cc(auStack_38);
        uVar12 = FUN_4067a3c4(auStack_38);
        goto LAB_40223068;
      }
      iVar7 = FUN_40683ba0(param_2[1],0x40222f10);
      if (iVar7 == 0) {
        uVar4 = 0x7fff;
        if (2 < iStack_24) {
          uVar4 = FUN_4020c174(param_2[2],0);
        }
        iVar7 = FUN_40222810(uVar6,uVar4);
        if (iVar7 == 0) {
          uVar6 = 0x40222f58;
        }
        else {
          uVar6 = 0x40222f54;
        }
        FUN_4067cd44(0x402230ec,uVar6);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        return 0;
      }
      uVar6 = 0x40222f18;
    }
    FUN_4067cd44(uVar6);
  }
  uStack_30 = *puRam40222f28;
  uStack_2c = puRam40222f28[1];
  uStack_28 = puRam40222f28[2];
  FUN_40679338(*param_2,0x40222f2c,&uStack_30,3);
  return 0xffffffff;
}

