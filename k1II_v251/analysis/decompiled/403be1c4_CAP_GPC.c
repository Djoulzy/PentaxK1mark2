/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_GPC(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined1 *puStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  
  FUN_4067cd44(0x403be3a0);
  iVar1 = iRam403be3bc;
  iVar4 = iRam403be3bc * 2;
  uVar2 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar2,iVar4 + 0x40,0,uRam403bdfc0);
  FUN_4067ca30(iVar3 != 0,uRam403be3c4,uRam403bd3a0,0xa47,uRam403be3c0);
  uVar2 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar2,iVar3);
  FUN_4067a4ec(iVar3,iVar4);
  iVar4 = FUN_402fd7a4();
  iVar6 = *(int *)(iVar4 + 0x34);
  uStack_20 = 0;
  uStack_1c = 0;
  puStack_24 = (undefined1 *)0x0;
  uStack_1e = 0;
  uStack_1a = 0;
  FUN_408dda2c(auStack_44);
  uStack_34 = 0x2e0;
  uStack_32 = 0x1e0;
  uStack_30 = 0x2e0;
  uStack_2e = 0x1e0;
  uStack_2c = 0;
  iStack_3c = iVar3 + 0x56400;
  uStack_2a = 0;
  iStack_38 = iVar3 + 0x81600;
  auStack_44[0] = 1;
  puStack_24 = auStack_44;
  uStack_20 = 0;
  uStack_1e = 0x80;
  uStack_1c = 0x80;
  iStack_40 = iVar3;
  FUN_403bb240(iVar1,iVar3);
  iVar4 = iRam403bd88c;
  *(undefined1 *)(iRam403bd88c + 10) = 0;
  if (((*(byte *)(iVar4 + 0x60) & 1) == 0) && (iVar5 = FUN_406831b6(iVar4 + 0x60), iVar5 != 0)) {
    uVar2 = FUN_406d5a74(iRam403be3c8);
    FUN_4067e474(uVar2,uRam403be01c,uRam403be018);
  }
  iVar5 = iRam403be3c8;
  *(undefined4 *)(iRam403be3c8 + 0xc) = uRam403be3cc;
  uVar2 = FUN_403b9844();
  *(undefined4 *)(iVar5 + 4) = uVar2;
  *(undefined1 ***)(iVar5 + 8) = &puStack_24;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  FUN_40675bd4(iVar6 + 8,iVar5,2);
  while (*(char *)(iVar4 + 10) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(iVar1 << 1,iVar3);
  uVar2 = FUN_40674b78();
  FUN_40674be0(uVar2,iVar3,uRam403bdfc0);
  FUN_4067cd44(0x403be598);
  return 0;
}

