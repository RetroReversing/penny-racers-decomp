u8 func_8014BA14(u16);
s32 func_801D65BC(s32);
extern u8 D_8011F2F0[];
extern u16 D_80189C9E;
extern u16 D_80189CAA;
extern u8 D_8018BC35[];
extern u16 D_80190CB2;

void func_8014B890(s32 arg0)
{
  u8 *temp_s0;
  u16 *timer;
  s32 var_v1;
  s32 temp_v1;
  u16 var_v0_2;
  u32 var_v0;

  temp_s0 = &D_8011F2F0[(arg0 & 0xFFFF) * 0x64];
  timer = &D_80190CB2;
  temp_v1 = *(u16 *)(temp_s0 + 0x3E);
  switch (temp_v1)
  {
    case 0:
      var_v1 = 0;
      while (1)
      {
        var_v0 = var_v1 & 0xFF;
        if (D_8018BC35[var_v0] == 0)
        {
          break;
        }
        var_v1++;
        if (((u32)(var_v1 & 0xFF)) >= 6)
        {
          break;
        }
      }

      if (var_v0 < 3)
      {
        temp_s0[0] = func_8014BA14(D_80189C9E);
        if (temp_s0[0] == 0)
        {
          func_801D65BC(0x12);
        }
        var_v0_2 = 0xB4;
        if (temp_s0[0] == 1)
        {
          func_801D65BC(0x14);
          var_v0_2 = 0xB4;
        }
      }
      else
      {
        temp_s0[0] = func_8014BA14(D_80189CAA);
        var_v0_2 = 0xC8;
        if (temp_s0[0] < 2)
        {
          func_801D65BC(0x13);
          var_v0_2 = 0xC8;
        }
      }
      *timer = var_v0_2;
      *(u16 *)(temp_s0 + 0x3E) = 0x11;
      if (temp_s0[0] == 2)
      {
        *(u16 *)(temp_s0 + 0x3E) = 0xF0;
      }
      break;

    case 0x11:
      *timer = *timer - 1;
      if ((s16)*timer < 0)
      {
        func_801D65BC(6);
        *(u16 *)(temp_s0 + 0x3E) = 0xF0;
      }
      break;

    case 0xF0:
      temp_s0[0xD] = 2;
      break;
  }
}
