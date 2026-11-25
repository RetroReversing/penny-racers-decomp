s32 func_8003DE60(s32 *);
s32 func_801D651C(s32, s16);
s32 func_801D656C(s32, s16, s16);
s32 func_801D663C(s32);
extern s32 D_8006FAF0;
extern s32 D_8006FB14;
extern s32 D_800DB1B8;
extern u8 D_8011F2F0[];
typedef struct 
{
  u16 f0;
  u8 pad[10];
} Slot_801D75E6;
extern Slot_801D75E6 D_801D75E6[];
extern s32 D_801D7A78[];
extern s32 D_801D7D40;
extern volatile unsigned short D_801D7DEA;
extern s16 D_801D7EFC;
extern u16 D_801D7F0E;
extern u16 D_801D7F50;
extern u8 D_80221080[];
inline static int inline_fn()
{
  return -1U;
}

long func_801D70A4(unsigned int arg0)
{
  s32 *__base_D_800DB1B8;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_fv1;
  f32 var_fs0;
  f32 var_fv0;
  s32 var_v0;
  u16 *var_s0;
  u16 *var_s2;
  u16 temp_s4;
  long long temp_v0;
  s32 temp_v1;
  void *temp_a0;
  void *temp_s1;
  temp_v1 = *((u16 *) (((char *) temp_a0) + 0x3E));
  temp_a0 = (void *) ((10 * (arg0 & 0xFFFF)) * 10); temp_a0 = (void *) (((char *) temp_a0) + ((s32) D_8011F2F0));
  switch (temp_v1)
  {
    __base_D_800DB1B8 = &D_800DB1B8;
    case 0:
      if ((D_801D7A78[*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))] != 0) && ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) < 2))
    {
      D_801D7F50 = inline_fn();
      D_801D7DEA = 0xA;
      *((u16 *) (((char *) temp_a0) + 0x3E)) = 1U;
      func_8003DE60(&D_801D7D40);
      return;
    }
      return;

    case 1:
      if (D_801D7DEA)
    {
      D_801D7DEA -= 1;
      return;
    }
      if (((u8) (*((u8 *) (((char *) (&D_8006FB14)) + 4)))) >= 2U)
    {
      *((u16 *) (((char *) temp_a0) + 0x3E)) = 2U;
    }
      temp_s4 = D_801D7F50;
      do
    {
      D_801D7F50 = 0; temp_s1 = ((*((s16 *) (((char *) __base_D_800DB1B8) + 0x210C))) * 0x24) + D_80221080;
 do { var_fs0 = 10000.0f; var_s2 = NULL; } while (0);
      do
      {
        var_s0 = D_801D7A78[*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))]; temp_v0 = *var_s0;
      }
      while (0);
    }
    while (0);
      if (((s32) temp_v0) != 0)
    {
      var_v0 = temp_v0 << 0x10;
      __repair_rows:
      {
        if ((var_v0 >> 0x10) == 0x1F)
        {
          var_fv0 = 0.0f;
        }
        else
          if (D_801D7F50)
        {
          temp_ft0 = (*((f32 *) (((char *) temp_s1) + 0))) - (*((f32 *) (((char *) var_s0) + 4)));
          temp_ft1 = (*((f32 *) (((char *) temp_s1) + 4))) - (*((f32 *) (((char *) var_s0) + 8)));
          temp_fv1 = (*((f32 *) (((char *) temp_s1) + 8))) - (*((f32 *) (((char *) var_s0) + 0xC)));
          var_fv0 = sqrtf(((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1)) + (temp_fv1 * temp_fv1));
        }
        else
        {
          temp_ft0 = (*((f32 *) (((char *) temp_s1) + 0))) - (*((f32 *) (((char *) var_s0) + 4)));
          temp_ft1 = (*((f32 *) (((char *) temp_s1) + 4))) - (*((f32 *) (((char *) var_s0) + 8)));
          temp_fv1 = (*((f32 *) (((char *) temp_s1) + 8))) - (*((f32 *) (((char *) var_s0) + 0xC)));
          var_fv0 = sqrtf(((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1)) + (temp_fv1 * temp_fv1));
        }
        if (var_fv0 < var_fs0)
        {
          var_fs0 = var_fv0;
          D_801D7F50 = *((u16 *) (((char *) var_s0) + 0));
          do
          {
            var_s2 = var_s0;
          }
          while (0);
        }
        var_s0 += 10;
        var_v0 = (*var_s0) << 0x10;
      }

      if (((s16) (*var_s0)) != 0)
      {
        goto __repair_rows;
      }
    }
      if (((s16) temp_s4) != ((s16) D_801D7F50))
    {
      if (((s16) D_801D7F50) != 0)
      {
        temp_fs0 = var_fs0 - (*((f32 *) (((char *) var_s2) + 0x10)));
        if (temp_fs0 < 0.0f)
        {
          if (__base_D_800DB1B8)
          {
            func_801D651C(6, (s16) D_801D7F50);
            D_801D7F0E = D_801D75E6[(s16) D_801D7F50].f0;
            return;
          }
          else
          {
            do
            {
              func_801D651C(6, (s16) D_801D7F50);
              D_801D7F0E = (*(&D_801D75E6[(s16) D_801D7F50])).f0;
              return;
            }
            while (0);
          }
        }
        if (temp_fs0 < 900.0f)
        {
          func_801D656C(6, (s16) D_801D7F50, (s16) ((s32) ((((f32) D_801D75E6[(s16) D_801D7F50].f0) * (1000.0f - temp_fs0)) / 1000.0f)));
          return;
        }
        goto block_34;
      }
      goto block_35;
    }
      if (((s16) D_801D7F50) != 0)
    {
      var_fs0 = var_fs0 - (*((f32 *) (((char *) var_s2) + 0x10)));
      if (var_fs0 < 0.0f)
      {
        D_801D7F0E = (D_801D75E6 + ((s16) D_801D7F50))->f0;
        return;
      }
      if (var_fs0 < 900.0f)
      {
        D_801D7F0E = (u16) ((s32) ((((f32) (D_801D75E6 + ((s16) D_801D7F50))->f0) * (1000.0f - var_fs0)) / 1000.0f));
        return;
      }
      block_34:
      D_801D7F50 = 0;

      block_35:
      if (D_801D7EFC != (-1))
      {
        func_801D663C(6);
        return;
      }

    }
      break;

    case 2:
      D_801D7F0E = 0;
      break;

  }

}
