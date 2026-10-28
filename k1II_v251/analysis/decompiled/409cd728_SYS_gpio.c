/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_gpio(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_38 [28];
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_1c);
  iVar4 = iRam409cd988;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (2 < iStack_1c) {
      iVar6 = 0;
      do {
        iVar3 = FUN_4020fc60(param_2[2],iVar4 + iVar6 * 0xc,1);
        if (iVar3 == 0) {
          iVar3 = FUN_4020c174(param_2[2] + 1,0);
          iVar4 = iVar4 + iVar6 * 0xc;
          if ((iVar3 <= *(int *)(iVar4 + 8)) && (iVar3 = *(int *)(iVar4 + 4) + iVar3, iVar3 != -1))
          {
            uVar2 = FUN_40677b5c();
            uVar2 = FUN_40677c28(uVar2,iVar3);
            iVar4 = FUN_40683ba0(param_2[1],0x409cd9dc);
            if (iVar4 == 0) {
              FUN_4067cd44(0x409cda24,param_2[1]);
              FUN_4067cd44(0x409cda30,iVar3);
              iVar4 = FUN_40671344(uVar2);
              if (iVar4 == 0) {
                uVar5 = 0x409cda58;
              }
              else {
                uVar5 = 0x409cda50;
              }
              FUN_4067cd44(0x409cda5c,uVar5);
              iVar4 = FUN_406713f0(uVar2);
              if (iVar4 == 0) {
                uVar5 = 0x409cda84;
              }
              else {
                uVar5 = 0x409cda7c;
              }
              FUN_4067cd44(0x409cda8c,uVar5);
              iVar4 = FUN_406714b8(uVar2);
              if (iVar4 == 0) {
                uVar5 = 0x409cdab4;
              }
              else {
                uVar5 = 0x409cdaac;
              }
              FUN_4067cd44(0x409cdac0,uVar5);
              iVar4 = FUN_40671580(uVar2);
              if (iVar4 == 0) {
                uVar5 = 0x409cdae8;
              }
              else {
                uVar5 = 0x409cdae0;
              }
              FUN_4067cd44(0x409cdaf0,uVar5);
              iVar4 = FUN_4067163c(uVar2);
              if (iVar4 == 0) {
                uVar2 = 0x409cdb18;
              }
              else {
                uVar2 = 0x409cdb10;
              }
              FUN_4067cd44(0x409cdb1c,uVar2);
            }
            else {
              iVar4 = FUN_40683ba0(param_2[1],0x409cd9e0);
              if (iVar4 != 0) {
                uVar2 = 0x409cd9e4;
                goto LAB_409cd76c;
              }
              if (iStack_1c != 5) goto LAB_409cd768;
              iVar4 = FUN_40683ba0(param_2[3],0x409cd9f4);
              if (iVar4 == 0) {
                iVar4 = FUN_4020c174(param_2[4],0);
                if (iVar4 == 0) {
                  FUN_406712d0(uVar2);
                }
                else {
                  FUN_406712fc();
                }
              }
              else {
                iVar4 = FUN_40683ba0(param_2[3],0x409cd9f8);
                if (iVar4 == 0) {
                  iVar4 = FUN_4020c174(param_2[4],0);
                  if (iVar4 == 0) {
                    FUN_40671398(uVar2);
                  }
                  else {
                    FUN_406713c4();
                  }
                }
                else {
                  iVar4 = FUN_40683ba0(param_2[3],0x409cd9fc);
                  if (iVar4 == 0) {
                    iVar4 = FUN_4020c174(param_2[4],0);
                    if (iVar4 == 0) {
                      FUN_40671460(uVar2);
                    }
                    else {
                      FUN_4067148c();
                    }
                  }
                  else {
                    iVar4 = FUN_40683ba0(param_2[3],0x409cda00);
                    if (iVar4 == 0) {
                      iVar4 = FUN_4020c174(param_2[4],0);
                      if (iVar4 == 0) {
                        FUN_40671528(uVar2);
                      }
                      else {
                        FUN_40671554();
                      }
                    }
                    else {
                      iVar4 = FUN_40683ba0(param_2[3],0x409cda08);
                      if (iVar4 != 0) {
                        FUN_4067cd44(0x409cda10,param_2[1]);
                        return 0xffffffff;
                      }
                      iVar4 = FUN_4020c174(param_2[4],0);
                      if (iVar4 == 0) {
                        FUN_406715ec(uVar2);
                      }
                      else {
                        FUN_40671614();
                      }
                    }
                  }
                }
              }
            }
            return 0;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x12);
      FUN_4067cd44(0x409cd9bc);
      FUN_4067cd44(0x409cd9cc);
      return 0xffffffff;
    }
LAB_409cd768:
    uVar2 = 0x409cd98c;
LAB_409cd76c:
    FUN_4067cd44(uVar2);
  }
  FUN_406833b0(auStack_38,uRam409cd9a0,0x18);
  FUN_40679338(*param_2,0x409cd9a4,auStack_38,6);
  return 0xffffffff;
}

