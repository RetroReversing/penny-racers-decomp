extern u8 D_80126FF6;
extern s32 D_801C57A0;
extern s32 D_801C57B0;
typedef struct 
{
  int value;
} __repair_field_0;
void func_8019E400(void **arg0)
{
  void *temp_v1;
  void *__repair_phase_temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  if (temp_v1 || temp_v1_5)
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    ((__repair_field_0 *) temp_v1)->value = 0xE7000000;
    *((s32 **) (((char *) temp_v1) + 4)) = NULL;
  }
  else
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    ((__repair_field_0 *) temp_v1)->value = 0xE7000000;
    *((s32 **) (((char *) temp_v1) + 4)) = NULL;
  }
  if (D_80126FF6 == 0)
  {
    __repair_phase_temp_v1 = *arg0;
    ((__repair_field_0 *) __repair_phase_temp_v1)->value = 0x03800010;
    *arg0 = __repair_phase_temp_v1 + 8;
    *((s32 **) (((char *) __repair_phase_temp_v1) + 4)) = &D_801C57A0;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    ((__repair_field_0 *) temp_v1_3)->value = 0xED000000;
    *((s32 *) (((char *) (*arg0)) + 4)) = 0x3BC3BC;
  }
  else
  {
    if (temp_v1_5)
    {
      temp_v1_4 = *arg0;
    }
    else
    {
      temp_v1_4 = *arg0;
    }
    do
    {
      *arg0 = temp_v1_4 + 8;
    }
    while (0);
    ((__repair_field_0 *) temp_v1_4)->value = 0x03800010;
    *((s32 **) (((char *) temp_v1_4) + 4)) = &D_801C57B0;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    do
    {
      ((__repair_field_0 *) temp_v1_5)->value = 0xED0F012C;
      *((s32 *) (((char *) (*arg0)) + 4)) = 0x2CC290;
    }
    while (0);
  }
}

