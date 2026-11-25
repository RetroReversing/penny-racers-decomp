u8 func_8014BA14(u16);
s32 func_801D65BC(s32);
extern u8 D_8011F2F0[];
extern u16 D_80189C9E;
extern u16 D_80189CAA;
extern u8 D_8018BC35[];
extern u16 D_80190CB2;
inline static int inline_fn(s32 arg0)
{
  return arg0 & 0xFF;
}

void func_8014B890(s32 arg0)
{
  u8 *temp_s0;
  u16 *timer;
  s32 var_v1;
  s32 temp_v1;
  u16 var_v0_2;
  u32 var_v0;
  do
  {
    temp_s0 = &D_8011F2F0[(arg0 & 0xFFFF) * 0x64];
  }
  while (0);
  timer = &D_80190CB2;
  temp_v1 = *((u16 *) (temp_s0 + 0x3E));
  switch (temp_v1)
  {
    case 0:
      var_v1 = 0;
      while (1)
    {
      var_v0 = inline_fn(var_v1);
      if (D_8018BC35[var_v0] == 0)
      {
        break;
      }
      var_v1++;
      if (((u32) (var_v1 & 0xFF)) >= 6)
      {
        break;
      }
    }

      if (var_v0 < 3)
    {
      if (temp_s0)
      {
        temp_s0[0] = func_8014BA14(D_80189C9E);
      }
      else
      {
        temp_s0[0] = func_8014BA14(D_80189C9E);
      }
      if (temp_s0[0] == 0)
      {
        if (1)
        {
        }
        func_801D65BC(0x12);
      }
      if (temp_s0[0] == 1)
      {
        func_801D65BC(0x14);
      }
      var_v0_2 = 0xB4;
    }
    else
    {
      temp_s0[0] = func_8014BA14(D_80189CAA);
      if (temp_s0[0] < 2)
      {
        func_801D65BC(0x13);
      }
      var_v0_2 = 0xC8;
    }
      if (var_v0_2)
    {
      *timer = var_v0_2;
      *((u16 *) (temp_s0 + 0x3E)) = 0x11;
    }
    else
    {
      *timer = var_v0_2;
      *((u16 *) (temp_s0 + 0x3E)) = 0x11;
    }
      if (temp_s0[0] == 2)
    {
      *((u16 *) (temp_s0 + 0x3E)) = 0xF0;
    }
      break;

    case 0x11:
      *timer = (*timer) - 1;
      if (((s16) (*timer)) < 0)
    {
      func_801D65BC(6);
      *((u16 *) (temp_s0 + 0x3E)) = 0xF0;
    }
      break;

    case 0xF0:
      temp_s0[0xD] = 2;
      break;

  }

}

