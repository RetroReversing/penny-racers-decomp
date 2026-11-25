#define F(p, type, off) (*(type *)((u8 *)(p) + (off)))
typedef struct 
{
  u8 *p;
  u8 pad[0x60];
} Rec64;
s32 func_8013E364();
void func_800DF1E0();
void func_8013F44C();
void func_801D7028();
void func_8022FE50();
extern u16 D_8006F9E8;
extern u8 D_800DA26A[];
extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F33C[];
extern Rec64 D_8011F340[];
extern u8 * volatile D_8018A280;
extern s32 D_8018D674;
extern u8 D_8018D6C0[];
extern s16 D_8021E1A6;
extern u8 D_8022A772[];
extern u8 D_8022AD5C[];
extern u8 D_8022DD10[];
extern u16 D_8022DD12;
extern u8 D_80237980[];
extern u8 D_80322A4C[];
inline static int inline_fn(u16 *arg0)
{
  return (*arg0) * 0x64;
}

inline static int inline_fn2(unsigned char arg0)
{
  return arg0 * 0x8F0;
}

void func_8013FE18(s32 arg0)
{
  u16 *__base_D_8022DD12;
  u8 *p;
  u8 *q;
  s32 r;
  s32 i;
  u32 u;
  do
  {
    {
      long long phantom_wide = arg0;
    }
  }
  while (0);
  if ((D_8006F9E8 & 0xFFFF) != 5)
  {
    switch (*((u16 *) (((u8 *) D_8011F32E) + ((arg0 & 0xFFFF) * 0x64))))
    {
      case 0:
        r = func_8013E364();
        if ((r & 0xFFFF) != 0xFFFF)
      {
        p = D_8022DD10;
        *((s16 *) (((u8 *) D_800DA26A) + 0x8C6)) = 0;
        do
        {
          *((s16 *) (((u8 *) D_800DA26A) + 0x8C8)) = 0x37;
          *((s16 *) (((u8 *) D_800DA26A) + 0x8CA)) = 0xA;
          do
          {
            *((s16 *) (((u8 *) D_800DA26A) + 0x8CC)) = 9;
            *((s16 *) (((u8 *) D_800DA26A) + 0x8CE)) = 7;
            *((s16 *) (((u8 *) D_800DA26A) + 0x8D0)) = 0;
            *((s16 *) (((u8 *) D_800DA26A) + 0x8D2)) = 0;
            *((s16 *) (((u8 *) D_800DA26A) + 0x8D4)) = 0;
            *((s16 *) (((u8 *) D_800DA26A) + 0x8D6)) = 0;
            *((s32 *) (((u8 *) D_800DA26A) + 0x8DA)) = 0;
            *((s32 *) (((u8 *) D_800DA26A) + 0x8DE)) = 0;
            *((s32 *) (((u8 *) D_800DA26A) + 0x8E2)) = 0;
            *((s32 *) (((u8 *) D_800DA26A) + 0x8E6)) = 0;
            *((s8 *) (((u8 *) D_800DA26A) + 0x8EA)) = 0;
            do
            {
              if (p)
              {
                func_8022FE50(6, 6, 6, 1);
              }
              else
              {
                func_8022FE50(6, 6, 6, 1);
              }
            }
            while (0);
            switch (D_8021E1A6)
            {
              case 0:
                *((u8 ***) (((u8 *) p) + 0x8E0)) = D_80322A4C;
                *((s32 *) (((u8 *) p) + 0x5EC)) = 0;
                break;

              case 1:
                *((u8 ***) (((u8 *) p) + 0x8E0)) = D_80322A4C;
                *((s32 *) (((u8 *) p) + 0x5EC)) = 0;
                break;

              case 2:
                *((u8 ***) (((u8 *) p) + 0x8E0)) = D_80322A4C;
                *((s32 *) (((u8 *) p) + 0x5EC)) = 0;
                break;

              case 3:
                *((u8 ***) (((u8 *) p) + 0x8E0)) = D_80322A4C;
                *((s32 *) (((u8 *) p) + 0x5EC)) = 0;
                break;

              default:
                *((s32 *) (((u8 *) p) + 0x5EC)) = 0;
                break;

            }

            *((u8 ***) (((u8 *) D_8011F340[*((u16 *) (((u8 *) D_8011F304) + inline_fn((u16 *) (((u8 *) p) + 2))))].p) + 4)) = D_80237980;
            func_800DF1E0(*((u16 *) (((u8 *) D_8011F304) + inline_fn((u16 *) (((u8 *) p) + 2)))), p + 0x210);
            u = (u32) (*((f32 *) (((u8 *) D_8011F334) + ((*((u16 *) (((u8 *) p) + 2))) * 0x64))));
            *((f32 *) (((u8 *) D_8011F33C) + ((u & 0xFFFF) * 0x64))) = 0.4f;
            *((s32 *) (((u8 *) D_8011F340[(*((u16 *) (((u8 *) p) + 2))) + 5].p) + 4)) = 0;
            *((s32 *) (((u8 *) D_8011F340[(*((u16 *) (((u8 *) p) + 2))) + 6].p) + 4)) = 0;
            *((s32 *) (((u8 *) D_8011F340[(*((u16 *) (((u8 *) p) + 2))) + 7].p) + 4)) = 0;
          }
          while (0);
          *((s16 *) (((u8 *) p) + 0x8E4)) = 0x27;
          *((s16 *) (((u8 *) p) + 0x8E6)) = 0x26;
          *((s16 *) (((u8 *) p) + 0x8E8)) = 0; q = D_8011F2F0 + inline_fn((u16 *) (((u8 *) p) + 2));
          *((f32 *) (((u8 *) q) + 0x30)) = (*((f32 *) (((u8 *) q) + 0x30))) + (*((f32 *) (((u8 *) q) + 0x30)));
          *((f32 *) (((u8 *) q) + 0x34)) = (*((f32 *) (((u8 *) q) + 0x34))) + (*((f32 *) (((u8 *) q) + 0x34)));
          *((f32 *) (((u8 *) q) + 0x38)) = (*((f32 *) (((u8 *) q) + 0x38))) + (*((f32 *) (((u8 *) q) + 0x38)));
        }
        while (0);
        D_8018A280 = D_8018D6C0 + ((r & 0xFFFF) * 0x7C);
        *((f32 *) (((u8 *) D_8018A280) + 0x70)) = 30.0f;
        for (i = 0; ((i + 1) - 1) <= (7 - 1); i++)
        {
          {
            long long phantom_wide2 = arg0;
          }
          D_8018A280[i + 0x67] = 0;
          if (((*((u16 *) (((u8 *) D_8022A772) + inline_fn2(i)))) != 0xFFFF) && ((*((f32 *) (((u8 *) D_8022AD5C) + inline_fn2(i)))) > 0.0f))
          {
            D_8018A280[i + 0x60] = i;
          }
          else
          {
            D_8018A280[i + 0x60] = -1;
          }
        }

        *((u16 *) (((u8 *) D_8011F32E) + ((arg0 & 0xFFFF) * 0x64))) = 1;
        return;
      }
        break;
        __base_D_8022DD12 = &D_8022DD12;

      case 1:
        func_8013F44C(*__base_D_8022DD12, D_8018A280, 0xFFFF);
        if (D_8018D674 != 0)
      {
        if (i)
        {
          func_801D7028(*__base_D_8022DD12, 0x27);
        }
        else
        {
          func_801D7028(*__base_D_8022DD12, 0x27);
        }
      }
        break;

    }

  }
}

