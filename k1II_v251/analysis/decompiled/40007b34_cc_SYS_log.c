/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_log(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [24];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  iVar4 = iRam40007cd8;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 2) {
      iVar2 = FUN_40009f94();
      FUN_40009864(0x40007cdc,*(undefined4 *)(iVar4 + iVar2 * 4));
      iVar2 = FUN_40009fc8();
      FUN_40009864(0x40007cf0,*(undefined4 *)(iVar4 + iVar2 * 4));
      FUN_40009fe8();
      uVar3 = FUN_4000b3c4();
      FUN_40009864(0x40007d04,uVar3);
      FUN_4000a008();
      uVar3 = FUN_4000b3c4();
      FUN_40009864(0x40007d18,uVar3);
      FUN_4000a028();
      uVar3 = FUN_4000b3c4();
      FUN_40009864(0x40007d2c,uVar3);
      return 0;
    }
    iVar2 = FUN_400f2824(param_2[1],0x40007d40);
    if (iVar2 == 0) {
      if (2 < iStack_18) {
        iVar2 = FUN_40007ad8(param_2[2]);
        uVar6 = FUN_40009f6c();
        if ((int)uVar6 == 0) {
          uVar5 = *(undefined4 *)(iVar4 + iVar2 * 4);
          uVar3 = 0x40007d68;
LAB_40007da8:
          FUN_40009864(uVar3,uVar5);
          return 0;
        }
LAB_40007c9c:
        FUN_40009864(0x40007d98,(int)((ulonglong)uVar6 >> 0x20));
        return (int)uVar6;
      }
    }
    else {
      iVar2 = FUN_400f2824(param_2[1],0x40007d48);
      if (iVar2 == 0) {
        if (2 < iStack_18) {
          iVar2 = FUN_40007ad8(param_2[2]);
          uVar6 = FUN_40009fa0();
          if ((int)uVar6 == 0) {
            uVar5 = *(undefined4 *)(iVar4 + iVar2 * 4);
            uVar3 = 0x40007d80;
            goto LAB_40007da8;
          }
          goto LAB_40007c9c;
        }
      }
      else {
        iVar4 = FUN_400f2824(param_2[1],0x40007d50);
        if (iVar4 == 0) {
          if (2 < iStack_18) {
            iVar4 = FUN_400f2824(param_2[2],0x40008050);
            if (iVar4 == 0) {
              FUN_40009fd4(1);
              uVar3 = 0x40008070;
            }
            else {
              uVar7 = FUN_400f2824(param_2[2],0x40008054);
              uVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0xffffffff);
              if ((int)uVar7 != 0) goto LAB_40007c9c;
              FUN_40009fd4(0);
              uVar3 = 0x40008058;
            }
            goto LAB_40007e98;
          }
        }
        else {
          iVar4 = FUN_400f2824(param_2[1],0x40007d58);
          if (iVar4 == 0) {
            if (2 < iStack_18) {
              iVar4 = FUN_400f2824(param_2[2],0x40008050);
              if (iVar4 == 0) {
                FUN_40009ff4(1);
                uVar3 = 0x40008098;
              }
              else {
                uVar7 = FUN_400f2824(param_2[2],0x40008054);
                uVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0xffffffff);
                if ((int)uVar7 != 0) goto LAB_40007c9c;
                FUN_40009ff4(0);
                uVar3 = 0x40008084;
              }
              goto LAB_40007e98;
            }
          }
          else {
            iVar4 = FUN_400f2824(param_2[1],0x40007d60);
            if ((iVar4 == 0) && (2 < iStack_18)) {
              iVar4 = FUN_400f2824(param_2[2],0x40008050);
              if (iVar4 == 0) {
                FUN_4000a014(1);
                uVar3 = 0x400080c0;
              }
              else {
                uVar7 = FUN_400f2824(param_2[2],0x40008054);
                uVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0xffffffff);
                if ((int)uVar7 != 0) goto LAB_40007c9c;
                FUN_4000a014(0);
                uVar3 = 0x400080ac;
              }
LAB_40007e98:
              FUN_40009864(uVar3);
              return 0;
            }
          }
        }
      }
    }
    FUN_40009864(0x40007d98);
  }
  FUN_400f2698(auStack_30,uRam400080d4,0x18);
  FUN_4000af54(*param_2,0x400080d8,auStack_30,6);
  return 0xffffffff;
}

