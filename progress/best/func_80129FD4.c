inline static u16 __repair_inline(volatile unsigned short a)
{
  return a;
}

extern s16 D_8011F2F2;
extern u8 D_8011F340[];
extern void *D_801C7AB0;
extern u8 D_80233EC0;
typedef struct 
{
  u16 v;
} Field_u16;
typedef struct 
{
  u8 v;
} Field_u8;
inline static u16 *inline_fn(s32 *arg0, s32 arg1)
{
  return (u16 *) (((char *) (*(arg0 + ((arg1 & 0xFFFF) * 0x64)))) + 0xE);
}

void func_80129FD4(void *arg0, s32 arg1, s32 arg2)
{
  u16 *__base_D_80233EC0;
  s32 *__base_D_8011F340;
  s16 *__base_D_8011F2F2;
  s32 temp_a0;
  short temp_a0_2;
  s32 temp_v0_2;
  s32 temp_v0_4;
  s32 var_t1;
  s32 var_t1_2;
  s32 var_v1;
  u16 *temp_v0;
  u16 *temp_v1;
  u16 *temp_v1_6;
  s32 var_a3;
  unsigned int __repair_result_var_a3;
  volatile unsigned short var_a3_2;
  volatile unsigned short var_a3_3;
  u16 var_t0;
  u16 var_t0_2;
  u16 var_t0_3;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_7;
  void *temp_v1_8;
  do
  {
    arg1 &= 0xFFFF; var_a3 = ((Field_u16 *) (((char *) arg0) + 4))->v; var_t0 = ((Field_u16 *) (((char *) arg0) + 6))->v; var_v1 = var_a3 & 0xFFFF;
    do
    {
      {
        temp_a0 = var_v1 * 0x64; __base_D_8011F2F2 = &D_8011F2F2; temp_v0_4 = temp_a0 + __base_D_8011F2F2; temp_v1 = (arg2 * 2) + temp_v0_4;
        *temp_v1 |= 8;
        if (var_t0 == 0)
        {
          __base_D_8011F340 = D_8011F340; __repair_phase_storage.pointer = *(D_8011F340 + temp_a0);
          if ((*((u16 *) (((char *) __repair_phase_storage.pointer) + 0xA))) != 0xFFFF)
          {
            __repair_result_var_a3 = __repair_inline(*((u16 *) (((char *) __repair_phase_storage.pointer) + 0xA)));
          }
          else
          {
            var_a3 = *inline_fn(__base_D_8011F340, var_a3); var_t0 = 1;
          }
        }
        else
        {
          temp_v1_3 = *(__base_D_8011F340 + ((var_a3 & 0xFFFF) * 0x64));
          if (((Field_u16 *) (((char *) temp_v1_3) + 0xE))->v != 0xFFFF)
          {
            var_a3 = ((Field_u16 *) (((char *) temp_v1_3) + 0xE))->v;
          }
          else
          {
 do { var_a3 = *((u16 *) (((char *) (*(__base_D_8011F340 + (((var_a3 & 0xFFFF) & 0xFFu) * 0x64)))) + 0xA)); } while (0);
            var_t0 = 0;
          }
        }
        var_v1 = var_a3 & 0xFFFF;
      }
    }
    while (((Field_u16 *) (((char *) arg0) + 4))->v != var_a3);
    var_a3_2 = ((Field_u16 *) (((char *) arg0) + 4))->v; var_t0_2 = ((Field_u16 *) (((char *) arg0) + 6))->v; var_t1 = 0;
    loop_19:
    temp_a0_2 = var_a3_2 & 0xFFFF;

    temp_v0 = (arg2 * 2) + ((temp_a0_2 * 0x64) + __base_D_8011F2F2);
    *((arg2 * 2) + ((temp_a0_2 * 0x64) + __base_D_8011F2F2)) &= 0xFFF7;
  }
  while (0);
  __base_D_80233EC0 = &D_80233EC0;
  if (temp_a0_2 != (((*__base_D_80233EC0) + ((Field_u8 *) (((char *) D_801C7AB0) + 2))->v) - 1))
  {
    temp_v0_2 = var_a3_2 & 0xFFFF;
    if (var_t0_2 == 0)
    {
      if (__repair_phase_storage.pointer)
      {
        temp_v1_4 = *(__base_D_8011F340 + (temp_v0_2 * 0x64));
      }
      else
      {
        temp_v1_4 = *(__base_D_8011F340 + (temp_v0_2 * 0x64));
      }
      if (((Field_u16 *) (((char *) temp_v1_4) + 0xA))->v != 0xFFFF)
      {
        var_a3_2 = ((Field_u16 *) (((char *) temp_v1_4) + 0xA))->v;
        var_t1 += 1;
      }
      else
      {
        var_a3_2 = *inline_fn(__base_D_8011F340, var_a3_2);
        var_t0_2 = 1;
        var_t1 += 1;
      }
    }
    else
    {
      temp_v1_5 = *(__base_D_8011F340 + (temp_v0_2 * 0x64));
      if (((Field_u16 *) (((char *) temp_v1_5) + 0xE))->v != 0xFFFF)
      {
        var_a3_2 = ((Field_u16 *) (((char *) temp_v1_5) + 0xE))->v;
        var_t1 += 1;
      }
      else
      {
        var_a3_2 = *((u16 *) (((char *) (*(__base_D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64)))) + 0xA));
        var_t0_2 = 0;
        var_t1 += 1;
      }
    }
    if (((u32) (var_t1 & 0xFFFF)) <= (((u32) arg1) - 1))
    {
      goto loop_19;
    }
  }
  var_a3_3 = ((Field_u16 *) (((char *) arg0) + 4))->v;
  var_t0_3 = ((Field_u16 *) (((char *) arg0) + 6))->v;
  var_t1_2 = 0;
  for (;;)
  {
    __repair_phase_storage.value = var_a3_3 & 0xFFFF;
    temp_v1_6 = (arg2 * 2) + ((__repair_phase_storage.value * 0x64) + __base_D_8011F2F2);
    *temp_v1_6 &= 0xFFF7;
    if (__repair_phase_storage.value != (*(&D_80233EC0)))
    {
      temp_v0_4 = var_a3_3 & 0xFFFF;
      if (var_t0_3 == 0)
      {
        temp_v1_7 = *(__base_D_8011F340 + (temp_v0_4 * 0x64));
        if (((Field_u16 *) (((char *) temp_v1_7) + 8))->v != 0xFFFF)
        {
          do
          {
            var_a3_3 = ((Field_u16 *) (((char *) temp_v1_7) + 8))->v; var_t1_2 += 1;
          }
          while (0);
        }
        else
        {
          var_a3_3 = *((u16 *) (((char *) (*(__base_D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)))) + 0xC));
          var_t0_3 = 1;
          var_t1_2 += 1;
        }
      }
      else
      {
        temp_v1_8 = *(__base_D_8011F340 + (temp_v0_4 * 0x64));
        if (((Field_u16 *) (((char *) temp_v1_8) + 0xC))->v != 0xFFFF)
        {
          var_a3_3 = ((Field_u16 *) (((char *) temp_v1_8) + 0xC))->v;
          var_t1_2 += 1;
        }
        else
        {
          var_a3_3 = *((u16 *) (((char *) (*(__base_D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)))) + 8));
          var_t0_3 = 0;
          var_t1_2 += 1;
        }
      }
      if (((((u32) (var_t1_2 & 0xFFFF)) + 1) - 1) < ((u32) arg1))
      {
        continue;
      }
    }
    break;
  }

}
