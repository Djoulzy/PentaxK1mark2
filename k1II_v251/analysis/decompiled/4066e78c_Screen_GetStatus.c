/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 Screen_GetStatus(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  if (param_1 < 2) {
    uVar1 = 0x4066e92c;
LAB_4066e920:
    FUN_4067cd44(uVar1);
    return 0xffffffff;
  }
  iVar2 = FUN_40669e34(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_4066f214(*(undefined4 *)(param_2 + 4));
  switch(uVar1) {
  case 0:
    uVar1 = FUN_4066a268(iVar2);
    FUN_4067cd44(0x4066e934,uVar1);
    break;
  case 1:
    uVar1 = 0;
    iVar3 = FUN_405ebe00(*(undefined4 *)(iVar2 + 0x9c4));
    if (iVar3 == 0) {
      iVar3 = FUN_405e81f4(*(undefined4 *)(iVar2 + 0x9c8));
      if (iVar3 != 0) {
        uVar1 = FUN_405e8204(*(undefined4 *)(iVar2 + 0x9c8),1);
      }
    }
    else {
      uVar1 = FUN_405ebe78(*(undefined4 *)(iVar2 + 0x9c4),1);
    }
    uVar6 = 0;
    iVar3 = FUN_405ebe00(*(undefined4 *)(iVar2 + 0x9c4));
    if (iVar3 == 0) {
      iVar3 = FUN_405e81f4(*(undefined4 *)(iVar2 + 0x9c8));
      if (iVar3 != 0) {
        uVar6 = FUN_405e8204(*(undefined4 *)(iVar2 + 0x9c8),2);
      }
    }
    else {
      uVar6 = FUN_405ebe78(*(undefined4 *)(iVar2 + 0x9c4),2);
    }
    uVar5 = 0;
    iVar3 = FUN_405ebe00(*(undefined4 *)(iVar2 + 0x9c4));
    if (iVar3 == 0) {
      iVar3 = FUN_405e81f4(*(undefined4 *)(iVar2 + 0x9c8));
      if (iVar3 != 0) {
        uVar5 = *(undefined1 *)(*(int *)(iVar2 + 0x9c8) + 4);
      }
    }
    else {
      uVar5 = *(undefined1 *)(*(int *)(iVar2 + 0x9c4) + 3);
    }
    FUN_4067cd44(0x4066e944,uVar5,uVar6,uVar1);
    break;
  case 2:
    uVar4 = func_0x405ec114(*(undefined4 *)(iVar2 + 0x9c4));
    uVar1 = 0x4066e974;
    goto code_r0x4066e8f8;
  case 3:
    uVar4 = (uint)*(byte *)(*(int *)(iVar2 + 0x9c8) + 1);
    uVar1 = 0x4066e984;
code_r0x4066e8f8:
    FUN_4067cd44(uVar1,uVar4);
    break;
  case 4:
    func_0x405eeb8c(*(undefined4 *)(iVar2 + 0x9c4));
    break;
  case 5:
    func_0x405eb9c0(*(undefined4 *)(iVar2 + 0x9c8));
    break;
  default:
    uVar1 = 0x4066e994;
    goto LAB_4066e920;
  }
  return 0;
}

