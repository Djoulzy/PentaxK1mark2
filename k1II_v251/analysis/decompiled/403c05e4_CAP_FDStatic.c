/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_FDStatic(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puStack_510;
  undefined2 uStack_50c;
  undefined2 uStack_50a;
  undefined2 uStack_508;
  undefined1 uStack_502;
  undefined2 uStack_500;
  undefined2 uStack_4fe;
  undefined1 uStack_4fc;
  undefined2 uStack_4fa;
  undefined2 uStack_4f8;
  int iStack_4f4;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  int iStack_4e0;
  int iStack_4dc;
  undefined4 *puStack_4c4;
  ushort uStack_4c0;
  undefined2 uStack_4be;
  undefined1 auStack_4b8 [4];
  int iStack_4b4;
  int iStack_4b0;
  int iStack_4ac;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined2 uStack_4a4;
  undefined2 uStack_4a0;
  undefined2 uStack_49e;
  undefined4 auStack_498 [9];
  undefined4 auStack_474 [263];
  undefined4 uStack_58;
  undefined1 auStack_54 [44];
  
  FUN_4067cd44(0x403c0838);
  iVar1 = FUN_402675cc();
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  FUN_40704258(&puStack_510);
  FUN_408dda2c(auStack_4b8);
  iVar1 = FUN_4067992c();
  uVar6 = uRam403c0860;
  piVar7 = *(int **)(iVar1 + 0x10);
  FUN_4067ca30(piVar7 != (int *)0x0,uRam403bfd34,uRam403bfd30,0xfba,uRam403c0860);
  uVar3 = FUN_40674b78();
  iVar1 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403c0864);
  FUN_4067ca30(iVar1 != 0,uRam403c0868,uRam403bfd30,0xfcb,uVar6);
  FUN_4067a4ec(iVar1,0x3fc000);
  FUN_4067c0f4(0,0,0x403c086c,iVar1);
  uVar3 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar3,0x600,0,uRam403c0864);
  FUN_4067ca30(iVar4 != 0,0x403c0888,uRam403bfd30,0xfd1,uVar6);
  FUN_4067a4ec(iVar4,0x600);
  iVar5 = FUN_4049a740();
  iVar10 = *(int *)(*(int *)(iVar5 + 0x20) + 0x40);
  iVar8 = *(int *)(*(int *)(iVar5 + 0x20) + 0x44);
  FUN_4067ca30(iVar10 != 0,0x403c08a8,uRam403bfd30,0xfe0,uVar6);
  FUN_4067ca30(iVar8 != 0,0x403c08bc,uRam403bfd30,0xfe1,uVar6);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_54,0x403c08dc);
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_54,1,&uStack_58);
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 0x1c))(piVar7,uStack_58,iVar1,0x3fc000);
    (**(code **)(*piVar7 + 0x18))(piVar7,uStack_58);
  }
  FUN_4020e94c(auStack_498,uRam403c08ec,0x44,0x10);
  uStack_4fc = 0;
  uStack_50c = 0x10;
  uStack_508 = 1000;
  uStack_50a = 1000;
  auStack_4b8[0] = 2;
  iStack_4b0 = iVar1 + 0x1fe000;
  iStack_4ac = iVar1 + 0x27d800;
  uStack_4a8 = 0x2d0;
  uStack_4a6 = 0x1e0;
  uStack_4a4 = 0x780;
  uStack_4a0 = 0;
  uStack_49e = 0;
  uStack_502 = 0;
  uStack_500 = 1;
  uStack_4fe = 1;
  uStack_4fa = 0x2d0;
  uStack_4f8 = 0x1e0;
  uStack_4ec = 0x32;
  uStack_4e8 = 0;
  puStack_510 = auStack_4b8;
  iStack_4f4 = iVar4;
  iStack_4e0 = iVar10;
  iStack_4dc = iVar8;
  puStack_4c4 = auStack_498;
  iStack_4b4 = iVar1;
  FUN_4067cd44(0x403c0a74);
  FUN_4049cf5c(uVar2,&puStack_510);
  FUN_4067cd44(0x403c0a9c);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067cd44(0x403c0ac4,(uint)uStack_4c0);
  FUN_4067cd44(0x403c0ad8,uStack_4be);
  for (uVar9 = 0; uVar9 < uStack_4c0; uVar9 = uVar9 + 1 & 0xffff) {
    FUN_4067cd44(0x403c0aec,uVar9,auStack_498[uVar9 * 0x11],auStack_498[uVar9 * 0x11 + 1],
                 auStack_498[uVar9 * 0x11 + 2],auStack_498[uVar9 * 0x11 + 3]);
    FUN_4067cd44(0x403c0b1c,uVar9,auStack_474[uVar9 * 0x11 + 4],auStack_474[uVar9 * 0x11 + 5],
                 auStack_474[uVar9 * 0x11 + 6],auStack_474[uVar9 * 0x11 + 7]);
    FUN_4067cd44(0x403c0b4c,uVar9,auStack_474[uVar9 * 0x11],auStack_474[uVar9 * 0x11 + 1],
                 auStack_474[uVar9 * 0x11 + 2],auStack_474[uVar9 * 0x11 + 3]);
  }
  if (iVar1 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar1,uRam403c0864);
  }
  if (iVar4 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar4,uRam403c0864);
  }
  FUN_4067cd44(0x403c0b7c);
  return 0;
}

