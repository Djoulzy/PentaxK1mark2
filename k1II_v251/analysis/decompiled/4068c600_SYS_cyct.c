/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_cyct(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  short asStack_38 [2];
  undefined4 uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 3) {
      if (iStack_18 == 2) {
        pcStack_30 = (char *)0x0;
        iVar3 = FUN_4020c174(param_2[1],&pcStack_30,0);
        if (*pcStack_30 == '\0') {
          uVar4 = FUN_403d01f4(iVar3);
        }
        else {
          iVar3 = 1;
          do {
            uVar4 = FUN_403d01f4(iVar3);
            uVar5 = FUN_4068312c(param_2[1]);
            iVar6 = FUN_4020fc60(uVar4,param_2[1],uVar5);
            if (iVar6 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x33);
        }
        if (0x4f < iVar3 - 1U) {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068c848,param_2[1]);
          return 0xffffffff;
        }
        iVar6 = FUN_406ffcbc((int)(short)iVar3,asStack_38);
        if (iVar6 != 0) {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068c870,iVar3,iVar6);
          return 0xffffffff;
        }
        FUN_4068ad54(0x4068c8a0);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(0x4068c8b0,uVar4);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(0x4068c8c4,iVar3);
        pcVar2 = (code *)FUN_40554324();
        if (asStack_38[0] == 0) {
          uVar4 = 0x4068c8e0;
        }
        else {
          uVar4 = 0x4068c8d8;
        }
        (*pcVar2)(0x4068c8e8,uVar4);
        pcVar2 = (code *)FUN_40554324();
        if (asStack_38[0] == 0) {
          uStack_34 = 0;
        }
        (*pcVar2)(0x4068c8fc,uStack_34);
      }
      else {
        FUN_4068ad54(0x4068c914);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(0x4068c91c);
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(0x4068c954);
        iVar3 = 1;
        do {
          iVar6 = FUN_406ffcbc((int)(short)iVar3,&pcStack_30);
          if (iVar6 == 0) {
            uVar5 = FUN_403d01f4(iVar3);
            uVar4 = 0;
            if (((uint)pcStack_30 & 0xffff) != 0) {
              uVar4 = uStack_2c;
            }
            pcVar2 = (code *)FUN_40554324();
            if ((short)pcStack_30 == 0) {
              uVar7 = 0x4068c8e0;
            }
            else {
              uVar7 = 0x4068c8d8;
            }
            (*pcVar2)(0x4068c9d8,iVar3,uVar5,uVar7,uVar4);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x33);
      }
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068c98c);
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068ba78);
  }
  uStack_28 = *(undefined4 *)(iRam4068c524 + 0x68);
  uStack_24 = *(undefined4 *)(iRam4068c524 + 0x6c);
  uStack_20 = *(undefined4 *)(iRam4068c524 + 0x70);
  FUN_40679338(*param_2,0x4068c82c,&uStack_28,3);
  return 0xffffffff;
}

