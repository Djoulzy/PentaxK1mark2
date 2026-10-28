/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_mplt(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_4000afd8(&iStack_20);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_20 < 3) {
      uVar3 = FUN_400da1a0();
      if (iStack_20 == 2) {
        apcStack_58[0] = (char *)0x0;
        iVar7 = FUN_400f21f8(param_2[1],apcStack_58,0);
        if (*apcStack_58[0] == '\0') {
          uVar6 = FUN_400da264(iVar7);
        }
        else {
          iVar7 = 1;
          do {
            uVar6 = FUN_400da264(iVar7);
            uVar5 = FUN_400f25d4(param_2[1]);
            iVar4 = FUN_400f25a2(uVar6,param_2[1],uVar5);
            if (iVar4 == 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 6);
        }
        if (4 < iVar7 - 1U) {
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddd7c,param_2[1]);
          return 0xffffffff;
        }
        iVar4 = FUN_400da1dc(iVar7);
        if (iVar4 == -1) {
          iVar4 = FUN_400e31f4((int)(short)iVar7,&iStack_64);
          if (iVar4 != 0) {
            pcVar2 = (code *)FUN_400dfae0();
            (*pcVar2)(0x400ddff0,iVar7,iVar4);
            return 0xffffffff;
          }
          FUN_400dbfd0(0x400dddb4);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dddd4,uVar6);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dddf4,iVar7);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddecc,iStack_60);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddef0,iStack_5c);
        }
        else {
          uStack_4c = 0;
          uStack_48 = 0;
          iStack_60 = 0;
          pcStack_44 = (char *)0x0;
          iStack_5c = 0;
          iStack_40 = 0;
          FUN_400da664(uVar3,iVar4,&uStack_4c,&uStack_48);
          FUN_400da648(uVar3,iVar4,&iStack_60,&pcStack_44);
          FUN_400da5e4(uVar3,iVar4,&iStack_5c,&iStack_40);
          FUN_400dbfd0(0x400dddb4);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dddd4,uVar6);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dddf4,iVar7);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dde18,uStack_4c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dde3c,uStack_48);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dde60,iStack_60);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400dde84,pcStack_44);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddea8,iStack_60 - iStack_5c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddecc,iStack_5c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400ddef0,iStack_40);
        }
      }
      else {
        FUN_400dbfd0(0x400ddd24);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(uRam400ddd40);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(uRam400ddd44);
        iVar7 = 1;
        do {
          iVar4 = FUN_400da1dc(iVar7);
          if (iVar4 == -1) {
            iVar4 = FUN_400e31f4((int)(short)iVar7,&iStack_60);
            if (iVar4 == 0) {
              uVar6 = FUN_400da264(iVar7);
              pcVar1 = apcStack_58[0];
              pcVar2 = (code *)FUN_400dfae0();
              (*pcVar2)(uRam400de02c,iVar7,uVar6,iStack_5c,pcVar1);
            }
          }
          else {
            uStack_2c = 0;
            auStack_28[0] = 0;
            uStack_4c = 0;
            iStack_40 = 0;
            iStack_3c = 0;
            pcStack_44 = (char *)0x0;
            uVar5 = FUN_400da254(uVar3,iVar4);
            FUN_400da664(uVar3,iVar4,&uStack_4c,&uStack_2c);
            FUN_400da648(uVar3,iVar4,&iStack_40,auStack_28);
            FUN_400da5e4(uVar3,iVar4,&iStack_3c,&pcStack_44);
            iStack_64 = iStack_40;
            iStack_60 = iStack_40 - iStack_3c;
            iStack_5c = iStack_3c;
            apcStack_58[0] = pcStack_44;
            uVar6 = uStack_2c;
            pcVar2 = (code *)FUN_400dfae0();
            (*pcVar2)(0x400ddd48,iVar7,uVar5,uStack_4c,uVar6);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 6);
      }
      pcVar2 = (code *)FUN_400dfae0();
      (*pcVar2)(0x400dd98c);
      return 0;
    }
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400dccc4);
  }
  uStack_38 = *(undefined4 *)(iRam400dd6b0 + 0x74);
  uStack_34 = *(undefined4 *)(iRam400dd6b0 + 0x78);
  uStack_30 = *(undefined4 *)(iRam400dd6b0 + 0x7c);
  FUN_4000af54(*param_2,0x400ddcf8,&uStack_38,3);
  return 0xffffffff;
}

