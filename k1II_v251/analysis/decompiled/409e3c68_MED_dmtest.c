/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_dmtest(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_268 [256];
  undefined1 auStack_168 [260];
  undefined4 auStack_64 [3];
  undefined4 auStack_58 [3];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar1 = FUN_402530e8();
  uVar7 = *(undefined4 *)(iVar1 + 0x18);
  FUN_40683cc4(auStack_168,0x100);
  FUN_4065dc00(uVar7,auStack_168);
  FUN_40683cc4(auStack_268,0x100);
  FUN_4065da44(uVar7,auStack_268);
  iVar1 = FUN_4067992c();
  piVar5 = *(int **)(iVar1 + 0x10);
  iVar1 = 0;
  while( true ) {
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_4067e440(&uStack_3c,0x409e3f90,iVar1);
    auStack_64[0] = 0;
    iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,&uStack_3c,0,auStack_64);
    if (iVar2 == 0) break;
    FUN_4067e440(&uStack_3c,0x409e3fa0,iVar1);
    auStack_58[0] = 0;
    iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,&uStack_3c,0,auStack_58);
    if (iVar2 == 0) break;
    uVar6 = 100;
    iVar2 = (int)(char)iVar1;
    do {
      uVar3 = FUN_40674d20();
      FUN_4067570c(uVar3,iVar2,uVar6 & 0xffff,1);
      FUN_40683cc4(auStack_268,0x100);
      FUN_4065dc00(uVar7,auStack_268);
      iVar4 = (**(code **)(*piVar5 + 0x20))(piVar5,auStack_64[0],auStack_268 + iVar1 * 0x80,0x80);
      if (iVar4 == 0) {
LAB_409e3fd4:
        FUN_40635960(piVar5);
        uVar7 = FUN_409e1684();
        uVar3 = 0x409e4160;
        goto LAB_409e4000;
      }
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      FUN_4020f00c(&uStack_4c,0x10,0xff);
      iVar4 = (**(code **)(*piVar5 + 0x20))(piVar5,auStack_64[0],&uStack_4c,0x10);
      if (iVar4 == 0) goto LAB_409e3fd4;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar3 = FUN_40674d20();
      uVar3 = FUN_406757a8(uVar3,iVar2,uVar6 & 0xffff);
      FUN_4067e440(&uStack_4c,0x409e3fb0,uVar6,uVar3);
      iVar4 = (**(code **)(*piVar5 + 0x20))(piVar5,auStack_58[0],&uStack_4c,8);
      if (iVar4 == 0) goto LAB_409e3fd4;
      uVar3 = FUN_40674d20();
      FUN_4067570c(uVar3,iVar2,uVar6 & 0xffff,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 1000);
    iVar2 = (**(code **)(*piVar5 + 0x18))(piVar5,auStack_64[0]);
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*piVar5 + 0x18))(piVar5,auStack_58[0]), iVar2 == 0)) {
      FUN_40635960(piVar5);
      uVar7 = FUN_409e1684();
      uVar3 = 0x409e417c;
      goto LAB_409e4000;
    }
    iVar1 = iVar1 + 1;
    if (1 < iVar1) {
      FUN_4065da44(uVar7,auStack_168);
      return 0;
    }
  }
  FUN_40635960(piVar5);
  uVar7 = FUN_409e1684();
  uVar3 = 0x409e4144;
LAB_409e4000:
  FUN_4067cd44(uVar3,uVar7);
  return 0xffffffff;
}

