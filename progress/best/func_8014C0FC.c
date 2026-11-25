extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_802E6CB8[];
inline static void *inline_fn(void *arg0)
{
  return arg0 + 8;
}

inline static void *inline_fn2(void *arg0)
{
  return arg0;
}

void func_8014C0FC(void **arg0, s32 arg1)
{
  void *temp_a2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  __repair_phase_storage.pointer = *arg0;
  *arg0 = inline_fn(__repair_phase_storage.pointer);
  ((s32 *) __repair_phase_storage.pointer)[0] = 0xB6000000;
  ((s32 *) __repair_phase_storage.pointer)[1] = 0x2000;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  do
  {
    ((s32 *) temp_a2)[0] = 0xFA000000;
    do
    {
      __repair_phase_storage.value = (arg1 & 0xFFFF) * 0x64;
      ((s32 *) temp_a2)[1] = (s32) ((*((u8 *) (D_8011F2FC + __repair_phase_storage.value))) | (~0xFF));
    }
    while (0);
  }
  while (0);
  do
  {
    temp_v1_2 = *arg0;
  }
  while (0);
  *arg0 = temp_v1_2 + 8;
  do
  {
    ((s32 *) temp_v1_2)[0] = 0xFD88001F;
    ((s32 *) temp_v1_2)[1] = (s32) D_802E6CB8; temp_v1_3 = *arg0;
    *arg0 = 8 + temp_v1_3;
  }
  while (0);
  ((s32 *) temp_v1_3)[0] = 0xF5880800;
  do
  {
    ((s32 *) temp_v1_3)[1] = 0x07018050;
 do { temp_v1_4 = *arg0; *arg0 = temp_v1_4 + 8; ((s32 *) temp_v1_4)[0] = 0xE6000000; ((s32 *) temp_v1_4)[1] = 0; do { temp_v1_5 = *arg0; *arg0 = temp_v1_5 + 8; } while (0); ((s32 *) temp_v1_5)[0] = 0xF4000000; do { ((s32 *) temp_v1_5)[1] = 0x0707C0FC; temp_v1_6 = *arg0; *arg0 = 8 + temp_v1_6; ((s32 *) temp_v1_6)[0] = 0xE7000000; ((s32 *) temp_v1_6)[1] = 0; do { temp_v1_7 = *arg0; do { *arg0 = inline_fn(temp_v1_7); ((s32 *) temp_v1_7)[0] = 0xF5880800; } while (0); ((s32 *) temp_v1_7)[1] = 0x18050; temp_v1_8 = *arg0; *arg0 = inline_fn(inline_fn2(temp_v1_8)); ((s32 *) temp_v1_8)[0] = 0xF2000000; } while (0); ((s32 *) temp_v1_8)[1] = 0x7C0FC; temp_v1_9 = *arg0; *arg0 = temp_v1_9 + 8; } while (0); ((s32 *) temp_v1_9)[0] = (s32) (((*((u16 *) (D_8011F32E + __repair_phase_storage.value))) & 0xFFF) | ((short) 0xF2000000)); } while (0);
    ((s32 *) temp_v1_9)[1] = 0x7C0FC;
  }
  while (0);
}
