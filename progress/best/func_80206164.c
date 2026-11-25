typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_801E99C0;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s8 D_8021B079;
extern u8 D_8021B0B0;
extern s8 D_8021B0C0;
extern f64 D_8021DBC0;
extern f64 D_8021DBC8;
extern f32 D_8021E140;
extern s32 D_8021E168;
extern u8 D_8021E678;
extern f32 D_8021EEA0;
extern s32 D_8021EEB4;
extern u16 D_8021F02C;
void func_800DE2E0(void);
void func_800DE38C(void);
void func_8014B854(s32);
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80205EBC(f32 *, s32, f32, s32, s32);
void func_80231C5C(void);
inline static int inline_fn(u8 arg0)
{
  return arg0 == 0;
}

inline static s32 inline_fn2()
{
  return (s32) D_8021B0B0;
}

inline static int inline_fn23(s32 arg0)
{
  return ((s32) D_8021E140) == arg0;
}

void func_80206164(u16 arg0_in)
{
  u16 arg0;
  s32 *__base_D_801E99C0;
  s32 var_v0;
  u16 temp_v1;
  unsigned int temp_s0;
  do
  {
    temp_v1 = D_8011F32E[arg0].f0;
    arg0 = arg0_in;
    switch (temp_v1)
    {
      case 0:
        do
      {
        D_8021B0C0 = 0;
      }
      while (0);
        if ((*(*((s32 **) (D_8011F350 + (D_8018BC3C * 0x64))))) == 0)
      {
        D_8011F32E[arg0].f0 = 1;
      }
        D_8021F02C = 0;
        D_8021B0B0 = 0;
        return;
        __base_D_801E99C0 = &D_801E99C0;

      case 1:
        if ((*(&D_801E99C0)) == 1)
      {
        if (D_8021EEA0)
        {
          temp_s0 = D_8021E678;
        }
        else
        {
          temp_s0 = D_8021E678;
        }
        if (temp_s0 == 2)
        {
          do
          {
            if (D_8021DBC8)
            {
              func_8014B854(0x3D);
            }
            else
            {
              func_8014B854(0x3D);
            }
          }
          while (0);
          do
          {
            if (D_8021EEA0)
            {
              func_80203DF8(2, 6, 0, 0, 0);
            }
            else
            {
              func_80203DF8(2, 6, 0, 0, 0);
            }
          }
          while (0);
          do
          {
            D_8021B060 = (s32) temp_s0;
          }
          while (0);
          D_8011F32E[arg0].f0 = 2;
          if ((*((u16 *) (((u8 *) __base_D_801E99C0) - 0x68))) == 0x3404)
          {
            D_8021B079 = 1;
          }
        }
        else
          if (((*__base_D_801E99C0) == 1) && (D_8021E678 != 2))
        {
          D_8021E678 = 1; D_8021EEA0 = 0.0f;
          do
          {
            D_8021EEB4 = 0;
          }
          while (0);
          D_8021E168 = 0x22; D_8021E140 = 0.0f;
        }
      }
        var_v0 = 0x22;
        if (D_8021E168 < 0x22)
      {
        var_v0 = D_8021E168 + 0xA;
      }
        D_8021E168 = var_v0;
        if ((D_8021E168 == 0x22) && (D_8021E678 == 0))
      {
        func_80205EBC(&D_8021E140, 0, D_8021EEA0, D_8021EEB4, inline_fn2());
        if (inline_fn23((s32) D_8021EEA0))
        {
          D_8021EEA0 = (f32) (((f64) D_8021EEA0) / D_8021DBC0);
        }
        if (D_8021DBC8 < ((f64) D_8021EEA0))
        {
          D_8021E678 = 1;
        }
        if (inline_fn(D_8021B0B0))
        {
          D_8021B0B0 = 1;
        }
      }
        D_8021F02C += 1;
        if (((u16) D_8021F02C) >= 0x259U)
      {
        if (arg0)
        {
          func_80203DF8(2, 0x3C, (double) 0xFF, 0xFF, 0xFF);
        }
        else
        {
          func_80203DF8(2, 0x3C, 0xFF, 0xFF, 0xFF);
        }
        do
        {
          D_8021B060 = 0x2C;
        }
        while (0);
        D_8011F32E[arg0].f0 = 2;
        return;
      }
        return;

      case 2:
        if (inline_fn(*(*((s32 **) (D_8011F350 + (D_8018BC3C * 0x64))))))
      {
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        do
        {
          func_801CF468(D_8018BC3C, 0, 0, 0);
        }
        while (0);
        D_8021AFDC = 0; D_80168BB0 = D_8021B060;
      }
        break;

    }

  }
  while (0);
}

