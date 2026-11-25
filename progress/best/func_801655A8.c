s32 func_8013EB20(s32, s32, f32, f32);
s32 func_8013EC48(s32, f32);
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F320[];
extern char D_8011F32E[];
extern char D_8011F350[];
void func_801655A8(s32 arg0)
{
  char *__base_D_8011F320;
  f32 sp10;
  int temp_s0;
  unsigned int temp_a0;
  f32 temp_ft0;
  register u32 temp_s0_2;
  u32 temp_s0_3;
  unsigned long temp_v1;
  register int temp_v1_3;
  u16 temp_v0;
  s32 temp_v1_2;
  volatile int pad;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  if (__base_D_8011F320)
  {
    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    __repair_phase_storage.pointer = *((volatile s32 *) (D_8011F350 + temp_v1));
    temp_v1_2 = *((volatile u16 *) (D_8011F32E + temp_v1));
  }
  else
  {
    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    __repair_phase_storage.pointer = *((volatile s32 *) (D_8011F350 + temp_v1));
    temp_v1_2 = *((volatile u16 *) (D_8011F32E + temp_v1));
  }
  if (temp_v1_2 != 1)
  {
    if (2 <= temp_v1_2)
    {
      temp_s0 = arg0 & 0xFFFF;
      temp_s0_3 = 2;
      if (temp_v1_2 != temp_s0_3)
      {
        return;
      }
      sp10 = 0.0f;
      temp_s0_2 = temp_s0 * 0x64;
      *(D_8011F2FC + ((u32) temp_s0_2)) = (*(D_8011F2FC + temp_s0_2)) - 1;
      func_8013EB20(temp_s0, __repair_phase_storage.pointer, sp10, 0.001f);
      if (((u8) (*(D_8011F2FC + temp_s0_2))) < 5U)
      {
        *(D_8011F2FD + temp_s0_2) = 2;
        func_8013E49C(*((u16 *) (((char *) __repair_phase_storage.pointer) + 0x76)));
      }
    }
    else
    {
      temp_s0_3 = arg0 & 0xFFFF;
      if (((unsigned) temp_v1_2) != 0)
      {
        return;
      }
      sp10 = (-(*((f32 *) (((char *) __repair_phase_storage.pointer) + 0x10)))) * 0.2f;
      func_8013EB20(temp_s0_3, __repair_phase_storage.pointer, (-(*((f32 *) (((char *) __repair_phase_storage.pointer) + 8)))) * 0.2f, (-(*((f32 *) (((char *) __repair_phase_storage.pointer) + 0xC)))) * 0.15f);
      temp_v1_3 = temp_s0_3 * 0x64;
      *(D_8011F2FC + temp_v1_3) = (*(D_8011F2FC + temp_v1_3)) + 0xC;
      temp_v0 = (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0x14))) - 1;
      *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x14)) = temp_v0;
      if ((s16) temp_v0 < 0)
      {
        *((u16 *) (D_8011F32E + temp_v1_3)) = 1;
      }
    }
  }
  else
  {
    __repair_phase_storage.value = temp_a0 * 0x64;
    temp_a0 = arg0 & 0xFFFF;
    __base_D_8011F320 = D_8011F320;
    temp_ft0 = *((f32 *) (D_8011F320 + __repair_phase_storage.value));
    func_8013EC48(temp_a0, temp_ft0 + ((4.0f - temp_ft0) * 0.2f));
    if ((*((f32 *) (__base_D_8011F320 - (-__repair_phase_storage.value)))) > 3.9f)
    {
      *((u16 *) (D_8011F32E + __repair_phase_storage.value)) = 2;
    }
  }
}

