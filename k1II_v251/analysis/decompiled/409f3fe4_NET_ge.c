/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_ge(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_38 [5];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar3 = 0;
    do {
      uVar2 = FUN_406832d8(0x20);
      auStack_38[iVar3] = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    FUN_4067e440(auStack_38[1],0x409f3ee0);
    iVar3 = 0;
    do {
      FUN_4067e440(auStack_38[2],0x409f3ee4,iVar3 + 1);
      if (iVar3 == 0) {
LAB_409f4084:
        uVar2 = uRam409f41b0;
      }
      else if (iVar3 == 1) {
        uVar2 = uRam409f41a4;
      }
      else if (iVar3 == 2) {
        uVar2 = uRam409f41a8;
      }
      else {
        if (iVar3 != 3) goto LAB_409f4084;
        uVar2 = uRam409f41ac;
      }
      FUN_4067e440(auStack_38[3],uVar2);
      FUN_4067e440(auStack_38[4],0x409f41b4,iVar3 + 1);
      NET_getexif(5,auStack_38);
      FUN_4067ab8c(5000);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    iVar3 = 0;
    do {
      FUN_40683358(auStack_38[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    uVar2 = 0;
  }
  else {
    uStack_24 = uRam409f41bc;
    uStack_20 = uRam409f41c0;
    uStack_1c = uRam409f41c4;
    FUN_409f325c(*param_2,&uStack_24);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

