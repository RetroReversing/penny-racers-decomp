#include "common_local_source_339302417213.h"

extern char D_8011F2F0[];
extern char D_8011F2FD[];
typedef struct { unsigned char pad_0[12]; unsigned char field_C; unsigned char pad_D[11]; float field_18; float field_1C; float field_20; unsigned char pad_24[12]; float field_30; float field_34; float field_38; unsigned char pad_3C[8]; float field_44; float field_48; float field_4C; } __repair_record_temp_v1;
void func_80142894(s32 arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_a0 = (arg0 & 0xFFFF) * 0x64;
  temp_v1 = (char *) temp_a0; temp_v1 += (s32) (&D_8011F2F0);
  ((__repair_record_temp_v1*)temp_v1)->field_44 = (f32) ((((__repair_record_temp_v1*)temp_v1)->field_44) * 0.95f);
  ((__repair_record_temp_v1*)temp_v1)->field_48 -= 0.5f;
  ((__repair_record_temp_v1*)temp_v1)->field_4C = (f32) ((((__repair_record_temp_v1*)temp_v1)->field_4C) * 0.95f);
 do { ((__repair_record_temp_v1*)temp_v1)->field_18 += ((__repair_record_temp_v1*)temp_v1)->field_44; ((__repair_record_temp_v1*)temp_v1)->field_1C += ((__repair_record_temp_v1*)temp_v1)->field_48; ((__repair_record_temp_v1*)temp_v1)->field_20 += ((__repair_record_temp_v1*)temp_v1)->field_4C; ((__repair_record_temp_v1*)temp_v1)->field_30 = (f32) ((((__repair_record_temp_v1*)temp_v1)->field_30) * 0.95f); ((__repair_record_temp_v1*)temp_v1)->field_34 = (f32) ((((__repair_record_temp_v1*)temp_v1)->field_34) * 0.95f); ((__repair_record_temp_v1*)temp_v1)->field_38 = (f32) ((((__repair_record_temp_v1*)temp_v1)->field_38) * 0.95f); ((__repair_record_temp_v1*)temp_v1)->field_C -= 5; } while (0);
  if (((u8) (((__repair_record_temp_v1*)temp_v1)->field_C)) < 0xAU)
  {
    *(D_8011F2FD + temp_a0) = 2;
  }
}
