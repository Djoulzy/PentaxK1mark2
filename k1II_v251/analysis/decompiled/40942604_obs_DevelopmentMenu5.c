/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 obs_DevelopmentMenu5(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_405d8d14();
  iVar2 = param_1;
  if (*(char *)(param_1 + 0x5c) == '\0') goto LAB_40942658;
  FUN_405d8d5c(param_1);
  switch(uVar1) {
  case 2:
    break;
  case 3:
    break;
  case 4:
    goto LAB_40942658;
  case 5:
    goto LAB_40942658;
  case 6:
    iVar2 = func_0x40941d28();
    break;
  default:
    goto LAB_40942658;
  }
  *(undefined1 *)(param_1 + 0x5d) = 1;
LAB_40942658:
  if (*(char *)(param_1 + 0x5d) == '\0') {
    param_2 = 7;
    uVar4 = 2;
    do {
      obs_DeveloperMenuDrawItem(param_1,uVar4 & 0xffff,1,0x40942974,7,0xd,0);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 7);
    obs_DeveloperMenuDrawItem(param_1,uVar1 & 0xffff,1,0x40942978,4,0xd,0);
    obs_DeveloperMenuDrawItem(param_1,1,4,0x4094297c,7,0xd,0);
    iVar3 = iRam40942990 + uVar1 * 2;
    obs_DeveloperMenuDrawItem(param_1,2,2,0x40942994,7,*(undefined2 *)(iVar3 + 0x28),0);
    obs_DeveloperMenuDrawItem(param_1,3,2,0x409429b0,7,*(undefined2 *)(iVar3 + 0x3c),0);
    obs_DeveloperMenuDrawItem(param_1,4,2,0x409429cc,7,*(undefined2 *)(iVar3 + 0x50),0);
    obs_DeveloperMenuDrawItem(param_1,5,2,0x409429e8,7,*(undefined2 *)(iVar3 + 100),0);
    obs_DeveloperMenuDrawItem(param_1,6,2,0x40942a04,7,*(undefined2 *)(iVar3 + 0x78),0);
    obs_DeveloperMenuDrawItem(param_1,9,2,0x40942a20,7,1,0);
    obs_DeveloperMenuDrawItem(param_1,9,8,0x40942a28,7,0xd,0);
    obs_DeveloperMenuDrawItem(param_1,9,0x12,0x40942a30,7,1,0);
    obs_DeveloperMenuDrawItem(param_1,9,0x16,0x40942a38,7,0xd,0);
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_405d8d7c(param_1);
  return CONCAT44(param_2,iVar2);
}

