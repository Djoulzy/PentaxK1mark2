/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 tether_getfinfo(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  uStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (param_2[1] == 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = thunk_FUN_4020c174(param_2[1],0,10);
    }
    iVar3 = FUN_404d4ec4();
    uVar4 = *(undefined4 *)(iVar3 + 4);
    FUN_40683cc4(&uStack_40,0x24);
    FUN_404d5554(uVar4,uVar1,&uStack_40);
    FUN_4067cd44(0x404d59c8,uStack_40 & 0xff);
    FUN_4067cd44(0x404d59dc,uStack_40._1_1_);
    FUN_4067cd44(0x404d59f0,uStack_40._2_1_);
    FUN_4067cd44(0x404d5a04,(int)&uStack_40 + 3);
  }
  else {
    uStack_40 = *puRam404d5a18;
    FUN_40679338(*param_2,0x404d5a1c,&uStack_40,1);
  }
  return 0xffffffff;
}

