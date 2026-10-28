/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_mm(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  uVar5 = 0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 2) {
      FUN_40009864(0x40008400);
      FUN_4000a56c(1);
    }
    else {
      iVar2 = FUN_400f2824(param_2[1],0x40008414);
      if (iVar2 == 0) {
        if (iStack_18 < 3) {
          uVar3 = 1000;
        }
        else {
          uVar3 = FUN_400f21f8(param_2[2],0);
        }
        if (iStack_18 < 4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = FUN_400f21f8(param_2[3],0);
        }
        iVar2 = FUN_4000a5dc();
        if (iVar2 == 0) {
          iVar2 = FUN_4000a23c(uVar3);
          uVar5 = 0;
          if (iVar2 != 0) {
            uVar5 = FUN_4000a354(uVar4);
          }
        }
        else {
          FUN_40009864(0x40008450);
        }
        uVar5 = FUN_4000b3d4(uVar5);
        FUN_40009864(0x40008470,uVar5,uVar4,uVar3);
      }
      else {
        iVar2 = FUN_400f2824(param_2[1],0x4000841c);
        if (iVar2 == 0) {
          if (iStack_18 < 3) {
            uVar5 = 5;
          }
          else {
            uVar5 = FUN_400f21f8(param_2[2],0);
          }
          iVar2 = FUN_4000a3a8();
          if (iVar2 != 0) {
            FUN_4000a56c(uVar5);
            FUN_4000a2cc();
          }
          uVar3 = FUN_4000b3d4(iVar2);
          FUN_40009864(0x400084a8,uVar3,uVar5);
        }
        else {
          iVar2 = FUN_400f2824(param_2[1],0x40008424);
          if (iVar2 == 0) {
            FUN_4000a3d4();
            uVar5 = FUN_4000b3d4();
            uVar3 = 0x400085c0;
          }
          else {
            iVar2 = FUN_400f2824(param_2[1],0x4000842c);
            if (iVar2 != 0) {
              FUN_40009864(0x400083c8);
              goto LAB_400082a4;
            }
            FUN_4000a400();
            uVar5 = FUN_4000b3d4();
            uVar3 = 0x400085dc;
          }
          FUN_40009864(uVar3,uVar5);
        }
      }
    }
    uVar5 = 0;
  }
  else {
LAB_400082a4:
    FUN_400f2698(auStack_30,uRam40008434,0x14);
    FUN_4000af54(*param_2,0x40008438,auStack_30,5);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

