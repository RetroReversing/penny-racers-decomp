extern s32 D_800DE080;
extern u8 D_80126FF6;
extern u8 D_80168166;
extern s32 D_80183BE0;
void func_80210F70(void **arg0)
{
  void *temp_a2;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  temp_a2 = *arg0;
 do { *arg0 = temp_a2 + 8; *((s32 *) (((char *) temp_a2) + 0)) = 0xFD100000; *((void **) (((char *) temp_a2) + 4)) = (void *) ((D_80126FF6 << 0xC) + ((D_80168166 << 0xB) + ((s32)&D_80183BE0))); temp_v1 = *arg0; *arg0 = temp_v1 + 8; *((s32 *) (((char *) temp_v1) + 0)) = 0xF5100000; *((void **) (((char *) temp_v1) + 4)) = (void *) 0x07014050; temp_v1_2 = *arg0; *arg0 = temp_v1_2 + 8; *((s32 *) (((char *) temp_v1_2) + 0)) = 0xE6000000; *((void **) (((char *) temp_v1_2) + 4)) = NULL; temp_v1_3 = *arg0; *arg0 = temp_v1_3 + 8; *((s32 *) (((char *) temp_v1_3) + 0)) = 0xF3000000; *((void **) (((char *) temp_v1_3) + 4)) = (void *) 0x073FF100; temp_v1_4 = *arg0; *arg0 = temp_v1_4 + 8; *((s32 *) (((char *) temp_v1_4) + 0)) = 0xE7000000; *((void **) (((char *) temp_v1_4) + 4)) = NULL; temp_v1_5 = *arg0; *arg0 = temp_v1_5 + 8; *((s32 *) (((char *) temp_v1_5) + 0)) = 0xF5101000; *((void **) (((char *) temp_v1_5) + 4)) = (void *) 0x14050; temp_v1_6 = *arg0; *arg0 = temp_v1_6 + 8; } while (0);
  *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF2000000;
  *((void **) (((char *) temp_v1_6) + 4)) = (void *) 0x7C07C;
  temp_v1_7 = *((void **) (((char *) (&D_800DE080)) + 0x64));
  *((void **) (((char *) (&D_800DE080)) + 0x64)) = (void *) (temp_v1_7 + 8);
  *((s32 *) (((char *) temp_v1_7) + 0)) = 0xED210040;
  *((s32 *) (((char *) temp_v1_7) + 4)) = 0x49C104;
}
