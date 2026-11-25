s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F2F0[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F304;
extern Slot_8011F304 D_8011F304[];
extern s32 D_8011F350;
extern s32 D_8018D6C0;
extern s32 D_8018D6C4;
extern s32 D_8018D6D7;
extern s32 D_802396AC;
extern s32 func_80160B68;
extern s32 func_801610E0;
void func_80160930(void *arg0)
{
  s16 temp_v0_3;
  s32 temp_s0_2;
  s32 temp_s1_2;
  s32 temp_v0;
  s32 temp_v0_2;
  unsigned short temp_v1;
  s32 temp_v1_2;
  u16 temp_s0;
  void *temp_a1;
  void *temp_s1;
  if (temp_s1 || arg0)
  {
    temp_s1 = ((*((u16 *) (((char *) arg0) + 2))) * 0x64) + D_8011F2F0;
  }
  else
  {
    temp_s1 = ((*((u16 *) (((char *) arg0) + 2))) * 0x64) + D_8011F2F0;
  }
  if ((((*((s32 *) (((char *) arg0) + 0x898))) == 1) && (!((*((u16 *) (((char *) arg0) + 0x560))) & 0x28))) && ((temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, temp_s0 != 0xFFFF)))
  {
    temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x52, 0, &D_802396AC, &func_80160B68, &func_801610E0, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x20)), *((f32 *) (((char *) temp_s1) + 0x24)), *((f32 *) (((char *) temp_s1) + 0x28)), *((f32 *) (((char *) temp_s1) + 0x2C)), *((f32 *) (((char *) temp_s1) + 0x30)), *((f32 *) (((char *) temp_s1) + 0x34)), *((f32 *) (((char *) temp_s1) + 0x38)));
    if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
    {
      func_8013E49C(temp_s0);
    }
    else
    {
      temp_s0_2 = temp_v0 & 0xFFFF;
      temp_s1_2 = temp_v0_2 & 0xFFFF;
      do
      {
        func_8013E818(temp_s0_2, temp_s1_2, 0, 0, 0, 0, 0x258);
      }
      while (0);
      temp_v1 = temp_s0_2 * 0x7C;
      *((s32 *) (((s8 *) (&D_8018D6C4)) + temp_v1)) = arg0;
      temp_a1 = (void *) temp_v1;
 do { temp_a1 = (void *) (((char *) temp_a1) + ((s32) (&D_8018D6C0))); *((s8 *) (((char *) temp_a1) + 0x19)) = 0xFF; *((s8 *) (((char *) temp_a1) + 0x18)) = 0xFF; *((s8 *) (((s8 *) (&D_8018D6D7)) + temp_v1)) = 0xFF; } while (0);
      *((temp_v1 + ((s32 *) (((s8 *) (&D_8018D6C0)) + 0x67))) + (*((u16 *) (((char *) arg0) + 4)))) = 1;
      *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      do { *((u16 *) (((char *) arg0) + 0x560)) = (u16) ((*((u16 *) (((char *) arg0) + 0x560))) | 0x20);
      temp_v1_2 = temp_s1_2 * 0x64;
      *((s32 *) (((s8 *) (&D_8011F350)) + (D_8011F304[temp_s1_2].f0 * 0x64))) = *((s32 *) (((s8 *) (&D_8011F350)) + temp_v1_2));
      temp_v0_3 = *((s16 *) (((char *) arg0) + 0x55E));
      if (temp_v0_3 > 0)
      {
        *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_3 - 1);
      } } while (0);
    }
  }
}
