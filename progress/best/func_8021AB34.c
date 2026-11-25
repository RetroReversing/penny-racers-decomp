extern u8 D_800DB1B8[];
extern u8 D_8011F350[];
extern u8 D_80190CAA;
extern u16 D_80190CB4;
inline static s16 inline_fn(s16 *arg0)
{
  return arg0[4];
}

inline static int inline_fn2(s32 arg0, int arg1)
{
  return arg0 < arg1;
}

inline static u8 inline_fn23(u8 *arg0)
{
  return *arg0;
}

void func_8021AB34(void)
{
  u8 __repair_frame[8];
  u8 *__base_D_80190CAA;
  int a3 = 0;
  s16 *p = (s16 *) (D_800DB1B8 + 0x2108);
  long a1;
  s32 v1;
  s16 v0;
  short t;
  __base_D_80190CAA = &D_80190CAA;
  do
  {
    if (inline_fn23(__base_D_80190CAA) != 0)
    {
      do
      {
        if (p)
        {
          t = inline_fn23(__base_D_80190CAA);
        }
        else
        {
          t = inline_fn23(__base_D_80190CAA);
        }
      }
      while (0);
      if (t != 2)
      {
        if (inline_fn2(t, 3))
        {
          if (t != 1)
          {
            a1 = a3;
          }
          else
          {
            a3 = 2;
            goto done;
          }
        }
        else
        {
          if (t == 3)
          {
            a3 = 0x50;
            goto done;
          }
          if (D_800DB1B8 || v1)
          {
            a1 = a3;
          }
          else
          {
            a1 = a3;
          }
        }
      }
      else
      {
        a3 = 0xA0;
        done:
        a1 = a3;

      }
      v1 = p[4]; v0 = ((s32) (((f32) (a1 - v1)) / 8.0f)) + v1; p[4] = v0;
      if (inline_fn2(a1 - 2, v0) && (v0 < (a1 + 2)))
      {
        p[4] = a3;
        *__base_D_80190CAA = 0;
      }
      ((s16 *) (D_800DB1B8 + 0x2108))[16] = p[4];
      ((s16 *) (D_800DB1B8 + 0x2108))[17] = p[5]; do { p[18] = ((u16) p[6]) + ((u16) inline_fn(p)); } while (0); p[19] = ((u16) p[7]) + ((u16) p[5]);
 do { *((u16 *) ((*((u8 **) (D_8011F350 + (D_80190CB4 * 100)))) + 0xA)) = p[4]; } while (0);
    }
  }
  while (0);
}
