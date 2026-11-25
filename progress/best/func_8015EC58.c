typedef struct Ent
{
  u8 _00[2];
  u16 f2;
  s16 f4;
  s16 f6;
  s16 f8;
  u8 _0a[3];
  u8 fD;
  u16 fE;
  u8 _10[0x3E - 0x10];
  s16 f3E;
  u8 _40[4];
  f32 f44;
  f32 f48;
  f32 f4C;
  u8 _50[0x10];
  void *f60;
} Ent;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern Ent D_8011F2F0[];
extern u8 D_8011F4E4[];
extern s32 D_802390C8;
extern s32 func_8013AF08;
extern s32 func_8015FD04;
unsigned short func_8015EC58(s32 arg0)
{
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_ft0_3;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  s32 temp_v0_4;
  s32 temp_v0_8;
  volatile unsigned char pad;
  s32 temp_v0_9;
  s32 var_v0;
  s32 var_v1;
  u16 temp_v0_3;
  u16 temp_v1_2;
  void *temp_a0;
  void *temp_a1;
  void *temp_s0;
  void *temp_s2;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_6;
  void *temp_v0_5;
  void *temp_v0_7;
  void *temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
  temp_s0 = D_8011F2F0[(u16) arg0].f60;
  temp_a1 = *((void **) (((char *) temp_s0) + 4)); temp_a0 = (void *) temp_a1;
  temp_a1 = ((*((u16 *) (((char *) temp_a0) + 2))) * 0x64) + D_8011F4E4;
  temp_s2 = *((void **) (((char *) temp_a1) + 0x50));
  *((s8 *) (((char *) temp_a0) + 0x8D1)) = 0x78;
  temp_ft0 = *((f32 *) (((char *) temp_s0) + 8));
  *((f32 *) (((char *) temp_s0) + 8)) = (f32) (((2.0f - temp_ft0) * 0.2f) + temp_ft0);
  temp_v1 = *((void **) (((char *) temp_s0) + 4));
  if ((*((s32 *) (((char *) temp_v1) + 0x890))) != 0)
  {
 do { if ((*((f32 *) (((char *) temp_v1) + 0x748))) < 3000.0f) { *((f32 *) (((char *) temp_v1) + 0x748)) = 3000.0f; } temp_v0 = *((void **) (((char *) temp_s0) + 4)); } while (0);
    *((f32 *) (((char *) temp_v0) + 0x748)) = (f32) ((*((f32 *) (((char *) temp_v0) + 0x748))) + 100.0f);
    temp_v0_2 = *((void **) (((char *) temp_s0) + 4));
    if ((*((f32 *) (((char *) temp_v0_2) + 0x748))) > 7000.0f)
    {
      *((f32 *) (((char *) temp_v0_2) + 0x748)) = 7000.0f;
    }
  }
  temp_v0_3 = (*((u16 *) (((char *) temp_s0) + 0x14))) - 1;
  *((u16 *) (((char *) temp_s0) + 0x14)) = temp_v0_3;
  if ((temp_v0_3 << 0x10) == 0)
  {
    temp_v0_4 = arg0 & 0xFFFF;
    if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x55E))) == 0)
    {
      var_v1 = temp_v0_4;
      D_8011F2F0[var_v1].f3E = 1;
    }
    else
    {
      var_v1 = temp_v0_4;
      D_8011F2F0[var_v1].f3E = 3;
    }
  }
  var_v0 = arg0 & 0xFFFF;
  temp_v1_2 = D_8011F2F0[var_v0].f3E;
  switch (temp_v1_2)
  {
    case 1:
      temp_ft0_2 = *((f32 *) (((char *) temp_a1) + 0x34));
      temp_fv0 = ((0.7f - temp_ft0_2) * 0.5f) + temp_ft0_2;
      *((f32 *) (((char *) temp_a1) + 0x34)) = temp_fv0;
      *((f32 *) (((char *) temp_a1) + 0x30)) = temp_fv0;
      if ((*((f32 *) (((char *) temp_a1) + 0x34))) < ((long) 0.73f))
    {
      D_8011F2F0[(u16) arg0].f3E = 2;
    }
      break;

    case 2:
      temp_ft0_3 = *((f32 *) (((char *) temp_a1) + 0x34));
      temp_fv0_2 = ((3.0f - temp_ft0_3) * 0.4f) + temp_ft0_3;
      *((f32 *) (((char *) temp_a1) + 0x34)) = temp_fv0_2;
      *((f32 *) (((char *) temp_a1) + 0x30)) = temp_fv0_2;
      if (temp_fv0_2 > 2.8f)
    {
      D_8011F2F0[(u16) arg0].f3E = 3;
    }
      break;

    case 3:
      *((f32 *) (((char *) temp_a1) + 0x34)) = 1.0f;
      *((f32 *) (((char *) temp_a1) + 0x30)) = 1.0f;
      temp_v1_3 = *((void **) (((char *) temp_s0) + 4));
      *((u16 *) (((char *) temp_v1_3) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_3) + 0x560))) & 0xEF);
      func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
      D_8011F2F0[(u16) arg0].fD = 2;
      if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x55E))) == 0)
    {
      *((s32 *) (((char *) temp_s2) + 4)) = 0;
    }
      break;

  }

  temp_v1_4 = *((void **) (((char *) temp_s0) + 4));
  if (((*((u8 *) (((char *) temp_v1_4) + 0x860))) != 0) && ((*((s32 *) (((char *) temp_v1_4) + 0x890))) != 0))
  {
    temp_fv1 = *((f32 *) (((char *) temp_v1_4) + 0x7B4));
    *((f32 *) (((char *) temp_v1_4) + 0x7B4)) = (f32) (((((*((f32 *) (((char *) temp_v1_4) + 0x784))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1) * 0.2f) + temp_fv1);
    temp_v0_5 = *((void **) (((char *) temp_s0) + 4));
    temp_fv1_2 = *((f32 *) (((char *) temp_v0_5) + 0x7BC));
    *((f32 *) (((char *) temp_v0_5) + 0x7BC)) = (f32) (((((*((f32 *) (((char *) temp_v0_5) + 0x78C))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1_2) * 0.2f) + temp_fv1_2);
    temp_v0_6 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0_6) + 0x7C0)) = (f32) (*((f32 *) (((char *) temp_v0_6) + 0x7B4)));
    temp_v0_7 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0_7) + 0x7C8)) = (f32) (*((f32 *) (((char *) temp_v0_7) + 0x7BC)));
  }
  if ((!((*((u16 *) (((char *) temp_s0) + 0x14))) & 7)) && (((u8) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A1)))) < 2U))
  {
    temp_v0_8 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x714)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x718)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x71C)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_8 + 2) & 0xFFFF)) >= 2U)
    {
      do
      {
        if (temp_v0_9 || D_8011F2F0[(u16) arg0].f60)
        {
          D_8011F2F0[(u16) temp_v0_8].f8 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f6 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f4 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f2 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f44 = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
          D_8011F2F0[(u16) temp_v0_8].f48 = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
          D_8011F2F0[(u16) temp_v0_8].f4C = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
          D_8011F2F0[(u16) temp_v0_8].f3E = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
          D_8011F2F0[(u16) temp_v0_8].fE = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
        }
        else
        {
          D_8011F2F0[(u16) temp_v0_8].f8 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f6 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f4 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f2 = 0x40;
          D_8011F2F0[(u16) temp_v0_8].f44 = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
          D_8011F2F0[(u16) temp_v0_8].f48 = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
          D_8011F2F0[(u16) temp_v0_8].f4C = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
          D_8011F2F0[(u16) temp_v0_8].f3E = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
          D_8011F2F0[(u16) temp_v0_8].fE = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
        }
      }
      while (0);
    }
    goto dummy_label_36483;
    dummy_label_36483:
    ;

    ;
    temp_v0_9 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x720)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x724)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x728)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_9 + 2) & 0xFFFF)) >= 2U)
    {
      D_8011F2F0[(u16) temp_v0_9].f8 = 0x40;
      D_8011F2F0[(u16) temp_v0_9].f6 = 0x40;
      D_8011F2F0[(u16) temp_v0_9].f4 = 0x40;
      D_8011F2F0[(u16) temp_v0_9].f2 = 0x40;
      D_8011F2F0[(u16) temp_v0_9].f44 = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
      D_8011F2F0[(u16) temp_v0_9].f48 = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
      D_8011F2F0[(u16) temp_v0_9].f4C = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
      do
      {
        D_8011F2F0[(u16) temp_v0_9].f3E = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
      }
      while (0);
      D_8011F2F0[(u16) temp_v0_9].fE = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
    }
  }
}
