/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

bool obs_CustomImageEligibilityWrapper(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    return param_1 == 0xc;
  }
  bVar4 = false;
  switch(param_1) {
  case 0:
    goto code_r0x408a4a60;
  case 1:
    goto code_r0x408a4a60;
  case 2:
    goto code_r0x408a4a60;
  case 3:
    goto code_r0x408a4a60;
  case 4:
    goto code_r0x408a4a60;
  case 5:
    goto code_r0x408a4a60;
  case 6:
    goto code_r0x408a4a60;
  case 7:
    goto code_r0x408a4a60;
  case 8:
    goto code_r0x408a4a60;
  case 9:
    goto code_r0x408a4a60;
  case 10:
    goto code_r0x408a4a60;
  case 0xb:
    goto code_r0x408a4a60;
  case 0xc:
    goto code_r0x408a4a60;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
  default:
LAB_408a4a68:
    FUN_4067ca30(0,0x408a4b84,0x408a4b68,0xd5,uRam408a4b64);
    break;
  case 0x21:
    goto LAB_408a4a68;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    goto code_r0x408a4a60;
  case 0x2c:
    uVar1 = *puRam408a4b60;
    uVar2 = obs_GetSpecModel();
    iVar3 = obs_GetFeatureAvailability(uVar2,3);
    if (iVar3 == 0) {
      return (bool)uVar1;
    }
    if (param_2 != 3 && param_2 != 0xf) {
      return (bool)uVar1;
    }
    goto code_r0x408a4a60;
  case 0x2d:
    uVar1 = puRam408a4b60[1];
    uVar2 = obs_GetSpecModel();
    iVar3 = obs_GetFeatureAvailability(uVar2,4);
    if (iVar3 == 0) {
      return (bool)uVar1;
    }
    if (param_2 != 8 && param_2 != 9) {
      return (bool)uVar1;
    }
    goto code_r0x408a4a60;
  case 0x2e:
    uVar1 = puRam408a4b60[2];
    uVar2 = obs_GetSpecModel();
    iVar3 = obs_GetFeatureAvailability(uVar2,5);
    if (iVar3 == 0) {
      return (bool)uVar1;
    }
    if ((param_2 != 1 && param_2 != 0xb) && (param_2 != 0xc && param_2 != 0xd)) {
      return (bool)uVar1;
    }
    goto code_r0x408a4a60;
  case 0x2f:
    uVar1 = puRam408a4b60[3];
    uVar2 = obs_GetSpecModel();
    iVar3 = obs_GetFeatureAvailability(uVar2,6);
    if (iVar3 == 0) {
      return (bool)uVar1;
    }
    if (param_2 != 5 && param_2 != 0xe) {
      return (bool)uVar1;
    }
    goto code_r0x408a4a60;
  case 0x30:
code_r0x408a4a60:
    bVar4 = true;
  }
  return bVar4;
}

