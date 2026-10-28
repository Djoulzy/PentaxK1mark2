/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_kml(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [16];
  
  iVar2 = FUN_403b6690();
  uVar8 = *(undefined4 *)(iVar2 + 4);
  FUN_403b6a10(auStack_50);
  FUN_4067a1f4(auStack_34,*puRam403b69d8,1,1,0,0,0,0);
  uVar5 = uRam403b69e0;
  iVar2 = iRam403b69dc;
  if (param_1 < 2) {
    iVar7 = 10;
    iVar6 = 0;
    goto LAB_403b68c0;
  }
  iVar7 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
  for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
LAB_403b68c0:
    sVar1 = FUN_4020f640(uVar5);
    uVar3 = FUN_4020ef18(iVar6);
    uVar3 = FUN_4020efb6(uVar3,0xffffffff);
    uVar4 = FUN_4068399c(uVar3,iVar2 + 0xff0000);
    uVar3 = FUN_4068399c(uVar3,iVar2);
    FUN_402dd45c(uVar8,uVar3,uVar4,(int)sVar1,iVar6 * 5 + iRam403b69e4,0,0,0,0,0);
  }
  iVar2 = FUN_402de4dc(uVar8);
  if (iVar2 == 0) {
    uVar5 = 0x403b69ec;
  }
  else {
    uVar5 = 0x403b69e8;
  }
  FUN_4067cd44(0x403b69f0,uVar5);
  FUN_4067a220(auStack_34);
  FUN_403b6a80(auStack_50);
  return 0;
}

