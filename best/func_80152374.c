extern char D_8011F32E[];
extern char D_802E0CA0[];
void func_80152374(void **arg0, volatile int arg1)
{
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xFD48001F;
  *((s32 **) (((char *) temp_v1) + 4)) = &D_802E0CA0;
  temp_v1_2 = *arg0;
  *arg0 = temp_v1_2 + 8;
  *((s32 *) (((char *) temp_v1_2) + 0)) = 0xF5480800;
  *((s32 **) (((char *) temp_v1_2) + 4)) = (s32 *) 0x07018050;
  temp_v1_3 = *arg0;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 0)) = 0xE6000000;
  *((s32 **) (((char *) temp_v1_3) + 4)) = NULL;
  temp_v1_4 = *arg0;
  *arg0 = temp_v1_4 + 8;
  *((s32 *) (((char *) temp_v1_4) + 0)) = 0xF4000000;
  *((s32 **) (((char *) temp_v1_4) + 4)) = (s32 *) 0x0707C0FC;
  temp_v1_5 = *arg0;
  *arg0 = temp_v1_5 + 8;
  *((s32 *) (((char *) temp_v1_5) + 0)) = 0xE7000000;
  *((s32 **) (((char *) temp_v1_5) + 4)) = NULL;
  temp_v1_6 = *arg0;
  *arg0 = temp_v1_6 + 8;
  *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF5480800;
  *((s32 **) (((char *) temp_v1_6) + 4)) = (s32 *) 0x18050;
  temp_v1_7 = *arg0;
  *arg0 = temp_v1_7 + 8;
  *((s32 *) (((char *) temp_v1_7) + 0)) = 0xF2000000;
  *((s32 **) (((char *) temp_v1_7) + 4)) = (s32 *) 0x7C0FC;
  temp_v1_8 = *arg0;
  *arg0 = temp_v1_8 + 8;
  *((s32 *) (((char *) temp_v1_8) + 0)) = (s32) (((*(D_8011F32E + ((arg1 & 0xFFFF) * 0x64))) & 0xFFF) | 0xF2000000);
  *((s32 **) (((char *) temp_v1_8) + 4)) = (s32 *) 0x7C0FC;
}

