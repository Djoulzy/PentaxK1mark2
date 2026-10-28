/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_LensClassLookup(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x10;
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    uVar1 = 0x10;
    if (param_2 == 3) {
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else if (param_3 == 0x103) {
        uVar1 = 1;
      }
    }
    else if (param_2 == 0x18) {
      if (param_3 == 0) {
        uVar1 = 2;
      }
      else if (param_3 == 0x118) {
        uVar1 = 3;
      }
    }
    else if (param_2 == 0x27) {
      if (param_3 == 0) {
        uVar1 = 4;
      }
      else if (param_3 == 0x127) {
        uVar1 = 5;
      }
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    uVar1 = 0x10;
    if (param_2 == 0xce) {
      if (param_3 == 0) {
        uVar1 = 0xd;
      }
    }
    else if (param_2 < 0xcf) {
      if (param_2 == 0x3a) {
        if (param_3 == 0) {
          uVar1 = 6;
        }
        else if (param_3 == 0x13a) {
          uVar1 = 7;
        }
      }
      else if (param_2 == 0xcc) {
        if (param_3 == 0) {
          uVar1 = 8;
        }
      }
      else if (param_2 == 0xcd && param_3 == 0) {
        uVar1 = 0xe;
      }
    }
    else if (param_2 == 0xcf) {
      if (param_3 == 0) {
        uVar1 = 0xb;
      }
    }
    else if (param_2 == 0xd0) {
      if (param_3 == 0) {
        uVar1 = 0xc;
      }
    }
    else if (param_2 == 0xda && param_3 == 0) {
      uVar1 = 10;
    }
    break;
  case 8:
    uVar1 = 0x10;
    if (param_2 == 0x43) {
      if (param_3 == 0) {
        uVar1 = 9;
      }
    }
    else if (param_2 == 0xd1 && param_3 == 0) {
      uVar1 = 0xf;
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
    FUN_4067ca30(0,0x408d8e0c,0x408d8df8,0xce,uRam408d8df4);
  }
  return uVar1;
}

