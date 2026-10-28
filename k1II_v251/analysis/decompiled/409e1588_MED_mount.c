/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mount(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uStack_20 = *(undefined4 *)(iRam409e17d4 + 0x3c);
    uStack_1c = *(undefined4 *)(iRam409e17d4 + 0x40);
    FUN_40679338(*param_2,0x409e17d8,&uStack_20,2);
    return 0xffffffff;
  }
  uStack_24 = uRam409e1754;
  if (1 < iStack_14) {
    FUN_4070412c(&uStack_24,param_2[1],1);
    uVar2 = uStack_24 & 0xff;
    if (uVar2 - 0x61 < 0x1a) {
      uVar2 = uVar2 - 0x20;
      uStack_24 = CONCAT31(uStack_24._1_3_,(char)uVar2);
    }
    if ((uVar2 & 0xff) - 0x41 < 0x1a) goto LAB_409e1604;
  }
  uStack_24 = CONCAT31(uStack_24._1_3_,0x43);
LAB_409e1604:
  iVar3 = FUN_4067992c();
  iVar3 = *(int *)(iVar3 + 0x10);
  FUN_4067ca30(iVar3 != 0,0x409e1774,0x409e175c,0x72,uRam409e1758);
  iVar3 = FUN_40635cc4(iVar3,&uStack_24);
  if (iVar3 == 0) {
    uVar4 = 0x409e17ac;
  }
  else {
    uVar4 = 0x409e1784;
  }
  FUN_4067cd44(uVar4,&uStack_24);
  return 0;
}

