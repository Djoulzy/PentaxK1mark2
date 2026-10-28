/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_chipsel(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_14);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (2 < iStack_14) {
      uVar3 = FUN_40677b5c();
      uVar3 = FUN_40677c28(uVar3,0xf3);
      iVar4 = FUN_40683ba0(param_2[1],0x409ce208);
      if (iVar4 == 0) {
        uVar1 = FUN_4020c174(param_2[2],0);
        FUN_4025f478(uVar3,uVar1);
        uVar3 = FUN_4025f4a8(uVar3);
        uVar5 = 0x409ce22c;
LAB_409ce190:
        FUN_4067cd44(uVar5,uVar3);
        return 0;
      }
      iVar4 = FUN_40683ba0(param_2[1],0x409ce210);
      if (iVar4 == 0) {
        uVar1 = FUN_4020c174(param_2[2],0);
        FUN_4025f4b8(uVar3,uVar1);
        uVar3 = FUN_4025f4e8(uVar3);
        uVar5 = 0x409ce240;
        goto LAB_409ce190;
      }
    }
    FUN_4067cd44(uRam409ce1a8);
  }
  uStack_20 = *(undefined4 *)(iRam409cde4c + 0x14);
  uStack_1c = *(undefined4 *)(iRam409cde4c + 0x18);
  FUN_40679338(*param_2,0x409ce218,&uStack_20,2);
  return 0xffffffff;
}

