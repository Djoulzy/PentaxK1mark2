/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_script(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  iVar1 = FUN_4089636c();
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  pcVar2 = (char *)FUN_406793bc(&iStack_20,param_2);
  uVar5 = 1;
  uVar4 = 0;
  if (((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) && (1 < iStack_20)) {
    iVar1 = FUN_40683ba0(param_2[1],0x408bb664);
    if (iVar1 == 0) {
      if (iStack_20 < 3) goto LAB_408bb684;
      uVar3 = param_2[2];
      if (3 < iStack_20) {
        iVar1 = FUN_4020c174(uVar3,0);
        uVar5 = 0;
        if (iVar1 != 0) {
          uVar5 = 1;
        }
      }
      if (4 < iStack_20) {
        iVar1 = FUN_4020c174(param_2[3],0);
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      FUN_408bc1e8(uVar6,uVar3,uVar5,uVar4);
    }
    else {
      iVar1 = FUN_40683ba0(param_2[1],0x408bb66c);
      if (iVar1 == 0) {
        thunk_FUN_4095a1b8(uVar6);
      }
      else {
        iVar1 = FUN_40683ba0(param_2[1],0x408bb674);
        if (iVar1 == 0) {
          thunk_FUN_4095a1c8(uVar6);
        }
        else {
          iVar1 = FUN_40683ba0(param_2[1],0x408bb67c);
          if (iVar1 != 0) goto LAB_408bb684;
          thunk_FUN_4095a1d8(uVar6);
        }
      }
    }
    uVar5 = 0;
  }
  else {
LAB_408bb684:
    uStack_30 = *puRam408bb894;
    uStack_2c = puRam408bb894[1];
    uStack_28 = puRam408bb894[2];
    FUN_40679338(*param_2,0x408bb898,&uStack_30,3);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

