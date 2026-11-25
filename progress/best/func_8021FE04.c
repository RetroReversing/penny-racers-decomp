inline static s16 __repair_inline(s16 a)
{
  return a;
}

extern char D_800DB1B8[];
extern u8 D_80126FF6;
extern f64 D_80221070;
extern f64 D_80221078;
typedef struct 
{
  int value;
} __repair_field_0;
inline static char *inline_fn(char *arg0, s32 arg1)
{
  return arg0 + arg1;
}

inline static int inline_fn2(f32 arg0)
{
  return ((s32) (arg0 * 4.0f)) & 0xFFF;
}

inline static u16 *inline_fn23(s32 arg0)
{
  return (u16 *) ((D_800DB1B8 + 0x2114) + arg0);
}

void func_8021FE04(void **arg0)
{
  int __repair_literal;
  s16 temp_v0;
  s16 temp_v0_2;
  s16 temp_v1_5;
  s16 temp_v1_8;
  s32 temp_a0_2;
  s32 temp_a0_4;
  s32 __repair_phase_temp_a0_4;
  s32 temp_a1;
  s32 temp_v1;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_6;
  s32 temp_v1_7;
  void *temp_a0;
  void *temp_v1_2;
  temp_v1 = D_80126FF6 * 0x28;
  do
  {
    *((u16 *) ((D_800DB1B8 + 0x2118) + (D_80126FF6 * 0x28))) = ((short) (*inline_fn23(temp_v1))) * 2;
    do
    {
      temp_a0_2 = *((u16 *) ((D_800DB1B8 + 0x2116) + temp_v1));
      *((u16 *) ((D_800DB1B8 + 0x211A) + temp_v1)) = temp_a0_2 * 2;
      *((u16 *) ((D_800DB1B8 + 0x211C) + temp_v1)) = 0x1FF;
      *((u16 *) ((D_800DB1B8 + 0x211E) + temp_v1)) = 0;
      if (1)
      {
        *((u16 *) ((D_800DB1B8 + 0x2120) + temp_v1)) = (s16) ((s32) ((((f64) (*((D_800DB1B8 + 0x2110) + temp_v1))) + (((f64) (*((D_800DB1B8 + 0x2114) + temp_v1))) * D_80221070)) * D_80221078));
        *((u16 *) ((D_800DB1B8 + 0x2122) + temp_v1)) = (s16) ((s32) (D_80221078 * (((f64) (*((D_800DB1B8 + 0x2112) + temp_v1))) + (((f64) (*((D_800DB1B8 + 0x2116) - (-temp_v1)))) * D_80221070))));
        *((u16 *) ((D_800DB1B8 + 0x2124) + temp_v1)) = 0x1FF;
        *((u16 *) inline_fn(D_800DB1B8 + 0x2126, temp_v1)) = 0; temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        ((__repair_field_0 *) temp_v1_2)->value = 0xE7000000;
        *((void **) (((char *) temp_v1_2) + 4)) = NULL; temp_a0 = *arg0;
        *arg0 = temp_a0 + 8;
        ((__repair_field_0 *) temp_a0)->value = 0x03800010; temp_v1_3 = D_80126FF6 * 0x28;
        *((void **) (((char *) temp_a0) + 4)) = (void *) (temp_v1_3 + (D_800DB1B8 + 0x2118)); __repair_literal = 0;
        if ((*((u16 *) ((D_800DB1B8 + 0x2128) + temp_v1_3))) < 0)
        {
          *((u16 *) ((D_800DB1B8 + 0x2128) + temp_v1_3)) = 0;
        }
        temp_v1_4 = D_80126FF6 * 0x28;
        if (((*((u16 *) ((D_800DB1B8 + 0x212C) + temp_v1_4))) + 1) > 0x141)
        {
          *((u16 *) ((D_800DB1B8 + 0x2128) + temp_v1_4)) = 0x140;
        }
        temp_a0_2 = D_80126FF6 * 0x28; temp_v0 = *((u16 *) ((D_800DB1B8 + 0x212C) + temp_a0_2));
        if (temp_v0 < (*((u16 *) ((D_800DB1B8 + 0x2128) + temp_a0_2))))
        {
          *((u16 *) ((D_800DB1B8 + 0x2128) + temp_a0_2)) = *((u16 *) (temp_a0_2 + (D_800DB1B8 + 0x212C)));
        }
        temp_a0_2 = D_80126FF6 * 0x28; temp_v1_5 = *((u16 *) ((D_800DB1B8 + 0x2128) + temp_a0_2));
        if ((*((u16 *) ((D_800DB1B8 + 0x212C) + temp_a0_2))) < temp_v1_5)
        {
          *((u16 *) ((D_800DB1B8 + 0x212C) + temp_a0_2)) = *((u16 *) ((D_800DB1B8 + 0x2128) + temp_a0_2));
        }
        temp_v1_6 = D_80126FF6 * 0x28;
        if ((*((u16 *) ((D_800DB1B8 + 0x212A) + temp_v1_6))) < 0)
        {
          *((u16 *) ((D_800DB1B8 + 0x212A) + temp_v1_6)) = 0;
        }
        temp_v1_7 = D_80126FF6 * 0x28;
        if (((*((u16 *) ((D_800DB1B8 + 0x212E) + temp_v1_7))) + 1) > 0xF1)
        {
          *((u16 *) ((D_800DB1B8 + 0x212A) + temp_v1_7)) = 0xF0;
        }
        temp_a0_4 = D_80126FF6 * 0x28; temp_v0_2 = __repair_inline(*((u16 *) ((D_800DB1B8 + 0x212E) + temp_a0_4)));
        if (temp_v0_2 < (*((u16 *) ((D_800DB1B8 + 0x212A) + temp_a0_4))))
        {
          *((u16 *) ((D_800DB1B8 + 0x212A) + temp_a0_4)) = *((u16 *) ((D_800DB1B8 + 0x212E) + temp_a0_4));
        }
      }
      __repair_phase_temp_a0_4 = D_80126FF6 * 0x28;
    }
    while (0);
  }
  while (0);
  temp_v1_8 = *((u16 *) ((D_800DB1B8 + 0x212A) + __repair_phase_temp_a0_4));
  if (((*((u16 *) ((D_800DB1B8 + 0x212E) + __repair_phase_temp_a0_4))) - 1) < ((*((u16 *) ((D_800DB1B8 + 0x212A) + __repair_phase_temp_a0_4))) - 1))
  {
    *((u16 *) ((D_800DB1B8 + 0x212E) + __repair_phase_temp_a0_4)) = *((u16 *) ((D_800DB1B8 + 0x212A) + __repair_phase_temp_a0_4));
  }
  do
  {
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    temp_a1 = D_80126FF6 * 0x28;
    ((__repair_field_0 *) temp_a0)->value = (s32) (((((s32) (((f32) (*((D_800DB1B8 + 0x212A) + temp_a1))) * 4.0f)) & 0xFFF) | 0xED000000) | ((inline_fn2((f32) (*((D_800DB1B8 + 0x2128) + temp_a1))) << 4) << 8));
    *((void **) (((char *) temp_a0) + 4)) = (void *) (((((s32) (((f32) (*((D_800DB1B8 + 0x212C) + temp_a1))) * 4.0f)) & 0xFFF) << 0xC) | (((s32) (((f32) (*((D_800DB1B8 + 0x212E) + temp_a1))) * 4.0f)) & 0xFFF));
  }
  while (0);
}

