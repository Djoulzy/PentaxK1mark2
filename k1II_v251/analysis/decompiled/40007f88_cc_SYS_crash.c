/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_crash(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    iVar2 = FUN_400f2824(param_2[1],0x40008120);
    uVar3 = uRam4000812c;
    if (iVar2 == 0) {
      if ((iStack_14 < 3) || (iVar2 = FUN_400f21f8(param_2[2],0), iVar2 != 1)) {
        FUN_4000a064(0,0x40008148,0x40008130,0x142,uVar3);
      }
      else {
        FUN_4000a154(0,0x40008148,0x40008130,0x13e,uVar3,0x4000814c);
      }
    }
    else {
      iVar2 = FUN_400f2824(param_2[1],0x40008128);
      if (iVar2 != 0) {
LAB_40008198:
        FUN_40009864(0x400083c8);
        goto LAB_400081a0;
      }
      if ((iStack_14 < 3) || (iVar2 = FUN_400f21f8(param_2[2],0), iVar2 == 1)) {
        FUN_40009864(0x400083f0,uRam00000001);
      }
      else if (iVar2 == 2) {
        FUN_400095d4(0);
      }
      else if (iVar2 == 3) {
        thunk_FUN_400f60d4();
      }
      else {
        if (iVar2 != 4) goto LAB_40008198;
        thunk_FUN_400f60e0();
      }
    }
    uVar3 = 0;
  }
  else {
LAB_400081a0:
    uStack_20 = *(undefined4 *)(iRam40007cb8 + 0xc);
    uStack_1c = *(undefined4 *)(iRam40007cb8 + 0x10);
    FUN_4000af54(*param_2,0x400083dc,&uStack_20,2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

