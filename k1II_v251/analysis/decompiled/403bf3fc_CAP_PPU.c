/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_PPU(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  FUN_4067cd44(0x403bf5b8);
  FUN_403ea634();
  FUN_402675cc();
  if (*(int *)(param_2 + 4) == 0) {
    return 0;
  }
  uStack_48 = uRam403bf5d0;
  uStack_44 = uRam403bf5d4;
  uStack_58 = uRam403bf5d8;
  uStack_54 = uRam403bf5dc;
  uStack_50 = uRam403bf5e0;
  uStack_4c = uRam403bf5e4;
  uStack_40 = uRam403bf5e8;
  uStack_3c = uRam403bf5ec;
  uStack_38 = uRam403bf5f0;
  uStack_34 = uRam403bf5f4;
  uStack_30 = uRam403bf5f8;
  uStack_2c = uRam403bf5fc;
  uStack_28 = uRam403bf600;
  auStack_24[0] = uRam403bf604;
  iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_48);
  if (iVar1 == 0) {
    uVar2 = 0x403bf608;
  }
  else {
    iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_44);
    if (iVar1 != 0) {
      iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_40);
      if (iVar1 == 0) {
        FUN_4067cd44(0x403bf818);
        iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_3c);
        if (iVar1 == 0) {
          FUN_4067cd44(0x403bf830);
          iVar1 = FUN_40325bc4();
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          uVar3 = 4;
        }
        else {
          iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_38);
          if (iVar1 != 0) {
            return 0;
          }
          FUN_4067cd44(0x403bf84c);
          iVar1 = FUN_40325bc4();
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          uVar3 = 8;
        }
        FUN_403226ac(uVar2,uVar3);
        return 0;
      }
      iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_34);
      if (iVar1 == 0) {
        FUN_4067cd44(0x403bf868);
        iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_30);
        if (iVar1 == 0) {
          FUN_4067cd44(0x403bf87c);
          iVar1 = FUN_40325bc4();
          FUN_40322a24(*(undefined4 *)(iVar1 + 0x10));
          return 0;
        }
        iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_2c);
        if (iVar1 == 0) {
          FUN_4067cd44(0x403bf894);
          iVar1 = FUN_40325bc4();
          FUN_40322a38(*(undefined4 *)(iVar1 + 0x10));
          return 0;
        }
        return 0;
      }
      iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),&uStack_28);
      if (iVar1 == 0) {
        FUN_4067c0f4(0,0,0x403bf8ac);
        FUN_4067c0f4(0,0,0x403bf8c8);
        FUN_40379eb8();
        FUN_40379fc8();
        FUN_4067c0f4(0,0,0x403bf8e4);
        return 0;
      }
      iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),auStack_24);
      if (iVar1 == 0) {
        FUN_4067c0f4(0,0,0x403bf904);
        uVar2 = FUN_40677b5c();
        uVar2 = FUN_40677c28(uVar2,0x132);
        FUN_4051aee4(uVar2,0xdebc,0x101);
        FUN_4051af04(uVar2,2,0x101);
        FUN_4051af24(uVar2,0x3fff,0x101);
        FUN_4051af84(uVar2,2,0x101);
        FUN_4051af64(uVar2,0x3fff,0x101);
        return 0;
      }
      return 0;
    }
    FUN_4067cd44(0x403bf62c);
    iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_58);
    if (iVar1 == 0) {
      uVar2 = 0x403bf648;
    }
    else {
      iVar1 = FUN_4066f1e0(*(undefined4 *)(param_2 + 8),&uStack_50);
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = 0x403bf670;
    }
  }
  FUN_4067cd44(uVar2);
  return 0;
}

