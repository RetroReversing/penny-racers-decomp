s32 func_8021F6A0(s32);
extern u8 D_800DB1B8[];
extern s32 D_8011F32E;
inline static char *inline_fn(s32 *arg0, s32 arg1, int arg2)
{
  return ((char *) arg0) + (arg1 * arg2);
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 * 0x64;
}

unsigned int func_801FD23C(s32 arg0)
{
  u16 *state;
  union 
  {
    s16 *pointer;
    s32 value;
  } __repair_phase_storage;
  register u16 *pos;
  s32 idx;
  u16 temp;
 do { idx = arg0 & 0xFFFF; __repair_phase_storage.pointer = (s16 *) (((char *) (D_800DB1B8)) + 0x2110); pos = (u16 *) (((char *) (D_800DB1B8)) + 0x2128); switch (*((u16 *) inline_fn(&D_8011F32E, idx, 0x64))) { case 0: func_8021F6A0(1); *((s16 *) (((char *) (D_800DB1B8)) + 0x2114)) = 0xA0; *((s16 *) (((char *) (D_800DB1B8)) + 0x2116)) = 0x78; *((u16 *) (((char *) (&D_8011F32E)) + inline_fn2((int) idx))) = 1; return; case 1: if ((*__repair_phase_storage.pointer) < 0xA0) { *__repair_phase_storage.pointer = (*__repair_phase_storage.pointer) + 1; } else { *((u16 *) (((char *) (&D_8011F32E)) + inline_fn2(idx))) = 2; } break; case 2: if ((*__repair_phase_storage.pointer) > 0) { *__repair_phase_storage.pointer = (*__repair_phase_storage.pointer) - ((long long) 1); } else { *((u16 *) (((char *) (&D_8011F32E)) + inline_fn2(idx))) = 1; } break; } pos[0] = idx; __repair_phase_storage.value = (u16) ((u16 *) (((char *) (D_800DB1B8)) + 0x2128))[-6]; do { pos[1] = pos[-5]; *((s16 *) (pos + 2)) = __repair_phase_storage.value + 0xA0; *((s16 *) (pos + 3)) = pos[-5] + 0x78; } while (0); } while (0);
}
