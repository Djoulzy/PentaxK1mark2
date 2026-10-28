/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_mm(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [24];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  uVar5 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
LAB_408bba04:
    FUN_406833b0(auStack_30,uRam408bbb88,0x18);
    FUN_40679338(*param_2,0x408bbb8c,auStack_30,6);
    return 0xffffffff;
  }
  if (iStack_18 < 2) {
    FUN_4067cd44(0x408bbb6c);
    FUN_406d5e08(1);
  }
  else {
    iVar2 = FUN_40683ba0(param_2[1],0x408bb664);
    if (iVar2 == 0) {
      if (iStack_18 < 3) {
        uVar3 = 1000;
      }
      else {
        uVar3 = FUN_4020c174(param_2[2],0);
      }
      if (iStack_18 < 4) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = FUN_4020c174(param_2[3],0);
      }
      iVar2 = FUN_406d60c0();
      if (iVar2 == 0) {
        iVar2 = FUN_406d5ad8(uVar3);
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = FUN_406d5bf0(uVar4);
        }
      }
      else {
        FUN_4067cd44(0x408bbba4);
      }
      uVar5 = FUN_406798ac(uVar5);
      FUN_4067cd44(0x408bbbc4,uVar5,uVar4,uVar3);
    }
    else {
      iVar2 = FUN_40683ba0(param_2[1],0x408bb66c);
      if (iVar2 == 0) {
        if (iStack_18 < 3) {
          uVar5 = 5;
        }
        else {
          uVar5 = FUN_4020c174(param_2[2],0);
        }
        iVar2 = FUN_406d5c44();
        if (iVar2 != 0) {
          FUN_406d5e08(uVar5);
          FUN_406d5b68();
        }
        uVar3 = FUN_406798ac(iVar2);
        FUN_4067cd44(0x408bbbfc,uVar3,uVar5);
      }
      else {
        iVar2 = FUN_40683ba0(param_2[1],0x408bb674);
        if (iVar2 == 0) {
          FUN_406d5c70();
          uVar5 = FUN_406798ac();
          uVar3 = 0x408bbc28;
        }
        else {
          iVar2 = FUN_40683ba0(param_2[1],0x408bb67c);
          if (iVar2 != 0) {
            iVar2 = FUN_40683ba0(param_2[1],0x408bbb80);
            if (iVar2 == 0) {
              FUN_406d5f44(1);
              FUN_4067cd44(0x408bbc60);
              return 0;
            }
            FUN_4067cd44(0x408bb8e8);
            goto LAB_408bba04;
          }
          FUN_406d5c9c();
          uVar5 = FUN_406798ac();
          uVar3 = 0x408bbc44;
        }
        FUN_4067cd44(uVar3,uVar5);
      }
    }
  }
  return 0;
}

