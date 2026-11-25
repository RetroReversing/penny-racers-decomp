extern s16 D_8022A772;
extern s32 D_8022AD0C;
inline static void *inline_fn(void *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_80222988(void *arg0)
{
  f32 var_ft0;
  f32 var_fv0;
  s32 var_a1;
  u16 temp_v1;
  union 
  {
    void *pointer;
    unsigned int value;
  } __repair_phase_storage;
  void *var_v0;
  var_a1 = 0;
  if ((*((u8 *) (((char *) arg0) + 0x778))) == 0)
  {
    __repair_rows:
    {
      temp_v1 = *((&D_8022A772) + (var_a1 * 0x23c));
      if (temp_v1 != 0xFFFF)
      {
        do
        {
          {
            __repair_phase_storage.pointer = arg0 + (var_a1 * 8);
          }
          if (temp_v1 != (*((u16 *) (((char *) arg0) + 2))))
          {
            *((f32 *) (((char *) __repair_phase_storage.pointer) + 0x5B4)) = (f32) ((*((f32 *) (((char *) __repair_phase_storage.pointer) + 0x5B4))) * (*((f32 *) (((char *) arg0) + 0x5A4))));
          }
        }
        while (0);
      }
      if (__repair_phase_storage.pointer)
      {
        var_a1 += 1;
      }
      else
      {
        var_a1 += 1;
      }
    }

    if (var_a1 < 7)
    {
      goto __repair_rows;
    }
    __repair_phase_storage.value = (u8) (*((u8 *) (((char *) arg0) + 0x5F2)));
    if ((*((s32 *) (((char *) arg0) + 0x59C))) > (*((&D_8022AD0C) + (((u8) __repair_phase_storage.value) * 0x23c))))
    {
      var_v0 = inline_fn(arg0, ((u8) __repair_phase_storage.value) * ((unsigned long long) 8));
      var_ft0 = *((f32 *) (((char *) var_v0) + 0x5B8));
      var_fv0 = ((1.0f - var_ft0) * (*((f32 *) (((char *) arg0) + 0x5A8)))) * 0.5f;
    }
    else
    {
      var_v0 = arg0 + ((*((u8 *) (((char *) arg0) + ((char) 0x5F2)))) * 8);
      var_ft0 = *((f32 *) (((char *) var_v0) + 0x5B8));
      var_fv0 = (1.0f - var_ft0) * (*((f32 *) (((char *) arg0) + 0x5A8)));
    }
    *((f32 *) (((char *) var_v0) + 0x5B8)) = (f32) (var_fv0 + var_ft0);
  }
}

