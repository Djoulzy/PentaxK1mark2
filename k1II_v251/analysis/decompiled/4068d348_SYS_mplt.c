/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_mplt(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  char *apcStack_58 [3];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_20);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_20 < 3) {
      uVar3 = FUN_4067825c();
      if (iStack_20 == 2) {
        apcStack_58[0] = (char *)0x0;
        iVar7 = FUN_4020c174(param_2[1],apcStack_58,0);
        if (*apcStack_58[0] == '\0') {
          uVar6 = FUN_40678380(iVar7);
        }
        else {
          iVar7 = 1;
          do {
            uVar6 = FUN_40678380(iVar7);
            uVar5 = FUN_4068312c(param_2[1]);
            iVar4 = FUN_4020fc60(uVar6,param_2[1],uVar5);
            if (iVar4 == 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x10);
        }
        if (0xe < iVar7 - 1U) {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d72c,param_2[1]);
          return 0xffffffff;
        }
        iVar4 = FUN_40678328(iVar7);
        if (iVar4 == -1) {
          iVar4 = FUN_4041d008((int)(short)iVar7,&iStack_64);
          if (iVar4 != 0) {
            pcVar2 = (code *)FUN_40554324();
            (*pcVar2)(0x4068d8e4,iVar7,iVar4);
            return 0xffffffff;
          }
          FUN_4068ad54(0x4068d764);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d784,uVar6);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d788,iVar7);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d7c0,iStack_60);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d7e4,iStack_5c);
        }
        else {
          uStack_4c = 0;
          uStack_48 = 0;
          iStack_60 = 0;
          pcStack_44 = (char *)0x0;
          iStack_5c = 0;
          iStack_40 = 0;
          FUN_4067872c(uVar3,iVar4,&uStack_4c,&uStack_48);
          FUN_40678710(uVar3,iVar4,&iStack_60,&pcStack_44);
          FUN_406786ac(uVar3,iVar4,&iStack_5c,&iStack_40);
          FUN_4068ad54(0x4068d764);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d784,uVar6);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d788,iVar7);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d78c,uStack_4c);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d790,uStack_48);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d794,iStack_60);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(uRam4068d798,pcStack_44);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d79c,iStack_60 - iStack_5c);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d7c0,iStack_5c);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068d7e4,iStack_40);
        }
      }
      else {
        FUN_4068ad54(0x4068d6d4);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068d6f0);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068d6f4);
        iVar7 = 1;
        do {
          iVar4 = FUN_40678328(iVar7);
          if (iVar4 == -1) {
            iVar4 = FUN_4041d008((int)(short)iVar7,&iStack_60);
            if (iVar4 == 0) {
              uVar6 = FUN_40678380(iVar7);
              pcVar1 = apcStack_58[0];
              pcVar2 = (code *)FUN_40554324();
              (*pcVar2)(uRam4068d920,iVar7,uVar6,iStack_5c,pcVar1);
            }
          }
          else {
            uStack_2c = 0;
            auStack_28[0] = 0;
            uStack_4c = 0;
            iStack_40 = 0;
            iStack_3c = 0;
            pcStack_44 = (char *)0x0;
            uVar5 = FUN_40678370(uVar3,iVar4);
            FUN_4067872c(uVar3,iVar4,&uStack_4c,&uStack_2c);
            FUN_40678710(uVar3,iVar4,&iStack_40,auStack_28);
            FUN_406786ac(uVar3,iVar4,&iStack_3c,&pcStack_44);
            iStack_64 = iStack_40;
            iStack_60 = iStack_40 - iStack_3c;
            iStack_5c = iStack_3c;
            apcStack_58[0] = pcStack_44;
            uVar6 = uStack_2c;
            pcVar2 = (code *)FUN_40554324();
            (*pcVar2)(0x4068d6f8,iVar7,uVar5,uStack_4c,uVar6);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x10);
      }
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068d0ec);
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068d074);
  }
  uStack_38 = *(undefined4 *)(iRam4068c524 + 0x8c);
  uStack_34 = *(undefined4 *)(iRam4068c524 + 0x90);
  uStack_30 = *(undefined4 *)(iRam4068c524 + 0x94);
  FUN_40679338(*param_2,0x4068d6a8,&uStack_38,3);
  return 0xffffffff;
}

