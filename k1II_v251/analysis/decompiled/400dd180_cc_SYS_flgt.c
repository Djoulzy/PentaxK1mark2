/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_flgt(int param_1,undefined4 *param_2)

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
  pcVar2 = (char *)FUN_4000afd8(&iStack_1c);
  iVar1 = iRam400dd3f0;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (iStack_1c < 3) {
      if (iStack_1c == 2) {
        pcStack_38 = (char *)0x0;
        iVar4 = FUN_400f21f8(param_2[1],&pcStack_38,0);
        if (*pcStack_38 == '\0') {
          uVar5 = FUN_400d987c(iVar4);
        }
        else {
          iVar4 = 1;
          do {
            uVar5 = FUN_400d987c(iVar4);
            uVar6 = FUN_400f25d4(param_2[1]);
            iVar7 = FUN_400f25a2(uVar5,param_2[1],uVar6);
            if (iVar7 == 0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x15);
        }
        if (0x13 < iVar4 - 1U) {
          pcVar3 = (code *)FUN_400dfae0();
          (*pcVar3)(0x400dd410,param_2[1]);
          return 0xffffffff;
        }
        iVar7 = FUN_400e3e14((int)(short)iVar4,asStack_28);
        if (iVar7 != 0) {
          pcVar3 = (code *)FUN_400dfae0();
          (*pcVar3)(0x400dd438,iVar4,iVar7);
          return 0xffffffff;
        }
        FUN_400dbfd0(0x400dd464);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd478,uVar5);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd490,iVar4);
        if (asStack_28[0] == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 4);
        }
        else {
          uVar5 = FUN_400db674();
        }
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd134,uVar5);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd4a8,pcStack_24);
      }
      else {
        FUN_400dbfd0(0x400dd4c4);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(uRam400dd4d0);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(uRam400dd4d4);
        iVar4 = 1;
        do {
          iVar7 = FUN_400e3e14((int)(short)iVar4,asStack_28);
          if (iVar7 == 0) {
            if (asStack_28[0] == 0) {
              uVar5 = *(undefined4 *)(iVar1 + 4);
            }
            else {
              uVar5 = FUN_400db674();
            }
            uVar6 = FUN_400d987c(iVar4);
            pcStack_38 = pcStack_24;
            pcVar3 = (code *)FUN_400dfae0();
            (*pcVar3)(0x400dd4d8,iVar4,uVar6,uVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x15);
      }
      pcVar3 = (code *)FUN_400dfae0();
      (*pcVar3)(0x400dd4fc);
      return 0;
    }
    pcVar3 = (code *)FUN_400dfae0();
    (*pcVar3)(uRam400dccc4);
  }
  uStack_34 = *(undefined4 *)(iRam400dc340 + 0x50);
  uStack_30 = *(undefined4 *)(iRam400dc340 + 0x54);
  uStack_2c = *(undefined4 *)(iRam400dc340 + 0x58);
  FUN_4000af54(*param_2,0x400dd3f4,&uStack_34,3);
  return 0xffffffff;
}

