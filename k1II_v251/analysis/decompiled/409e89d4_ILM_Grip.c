/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

int ILM_Grip(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iVar5 = 0;
  bVar1 = false;
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_20);
  if (((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) && (2 < iStack_20)) {
    uVar4 = 0;
    iVar3 = FUN_4066f1e0(param_2[1],0x409e8c20);
    if (iVar3 == 0) {
      uVar4 = 8;
    }
    else {
      iVar3 = FUN_4066f1e0(param_2[1],0x409e8c24);
      if (iVar3 == 0) {
        uVar4 = 9;
      }
      else {
        iVar3 = FUN_4066f1e0(param_2[1],0x409e8c28);
        if (iVar3 == 0) {
          uVar4 = 10;
        }
        else {
          iVar3 = FUN_4066f1e0(param_2[1],0x409e8c2c);
          if (iVar3 == 0) {
LAB_409e8b70:
            uVar4 = 0xb;
          }
          else {
            iVar3 = FUN_4066f1e0(param_2[1],0x409e8c30);
            if (iVar3 == 0) {
              uVar4 = 0xc;
            }
            else {
              iVar3 = FUN_4066f1e0(param_2[1],0x409e8c34);
              if (iVar3 == 0) {
                uVar4 = 0xe;
              }
              else {
                iVar3 = FUN_4066f1e0(param_2[1],0x409e8c38);
                if (iVar3 == 0) goto LAB_409e8b70;
                iVar3 = FUN_4066f1e0(param_2[1],0x409e8bc4);
                if (iVar3 == 0) {
                  uVar4 = 0xd;
                }
                else {
                  FUN_4067cd44(0x409e8bc8,param_2[1]);
                  iVar5 = -1;
                  bVar1 = true;
                }
              }
            }
          }
        }
      }
    }
    uVar6 = 0;
    iVar3 = FUN_4066f1e0(param_2[2],0x409e8be0);
    if (iVar3 != 0) {
      iVar3 = FUN_4066f1e0(param_2[2],0x409e8be4);
      if (iVar3 == 0) {
        uVar6 = 4;
      }
      else {
        iVar3 = FUN_4066f1e0(param_2[2],0x409e8be8);
        if (iVar3 == 0) {
          uVar6 = 8;
        }
        else {
          iVar3 = FUN_4066f1e0(param_2[2],0x409e8c40);
          if (iVar3 == 0) {
            uVar6 = 5;
          }
          else {
            iVar3 = FUN_4066f1e0(param_2[2],0x409e8c48);
            if (iVar3 != 0) {
              FUN_4067cd44(0x409e8bc8,param_2[2]);
              goto LAB_409e8a10;
            }
            uVar6 = 9;
          }
        }
      }
    }
    if (iVar5 == 0) {
      iVar5 = FUN_402ebbd8();
      iVar5 = FUN_4026ae94(*(undefined4 *)(iVar5 + 4),uVar4,uVar6);
      if (iVar5 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0;
      }
    }
    if (!bVar1) {
      return iVar5;
    }
  }
  else {
LAB_409e8a10:
    iVar5 = -1;
  }
  uStack_28 = *(undefined4 *)(iRam409e8c08 + 0x18);
  uStack_24 = *(undefined4 *)(iRam409e8c08 + 0x1c);
  FUN_40679338(*param_2,0x409e8c50,&uStack_28,2);
  return iVar5;
}

