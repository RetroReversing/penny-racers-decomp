s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E640(s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
s32 func_801D7028(s32, s32);
extern u8 D_8011F2F0[];
extern s32 D_8018D6C4;
typedef struct 
{
  u8 f0;
  u8 pad[30];
} Slot_8018D6D6;
extern Slot_8018D6D6 D_8018D6D6[];
extern s32 D_80239678;
extern s32 func_8016018C;
extern s32 func_801604F0;
int func_8015FEC0(void *arg0)
{
  s32 *__base_D_8018D6C4;
  s16 temp_v0_3;
  s32 temp_s0;
  s32 __repair_phase_temp_s0;
  s32 temp_s1_3;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v0_6;
  s32 var_s2;
  unsigned int temp_s1_2;
  u16 temp_s2;
  void *temp_s4;
  temp_s0 = *((s32 *) (((char *) arg0) + 0x898));
  if (((temp_s0 == 1) && (!((*((u16 *) (((char *) arg0) + 0x560))) & 0xF))) && ((temp_v0 = func_8013E364(), temp_s2 = temp_v0 & 0xFFFF, temp_s2 != 0xFFFF)))
  {
    temp_s4 = ((*((u16 *) (((char *) arg0) + 2))) * 0x64) + D_8011F2F0;
    temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s0, NULL, &func_8016018C, 0, *((f32 *) (((char *) temp_s4) + 0x18)), *((f32 *) (((char *) temp_s4) + 0x1C)), *((f32 *) (((char *) temp_s4) + 0x20)), 0, 0, 0, 0.0f, 0.0f, 0.0f);
    __repair_phase_temp_s0 = temp_v0 & 0xFFFF;
    if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
    {
      func_8013E49C(temp_s2);
      return;
    }
    do { func_8013E818(__repair_phase_temp_s0, temp_v0_2 & 0xFFFF, 0, 0, 0, 0, 0x258); } while (0);
    do
    {
      __base_D_8018D6C4 = &D_8018D6C4;
      *(__base_D_8018D6C4 + (__repair_phase_temp_s0 * 0x1f)) = arg0;
      *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
    }
    while (0);
    *((u16 *) (((char *) arg0) + 0x560)) = (u16) ((*((u16 *) (((char *) arg0) + 0x560))) | 7);
    temp_v0_3 = *((s16 *) (((char *) arg0) + 0x55E));
    if (temp_v0_3 > 0)
    {
      *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_3 - 1);
    }
    var_s2 = 0;
    for (;;)
    {
      if (arg0)
      {
        temp_v0_4 = func_8013E364();
        temp_s1_2 = temp_v0_4 & 0xFFFF;
      }
      else
      {
        temp_v0_4 = func_8013E364();
        temp_s1_2 = temp_v0_4 & 0xFFFF;
      }
      if (temp_s1_2 != 0xFFFF)
      {
        temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x51, 0x64, &D_80239678, &func_801604F0, 0, *((f32 *) (((char *) temp_s4) + 0x18)), *((f32 *) (((char *) temp_s4) + 0x1C)), *((f32 *) (((char *) temp_s4) + 0x20)), 0, 0, 0, 0.05f, 0.05f, 0.05f);
        do
        {
          temp_v0_4 = temp_v0_4 & 0xFFFF;
        }
        while (0);
        if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
        {
          func_8013E49C(temp_s1_2);
        }
        else
        {
          temp_s0 = temp_v0_2 & 0xFFFF;
          func_8013E640(temp_v0_4, temp_s0, arg0, 0x40, 0, 0, 0, 0, 0, 0, 0x258);
          temp_v0_6 = temp_v0_4 * 0x1f;
          *(__base_D_8018D6C4 + temp_v0_6) = arg0;
          D_8018D6D6[temp_v0_4].f0 = var_s2;
          do { func_801D7028(temp_s0, 0x32); } while (0);
          do
          {
            do
            {
              do
              {
                var_s2 += 1;
              }
              while (0);
            }
            while (0);
          }
          while (0);
          if (var_s2 >= 3)
          {
          }
          else
          {
            continue;
          }
        }
      }
      break;
    }

  }
}

