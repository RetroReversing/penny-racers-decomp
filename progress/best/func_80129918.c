s32 func_80127AB0(void *, void *, s32, f32, f32, f32, f32, f32, f32, s32);
s32 func_80129348(void *, void *, f32, f32, f32);
extern u8 D_8011F2F0[];
typedef struct 
{
  unsigned char pad_0[1];
  unsigned char field_1;
  unsigned char field_2;
  unsigned char field_3;
  unsigned short field_4;
  unsigned char pad_6[2];
  float field_8;
  float field_C;
  float field_10;
} __repair_record_arg0;
void func_80129918(void *arg0, f32 arg1, f32 arg2_in, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  f32 arg2;
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fs0;
  f32 var_fs1;
  f32 var_fs2;
  f32 __repair_var_fs2_1;
  s32 temp_v0;
  s32 temp_v1;
  u8 temp_s3;
  u8 temp_s4;
  u8 var_s1;
  s32 var_s2;
  void *temp_s5;
  void *temp_s6;
  arg2 = arg2_in;
  if (arg2)
  {
    var_s2 = 0;
    var_s1 = 0;
    var_fs0 = arg4;
    var_fs1 = arg5;
    var_fs2 = arg6;
    temp_v0 = func_80129348(arg0 + 4, arg0 + 6, arg1, arg2, arg3) & 0xFF;
  }
  else
  {
    var_s2 = 0;
    var_s1 = 0;
    var_fs0 = arg4;
    var_fs1 = arg5;
    var_fs2 = arg6;
    temp_v0 = func_80129348(arg0 + 4, arg0 + 6, arg1, arg2, arg3) & 0xFF;
  }
  if (((temp_v0 == 0) | (temp_v0 == 2)) != 0)
  {
    ((__repair_record_arg0 *) arg0)->field_8 = (f32) (var_fs0 + ((__repair_record_arg0 *) arg0)->field_8);
    ((__repair_record_arg0 *) arg0)->field_C = (f32) (var_fs1 + ((__repair_record_arg0 *) arg0)->field_C);
    ((__repair_record_arg0 *) arg0)->field_10 = (f32) (var_fs2 + ((__repair_record_arg0 *) arg0)->field_10);
    do
    {
      {
        ((__repair_record_arg0 *) arg0)->field_1 = 0U;
        ((__repair_record_arg0 *) arg0)->field_2 = 0U;
        return;
      }
    }
    while (0);
  }
  temp_s6 = arg0 + 4;
  temp_s5 = arg0 + 6;
  loop_3:
  func_80127AB0(arg0, (((__repair_record_arg0 *) arg0)->field_4 * 0x64) + D_8011F2F0, 0x41400000, arg1, arg2, arg3, var_fs0, var_fs1, var_fs2, 1);

  temp_fv1 = ((__repair_record_arg0 *) arg0)->field_8;
  temp_ft0 = ((__repair_record_arg0 *) arg0)->field_C;
  temp_fv0 = ((__repair_record_arg0 *) arg0)->field_10;
  var_fs1 = temp_ft0 - arg2;
  var_fs0 = temp_fv1 - arg1;
  __repair_var_fs2_1 = temp_fv0 - arg3;
  do
  {
    temp_s3 = var_s2 | ((__repair_record_arg0 *) arg0)->field_1;
  }
  while (0);
  var_s2 = temp_s3;
  temp_s4 = var_s1 + ((__repair_record_arg0 *) arg0)->field_2;
  var_s1 = temp_s4;
  if (((u16) ((__repair_record_arg0 *) arg0)->field_2) != 1)
  {
    if (((__repair_record_arg0 *) arg0)->field_3 == 0)
    {
      temp_v1 = func_80129348(temp_s6, temp_s5, temp_fv1, ((__repair_record_arg0 *) arg0)->field_C, temp_fv0) & 0xFF;
      do
      {
        if (temp_v1 != 0)
        {
          if (temp_v1 == 2)
          {
            func_80127AB0(arg0, (((__repair_record_arg0 *) arg0)->field_4 * 0x64) + D_8011F2F0, 0x41400000, arg1, arg2, arg3, var_fs0, var_fs1, __repair_var_fs2_1, 1);
            temp_fv1_2 = ((__repair_record_arg0 *) arg0)->field_8; temp_ft0_2 = ((__repair_record_arg0 *) arg0)->field_C; temp_fv0_2 = ((__repair_record_arg0 *) arg0)->field_10; var_fs1 = temp_ft0_2 - arg2; var_fs0 = temp_fv1_2 - arg1; var_s2 = (*((__repair_record_arg0 *) arg0)).field_1 | temp_s3; var_s1 = ((__repair_record_arg0 *) arg0)->field_2 + temp_s4; var_fs2 = temp_fv0_2 - arg3;
            if (((__repair_record_arg0 *) arg0)->field_2 != 0)
            {
              if (((__repair_record_arg0 *) arg0)->field_3 == 0)
              {
                do
                {
                  func_80129348(temp_s6, temp_s5, temp_fv1_2, temp_ft0_2, temp_fv0_2);
                }
                while (0);
              }
              goto loop_3;
            }
          }
          else
          {
            goto loop_3;
          }
        }
      }
      while (0);
    }
    else
    {
      goto loop_3;
    }
  }
  {
    if (arg5)
    {
      ((__repair_record_arg0 *) arg0)->field_1 = var_s2;
      ((__repair_record_arg0 *) arg0)->field_2 = var_s1;
    }
    else
    {
      ((__repair_record_arg0 *) arg0)->field_1 = var_s2;
      ((__repair_record_arg0 *) arg0)->field_2 = var_s1;
    }
  }
}

