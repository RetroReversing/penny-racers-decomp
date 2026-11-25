extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F320[];
extern u8 D_8011F324[];
extern u8 D_8011F328[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8011F350[];
extern u8 D_8018D6C0[];
extern u8 D_8018D6C4[];
extern u8 D_8018D6C8[];
extern u8 D_8018D6D4[];
extern u8 D_80239610[];
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E818(s32, s32, s32, s32, s32, s32, s32);
void func_801D7028(u16, s32);
void func_8015F33C(void);
void func_8015F7F8(void);
void func_8015FD64(void);
void func_8015E8E4(void *arg0)
{
  u8 *a;
  s32 t0;
  s32 t;
  s32 i;
  s32 __repair_phase_i;
  s32 __repair_result___repair_phase_i;
  u16 s2;
  u16 idx;
  if (a)
  {
    a = (u8 *) arg0;
  }
  else
  {
    a = (u8 *) arg0;
  }
  if (!((*((u16 *) (a + 0x560))) & 0x18))
  {
    t0 = func_8013E364();
    s2 = (u16) t0;
    if (s2 != 0xFFFF)
    {
      __repair_result___repair_phase_i = func_800DE41C(0, 0, 3, 0, 0x20, 1, NULL, func_8015F33C, NULL, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.0f, 0.0f, 0.0f);
      if (((u32) ((__repair_result___repair_phase_i + 2) & 0xFFFF)) >= 2U)
      {
        do
        {
          i = ((u16) t0) * 0x7C;
          *((u16 *) (D_8018D6D4 + i)) = 0x23;
          do
          {
            *((f32 *) (D_8018D6C8 + i)) = 1.0f;
          }
          while (0);
        }
        while (0);
        *((u8 **) (D_8018D6C4 + i)) = a;
        do
        {
          a[0x8D0] = 0xF0;
 do { *((u16 *) (a + 0x560)) = (*((u16 *) (a + 0x560))) | 0x10; } while (0);
        }
        while (0);
        idx = (u16) __repair_result___repair_phase_i;
        if (1)
        {
        }
        *((u8 **) (D_8011F350 + (((u16) __repair_result___repair_phase_i) * 0x64))) = D_8018D6C0 + i;
        do
        {
          if (a || i)
          {
            func_801D7028(*((u16 *) (a + 2)), 0x2C);
          }
          else
          {
            func_801D7028(*((u16 *) (a + 2)), 0x2C);
          }
        }
        while (0);
        if ((a[0x74C] < 5U) && ((t = func_8013E364(), s2 = (u16) t, s2 != 0xFFFF)))
        {
          __repair_phase_i = func_800DE41C(0, a[5], 1, 0, 0x5B, 0, D_80239610, func_8015F7F8, func_8015FD64, *((f32 *) (D_8011F308 + ((*((u16 *) (a + 2))) * 0x64))), (*((f32 *) (D_8011F30C + ((*((u16 *) (a + 2))) * 0x64)))) + 15.0f, *((f32 *) (D_8011F310 + ((*((u16 *) (a + 2))) * 0x64))), 0, 0, 0, 2.0f * ((float) (*((f32 *) (D_8011F320 + ((*((u16 *) (a + 2))) * 0x64))))), 2.0f * (*((f32 *) (D_8011F324 + ((*((u16 *) (a + 2))) * 0x64)))), 2.0f * (*((f32 *) (D_8011F328 + ((*((u16 *) (a + 2))) * 0x64)))));
          idx = (u16) __repair_phase_i;
          if (((u32) ((__repair_phase_i + 2) & 0xFFFF)) < 2U)
          {
            do
            {
              goto block_6;
            }
            while (0);
          }
          __repair_phase_i = idx * 0x64;
          *((f32 *) (D_8011F334 + __repair_phase_i)) = 16.0f;
          *((s32 *) (D_8011F338 + (idx * 0x64))) = 0;
          func_8013E818((u16) t, idx, 0x40, 0, 0, 0, 0x3C);
          *((u8 **) (D_8018D6C4 + (((u16) t) * 0x7C))) = a;
        }
      }
      else
      {
        block_6:
        func_8013E49C(s2);

      }
    }
  }
}
