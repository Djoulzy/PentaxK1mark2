/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_flgt(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short asStack_28 [2];
  char *pcStack_24;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_1c);
  iVar1 = iRam4068c1a4;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (iStack_1c < 3) {
      if (iStack_1c == 2) {
        pcStack_38 = (char *)0x0;
        iVar4 = FUN_4020c174(param_2[1],&pcStack_38,0);
        if (*pcStack_38 == '\0') {
          uVar5 = FUN_4067b33c(iVar4);
        }
        else {
          iVar4 = 1;
          do {
            uVar5 = FUN_4067b33c(iVar4);
            uVar6 = FUN_4068312c(param_2[1]);
            iVar7 = FUN_4020fc60(uVar5,param_2[1],uVar6);
            if (iVar7 == 0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
        }
        if (0xfe < iVar4 - 1U) {
          pcVar3 = (code *)FUN_40554324();
          (*pcVar3)(0x4068c1c4,param_2[1]);
          return 0xffffffff;
        }
        iVar7 = FUN_403d1524((int)(short)iVar4,asStack_28);
        if (iVar7 != 0) {
          pcVar3 = (code *)FUN_40554324();
          (*pcVar3)(0x4068c1ec,iVar4,iVar7);
          return 0xffffffff;
        }
        FUN_4068ad54(0x4068c218);
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(0x4068c22c,uVar5);
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(0x4068c244,iVar4);
        if (asStack_28[0] == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 4);
        }
        else {
          uVar5 = FUN_4067aae8();
        }
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(0x4068bee8,uVar5);
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(0x4068c25c,pcStack_24);
      }
      else {
        FUN_4068ad54(0x4068c278);
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(uRam4068c284);
        pcVar3 = (code *)FUN_40554324();
        (*pcVar3)(uRam4068c288);
        iVar4 = 1;
        do {
          iVar7 = FUN_403d1524((int)(short)iVar4,asStack_28);
          if (iVar7 == 0) {
            if (asStack_28[0] == 0) {
              uVar5 = *(undefined4 *)(iVar1 + 4);
            }
            else {
              uVar5 = FUN_4067aae8();
            }
            uVar6 = FUN_4067b33c(iVar4);
            pcStack_38 = pcStack_24;
            pcVar3 = (code *)FUN_40554324();
            (*pcVar3)(0x4068c28c,iVar4,uVar6,uVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x100);
      }
      pcVar3 = (code *)FUN_40554324();
      (*pcVar3)(0x4068c2b0);
      return 0;
    }
    pcVar3 = (code *)FUN_40554324();
    (*pcVar3)(uRam4068ba78);
  }
  uStack_34 = *(undefined4 *)(iRam4068b0c4 + 0x50);
  uStack_30 = *(undefined4 *)(iRam4068b0c4 + 0x54);
  uStack_2c = *(undefined4 *)(iRam4068b0c4 + 0x58);
  FUN_40679338(*param_2,0x4068c1a8,&uStack_34,3);
  return 0xffffffff;
}

