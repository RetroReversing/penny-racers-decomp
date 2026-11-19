#include "common_local_source_339302417317.h"

extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_802E0268[];

void func_80152198(void **arg0, s32 arg1)
{
  s32 temp_a3;
  void *temp_a2;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;

  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  ((s32 *) temp_v1)[0] = 0xB6000000;
  ((s32 *) temp_v1)[1] = 0x2000;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  ((s32 *) temp_a2)[0] = 0xFA000000;
  temp_a3 = (arg1 & 0xFFFF) * 0x64;
  ((s32 *) temp_a2)[1] = (s32) (*(u8 *) (D_8011F2FC + temp_a3) | ~0xFF);
  temp_v1_2 = *arg0;
  *arg0 = temp_v1_2 + 8;
  ((s32 *) temp_v1_2)[0] = 0xFD88001F;
  ((s32 *) temp_v1_2)[1] = (s32) D_802E0268;
  temp_v1_3 = *arg0;
  *arg0 = temp_v1_3 + 8;
  ((s32 *) temp_v1_3)[0] = 0xF5880800;
  ((s32 *) temp_v1_3)[1] = 0x07018050;
  temp_v1_4 = *arg0;
  *arg0 = temp_v1_4 + 8;
  ((s32 *) temp_v1_4)[0] = 0xE6000000;
  ((s32 *) temp_v1_4)[1] = 0;
  temp_v1_5 = *arg0;
  *arg0 = temp_v1_5 + 8;
  ((s32 *) temp_v1_5)[0] = 0xF4000000;
  ((s32 *) temp_v1_5)[1] = 0x0707C0FC;
  temp_v1_6 = *arg0;
  *arg0 = temp_v1_6 + 8;
  ((s32 *) temp_v1_6)[0] = 0xE7000000;
  ((s32 *) temp_v1_6)[1] = 0;
  temp_v1_7 = *arg0;
  *arg0 = temp_v1_7 + 8;
  ((s32 *) temp_v1_7)[0] = 0xF5880800;
  ((s32 *) temp_v1_7)[1] = 0x18050;
  temp_v1_8 = *arg0;
  *arg0 = temp_v1_8 + 8;
  ((s32 *) temp_v1_8)[0] = 0xF2000000;
  ((s32 *) temp_v1_8)[1] = 0x7C0FC;
  temp_v1_9 = *arg0;
  *arg0 = temp_v1_9 + 8;
  ((s32 *) temp_v1_9)[0] = (s32) ((*(u16 *) (D_8011F32E + temp_a3) & 0xFFF) | 0xF2000000);
  ((s32 *) temp_v1_9)[1] = 0x7C0FC;
}
