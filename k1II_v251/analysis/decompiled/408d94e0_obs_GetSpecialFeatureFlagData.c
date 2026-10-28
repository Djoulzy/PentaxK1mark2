/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_GetSpecialFeatureFlagData(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_40497bbc();
  FUN_406716e4(*(undefined4 *)(iVar1 + 4),param_1);
  switch(param_1) {
  case 0x80:
    uVar2 = FUN_402f3900();
    break;
  case 0x81:
    uVar2 = func_0x4035c4ac();
    break;
  case 0x82:
    uVar2 = func_0x4035c5c4();
    break;
  case 0x83:
    uVar2 = func_0x4035c6dc();
    break;
  case 0x84:
    uVar2 = func_0x4035c7f4();
    break;
  case 0x85:
    uVar2 = func_0x4035c90c();
    break;
  case 0x86:
    uVar2 = func_0x4035ca24();
    break;
  case 0x87:
    uVar2 = func_0x4035cb3c();
    break;
  case 0x88:
    uVar2 = func_0x4035cc54();
    break;
  case 0x89:
    uVar2 = func_0x4035cd6c();
    break;
  case 0x8a:
    uVar2 = func_0x4035ce84();
    break;
  case 0x8b:
    uVar2 = func_0x4035cf9c();
    break;
  case 0x8c:
    uVar2 = func_0x4035d0b4();
    break;
  case 0x8d:
    uVar2 = func_0x4035d1cc();
    break;
  case 0x8e:
    uVar2 = func_0x4035d2e4();
    break;
  case 0x8f:
    uVar2 = func_0x4035d3fc();
    break;
  default:
    FUN_4067ca30(0,0x408d9800,0x408d97f0,0xb2,uRam408d97ec);
    return 0;
  }
  return uVar2;
}

