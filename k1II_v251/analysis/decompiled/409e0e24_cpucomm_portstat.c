/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 cpucomm_portstat(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  uVar10 = 0;
  uStack_2c = param_1;
  puStack_28 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_2c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    uVar2 = FUN_40677b5c();
    uVar3 = FUN_403975b4();
    uVar4 = FUN_40398680(uVar3,0x54);
    uVar4 = FUN_40677c28(uVar2,uVar4);
    uVar5 = FUN_40398680(uVar3,0x55);
    uVar5 = FUN_40677c28(uVar2,uVar5);
    uVar6 = FUN_40398680(uVar3,0x53);
    uVar6 = FUN_40677c28(uVar2,uVar6);
    uVar7 = FUN_40398680(uVar3,0x2b);
    uVar7 = FUN_40677c28(uVar2,uVar7);
    uVar8 = FUN_40398680(uVar3,0x6d);
    uVar8 = FUN_40677c28(uVar2,uVar8);
    uVar3 = FUN_40398680(uVar3,0x6e);
    uVar2 = FUN_40677c28(uVar2,uVar3);
    FUN_4067cd44(0x409e0fb4);
    uVar9 = FUN_40671328(uVar4);
    FUN_4067cd44(0x409e0fcc,uVar9 ^ 1);
    uVar9 = FUN_40671328(uVar5);
    FUN_4067cd44(0x409e0fe0,uVar9 ^ 1);
    uVar9 = FUN_40671328(uVar6);
    FUN_4067cd44(0x409e0ff4,uVar9 ^ 1);
    uVar9 = FUN_40671328(uVar7);
    FUN_4067cd44(0x409e1008,uVar9 ^ 1);
    uVar9 = FUN_40671328(uVar8);
    FUN_4067cd44(0x409e101c,uVar9 ^ 1);
    uVar9 = FUN_40671328(uVar2);
    FUN_4067cd44(0x409e1030,uVar9 ^ 1);
  }
  else {
    uVar10 = 0xffffffff;
    uStack_30 = *puRam409e1044;
    FUN_40679338(*param_2,0x409e1048,&uStack_30,1);
  }
  return CONCAT44(uStack_30,uVar10);
}

