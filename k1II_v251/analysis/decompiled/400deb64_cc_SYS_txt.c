/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_txt(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  ushort uStack_60;
  short sStack_5e;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *puStack_44;
  uint *puStack_40;
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_28 = param_1;
  puStack_24 = param_2;
  pcVar3 = (char *)FUN_4000afd8(&iStack_28);
  iVar2 = iRam400dee54;
  uVar1 = uRam400dee4c;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != 'h')) {
    uVar10 = uRam400dee4c + iRam400dee50;
    if (iStack_28 != 2) {
      FUN_400dbfd0(0x400dee58);
      iVar9 = 1;
      do {
        iVar4 = FUN_400e6a94((int)(short)iVar9,&uStack_60);
        if (-1 < iVar4) {
          iVar4 = FUN_400db610(iVar9);
          uVar5 = FUN_400db674(iVar9);
          pcVar6 = (code *)FUN_400dfae0();
          (*pcVar6)(0x400dee64,iVar9,uVar5,(int)sStack_5e);
          if (iVar4 == 0) {
            uVar7 = 0;
            uVar5 = uVar7;
          }
          else {
            uVar5 = *(undefined4 *)(iVar4 + 0x10);
            uVar7 = FUN_400dbc3c(iVar4);
          }
          pcVar6 = (code *)FUN_400dfae0();
          (*pcVar6)(0x400dee80,*(undefined4 *)(iVar2 + (uint)uStack_60 * 4),uVar7,uVar5);
          pcVar6 = (code *)FUN_400dfae0();
          (*pcVar6)(0x400deea0,uStack_50,uStack_4c,uStack_48);
          if (puStack_44 == (uint *)0x0) {
            pcVar6 = (code *)FUN_400dfae0();
            (*pcVar6)(0x400def24);
          }
          else {
            if (iVar4 == 0) {
              pcVar6 = (code *)FUN_400dfae0();
              uVar5 = 0x400df084;
            }
            else {
              if (puStack_40 <= puStack_44) {
                puVar8 = puStack_44;
                if (puStack_44 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10))) {
                  do {
                    if (uVar1 <= *puVar8 && *puVar8 <= uVar10) {
                      pcVar6 = (code *)FUN_400dfae0();
                      (*pcVar6)(0x400df0bc,*puVar8);
                    }
                    puVar8 = puVar8 + 1;
                  } while (puVar8 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10)));
                }
                goto LAB_400df030;
              }
              pcVar6 = (code *)FUN_400dfae0();
              uVar5 = 0x400deed4;
            }
            (*pcVar6)(uVar5);
          }
        }
LAB_400df030:
        iVar9 = iVar9 + 1;
      } while (iVar9 < 6);
LAB_400df03c:
      pcVar6 = (code *)FUN_400dfae0();
      (*pcVar6)(0x400def54);
      return 0;
    }
    pcStack_38 = (char *)0x0;
    iVar9 = FUN_400f21f8(param_2[1],&pcStack_38,0);
    if (*pcStack_38 == '\0') {
      if (iVar9 == 0) {
        iVar9 = FUN_400db5f4();
      }
      FUN_400db674(iVar9);
    }
    else {
      iVar9 = 1;
      do {
        uVar5 = FUN_400db674(iVar9);
        uVar7 = FUN_400f25d4(param_2[1]);
        iVar4 = FUN_400f25a2(uVar5,param_2[1],uVar7);
        if (iVar4 == 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 6);
    }
    if (iVar9 - 1U < 5) {
      iVar4 = FUN_400e6a94((int)(short)iVar9,&uStack_60);
      if (iVar4 == 0) {
        iVar4 = FUN_400db610(iVar9);
        FUN_400dbfd0(0x400def10);
        uVar5 = FUN_400db674(iVar9);
        pcVar6 = (code *)FUN_400dfae0();
        (*pcVar6)(0x400dee64,iVar9,uVar5,(int)sStack_5e);
        if (iVar4 == 0) {
          uVar7 = 0;
          uVar5 = uVar7;
        }
        else {
          uVar5 = *(undefined4 *)(iVar4 + 0x10);
          uVar7 = FUN_400dbc3c(iVar4);
        }
        pcVar6 = (code *)FUN_400dfae0();
        (*pcVar6)(0x400dee80,*(undefined4 *)(iVar2 + (uint)uStack_60 * 4),uVar7,uVar5);
        pcVar6 = (code *)FUN_400dfae0();
        (*pcVar6)(0x400deea0,uStack_50,uStack_4c,uStack_48);
        if (puStack_44 == (uint *)0x0) {
          pcVar6 = (code *)FUN_400dfae0();
          (*pcVar6)(0x400def24);
        }
        else {
          if (iVar4 == 0) {
            pcVar6 = (code *)FUN_400dfae0();
            uVar5 = 0x400df084;
          }
          else {
            if (puStack_40 <= puStack_44) {
              puVar8 = puStack_44;
              if (puStack_44 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10))) {
                do {
                  if (uVar1 <= *puVar8 && *puVar8 <= uVar10) {
                    pcVar6 = (code *)FUN_400dfae0();
                    (*pcVar6)(0x400df0bc,*puVar8);
                  }
                  puVar8 = puVar8 + 1;
                } while (puVar8 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10)));
              }
              goto LAB_400df03c;
            }
            pcVar6 = (code *)FUN_400dfae0();
            uVar5 = 0x400deed4;
          }
          (*pcVar6)(uVar5);
        }
      }
      else {
        pcVar6 = (code *)FUN_400dfae0();
        (*pcVar6)(uRam400def0c,iVar9,iVar4);
      }
    }
    else {
      pcVar6 = (code *)FUN_400dfae0();
      (*pcVar6)(uRam400de1e0,param_2[1]);
    }
  }
  else {
    uStack_34 = *(undefined4 *)(iRam400deb48 + 0x80);
    uStack_30 = *(undefined4 *)(iRam400deb48 + 0x84);
    uStack_2c = *(undefined4 *)(iRam400deb48 + 0x88);
    FUN_4000af54(*param_2,0x400df0d0,&uStack_34,3);
  }
  return 0xffffffff;
}

