/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_crash(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [20];
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_14 < 2) {
      uVar2 = FUN_4046856c();
      return uVar2;
    }
    iVar3 = FUN_40683ba0(param_2[1],0x408bb8a0);
    uVar2 = uRam408bb8b8;
    if (iVar3 == 0) {
      if ((iStack_14 < 3) || (iVar3 = FUN_4020c174(param_2[2],0), iVar3 != 1)) {
        FUN_4067ca30(0,0x408bb8d4,0x408bb8bc,0x310,uVar2);
        return 0;
      }
      FUN_4067e300(0,0x408bb8d4,0x408bb8bc,0x30c,uVar2,0x408bb8d8);
      return 0;
    }
    iVar3 = FUN_40683ba0(param_2[1],0x408bb8a8);
    if (iVar3 == 0) {
      if ((iStack_14 < 3) || (iVar3 = FUN_4020c174(param_2[2],0), iVar3 == 1)) {
        uVar4 = 0x408bb914;
        uVar2 = uRam00000001;
        goto LAB_408bb880;
      }
      if (iVar3 == 2) {
        FUN_40468558(0);
        return 0;
      }
      if (iVar3 == 3) {
        thunk_FUN_404a9d54();
        return 0;
      }
      if (iVar3 == 4) {
        thunk_FUN_404a9d60();
        return 0;
      }
    }
    else {
      iVar3 = FUN_40683ba0(param_2[1],uRam408bb8ac);
      if (iVar3 == 0) {
        thunk_FUN_404682a8(param_2[2]);
        uVar2 = FUN_406798ac();
        uVar4 = 0x408bb924;
LAB_408bb880:
        FUN_4067cd44(uVar4,uVar2);
        return 0;
      }
      iVar3 = FUN_40683ba0(param_2[1],uRam408bb8b0);
      if (iVar3 == 0) {
        FUN_40468524();
        uVar2 = FUN_406798ac();
        uVar4 = 0x408bb938;
        goto LAB_408bb880;
      }
      iVar3 = FUN_40683ba0(param_2[1],0x408bb8b4);
      if (iVar3 == 0) {
        FUN_404686e8();
        return 0;
      }
    }
    FUN_4067cd44(0x408bb8e8);
  }
  FUN_406833b0(auStack_28,uRam408bb8fc,0x14);
  FUN_40679338(*param_2,0x408bb900,auStack_28,5);
  return 0xffffffff;
}

