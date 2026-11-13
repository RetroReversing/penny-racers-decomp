extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 func_800E1850;
extern s32 func_800E1EB0;
extern s32 func_800E22DC;
extern s32 func_801153C8;
void func_800DECCC(u16 arg0)
{
  s32 temp_a0;
  s32 temp_a0_3;
  s32 temp_a0_5;
  s32 temp_v1_2;
  s32 var_v1;
  s32 var_v1_2;
  u16 temp_a0_4;
  u16 temp_v1;
  u8 temp_v0;
  temp_a0 = (arg0 & 0xFFFF) * 0x64;
  temp_v0 = *((u8 *) ((((char *) (&func_801153C8)) + 0x9F29) + temp_a0));
  if (temp_v0 != 0)
  {
    if (((temp_v0 == 1) | (temp_v0 == 4)) != 0)
    {
      var_v1 = arg0 & 0xFFFF;
      if ((*((u16 *) (((((char *) (&func_801153C8)) + 0x9F78) + temp_a0) + 0xC))) != 0xFFFF)
      {
        do
        {
          func_800DECCC(*((u16 *) ((((char *) (&func_801153C8)) + 0x9F3C) + temp_a0)));
        }
        while (0);
        var_v1 = arg0 & 0xFFFF;
      }
      temp_a0 = var_v1 * 0x64;
      if ((*((u16 *) (((((char *) (&func_801153C8)) + 0x9F78) + temp_a0) + 0xA))) != 0xFFFF)
      {
        func_800DECCC(*((u16 *) ((((char *) (&func_801153C8)) + 0x9F3C) + temp_a0)));
      }
    }
    D_80126FF0 += 1;
    temp_a0_3 = (arg0 & 0xFFFF) * 0x64;
    if ((*((u8 *) ((((char *) (&func_801153C8)) + 0x9F29) + temp_a0_3))) != 4)
    {
      temp_v1 = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + temp_a0_3));
      if (temp_v1 != 0xFFFF)
      {
        *((u16 *) ((((char *) (&func_801153C8)) + 0x9F3A) + (temp_v1 * 0x64))) = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F3A) + temp_a0_3));
      }
      temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
      temp_a0_4 = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F3A) + temp_v1_2));
      if (temp_a0_4 != 0xFFFF)
      {
        *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + (temp_a0_4 * 0x64))) = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + temp_v1_2));
        var_v1_2 = arg0 & 0xFFFF;
      }
      else
      {
        func_800E1850 = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + ((arg0 & 0xFFFF) * 0x64)));
        goto block_12;
      }
    }
    else
    {
      block_12:
      var_v1_2 = arg0 & 0xFFFF;

    }
    temp_a0_5 = var_v1_2 * 0x64;
    *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + temp_a0_5)) = 0xFFFF;
    *((u16 *) ((((char *) (&func_801153C8)) + 0x9F3A) + (var_v1_2 * 0x64))) = D_80126FF4;
    *((u16 *) ((((char *) (&func_801153C8)) + 0x9F38) + (D_80126FF4 * 0x64))) = arg0;
    D_80126FF4 = arg0;
    *((u8 *) ((((char *) (&func_801153C8)) + 0x9F29) + (var_v1_2 * 0x64))) = 0;
    if ((*((u16 *) ((((char *) (&func_801153C8)) + 0x9F64) + temp_a0_5))) != 0xFFFF)
    {
      *((u16 *) (((char *) (&func_800E1EB0)) + 0x20)) += 1;
      *((u16 *) ((((char *) (&func_800E22DC)) + 0x384) + (D_80126FF2 * 0x308))) = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F64) + temp_a0_5));
      *((u16 *) ((((char *) (&func_800E22DC)) + 0x386) + ((*((u16 *) ((((char *) (&func_801153C8)) + 0x9F64) + temp_a0_5))) * 0x308))) = D_80126FF2;
      *((u16 *) ((((char *) (&func_800E22DC)) + 0x384) + ((*((u16 *) ((((char *) (&func_801153C8)) + 0x9F64) + temp_a0_5))) * 0x308))) = 0xFFFF;
      D_80126FF2 = *((u16 *) ((((char *) (&func_801153C8)) + 0x9F64) + temp_a0_5));
    }
  }
}

