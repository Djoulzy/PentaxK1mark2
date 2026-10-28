/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_ost(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [4];
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_56;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  uStack_2c = param_1;
  puStack_28 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&uStack_2c);
  iVar11 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uStack_30 = *puRam400deb48;
    FUN_4000af54(*param_2,0x400deb4c,&uStack_30,1);
    return 0xffffffff;
  }
  FUN_400e0a0c(auStack_64);
  iVar4 = 1;
  if (0 < sStack_60) {
    do {
      iVar2 = FUN_400e6c1c((int)(short)iVar4,auStack_78);
      iVar11 = iVar11 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_60);
  }
  iVar4 = 1;
  if (0 < sStack_5e) {
    do {
      iVar2 = FUN_400e3f6c((int)(short)iVar4,auStack_78);
      iVar10 = iVar10 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_5e);
  }
  iVar4 = 1;
  if (0 < sStack_56) {
    do {
      iVar2 = FUN_400e2348((int)(short)iVar4,auStack_7c);
      iVar9 = iVar9 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_56);
  }
  iVar4 = 1;
  if (0 < sStack_5c) {
    do {
      iVar2 = FUN_400e3e14((int)(short)iVar4,auStack_70);
      iVar8 = iVar8 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_5c);
  }
  iVar4 = 1;
  if (0 < sStack_4e) {
    do {
      iVar2 = FUN_400e5e04((int)(short)iVar4,auStack_70);
      iVar7 = iVar7 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_4e);
  }
  iVar4 = 1;
  if (0 < sStack_4c) {
    do {
      iVar2 = FUN_400e5d18((int)(short)iVar4,auStack_78);
      iVar6 = iVar6 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_4c);
  }
  iVar4 = 1;
  if (0 < sStack_50) {
    do {
      iVar2 = FUN_400e31f4((int)(short)iVar4,auStack_78);
      iVar5 = iVar5 + (uint)(iVar2 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= sStack_50);
  }
  FUN_400dbfd0(0x400de9b4);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400de9b8);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400de9e0);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400dea0c,iVar11,(int)sStack_60,*puRam400dea08);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400dea34,iVar10,(int)sStack_5e,*puRam400dea30);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400dea5c,iVar9,(int)sStack_56,*puRam400dea58);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400dea84,iVar8,(int)sStack_5c,*puRam400dea80);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400deaac,iVar7,(int)sStack_4e,*puRam400deaa8);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400dead4,iVar6,(int)sStack_4c,*puRam400dead0);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400deaf8,iVar5,(int)sStack_50);
  pcVar3 = (code *)FUN_400dfae0();
  (*pcVar3)(0x400de9dc);
  return 0;
}

