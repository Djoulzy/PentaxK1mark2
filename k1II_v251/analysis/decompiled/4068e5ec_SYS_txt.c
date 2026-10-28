/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_txt(int param_1,undefined4 *param_2)

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
  pcVar3 = (char *)FUN_406793bc(&iStack_28);
  iVar2 = iRam4068e8dc;
  uVar1 = uRam4068e8d4;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != 'h')) {
    uVar10 = uRam4068e8d4 + iRam4068e8d8;
    if (iStack_28 != 2) {
      FUN_4068ad54(0x4068e8e0);
      iVar9 = 1;
      do {
        iVar4 = FUN_403d1b94((int)(short)iVar9,&uStack_60);
        if (-1 < iVar4) {
          iVar4 = FUN_4067aa84(iVar9);
          uVar5 = FUN_4067aae8(iVar9);
          pcVar6 = (code *)FUN_40554324();
          (*pcVar6)(0x4068e8ec,iVar9,uVar5,(int)sStack_5e);
          if (iVar4 == 0) {
            uVar7 = 0;
            uVar5 = uVar7;
          }
          else {
            uVar5 = *(undefined4 *)(iVar4 + 0x10);
            uVar7 = FUN_4067b0b0(iVar4);
          }
          pcVar6 = (code *)FUN_40554324();
          (*pcVar6)(0x4068e908,*(undefined4 *)(iVar2 + (uint)uStack_60 * 4),uVar7,uVar5);
          pcVar6 = (code *)FUN_40554324();
          (*pcVar6)(0x4068e928,uStack_50,uStack_4c,uStack_48);
          if (puStack_44 == (uint *)0x0) {
            pcVar6 = (code *)FUN_40554324();
            (*pcVar6)(0x4068e9ac);
          }
          else {
            if (iVar4 == 0) {
              pcVar6 = (code *)FUN_40554324();
              uVar5 = 0x4068eb0c;
            }
            else {
              if (puStack_40 <= puStack_44) {
                puVar8 = puStack_44;
                if (puStack_44 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10))) {
                  do {
                    if (uVar1 <= *puVar8 && *puVar8 <= uVar10) {
                      pcVar6 = (code *)FUN_40554324();
                      (*pcVar6)(0x4068eb44,*puVar8);
                    }
                    puVar8 = puVar8 + 1;
                  } while (puVar8 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10)));
                }
                goto LAB_4068eab8;
              }
              pcVar6 = (code *)FUN_40554324();
              uVar5 = 0x4068e95c;
            }
            (*pcVar6)(uVar5);
          }
        }
LAB_4068eab8:
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x97);
LAB_4068eac4:
      pcVar6 = (code *)FUN_40554324();
      (*pcVar6)(0x4068e9dc);
      return 0;
    }
    pcStack_38 = (char *)0x0;
    iVar9 = FUN_4020c174(param_2[1],&pcStack_38,0);
    if (*pcStack_38 == '\0') {
      if (iVar9 == 0) {
        iVar9 = FUN_4067aa68();
      }
      FUN_4067aae8(iVar9);
    }
    else {
      iVar9 = 1;
      do {
        uVar5 = FUN_4067aae8(iVar9);
        uVar7 = FUN_4068312c(param_2[1]);
        iVar4 = FUN_4020fc60(uVar5,param_2[1],uVar7);
        if (iVar4 == 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x97);
    }
    if (iVar9 - 1U < 0x96) {
      iVar4 = FUN_403d1b94((int)(short)iVar9,&uStack_60);
      if (iVar4 == 0) {
        iVar4 = FUN_4067aa84(iVar9);
        FUN_4068ad54(0x4068e998);
        uVar5 = FUN_4067aae8(iVar9);
        pcVar6 = (code *)FUN_40554324();
        (*pcVar6)(0x4068e8ec,iVar9,uVar5,(int)sStack_5e);
        if (iVar4 == 0) {
          uVar7 = 0;
          uVar5 = uVar7;
        }
        else {
          uVar5 = *(undefined4 *)(iVar4 + 0x10);
          uVar7 = FUN_4067b0b0(iVar4);
        }
        pcVar6 = (code *)FUN_40554324();
        (*pcVar6)(0x4068e908,*(undefined4 *)(iVar2 + (uint)uStack_60 * 4),uVar7,uVar5);
        pcVar6 = (code *)FUN_40554324();
        (*pcVar6)(0x4068e928,uStack_50,uStack_4c,uStack_48);
        if (puStack_44 == (uint *)0x0) {
          pcVar6 = (code *)FUN_40554324();
          (*pcVar6)(0x4068e9ac);
        }
        else {
          if (iVar4 == 0) {
            pcVar6 = (code *)FUN_40554324();
            uVar5 = 0x4068eb0c;
          }
          else {
            if (puStack_40 <= puStack_44) {
              puVar8 = puStack_44;
              if (puStack_44 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10))) {
                do {
                  if (uVar1 <= *puVar8 && *puVar8 <= uVar10) {
                    pcVar6 = (code *)FUN_40554324();
                    (*pcVar6)(0x4068eb44,*puVar8);
                  }
                  puVar8 = puVar8 + 1;
                } while (puVar8 < (uint *)((int)puStack_40 + *(int *)(iVar4 + 0x10)));
              }
              goto LAB_4068eac4;
            }
            pcVar6 = (code *)FUN_40554324();
            uVar5 = 0x4068e95c;
          }
          (*pcVar6)(uVar5);
        }
      }
      else {
        pcVar6 = (code *)FUN_40554324();
        (*pcVar6)(uRam4068e994,iVar9,iVar4);
      }
    }
    else {
      pcVar6 = (code *)FUN_40554324();
      (*pcVar6)(uRam4068dad4,param_2[1]);
    }
  }
  else {
    uStack_34 = *(undefined4 *)(iRam4068eb58 + 0x98);
    uStack_30 = *(undefined4 *)(iRam4068eb58 + 0x9c);
    uStack_2c = *(undefined4 *)(iRam4068eb58 + 0xa0);
    FUN_40679338(*param_2,0x4068eb5c,&uStack_34,3);
  }
  return 0xffffffff;
}

