/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_mpft(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_48;
  char *pcStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_20);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_20 < 3) {
      uVar3 = FUN_4041c87c();
      if (iStack_20 == 2) {
        pcStack_44 = (char *)0x0;
        iVar7 = FUN_4020c174(param_2[1],&pcStack_44,0);
        if (*pcStack_44 == '\0') {
          uVar5 = FUN_4041c95c(iVar7);
        }
        else {
          iVar7 = 1;
          do {
            uVar5 = FUN_4041c95c(iVar7);
            uVar6 = FUN_4068312c(param_2[1]);
            iVar4 = FUN_4020fc60(uVar5,param_2[1],uVar6);
            if (iVar4 == 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 6);
        }
        if (4 < iVar7 - 1U) {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d0f0,param_2[1]);
          return 0xffffffff;
        }
        iVar4 = FUN_4041c928(iVar7);
        if (iVar4 == -1) {
          iVar4 = FUN_40355ea0((int)(short)iVar7,&iStack_60);
          if (iVar4 != 0) {
            pcVar2 = (code *)FUN_40554324();
            (*pcVar2)(0x4068d30c,iVar7,iVar4);
            return 0xffffffff;
          }
          FUN_4068ad54(0x4068d124);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d164,iVar7);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d23c,iStack_5c);
        }
        else {
          iStack_40 = 0;
          iStack_3c = 0;
          iStack_60 = 0;
          iStack_48 = 0;
          iStack_58 = 0;
          FUN_4041cc10(uVar3,iVar4,&iStack_40,&iStack_3c);
          FUN_4041cbf4(uVar3,iVar4,&iStack_60,&iStack_48);
          FUN_4041cba0(uVar3,iVar4,&iStack_58);
          FUN_4068ad54(0x4068d124);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d144,uVar5);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d164,iVar7);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d188,iStack_40);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d1ac,iStack_3c);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d1d0,iStack_60 * iStack_48);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d1f4,iStack_48);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d218,iStack_60 - iStack_58);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d23c,iStack_58);
        }
      }
      else {
        FUN_4068ad54(0x4068d0a0);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068d0b8);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068d0bc);
        iVar7 = 1;
        do {
          iVar4 = FUN_4041c928(iVar7);
          if (iVar4 == -1) {
            iVar4 = FUN_40355ea0((int)(short)iVar7,&iStack_60);
            if (iVar4 == 0) {
              uVar5 = FUN_4041c95c(iVar7);
              pcVar2 = (code *)FUN_40554324();
              (*pcVar2)(uRam4068d344,iVar7,uVar5,iStack_5c);
            }
          }
          else {
            iStack_48 = 0;
            iStack_40 = 0;
            iStack_3c = 0;
            iStack_38 = 0;
            iStack_34 = 0;
            uVar5 = FUN_4041c94c(uVar3,iVar4);
            FUN_4041cc10(uVar3,iVar4,&iStack_48,&iStack_40);
            FUN_4041cbf4(uVar3,iVar4,&iStack_3c,&iStack_38);
            FUN_4041cba0(uVar3,iVar4,&iStack_34);
            iStack_5c = iStack_3c * iStack_38;
            iStack_58 = iStack_3c - iStack_34;
            iStack_54 = iStack_34;
            iStack_60 = iStack_40;
            pcVar2 = (code *)FUN_40554324();
            (*pcVar2)(0x4068d0c0,iVar7,uVar5,iStack_48);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 6);
      }
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068d0ec);
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068d074);
  }
  uStack_30 = *(undefined4 *)(iRam4068c524 + 0x80);
  uStack_2c = *(undefined4 *)(iRam4068c524 + 0x84);
  uStack_28 = *(undefined4 *)(iRam4068c524 + 0x88);
  FUN_40679338(*param_2,0x4068d078,&uStack_30,3);
  return 0xffffffff;
}

