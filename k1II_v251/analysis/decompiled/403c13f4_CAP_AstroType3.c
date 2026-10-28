/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_AstroType3(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined1 auStack_38 [44];
  
  iVar1 = iRam403c14b4;
  if (((*(byte *)(iRam403c14b4 + 0x74) & 1) == 0) &&
     (iVar2 = FUN_406831b6(iRam403c14b4 + 0x74), iVar2 != 0)) {
    iVar2 = FUN_406765c4();
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar2 + 0x10);
  }
  FUN_406501a8(auStack_38);
  FUN_406502f4(*(undefined4 *)(iVar1 + 0x78),auStack_38,0);
  uVar3 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    uVar3 = FUN_4066f214(*(int *)(param_2 + 4),extraout_r1,0);
  }
  FUN_4065072c(auStack_38,0x73,uVar3);
  FUN_406503b0(*(undefined4 *)(iVar1 + 0x78),auStack_38);
  thunk_FUN_402fade0(auStack_38);
  return 0;
}

