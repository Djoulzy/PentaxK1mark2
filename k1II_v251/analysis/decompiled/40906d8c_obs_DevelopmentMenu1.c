/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

int obs_DevelopmentMenu1(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_74 [80];
  
  uVar1 = FUN_405d8d14();
  iVar2 = param_1;
  if (*(char *)(param_1 + 0x5c) == '\0') goto LAB_40906e98;
  switch(uVar1) {
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    *(undefined1 *)(param_1 + 100) = 1;
    func_0x405079dc(*(undefined4 *)(param_1 + 4));
    func_0x40906d24(param_1);
    FUN_405d8d5c(param_1);
    func_0x4050fd7c(*(undefined4 *)(param_1 + 4),2,1);
    *(undefined1 *)(param_1 + 99) = 1;
    goto LAB_40906e98;
  case 8:
    break;
  default:
    goto LAB_40906e98;
  }
  iVar2 = func_0x405075b8(*(undefined4 *)(param_1 + 4));
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x5e) != '\0')) {
    func_0x40510d28(*(undefined4 *)(param_1 + 4));
  }
  func_0x40507590(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x5e));
  func_0x405075c0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x5f));
  func_0x405075f0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x60));
  func_0x40507648(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x61));
  func_0x405076b8(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x62));
  func_0x40507718(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x68));
  func_0x405079b8(*(undefined4 *)(param_1 + 4));
  FUN_405d8d5c(param_1);
  *(undefined1 *)(param_1 + 99) = 1;
  iVar2 = 0;
LAB_40906e98:
  if (*(char *)(param_1 + 99) == '\0') {
    uVar5 = 2;
    do {
      obs_DeveloperMenuDrawItem(param_1,uVar5 & 0xffff,1,0x409070e4,7,0xd,0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 9);
    obs_DeveloperMenuDrawItem(param_1,uVar1 & 0xffff,1,0x409070e8,4,0xd,0);
    obs_DeveloperMenuDrawItem(param_1,1,4,0x409070ec,7,0xd,0);
    iVar4 = iRam40907100 + uVar1 * 2;
    if (*(char *)(param_1 + 0x5e) == '\0') {
      uVar3 = 0x4090711c;
    }
    else {
      uVar3 = 0x40907104;
    }
    obs_DeveloperMenuDrawItem(param_1,2,2,uVar3,7,*(undefined2 *)(iVar4 + 0x28),0);
    if (*(char *)(param_1 + 0x5f) == '\0') {
      uVar3 = 0x4090714c;
    }
    else {
      uVar3 = 0x40907134;
    }
    obs_DeveloperMenuDrawItem(param_1,3,2,uVar3,7,*(undefined2 *)(iVar4 + 0x3c),0);
    if (*(char *)(param_1 + 0x60) == '\0') {
      uVar3 = 0x4090717c;
    }
    else {
      uVar3 = 0x40907164;
    }
    obs_DeveloperMenuDrawItem(param_1,4,2,uVar3,7,*(undefined2 *)(iVar4 + 0x50),0);
    if (*(char *)(param_1 + 0x61) == '\0') {
      uVar3 = 0x409071ac;
    }
    else {
      uVar3 = 0x40907194;
    }
    obs_DeveloperMenuDrawItem(param_1,5,2,uVar3,7,*(undefined2 *)(iVar4 + 100),0);
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar3 = 0x409071dc;
    }
    else {
      uVar3 = 0x409071c4;
    }
    obs_DeveloperMenuDrawItem(param_1,6,2,uVar3,7,*(undefined2 *)(iVar4 + 0x78),0);
    obs_DeveloperMenuDrawItem(param_1,7,2,0x409071f4,7,*(undefined2 *)(iVar4 + 0x8c),0);
    FUN_4067e440(auStack_74,0x4090720c,*(undefined4 *)(param_1 + 0x68));
    obs_DeveloperMenuDrawItem(param_1,8,2,auStack_74,7,*(undefined2 *)(iVar4 + 0xa0),0);
    obs_DeveloperMenuDrawItem(param_1,9,2,0x40907228,7,1,0);
    obs_DeveloperMenuDrawItem(param_1,9,8,0x40907230,7,0xd,0);
    obs_DeveloperMenuDrawItem(param_1,9,0x12,0x40907238,7,1,0);
    obs_DeveloperMenuDrawItem(param_1,9,0x16,0x40907240,7,0xd,0);
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_405d8d7c(param_1);
  return iVar2;
}

