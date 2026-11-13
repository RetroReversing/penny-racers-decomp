s32 func_801485C8();
void func_80148754();
s32 func_8014A870();
void func_8014B854();
s32 func_8014BAC0();
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_80189B36;
extern u8 D_80189C98[];
extern u8 D_80189C9A[];
extern u8 D_80189CC6[];
extern u8 D_80190CA0[];
void func_80146EC4(s32 arg0)
{
  int __repair_constant = 0xEF;
  s32 var_s1;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  u8 *temp_s0;
  temp_s0 = (char *) ((arg0 & 0xFFFF) * 0x64); temp_s0 += (s32) D_8011F2F0;
  if ((*((u16 *) (D_80189CC6 + 0))) & 0x800)
  {
    var_s1 = func_8014A870(0x14, 3, D_80189CC6[-8]);
    var_v0_3 = var_s1 & 4;
    if (var_s1 & 8)
    {
      var_v0 = var_s1 & 4;
      if (!((*((u16 *) (D_80189CC6 + 0))) & 0x8000))
      {
        if (var_v0_3)
        {
          *((u16 *) (D_80189CC6 + 0)) |= 0x8000;
          func_8014B854(0x3B);
          var_v0 = var_s1 & 4;
        }
        else
        {
          *((u16 *) (D_80189CC6 + 0)) |= 0x8000;
          func_8014B854(0x3B);
          var_v0 = var_s1 & 4;
        }
      }
    }
    var_v0_2 = var_s1 & 0x10;
    if (var_v0_3 != 0)
    {
      if ((*((u16 *) (D_80189CC6 + 0))) & 0x8000)
      {
        *((u16 *) (D_80189CC6 + 0)) &= 0x7FFF;
        func_8014B854(0x3B);
        var_v0_2 = var_s1 & 0x10;
      }
      else
      {
        goto block_9;
      }
    }
  }
  else
  {
    var_s1 = func_8014BAC0(0x14) & 0x10;
    *temp_s0 += 1;
    if ((*temp_s0) >= 0x29)
    {
      var_s1 = 0x10;
    }
    block_9:
    var_v0_2 = var_s1 & 0x10;

  }
  var_v0_3 = var_s1 & 0x20;
  if (var_v0_2 != 0)
  {
    D_80189B36 &= __repair_constant;
    if (!((*((u16 *) (D_80189CC6 + 0))) & 0x8000))
    {
      D_8011F2FD[(*((u16 *) (D_80190CA0 + 0))) * 0x64] = 2;
      D_8011F2FD[(*((u16 *) (D_80190CA0 + 2))) * 0x64] = 2;
      *((u16 *) (D_80189CC6 + 0)) |= 0x3000;
      do
      {
        func_8014B854(0x3D);
      }
      while (0);
      func_80148754(D_80189CC6[-0x10], D_80189CC6[-8]);
      if (func_801485C8() == 0)
      {
        *((s16 *) (D_80189CC6 - 0x2E)) = 0x100;
      }
      else
      {
        D_80189C9A[1] += 1;
        *((s16 *) ((D_80189C9A + 2) - 3)) = 0x21;
        D_80189C9A[2 - 1] = 0;
      }
    }
    else
    {
      func_8014B854(0x3A, 0);
      D_80189C98[0] = 0x41;
    }
    var_v0_3 = 0 & 0x20;
  }
  if (var_v0_3 != 0)
  {
    func_8014B854(0x3A, 0);
    D_80189B36 &= __repair_constant;
    D_80189C98[0] = 0x41;
  }
}

