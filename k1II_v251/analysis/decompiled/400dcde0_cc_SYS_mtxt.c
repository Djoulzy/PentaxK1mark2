/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_mtxt(int param_1,undefined4 *param_2)

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
  short sStack_28;
  short sStack_26;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar2 = (char *)FUN_4000afd8(&iStack_20);
  iVar1 = iRam400dc070;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (iStack_20 < 3) {
      if (iStack_20 == 2) {
        pcStack_38 = (char *)0x0;
        iVar4 = FUN_400f21f8(param_2[1],&pcStack_38,0);
        if (*pcStack_38 == '\0') {
          uVar5 = FUN_400da7d4(iVar4);
        }
        else {
          iVar4 = 1;
          do {
            uVar5 = FUN_400da7d4(iVar4);
            uVar6 = FUN_400f25d4(param_2[1]);
            iVar7 = FUN_400f25a2(uVar5,param_2[1],uVar6);
            if (iVar7 == 0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
        }
        if (0xe < iVar4 - 1U) {
          pcVar3 = (code *)FUN_400dfae0();
          (*pcVar3)(0x400dd090,param_2[1]);
          return 0xffffffff;
        }
        iVar7 = FUN_400e2348((int)(short)iVar4,&sStack_28);
        if (iVar7 != 0) {
          pcVar3 = (code *)FUN_400dfae0();
          (*pcVar3)(0x400dd0b4,iVar4,iVar7);
          return 0xffffffff;
        }
        FUN_400dbfd0(0x400dd0dc);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd0ec,uVar5);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd104,iVar4);
        if (sStack_28 == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 8);
        }
        else {
          uVar5 = FUN_400db674();
        }
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd11c,uVar5);
        if (sStack_26 == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 4);
        }
        else {
          uVar5 = FUN_400db674();
        }
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(0x400dd134,uVar5);
      }
      else {
        FUN_400dbfd0(0x400dd14c);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(uRam400dd154);
        pcVar3 = (code *)FUN_400dfae0();
        (*pcVar3)(uRam400dd158);
        iVar4 = 1;
        do {
          iVar7 = FUN_400e2348((int)(short)iVar4,&sStack_28);
          if (iVar7 == 0) {
            if (sStack_26 == 0) {
              pcVar2 = *(char **)(iVar1 + 4);
            }
            else {
              pcVar2 = (char *)FUN_400db674();
            }
            if (sStack_28 == 0) {
              uVar5 = *(undefined4 *)(iVar1 + 8);
            }
            else {
              uVar5 = FUN_400db674();
            }
            uVar6 = FUN_400da7d4(iVar4);
            pcStack_38 = pcVar2;
            pcVar3 = (code *)FUN_400dfae0();
            (*pcVar3)(0x400dd15c,iVar4,uVar6,uVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
      }
      pcVar3 = (code *)FUN_400dfae0();
      (*pcVar3)(0x400dcddc);
      return 0;
    }
    pcVar3 = (code *)FUN_400dfae0();
    (*pcVar3)(uRam400dccc4);
  }
  uStack_34 = *(undefined4 *)(iRam400dc340 + 0x44);
  uStack_30 = *(undefined4 *)(iRam400dc340 + 0x48);
  uStack_2c = *(undefined4 *)(iRam400dc340 + 0x4c);
  FUN_4000af54(*param_2,0x400dd078,&uStack_34,3);
  return 0xffffffff;
}

