s32 func_801D74F4();
s32 func_801D754C();
inline static int inline_fn(int arg0)
{
  return arg0;
}

void func_80225FDC(void *arg0_in, s32 arg1, s32 arg2)
{
  void *arg0;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s16 temp_a0;
  s16 var_a2;
  s32 var_a0;
  unsigned short var_a2_2;
  s32 __repair_phase_var_a2_2;
  s32 var_v1;
  u8 temp_v0;
  temp_v0 = *((u8 *) (((char *) arg0) + 0x7CC));
  arg0 = arg0_in;
  switch (temp_v0)
  {
    case 16:
      var_a2 = 0x17;
      break;

    case 11:

    case 12:

    case 19:

    case 32:

    case 33:

    case 34:

    case 35:

    case 38:

    case 39:

    case 42:

    case 43:
      var_a2 = -2;
      break;

    case 13:

    case 36:

    case 37:
      var_v1 = 1;
      if (!((*((f32 *) (((char *) arg0) + 0x864))) < 0.97f))
    {
      var_v1 = 0;
    }
      var_a2 = (inline_fn(-(var_v1 & (((u32) (arg2 << 0x10)) >> 0x1F))) & (~2)) | 0x18;
      break;

    case 17:

    case 40:

    case 41:
      var_a2 = 0x16;
      break;

    case 18:

    case 20:
      var_a2 = 0x15;
      break;

    case 15:

    case 44:

    case 45:
 do { var_a2 = 0x13; } while (0);
      *((u16 *) (((char *) arg0) + 6)) |= 8;
      break;

    case 10:

    default:
      var_a2 = -1;
      break;

  }

  if (((*((u8 *) (((char *) arg0) + 0x860))) != 0) && ((*((f32 *) (((char *) arg0) + 0x774))) > 0.0f))
  {
    var_a0 = 1;
    if (!((*((f32 *) (((char *) arg0) + 0x864))) < 0.97f))
    {
      var_a0 = 0;
    }
    if (var_a0 & (((u32) var_a2) >> 0x1F))
    {
      switch (var_a2)
      {
        case -3:
          var_a2_2 = 0x12;
          if ((*((s16 *) (((char *) arg0) + 0x62E))) != 0x12)
        {
          block_38:
          func_801D74F4(*((u16 *) (((char *) arg0) + 4)), 1, var_a2_2, 0x3F800000);

        }
          break;

        case -2:
          var_a2_2 = 0x11;
          if ((*((s16 *) (((char *) arg0) + 0x62E))) != 0x11)
        {
          {
            func_801D74F4(*((u16 *) (((char *) arg0) + 4)), 1, var_a2_2, 0x3F800000);
            break;
          }
        }
          break;

        case -1:
          __repair_phase_var_a2_2 = 0x10;
          if ((*((s16 *) (((char *) arg0) + 0x62E))) != 0x10)
        {
          {
            func_801D74F4(*((u16 *) (((char *) arg0) + 4)), 1, __repair_phase_var_a2_2, 0x3F800000);
            break;
          }
        }
          break;

      }

    }
    else
      if ((!(var_a2 & 0x8000)) && (!((*((f32 *) (((char *) arg0) + 0x774))) < 10.0f)))
    {
      temp_a0 = *((s16 *) (((char *) arg0) + 0x62E));
      if (temp_a0 != ((unsigned char) var_a2))
      {
        if (var_a2 != 0x16)
        {
          var_a2_2 = var_a2 & 0xFFFF;
          goto block_38;
        }
        else
          if (temp_a0 != (-1))
        {
          goto block_40;
        }
      }
    }
    else
    {
      goto block_39;
    }
  }
  else
  {
    block_39:
    if ((*((s16 *) (((char *) arg0) + 0x62E))) != (-1))
    {
      block_40:
      func_801D754C(*((u16 *) (((char *) arg0) + 4)), 1);

    }

  }
  *((f32 *) (((char *) arg0) + 0x634)) = 1.0f;
  do
  {
    temp_fv0_2 = *((f32 *) (((char *) arg0) + 0x7C8));
    temp_fv0 = *((f32 *) (((char *) arg0) + 0x7C0));
    *((f32 *) (((char *) arg0) + 0x774)) = (f32) (sqrtf((temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2)) * 20.0f);
  }
  while (0);
}
