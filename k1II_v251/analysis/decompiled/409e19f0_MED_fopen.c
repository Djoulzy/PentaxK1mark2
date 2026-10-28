/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fopen(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 uVar6;
  bool bVar7;
  ushort auStack_124 [2];
  undefined1 auStack_120 [256];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
LAB_409e1b84:
    uStack_20 = *(undefined4 *)(iRam409e17d4 + 0x44);
    uStack_1c = *(undefined4 *)(iRam409e17d4 + 0x48);
    FUN_40679338(*param_2,0x409e1c80,&uStack_20,2);
    return 0xffffffff;
  }
  auStack_120[0] = 0;
  auStack_124[0] = auStack_124[0] & 0xff00;
  uVar6 = true;
  if (iStack_18 < 2) goto LAB_409e1b84;
  FUN_4070412c(auStack_120,param_2[1],0x100);
  if ((iStack_18 < 3) || (iVar2 = FUN_40683ba0(param_2[2],0x409e1944), iVar2 == 0)) {
LAB_409e1ab0:
    puVar3 = (ushort *)0x409e1944;
  }
  else {
    puVar3 = (ushort *)FUN_40683ba0(param_2[2],0x409e1c1c);
    bVar7 = puVar3 == (ushort *)0x0;
    if (bVar7) {
      puVar3 = (ushort *)0x409e1c1c;
    }
    uVar6 = !bVar7;
    if ((bool)uVar6) {
      iVar2 = FUN_40683ba0(param_2[2],0x409e1c20);
      if (iVar2 == 0) {
        uVar6 = 2;
        FUN_40683170(auStack_124,0x409e1c20);
        goto LAB_409e1abc;
      }
      iVar2 = FUN_40683ba0(param_2[2],0x409e1c24);
      if (iVar2 != 0) goto LAB_409e1ab0;
      puVar3 = (ushort *)0x409e1c24;
      uVar6 = 3;
    }
  }
  auStack_124[0] = *puVar3;
LAB_409e1abc:
  iVar2 = FUN_4067992c();
  piVar5 = *(int **)(iVar2 + 0x10);
  FUN_4067ca30(piVar5 != (int *)0x0,0x409e1774,0x409e175c,0xc9,uRam409e1c28);
  iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,auStack_120,uVar6,uRam409e1744);
  if (iVar2 == 0) {
    FUN_40635960(piVar5);
    uVar4 = FUN_409e1684();
    FUN_4067cd44(0x409e1c64,uVar4);
    FUN_4067cd44(0x409e1c44,auStack_120);
    FUN_4067cd44(0x409e1c54,auStack_124);
    return 0xffffffff;
  }
  FUN_4067cd44(0x409e1c2c);
  FUN_4067cd44(0x409e1c44,auStack_120);
  FUN_4067cd44(0x409e1c54,auStack_124);
  return 0;
}

