/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 tether_getop(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_404d4ec4();
    FUN_404095b4(*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc),&uStack_20);
    FUN_4067cd44(0x404d5a40);
    switch(uStack_20 & 0xff) {
    case 0:
      uVar3 = 0x404d5a70;
      break;
    case 1:
      uVar3 = 0x404d5a74;
      break;
    case 2:
      uVar3 = 0x404d5b58;
      break;
    case 3:
      uVar3 = 0x404d5aa8;
      break;
    case 4:
      uVar3 = 0x404d5ac0;
      break;
    case 5:
      uVar3 = 0x404d5ab0;
      break;
    case 6:
      uVar3 = 0x404d5b4c;
      break;
    default:
      uVar3 = 0x404d5b60;
    }
    FUN_4067cd44(uVar3);
    FUN_4067cd44(0x404d5a7c);
    FUN_4067cd44(0x404d5a80,uStack_1c);
    FUN_4067cd44(0x404d5a94,uStack_18);
  }
  else {
    uStack_20 = *(uint *)(iRam404d5a18 + 4);
    FUN_40679338(*param_2,0x404d5a4c,&uStack_20,1);
  }
  return 0xffffffff;
}

