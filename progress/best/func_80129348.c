extern f32 D_8011F308;
extern f32 D_8011F310;
extern s32 D_8011F340;
s32 func_80129348(u16 *arg0_in, u16 *arg1, f32 arg2, f32 arg4)
{
  u16 *arg0;
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  volatile short pad;
  f32 temp_fv1_4;
  s32 temp_a3_2;
  s32 temp_t0;
  s32 temp_t0_2;
  s32 temp_t1;
  s32 temp_t1_2;
  s32 temp_t2;
  s32 temp_v1_3;
  s32 temp_v1_5;
  s32 temp_a1;
  s32 temp_a2;
  s32 temp_a3;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  short var_a2;
  s32 var_a2_2;
  void *temp_a2_2;
  void *temp_a2_3;
  void *temp_a2_4;
  void *temp_a2_5;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_4;
  arg0 = arg0_in;
  temp_a2 = (*arg0) * 0x64;
  temp_v1 = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a2))) + 4)))) + 4)))) + 4));
  temp_fv1 = *((&D_8011F308) + temp_a2);
  if ((((!(arg2 <= (((f32) (*((s16 *) (((char *) temp_v1) + 0x40)))) + temp_fv1))) || (!((((f32) (*((s16 *) (((char *) temp_v1) + 0x50)))) + temp_fv1) <= arg2))) || ((temp_fv1_2 = *((&D_8011F310) + temp_a2), !(arg4 <= (((f32) (*((s16 *) (((char *) temp_v1) + 0x44)))) + temp_fv1_2))))) || ((var_v0 = 1, !((((f32) (*((s16 *) (((char *) temp_v1) + 0x54)))) + temp_fv1_2) <= arg4))))
  {
    if ((*arg1) == 0)
    {
      if (temp_t2)
      {
        temp_a2_2 = *((&D_8011F340) + ((*arg0) * 0x64));
      }
      else
      {
        temp_a2_2 = *((&D_8011F340) + ((*arg0) * 0x64));
      }
      if ((*((u16 *) (((char *) temp_a2_2) + 0xA))) != 0xFFFF)
      {
        var_a2 = *((u16 *) (((char *) temp_a2_2) + 0xA));
        var_v1 = var_a2 & 0xFFFF;
      }
      else
      {
        var_a2 = *((u16 *) (((char *) (*((&D_8011F340) + ((*arg0) * 0x64)))) + 0xE));
        *arg1 = 1;
        var_v1 = var_a2 & 0xFFFF;
      }
    }
    else
    {
      if (var_v0)
      {
        temp_a2_3 = *((&D_8011F340) + ((*arg0) * 0x64));
      }
      else
      {
        temp_a2_3 = *((&D_8011F340) + ((*arg0) * 0x64));
      }
      if ((*((u16 *) (((char *) temp_a2_3) + 0xE))) != 0xFFFF)
      {
        var_a2 = *((u16 *) (((char *) temp_a2_3) + 0xE));
        var_v1 = var_a2 & 0xFFFF;
      }
      else
      {
        var_a2 = *((u16 *) (((char *) (*((&D_8011F340) + ((*arg0) * 0x64)))) + 0xA));
        *arg1 = 0;
        var_v1 = var_a2 & 0xFFFF;
      }
    }
    temp_a3 = var_v1 * 0x64;
    temp_v1_2 = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a3))) + 4)))) + 4)))) + 4));
    temp_t2 = *((s16 *) (((char *) temp_v1_2) + 0x40));
    temp_ft0 = *((&D_8011F308) + temp_a3);
    if (arg2 <= (((f32) (temp_t2 + 0x1E)) + temp_ft0))
    {
      temp_t1 = *((s16 *) (((char *) temp_v1_2) + 0x50));
      if ((((f32) (temp_t1 - 0x1E)) + temp_ft0) <= arg2)
      {
        temp_t0 = *((s16 *) (((char *) temp_v1_2) + 0x44));
        temp_fv1_3 = *((&D_8011F310) + temp_a3);
        if (arg4 <= (((f32) (temp_t0 + 0x1E)) + temp_fv1_3))
        {
          temp_v1_3 = *((s16 *) (((char *) temp_v1_2) + 0x54));
          if ((((f32) (temp_v1_3 - 0x1E)) + temp_fv1_3) <= arg4)
          {
            if (!(arg2 <= (((f32) temp_t2) + temp_ft0)))
            {
              *arg0 = var_a2;
              goto block_48;
            }
            if (!((((f32) temp_t1) + temp_ft0) <= arg2))
            {
              *arg0 = var_a2;
              goto block_48;
            }
            *arg0 = var_a2;
            if (arg4 <= (((f32) temp_t0) + temp_fv1_3))
            {
              if (!(arg4 >= (((f32) temp_v1_3) + temp_fv1_3)))
              {
                return 2;
              }
              goto block_47;
            }
            goto block_48;
          }
        }
      }
    }
    if ((*arg1) == 0)
    {
      if (temp_fv1)
      {
        temp_a2_4 = *((&D_8011F340) - (-((*arg0) * 0x64)));
      }
      else
      {
        temp_a2_4 = *((&D_8011F340) - (-((*arg0) * 0x64)));
      }
      if ((*((u16 *) (((char *) temp_a2_4) + 8))) == 0xFFFF)
      {
        var_a2_2 = *((u16 *) (((char *) (*((&D_8011F340) + ((*arg0) * 0x64)))) + 0xC));
        *arg1 = 1;
        do
        {
          goto block_32;
        }
        while (0);
      }
      else
      {
        var_a2_2 = *((u16 *) (((char *) temp_a2_4) + 8));
        var_v1_2 = var_a2_2 & 0xFFFF;
      }
    }
    else
    {
      temp_a2_5 = *((&D_8011F340) + ((*arg0) * 0x64));
      if ((*((u16 *) (((char *) temp_a2_5) + 0xC))) != 0xFFFF)
      {
        var_a2_2 = *((u16 *) (((char *) temp_a2_5) + 0xC));
        var_v1_2 = var_a2_2 & 0xFFFF;
      }
      else
      {
        var_a2_2 = *((u16 *) (((char *) (*((&D_8011F340) + ((*arg0) * 0x64)))) + 8));
        *arg1 = 0;
        block_32:
        var_v1_2 = var_a2_2 & 0xFFFF;

      }
    }
    temp_a1 = var_v1_2 * 0x64;
    temp_v1_4 = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a1))) + 4)))) + 4)))) + 4));
    temp_t1_2 = *((s16 *) (((char *) temp_v1_4) + 0x40));
    temp_ft0_2 = *((&D_8011F308) + temp_a1);
    var_v0 = 0;
    if (arg2 <= (((f32) (temp_t1_2 + 0x1E)) + temp_ft0_2))
    {
      temp_t0_2 = *((s16 *) (((char *) temp_v1_4) + 0x50));
      var_v0 = 0;
      if ((((f32) (temp_t0_2 - 0x1E)) + temp_ft0_2) <= arg2)
      {
        temp_a3_2 = *((s16 *) (((char *) temp_v1_4) + 0x44));
        temp_fv1_4 = *((&D_8011F310) + temp_a1);
        var_v0 = 0;
        if (arg4 <= (((f32) (temp_a3_2 + 0x1E)) + temp_fv1_4))
        {
          do
          {
            temp_v1_5 = *((s16 *) (((char *) temp_v1_4) + 0x54));
            if (!((((f32) (temp_v1_5 - 0x1E)) + temp_fv1_4) <= arg4))
            {
              return 0;
            }
            if (!(arg2 <= (((f32) temp_t1_2) + temp_ft0_2)))
            {
              *arg0 = var_a2_2;
              goto block_48;
            }
            if (!((((f32) temp_t0_2) + temp_ft0_2) <= arg2))
            {
              *arg0 = var_a2_2;
              goto block_48;
            }
            *arg0 = var_a2_2;
            if ((arg4 <= (((f32) temp_a3_2) + temp_fv1_4)) && ((((f32) temp_v1_5) + temp_fv1_4) <= arg4))
            {
              block_47:
              return 1;

            }
            block_48:
            var_v0 = 2;

            return 2;
          }
          while (0);
        }
      }
    }
    return var_v0;
  }
  return var_v0;
}

