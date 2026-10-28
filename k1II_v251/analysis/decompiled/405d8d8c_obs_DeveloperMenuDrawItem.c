/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_DeveloperMenuDrawItem
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_4066d924(*(undefined4 *)(param_1 + 8));
  iVar3 = FUN_406618ac();
  FUN_4067ca30(iVar3 != 0,0x405d8fc4,0x405d8fb0,0x10d,uRam405d8fac);
  iVar4 = FUN_4066d924(*(undefined4 *)(param_1 + 8));
  uVar1 = *(undefined2 *)(iVar4 + 0xc);
  iVar4 = FUN_4066d924(*(undefined4 *)(param_1 + 8));
  uVar2 = *(undefined2 *)(iVar4 + 0x10);
  if (param_7 == 0) {
    uVar5 = FUN_404c8220();
  }
  else {
    uVar5 = FUN_404c8220();
    param_4 = 0x405d8fd8;
  }
  FUN_404c8540(uVar5,param_4,param_3,param_2,iVar3,uVar1,uVar2,param_5,param_6);
  return;
}

