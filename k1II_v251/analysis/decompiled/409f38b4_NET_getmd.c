/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_getmd(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_409f340c(uStack_1c,param_2);
    FUN_406831c8(0x84);
    iVar2 = FUN_403547c0();
    uVar3 = FUN_409f459c();
    FUN_409f4d68(uVar3,iVar2,0x84);
    FUN_4067cd44(0x409f3b18);
    FUN_409f3298(4,0,*(undefined4 *)(iRam409f35b4 + 4));
    FUN_4067cd44(0x409f3b28);
    FUN_4067cd44(0x409f3b58,iVar2);
    FUN_4067cd44(0x409f3b70,iVar2 + 9);
    FUN_4067cd44(0x409f3b88,*(undefined4 *)(iVar2 + 0x20));
    FUN_4067cd44(0x409f3ba0,*(undefined2 *)(iVar2 + 0x24));
    FUN_4067cd44(0x409f3bb8,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
    FUN_4067cd44(0x409f3bd4,*(undefined4 *)(iVar2 + 0x30));
    FUN_4067cd44(0x409f3bec,*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38));
    FUN_4067cd44(0x409f3c08,iVar2 + 0x3c);
    iVar6 = iVar2 + 0x16;
    uVar3 = FUN_4067a3d4(iVar6);
    uVar4 = FUN_4067a3cc(iVar6);
    uVar5 = FUN_4067a3c4(iVar6);
    FUN_4067cd44(0x409f3c20,uVar5,uVar4,uVar3);
    uVar3 = FUN_4067a468(iVar6);
    uVar4 = FUN_4067a460(iVar6);
    uVar5 = FUN_4067a458(iVar6);
    FUN_4067cd44(0x409f3c3c,uVar5,uVar4,uVar3);
    FUN_4067cd44(0x409f3c58,*(undefined1 *)(iVar2 + 0x50));
    FUN_4067cd44(0x409f3c70,*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58));
    FUN_4067cd44(0x409f3c90,*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x60));
    FUN_4067cd44(0x409f3cb0,*(undefined4 *)(iVar2 + 100),*(undefined4 *)(iVar2 + 0x68));
    FUN_4067cd44(0x409f3cd0,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70));
    FUN_4067cd44(0x409f3c90,*(undefined4 *)(iVar2 + 0x74),*(undefined4 *)(iVar2 + 0x78));
    FUN_4067cd44(0x409f3cb0,*(undefined4 *)(iVar2 + 0x7c),*(undefined4 *)(iVar2 + 0x80));
    FUN_4067cd44(0x409f3b28);
    if (iVar2 != 0) {
      FUN_4035485c(iVar2);
      FUN_4068328c();
    }
    uVar3 = 0;
  }
  else {
    uStack_30 = uRam409f3ecc;
    uStack_2c = uRam409f3ed0;
    uStack_28 = uRam409f3ed4;
    uStack_24 = uRam409f3ed8;
    FUN_409f325c(*param_2,&uStack_30);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

