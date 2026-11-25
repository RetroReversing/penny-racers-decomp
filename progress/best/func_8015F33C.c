s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E49C(u16);
extern u8 D_8011F2F0[];
extern s32 D_8011F2F2;
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F2FD;
extern Slot_8011F2FD D_8011F2FD[];
extern s32 D_8011F2FE;
extern s32 D_8011F32E;
extern u8 D_8011F334[];
extern s32 D_8011F338;
extern s32 D_8011F33C;
extern s32 D_8011F350;
extern s32 D_802390C8;
extern s32 func_8013AF08;
extern s32 func_8015FD04;
void func_8015F33C(s32 arg0)
{
  f32 temp_ft0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  s32 temp_a0_2;
  s32 temp_v0_6;
  s32 temp_v0_7;
  u16 temp_v0_2;
  void *temp_s0;
  void *temp_v0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v0_4;
  void *temp_v0_5;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  if (temp_s0)
  {
    temp_s0 = *((s32 *) (((s8 *) (&D_8011F350)) + ((arg0 & 0xFFFF) * 0x64)));
    *((s8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8D1)) = 0x78;
    temp_ft0 = *((f32 *) (((char *) temp_s0) + 8));
    *((f32 *) (((char *) temp_s0) + 8)) = (f32) (((2.0f - temp_ft0) * 0.2f) + temp_ft0);
    temp_v1 = *((void **) (((char *) temp_s0) + 4));
  }
  else
  {
    temp_s0 = *((s32 *) (((s8 *) (&D_8011F350)) + ((arg0 & 0xFFFF) * 0x64)));
    *((s8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8D1)) = 0x78;
    temp_ft0 = *((f32 *) (((char *) temp_s0) + 8));
    *((f32 *) (((char *) temp_s0) + 8)) = (f32) (((2.0f - temp_ft0) * 0.2f) + temp_ft0);
    temp_v1 = *((void **) (((char *) temp_s0) + 4));
  }
  if ((*((s32 *) (((char *) temp_v1) + 0x890))) != 0)
  {
    *((f32 *) (((char *) temp_v1) + 0x748)) = (f32) ((*((f32 *) (((char *) temp_v1) + 0x748))) + 100.0f);
    temp_v0 = *((void **) (((char *) temp_s0) + 4));
    do
    {
      if ((*((f32 *) (((char *) temp_v0) + 0x748))) > 7000.0f)
      {
        *((f32 *) (((char *) temp_v0) + 0x748)) = 7000.0f;
      }
    }
    while (0);
  }
  temp_v0_2 = (*((u16 *) (((char *) temp_s0) + 0x14))) - 1;
  *((u16 *) (((char *) temp_s0) + 0x14)) = temp_v0_2;
  if ((temp_v0_2 << 0x10) == 0)
  {
    temp_v1_2 = *((void **) (((char *) temp_s0) + 4));
    *((u16 *) (((char *) temp_v1_2) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_2) + 0x560))) & 0xEF);
    func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
    D_8011F2FD[arg0 & 0xFFFF].f0 = 2;
  }
  temp_v1_3 = *((void **) (((char *) temp_s0) + 4));
  if (((*((u8 *) (((char *) temp_v1_3) + 0x860))) != 0) && ((*((s32 *) (((char *) temp_v1_3) + 0x890))) != 0))
  {
    temp_fv1 = *((f32 *) (((char *) temp_v1_3) + 0x7B4));
    *((f32 *) (((char *) temp_v1_3) + 0x7B4)) = (f32) (((((*((f32 *) (((char *) temp_v1_3) + 0x784))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1) * 0.15f) + temp_fv1);
    do
    {
      __repair_phase_storage.pointer = *((void **) (((char *) temp_s0) + 4)); temp_fv1_2 = *((f32 *) (((char *) __repair_phase_storage.pointer) + 0x7BC));
      *((f32 *) (((char *) __repair_phase_storage.pointer) + 0x7BC)) = (f32) (((((*((f32 *) (((char *) __repair_phase_storage.pointer) + 0x78C))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1_2) * 0.15f) + temp_fv1_2); temp_v0_4 = *((void **) (((char *) temp_s0) + 4));
      *((f32 *) (((char *) temp_v0_4) + 0x7C0)) = (f32) (*((f32 *) (((char *) temp_v0_4) + 0x7B4))); temp_v0_5 = *((void **) (((char *) temp_s0) + 4));
    }
    while (0);
    *((f32 *) (((char *) temp_v0_5) + 0x7C8)) = (f32) (*((f32 *) (((char *) temp_v0_5) + 0x7BC)));
  }
  if ((!((*((u16 *) (((char *) temp_s0) + 0x14))) & 7)) && (((u8) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A1)))) < 2U))
  {
    temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x714)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x718)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x71C)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_6 + 2) & 0xFFFF)) >= 2U)
    {
      __repair_phase_storage.value = (temp_v0_6 & 0xFFFF) * 0x64;
      temp_v1_4 = (void *) __repair_phase_storage.value; temp_v1_4 = (void *) (((char *) temp_v1_4) + ((s32) D_8011F2F0));
      *((s16 *) (((char *) temp_v1_4) + 8)) = 0x40;
      *((s16 *) (((char *) temp_v1_4) + 6)) = 0x40;
      *((s16 *) (((char *) temp_v1_4) + 4)) = 0x40;
      *((s16 *) (((s8 *) (&D_8011F2F2)) + __repair_phase_storage.value)) = 0x40;
      *(D_8011F334 + __repair_phase_storage.value) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
      *((f32 *) (((s8 *) (&D_8011F338)) + __repair_phase_storage.value)) = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
      *((f32 *) (((s8 *) (&D_8011F33C)) + __repair_phase_storage.value)) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
      *((s16 *) (((s8 *) (&D_8011F32E)) + __repair_phase_storage.value)) = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
      *((s16 *) (((s8 *) (&D_8011F2FE)) + __repair_phase_storage.value)) = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
    }
    temp_v0_7 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x720)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x724)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x728)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_7 + 2) & 0xFFFF)) >= 2U)
    {
      temp_a0_2 = (temp_v0_7 & 0xFFFF) * 0x64;
      temp_v1_5 = temp_a0_2 + D_8011F2F0;
      *((s16 *) (((char *) temp_v1_5) + 8)) = 0x40;
      *((s16 *) (((char *) temp_v1_5) + 6)) = 0x40;
      *((s16 *) (((char *) temp_v1_5) + 4)) = 0x40;
      *((s16 *) (((s8 *) (&D_8011F2F2)) + temp_a0_2)) = 0x40;
      *(D_8011F334 + temp_a0_2) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
      *((f32 *) (((s8 *) (&D_8011F338)) + temp_a0_2)) = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
      *((f32 *) (((s8 *) (&D_8011F33C)) + temp_a0_2)) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
      *((s16 *) (((s8 *) (&D_8011F32E)) + temp_a0_2)) = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
      *((s16 *) (((s8 *) (&D_8011F2FE)) + temp_a0_2)) = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
    }
  }
}

