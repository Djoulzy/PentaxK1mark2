/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_RecipeStat(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 auStack_170 [28];
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  undefined4 auStack_90 [24];
  undefined4 auStack_30 [6];
  
  FUN_4067cd44(0x403be678);
  FUN_406833b0(auStack_30,uRam403be69c,0x14);
  FUN_406833b0(auStack_100,uRam403be6a0,0x70);
  FUN_406833b0(auStack_90,uRam403be6a4,0x60);
  FUN_406833b0(auStack_170,uRam403be6a8,0x70);
  iVar1 = FUN_403726c8();
  uVar8 = *(undefined4 *)(iVar1 + 8);
  iVar1 = FUN_402fccf8(uVar8);
  iVar2 = FUN_406832d8(iVar1 * 4 + 4);
  if (iVar2 != 0) {
    FUN_402fcd80(uVar8,iVar2,iVar1 + 1);
    for (iVar9 = 0; iVar9 < iVar1; iVar9 = iVar9 + 1) {
      iVar6 = *(int *)(iVar2 + iVar9 * 4);
      uVar7 = (uint)*(byte *)(iVar6 + 0x48);
      puVar4 = (ushort *)(*(int *)(iVar6 + 0x4c) + *(int *)(iVar6 + 0x50) * 2);
      uVar3 = (uint)*puVar4;
      uVar5 = (uint)puVar4[0x80];
      if (uVar3 == 1 || uVar3 == 2) {
        uVar10 = auStack_90[uVar5];
        uVar8 = auStack_100[uVar3];
LAB_403be73c:
        FUN_4067cd44(0x403bea34,iVar9,iVar6,uVar7,auStack_30[uVar7],uVar3,uVar8,uVar5,uVar10);
      }
      else {
        if (uVar3 == 5) {
          uVar10 = auStack_170[uVar5];
          uVar8 = uStack_ec;
          goto LAB_403be73c;
        }
        FUN_4067cd44(0x403be9d4,iVar9,iVar6,uVar7,auStack_30[uVar7],uVar3,auStack_100[uVar3],uVar5);
      }
    }
  }
  FUN_40683358(iVar2);
  FUN_4067cd44(0x403bea10);
  return 0;
}

