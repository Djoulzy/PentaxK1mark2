/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_ClassifyLens(int *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1,1);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0xf);
  sVar3 = (**(code **)(*param_1 + 8))(param_1,0x90);
  uVar4 = 0x10;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    uVar4 = 0x10;
    if (uVar2 == 3) {
      if (sVar3 == 0) {
        uVar4 = 0;
      }
      else if (sVar3 == 0x103) {
        uVar4 = 1;
      }
    }
    else if (uVar2 == 0x18) {
      if (sVar3 == 0) {
        uVar4 = 2;
      }
      else if (sVar3 == 0x118) {
        uVar4 = 3;
      }
    }
    else if (uVar2 == 0x27) {
      if (sVar3 == 0) {
        uVar4 = 4;
      }
      else if (sVar3 == 0x127) {
        uVar4 = 5;
      }
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    uVar4 = 0x10;
    if (uVar2 == 0xce) {
      if (sVar3 == 0) {
        uVar4 = 0xd;
      }
    }
    else if (uVar2 < 0xcf) {
      if (uVar2 == 0x3a) {
        if (sVar3 == 0) {
          uVar4 = 6;
        }
        else if (sVar3 == 0x13a) {
          uVar4 = 7;
        }
      }
      else if (uVar2 == 0xcc) {
        if (sVar3 == 0) {
          uVar4 = 8;
        }
      }
      else if (uVar2 == 0xcd && sVar3 == 0) {
        uVar4 = 0xe;
      }
    }
    else if (uVar2 == 0xcf) {
      if (sVar3 == 0) {
        uVar4 = 0xb;
      }
    }
    else if (uVar2 == 0xd0) {
      if (sVar3 == 0) {
        uVar4 = 0xc;
      }
    }
    else if (uVar2 == 0xda && sVar3 == 0) {
      uVar4 = 10;
    }
    break;
  case 8:
    uVar4 = 0x10;
    if (uVar2 == 0x43) {
      if (sVar3 == 0) {
        uVar4 = 9;
      }
    }
    else if (uVar2 == 0xd1 && sVar3 == 0) {
      uVar4 = 0xf;
    }
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  default:
    FUN_4067ca30(0,0x408d8e0c,0x408d8df8,0xce,uRam408d8df4,unaff_r4,unaff_r5,unaff_lr);
  }
  return uVar4;
}

