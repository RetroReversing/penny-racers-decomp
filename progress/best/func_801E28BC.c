extern u8 D_8011F2FD[];
extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_801E87E6;
extern u16 D_801E975E;
extern s16 D_801E9778;
extern s16 D_801E977A;
extern s16 D_801E979E;
inline static int inline_fn(unsigned int arg0)
{
  return (arg0 & 0xFFFF) * 0x64;
}

void func_801E28BC(unsigned int arg0)
{
  char * __repair_phase_storage_pointer;
  s32 __repair_phase_storage_value;
  u8 *__base_D_8011F350;
  u8 *__base_D_8011F350_arm;
  short __repair_constant = 0xA;
  s32 temp_v1;
  if (__base_D_8011F350)
  {
    __repair_phase_storage_pointer = (char *) (D_8011F32E + inline_fn(arg0));
    temp_v1 = *((u16 *) __repair_phase_storage_pointer);
    __repair_phase_storage_pointer = 0;
  }
  else
  {
    __repair_phase_storage_pointer = (char *) (D_8011F32E + inline_fn(arg0));
    temp_v1 = *((u16 *) __repair_phase_storage_pointer);
    __repair_phase_storage_pointer = 0;
  }
  switch (temp_v1)
  {
    case 0:
      D_801E979E = 0x19;
      D_801E975E = 0;
      do
    {
      D_801E9778 = 0; D_801E977A = __repair_constant;
 do { __repair_phase_storage_value = D_801E87E6 * 0x64; __base_D_8011F350_arm = D_8011F350; *((s16 *) ((__base_D_8011F350_arm + __repair_phase_storage_value) + 0xA)) = 0x15; *((s16 *) ((__base_D_8011F350_arm + __repair_phase_storage_value) + 0xC)) = 0x34; *((s16 *) ((__base_D_8011F350_arm + __repair_phase_storage_value) + 0xE)) = 0x116; *((s16 *) ((__base_D_8011F350_arm + __repair_phase_storage_value) + 0x10)) = 0x16; } while (0);
      *((s8 *) ((__base_D_8011F350_arm + __repair_phase_storage_value) + 9)) = 0x78;
      *((u16 *) (D_8011F32E + inline_fn(arg0))) = __repair_constant;
    }
    while (0);
      break;

    case 10:
      D_801E9778 = D_801E9778 + 1;
      if ((*((u16 *) (&D_801E9778))) >= 0x259)
    {
      *((u16 *) (D_8011F32E + inline_fn(arg0))) = 0x14;
    }
      break;

    case 20:
      D_8011F2FD[inline_fn(arg0)] = 4;
      D_8011F2FD[D_801E87E6 * 0x64] = 4;
      break;

  }

  if (D_801E975E < 0x20)
  {
    D_801E975E += 1;
    return;
  }
  D_801E975E = 0;
}
