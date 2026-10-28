/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_lis_test(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_648 [1536];
  undefined4 auStack_48 [5];
  undefined4 auStack_34 [3];
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_28 = param_1;
  puStack_24 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_28);
  FUN_406833b0(auStack_648,uRam409f3edc,0x600);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_28)) {
    iVar4 = 0;
    do {
      uVar2 = FUN_406832d8(0x100);
      auStack_48[iVar4] = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    iVar4 = 0;
    do {
      uVar2 = 3000;
      FUN_4067e440(auStack_48[1],0x409f3ee0);
      FUN_4067e440(auStack_48[2],0x409f3ee4,iVar4 + 1);
      FUN_4067e440(auStack_48[3],0x409f3ee8);
      iVar3 = FUN_40683ba0(param_2[1],0x409f3eec);
      if (iVar3 == 0) {
        FUN_4067e440(auStack_48[4],0x409f3f0c,iVar4,auStack_648 + iVar4 * 0x100);
        NET_getimg(5,auStack_48);
        uVar2 = 8000;
      }
      else {
        iVar3 = FUN_40683ba0(param_2[1],0x409f3ef0);
        if (iVar3 == 0) {
          FUN_4067e440(auStack_48[4],0x409f3f18,iVar4);
          NET_getsub(5,auStack_48);
        }
        else {
          iVar3 = FUN_40683ba0(param_2[1],0x409f3ef4);
          if (iVar3 != 0) {
            FUN_4067cd44(0x409f3efc);
            break;
          }
          FUN_4067e440(auStack_48[4],0x409f3f24,iVar4);
          NET_getthum(5,auStack_48);
        }
      }
      FUN_4067ab8c(uVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    iVar4 = 0;
    do {
      FUN_4068328c(auStack_48[iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    uVar2 = 0;
  }
  else {
    auStack_34[0] = *puRam409f3f30;
    FUN_40679338(*param_2,0x409f3f34,auStack_34,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

