s16 func_8012913C(u16, s32, s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u8 D_8018D6C0[];
typedef struct { u16 f0; u8 pad[2286]; } Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
extern u8 D_8022AD5C[];
extern u16 D_80233EC0;

void func_8013E818(u16 arg0, u16 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, u16 arg6)
{
  u8 *t0;
  u8 *s0;
  s32 j;

  t0 = D_8011F2F0 + arg1 * 100;
  s0 = D_8018D6C0 + arg0 * 124;
  *(u8 **) (D_8011F350 + arg1 * 100) = s0;
  *(s16 *) (t0 + 8) = arg2;
  *(s16 *) (t0 + 6) = arg2;
  *(s16 *) (t0 + 4) = arg2;
  *(s16 *) (t0 + 2) = arg2;
  *(s32 *) (s0 + 8) = arg3;
  *(f32 *) (s0 + 0xC) = arg4;
  *(f32 *) (s0 + 0x10) = arg5;
  *(u16 *) (s0 + 0x14) = arg6;
  s0[0x16] = 0;
  *(s16 *) (s0 + 0x20) = func_8012913C(D_80233EC0, *(s32 *) (t0 + 0x18), *(s32 *) (t0 + 0x1C), *(s32 *) (t0 + 0x20));
  *(u16 *) (s0 + 0x22) = 0;
  s0[0x1D] = 0;
  s0[0x1E] = 0;
  *(s32 *) (s0 + 0x70) = 0;
  for (j = 0; j < 7; j++)
  {
    s0[j + 0x67] = 0;
    if (D_8022A772[j].f0 != 0xFFFF && 0.0f < *(f32 *) (D_8022AD5C + j * 2288))
    {
      s0[j + 0x60] = j;
    }
    else
    {
      s0[j + 0x60] = -1;
    }
  }
}
