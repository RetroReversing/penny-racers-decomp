static inline s32 is_invalid(u16 h) { return (u16)(h + 2) < 2; }
typedef struct { void *owner; u8 pad4[0x5F]; u8 flag[9]; f32 timer; u8 pad70[0xC]; } Slot;
extern Slot D_8018D6C4[];
typedef struct { f32 unk0; u8 pad[0x78]; } Row7C_f;
typedef struct { void *unk0; u8 pad[0x78]; } Row7C_p;

u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364();
void func_8013E640(s32, s32, void *, s32, s32, f32, s32, f32, f32, f32, s32);
void func_801D7028(s32, s32);
void func_80164740();
extern u8 D_8011F2F0[];
extern u8 D_8016850C[];

void func_801644F0(u8 *arg0)
{
  u8 *rec;
  u16 flags;
  s32 *s5;
  u32 count;
  s32 full;
  u16 id;
  u16 handle;

  rec = D_8011F2F0 + *(u16 *)(arg0 + 2) * 0x64;
  flags = *(u16 *)(arg0 + 0x560);
  s5 = *(s32 **)(D_8011F2F0 + *(u16 *)(arg0 + 2) * 0x64 + 0x244);
  count = flags & 7;
  if (*(s32 *)(arg0 + 0x898) == 1 && !(((*(u16 *)(arg0 + 0x560) >> 3) & 1) | (full = count >= 7)))
  {
    id = func_8013E364();
    if (id != 0xFFFF)
    {
      handle = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, D_8016850C, func_80164740, 0,
          *(f32 *)(rec + 0x18), *(f32 *)(rec + 0x1C), *(f32 *)(rec + 0x20), 0, 0, 0,
          *(f32 *)(rec + 0x30), *(f32 *)(rec + 0x34), *(f32 *)(rec + 0x38));
      if ((u16)(handle + 2) < 2)
      {
        func_8013E49C(id);
        return;
      }
      *(u16 *)(arg0 + 0x560) = (*(u16 *)(arg0 + 0x560) & 0xF8) | (count + 1);
      func_8013E640(id, handle, arg0, 0, 0, 10.0f, 0, *(f32 *)(arg0 + 0x7C0) * 0.5f, *(f32 *)(arg0 + 0x7C4),
          *(f32 *)(arg0 + 0x7C8) * 0.5f, 3);
      D_8018D6C4[id].flag[*(u16 *)(arg0 + 4)] = 1;
      D_8018D6C4[id].timer = 13.0f;
      D_8018D6C4[id].owner = arg0;
      func_801D7028(handle, 0x2B);
      if (*(s16 *)(arg0 + 0x55E) > 0)
      {
        *(s16 *)(arg0 + 0x55E) -= 1;
      }
      if (*(s16 *)(arg0 + 0x55E) == 0)
      {
        s5[1] = 0;
      }
    }
  }
}
