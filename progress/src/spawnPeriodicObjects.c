s32 objCreate(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u32 func_801FA38C(s32);
typedef struct { u16 f0; u16 f2; u16 f4; u16 f6; u16 f8; u8 pad[0x34]; u16 f3E; u8 pad2[0x24]; } Rec_8011F2F0;
extern Rec_8011F2F0 D_8011F2F0[];
extern u16 D_8018D660;
extern s32 D_802393D4[];
extern s32 func_80157F6C[];
extern s32 func_801580AC[];

/* Counts ticks for the given slot and, every 11 ticks, spawns up to two objects and marks each one as spawned. */ void spawnPeriodicObjects(u16 slot)
{
  u16 i;
  s32 objIndex;

  if (D_8011F2F0[slot].f3E == 0)
  {
    D_8018D660 = 0;
    D_8011F2F0[slot].f3E = 1;
  }
  D_8018D660++;
  if (D_8018D660 >= 11)
  {
    for (i = 0; i < 2; i++)
    {
      objIndex = objCreate(0, 0x1E, 1, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1800.0f, -260.0f, (f32)(func_801FA38C(0) % 1800) + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
      if ((u16)(objIndex + 2) < 2)
      {
        break;
      }
      D_8011F2F0[(u16)objIndex].f2 = D_8011F2F0[(u16)objIndex].f4 = D_8011F2F0[(u16)objIndex].f6 = D_8011F2F0[(u16)objIndex].f8 = 0x40;
      objIndex = objCreate(0, 0x1E, 1, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1200.0f, -260.0f, (f32)(func_801FA38C(0) % 1800) + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
      if ((u16)(objIndex + 2) < 2)
      {
        break;
      }
      D_8011F2F0[(u16)objIndex].f2 = D_8011F2F0[(u16)objIndex].f4 = D_8011F2F0[(u16)objIndex].f6 = D_8011F2F0[(u16)objIndex].f8 = 0x40;
    }
    D_8018D660 = 0;
  }
}
