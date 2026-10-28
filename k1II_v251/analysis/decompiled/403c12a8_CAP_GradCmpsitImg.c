/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_GradCmpsitImg(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  
  FUN_4067cd44(0x403c1498);
  iVar2 = FUN_403726c8();
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  if (((*(byte *)(iRam403c14b4 + 0x70) & 1) == 0) &&
     (iVar2 = FUN_406831b6(uRam403c14b8), puVar1 = puRam403c14bc, iVar2 != 0)) {
    *puRam403c14bc = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  *puRam403c14bc = 1;
  auStack_30[0] = 0x18;
  uStack_24 = 0x1e;
  uStack_18 = 0x28;
  iStack_2c = iRam403c14c0;
  iStack_28 = iRam403c14c0 + 0x100000;
  iStack_20 = iRam403c14c0 + 0x840000;
  iStack_1c = iRam403c14c0 + 0x7c0000;
  iStack_14 = iRam403c14c0 + 0x9c0000;
  *(undefined1 **)(puRam403c14bc + 8) = auStack_30;
  uVar3 = FUN_408d7da4(uVar3);
  FUN_4067cd44(0x403c14c4,uVar3);
  return 0;
}

