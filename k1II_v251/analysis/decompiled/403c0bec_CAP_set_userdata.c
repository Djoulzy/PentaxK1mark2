/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_set_userdata(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f34,param_3,param_4,param_4);
  uVar2 = uRam403c0f48;
  if (iVar1 == 0) {
    uVar4 = 0xd6;
  }
  else {
    iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f4c);
    if (iVar1 == 0) {
      uVar4 = 0xd3;
    }
    else {
      iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f5c);
      if (iVar1 == 0) {
        uVar4 = 0xd2;
      }
      else {
        iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f6c);
        if (iVar1 == 0) {
          uVar4 = 0x23;
        }
        else {
          iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f7c);
          if (iVar1 == 0) {
            uVar4 = 0xdd;
          }
          else {
            iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0f90);
            if (iVar1 == 0) {
              uVar4 = 0x6d;
            }
            else {
              iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0fa0);
              if (iVar1 == 0) {
                uVar4 = 0xdb;
              }
              else {
                iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0fb8);
                if (iVar1 == 0) {
                  uVar4 = 0xd7;
                }
                else {
                  iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x403c0fc4);
                  if (iVar1 == 0) {
                    uVar4 = 0xcc;
                  }
                  else {
                    FUN_4067ca30(0,0x403c0fd0,uRam403bfd30,0x106f,uVar2);
                    FUN_4067cd44(0x403c0fd4,*(undefined4 *)(param_2 + 4));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
  iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c0fe4);
  if (iVar1 != 0) {
    iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1000);
    if (iVar1 == 0) goto LAB_403c11c0;
    iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1018);
    if (iVar1 != 0) {
      iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1028);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1038), iVar1 == 0))
      goto LAB_403c0f1c;
      iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c104c);
      if (iVar1 != 0) {
        iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c105c);
        if (iVar1 == 0) {
LAB_403c11c0:
          uVar3 = 2;
          goto LAB_403c0f1c;
        }
        iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1070);
        if (iVar1 == 0) goto LAB_403c0f1c;
        iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c107c);
        if (iVar1 != 0) {
          iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1088);
          if (iVar1 == 0) goto LAB_403c11c0;
          iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1094);
          if (iVar1 == 0) {
            uVar3 = 3;
            goto LAB_403c0f1c;
          }
          iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10a4);
          if (iVar1 == 0) goto LAB_403c0f1c;
          iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10b4);
          if (iVar1 != 0) {
            iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10c4);
            if (iVar1 == 0) goto LAB_403c11c0;
            iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10d8);
            if (iVar1 == 0) goto LAB_403c0f1c;
            iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10e8);
            if ((iVar1 != 0) &&
               (iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c10f8), iVar1 != 0)) {
              iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1110);
              if (iVar1 == 0) goto LAB_403c11c0;
              iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1128);
              if ((iVar1 == 0) ||
                 (iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1140), iVar1 == 0))
              goto LAB_403c0f1c;
              iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1154);
              if (iVar1 != 0) {
                iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1168);
                if (iVar1 == 0) {
                  uVar3 = 4;
                  goto LAB_403c0f1c;
                }
                iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c117c);
                if (iVar1 != 0) {
                  iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c1190);
                  if (iVar1 != 0) {
                    iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 8),0x403c11a4);
                    if (iVar1 != 0) {
                      FUN_4067ca30(0,0x403c0fd0,uRam403c11b4,0x108b,uVar2);
                      FUN_4067cd44(0x403c0fd4,*(undefined4 *)(param_2 + 8));
                    }
                    goto LAB_403c0f1c;
                  }
                  goto LAB_403c11c0;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_403c0f1c:
  uVar2 = FUN_4063e044();
  FUN_4063e0c4(uVar2,uVar4,uVar3);
  return 0;
}

