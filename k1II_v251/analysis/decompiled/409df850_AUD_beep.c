/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_beep(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  uVar5 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uStack_28 = *puRam409dfce4;
    uStack_24 = puRam409dfce4[1];
    uStack_20 = puRam409dfce4[2];
    FUN_40679338(*param_2,0x409dfce8,&uStack_28,3);
    return 0xffffffff;
  }
  FUN_404bfd38();
  uVar2 = FUN_404bfefc();
  if (iStack_18 < 3) {
    uVar3 = 0x409dfa38;
LAB_409df9d0:
    FUN_4067cd44(uVar3);
  }
  else {
    iVar4 = FUN_40683ba0(param_2[2],0x409dfa50);
    if (iVar4 == 0) {
      uVar3 = 0x409dfa54;
      goto LAB_409df9d0;
    }
    iVar4 = FUN_40683ba0(param_2[2],0x409dfa6c);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfac4);
      uVar5 = 1;
    }
    else {
      iVar4 = FUN_40683ba0(param_2[2],0x409dfa70);
      if (iVar4 == 0) {
        FUN_4067cd44(0x409dfadc);
        uVar5 = 2;
      }
      else {
        iVar4 = FUN_40683ba0(param_2[2],0x409dfa74);
        if (iVar4 == 0) {
LAB_409df914:
          FUN_4067cd44(0x409dfa38);
          uVar5 = 3;
        }
        else {
          iVar4 = FUN_40683ba0(param_2[2],0x409dfa78);
          if (iVar4 == 0) {
            FUN_4067cd44(0x409dfaf4);
            uVar5 = 4;
          }
          else {
            iVar4 = FUN_40683ba0(param_2[2],0x409dfa7c);
            if (iVar4 != 0) goto LAB_409df914;
            FUN_4067cd44(0x409dfb0c);
            uVar5 = 5;
          }
        }
      }
    }
  }
  FUN_40505d60(uVar2,uVar5);
  if ((1 < iStack_18) && (iVar4 = FUN_40683ba0(param_2[1],0x409dfa80), iVar4 != 0)) {
    iVar4 = FUN_40683ba0(param_2[1],0x409dfa84);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfb24);
      uVar5 = 2;
      goto LAB_409df9bc;
    }
    iVar4 = FUN_40683ba0(param_2[1],0x409dfa8c);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfc64);
      uVar5 = 3;
      goto LAB_409df9bc;
    }
    iVar4 = FUN_40683ba0(param_2[1],0x409dfa94);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfc84);
      uVar5 = 4;
      goto LAB_409df9bc;
    }
    iVar4 = FUN_40683ba0(param_2[1],0x409dfa9c);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfca4);
      uVar5 = 5;
      goto LAB_409df9bc;
    }
    iVar4 = FUN_40683ba0(param_2[1],0x409dfaa8);
    if (iVar4 == 0) {
      FUN_4067cd44(0x409dfcc8);
      uVar5 = 6;
      goto LAB_409df9bc;
    }
  }
  FUN_4067cd44(0x409dfab0);
  uVar5 = 1;
LAB_409df9bc:
  FUN_40505d94(uVar2,uVar5);
  return 0;
}

