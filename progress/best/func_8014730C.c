s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8014B854(s32);
s32 func_8014BAC0(s32);
s32 func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801E1EEC(s32, s32);
extern s32 D_8006FAF0;
extern s32 D_8011F2F0;
extern volatile int D_80189B34;
extern u8 D_80189B36;
extern u8 D_80189C9D;
extern s32 D_8018A44A;
extern u16 D_80190CA4;
extern u8 D_801E87E3;
extern volatile short D_8021E19C;
extern s32 D_8021E19E;
extern s16 D_8021E1A2;
extern s16 D_8021E1A6;
extern s32 func_8014B890;
inline static s8 inline_fn(u8 *arg0)
{
  return (s8) (*arg0);
}

void func_8014730C(s32 arg0)
{
  u8 *__base_D_80189C9D;
  f32 __repair_store_0;
  f32 __repair_store_1;
  f32 temp_fv0;
  s32 temp_a0;
  s32 temp_s1;
  s32 var_a0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 temp_v1;
  u16 var_v0;
  u8 temp_v1_2;
  u8 var_v0_6;
  void *temp_s0;
  if (temp_s1 || temp_s0)
  {
    var_a0 = arg0 & 0xFFFF;
    temp_s0 = ((u8 *) (&D_8011F2F0)) + (var_a0 * 0x64);
    temp_s1 = func_8014BAC0(var_a0);
    temp_v1 = *((u16 *) (((char *) temp_s0) + 0x3E));
  }
  else
  {
    var_a0 = arg0 & 0xFFFF;
    temp_s0 = ((u8 *) (&D_8011F2F0)) + (var_a0 * 0x64);
    temp_s1 = func_8014BAC0(var_a0);
    temp_v1 = *((u16 *) (((char *) temp_s0) + 0x3E));
  }
  switch (temp_v1)
  {
    case 0x0:
      *((u8 *) (((char *) (&D_8021E19E)) + 0)) = 0U;
      *((s16 *) (((char *) (&D_8021E19E)) + (-2))) = 0;
      D_80190CA4 = 0xFF;
      switch (D_80189B34)
    {
      case 0:
        *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x30U;
        if ((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) == 0)
      {
        *((s16 *) (((char *) temp_s0) + 0x40)) = 0x20;
        *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x13U;
      }
        break;

      case 2:
        if (!(D_80189B36 & 0x80))
      {
        *((s16 *) (((char *) temp_s0) + 0x40)) = 0x20;
        var_v0 = 0x13;
      }
      else
      {
        var_v0 = 0x10;
      }
        *((u16 *) (((char *) temp_s0) + 0x3E)) = var_v0;
        if (D_8021E1A2 == 0)
      {
        func_800DE41C(0, 0, 3, 0, 0x4F, 0xFF, 0, &func_8014B890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      }
        break;

      case 1:
        *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x10U;
        break;

    }

      break;

    case 0x10:
      *((s16 *) (((char *) temp_s0) + 0x40)) = 0x10;
      D_8021E19C += 4;
      if (((u16) D_8021E19C) >= 0x100U)
    {
      D_8021E19C = 0xFF;
      *((u8 *) (((char *) temp_s0) + 0)) = 0U;
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x11U;
    }
      break;

    case 0x11:
      *((u8 *) (((char *) temp_s0) + 0)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0))) + 1);
      if ((((u8) (*((u8 *) (((char *) temp_s0) + 0)))) + 1) > 0x5BU)
    {
      *((u8 *) (((char *) temp_s0) + 0)) = 0U;
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x12U;
    }
      break;

    case 0x12:
      temp_v1_2 = *((u8 *) (((char *) temp_s0) + 0));
      if (temp_v1_2 != 0)
    {
      var_v0_2 = temp_s1 & 0x10;
      if (temp_v1_2 != 1)
      {
      }
      else
      {
        goto block_43;
      }
    }
    else
    {
      do
      {
        *((f32 *) (((char *) temp_s0) + 0x1C)) = 192.0f;
      }
      while (0);
      *((f32 *) (((char *) temp_s0) + 0x18)) = -2.0f;
      *((u8 *) (((char *) temp_s0) + 0)) = 1U;
      block_43:
      __repair_store_0 = (f32) ((*((f32 *) (((char *) temp_s0) + 0x1C))) + (*((f32 *) (((char *) temp_s0) + 0x18))));

      __repair_store_1 = (f32) ((*((f32 *) (((char *) temp_s0) + 0x18))) + 0.3f);
      *((f32 *) (((char *) temp_s0) + 0x1C)) = __repair_store_0;
      *((f32 *) (((char *) temp_s0) + 0x18)) = __repair_store_1;
      if ((*((f32 *) (((char *) temp_s0) + 0x1C))) > 192.0f)
      {
        *((u8 *) (((char *) temp_s0) + 0)) = 0U;
      }
      var_v0_2 = temp_s1 & 0x10;
    }
      if (var_v0_2 != 0)
    {
      do
      {
        func_8014B854(0x3D);
        if (1)
        {
        }
      }
      while (0);
      *((f32 *) (((char *) temp_s0) + 0x1C)) = 192.0f;
      *((f32 *) (((char *) temp_s0) + 0x34)) = 0.0f;
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0xFFU;
      if (((*((u16 *) (((s8 *) (&D_8018A44A)) + (D_8021E1A6 * 2)))) & 0x1FF) != 0x1FF)
      {
        *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x13U;
        *((s16 *) (((char *) temp_s0) + 0x40)) = 0x20;
      }
    }
      break;

    case 0x13:
      D_80190CA4 -= 8;
      var_a0 = 0;
      if (((u16) D_80190CA4) < 0x80U)
    {
      D_80190CA4 = 0x80;
      var_a0 = 1;
    }
      temp_fv0 = (*((f32 *) (((char *) temp_s0) + 0x34))) + 8.0f;
      *((f32 *) (((char *) temp_s0) + 0x34)) = temp_fv0;
      if (temp_fv0 > 255.0f)
    {
      *((f32 *) (((char *) temp_s0) + 0x34)) = 255.0f;
      var_a0 |= 2;
    }
      if (var_a0 == 3)
    {
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x20U;
    }
      break;

    case 0x20:
      if (temp_s1 & 1)
    {
      __base_D_80189C9D = &D_80189C9D;
      *__base_D_80189C9D -= 1;
    }
      var_v0_3 = temp_s1 & 2;
      if (var_v0_3)
    {
      *__base_D_80189C9D += 1;
    }
      *__base_D_80189C9D &= 1;
      if (temp_s1 & 3)
    {
      func_8014B854(0x3B);
    }
      var_v0_4 = temp_s1 & 0x10;
      if (var_v0_4 != 0)
    {
      block_80:
      func_8014B854(0x3D);

      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0xFFU;
    }
      break;

    case 0x30:
      *((s16 *) (((char *) temp_s0) + 0x40)) = 0x30;
      D_8021E19C += 8;
      if (((u16) D_8021E19C) >= 0x100U)
    {
      D_8021E19C = 0xFF;
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x31U;
    }
      break;

    case 0x31:
      if (temp_s1 & 1)
    {
      var_v0_6 = 2;
      if (inline_fn(__base_D_80189C9D) != 0)
      {
        var_v0_6 = (*__base_D_80189C9D) - 1;
      }
      *__base_D_80189C9D = var_v0_6;
    }
      var_v0_5 = temp_s1 & 2;
      if (var_v0_5 != 0)
    {
      if (inline_fn(__base_D_80189C9D) == 2)
      {
        *__base_D_80189C9D = 0;
      }
      else
      {
        *__base_D_80189C9D += 1;
      }
    }
      if (temp_s0)
    {
      var_v0_5 = temp_s1 & 0x10;
    }
    else
    {
      var_v0_5 = temp_s1 & 0x10;
    }
      if (temp_s1 & 3)
    {
      func_8014B854(0x3B);
      var_v0_5 = temp_s1 & 0x10;
    }
      if (var_v0_5 != 0)
    {
      if (((s8) (*__base_D_80189C9D)) == 2)
      {
        if (D_801E87E3 == 1)
        {
          func_8014B854(0x3D);
          func_801E1EEC(0, 0);
        }
        else
        {
          func_8014B854(0x3E);
          func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x1B);
        }
      }
      else
      {
        goto block_80;
      }
    }
      break;

    case 0xFF:
      D_80189B36 &= 0xEF;
      break;

  }

  *((u8 *) (((char *) (&D_8021E19E)) + 0)) = (u8) ((*((u8 *) (((char *) (&D_8021E19E)) + 0))) - 8);
}

