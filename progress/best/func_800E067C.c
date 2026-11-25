extern f64 D_800E1E70;
extern u8 D_8011F2F1[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F300;
extern Slot_8011F300 D_8011F300[];
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F334;
extern s32 D_8011F338;
extern s32 D_8011F33C;
extern s32 D_8011F340;
extern u16 D_80233EC0;
extern u16 func_800E1850;
void func_800E067C(void)
{
  s16 temp_v1_6;
  s16 temp_v1_4;
  s16 temp_v1_2;
  s32 temp_a0;
  int temp_v0_3;
  unsigned long var_v0;
  s32 var_v1;
  s16 __repair_narrow_var_v1;
  u16 var_a1;
  void *temp_v0_2;
  union 
  {
    void *pointer;
    u32 value;
  } __repair_phase_storage;
  void *temp_v1_5;
  var_a1 = func_800E1850;
  var_v0 = var_a1 & 0xFFFF;
  loop_1:
  temp_a0 = var_v0 * 0x64;

  var_v1 = var_a1 & 0xFFFF;
  if ((*(D_8011F2F1 + temp_a0)) == 2)
  {
    __repair_phase_storage.pointer = *((void **) (((char *) (*((&D_8011F340) + ((unsigned) temp_a0)))) + 4));
    do
    {
      if ((__repair_phase_storage.pointer != NULL) && ((temp_v0_2 = *((void **) (((char *) __repair_phase_storage.pointer) + 4)), temp_v0_2 != NULL)))
      {
        __repair_phase_storage.pointer = *((void **) (((char *) temp_v0_2) + 4)); temp_v1_2 = *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x50));
        *((&D_8011F334) + temp_a0) = (f32) (((f64) (*((&D_8011F308) + temp_a0))) + ((((f64) ((*((s16 *) (((char *) __repair_phase_storage.pointer) + 0x40))) - temp_v1_2)) * D_800E1E70) + ((f64) temp_v1_2))); __repair_phase_storage.pointer = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a0))) + 4)))) + 4)))) + 4));
        do
        {
          __repair_narrow_var_v1 = (s16) (*((s16 *) (((char *) __repair_phase_storage.pointer) + 0x52)));
          *((&D_8011F338) + temp_a0) = (f32) (((((f64) ((*((s16 *) (((char *) __repair_phase_storage.pointer) + 0x42))) - __repair_narrow_var_v1)) * D_800E1E70) + ((f64) __repair_narrow_var_v1)) + ((f64) (*((&D_8011F30C) + temp_a0)))); temp_v1_5 = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a0))) + 4)))) + 4)))) + 4));
        }
        while (0);
        temp_v1_6 = *((s16 *) (((char *) temp_v1_5) + 0x54)); var_v1 = var_a1 & 0xFFFF;
        *((&D_8011F33C) + temp_a0) = (f32) (((((f64) ((*((s16 *) (((char *) temp_v1_5) + 0x44))) - temp_v1_6)) * D_800E1E70) + ((f64) temp_v1_6)) + ((f64) (*((&D_8011F310) + temp_a0))));
      }
      else
      {
        temp_v0_3 = var_v1 * 0x64;
        *((&D_8011F338) + temp_v0_3) = *((&D_8011F30C) + temp_v0_3);
        *((&D_8011F334) + temp_v0_3) = *((&D_8011F308) + temp_v0_3);
        *((&D_8011F33C) + temp_v0_3) = *((&D_8011F310) + temp_v0_3); var_v1 = var_a1 & 0xFFFF;
      }
    }
    while (0);
  }
  __repair_phase_storage.value = (unsigned short) var_v1;
  __repair_phase_storage.value = var_a1 & 0xFFFF;
  var_a1 = D_8011F300[__repair_phase_storage.value].f0;
  if (__repair_phase_storage.value != 0xFFFF)
  {
    var_v0 = var_a1 & 0xFFFF;
    if (__repair_phase_storage.value >= ((u16) D_80233EC0))
    {
      goto loop_1;
    }
  }
}

