s32 func_80149CC4(s32, s32, s32, void *);
extern s32 D_8021E22F;
extern s32 D_8021E230;
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 * arg1;
}

void func_8014B410(void)
{
  char *__repair_addr;
  s32 sp10;
  s32 temp_a0;
  s32 temp_a3_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_s0;
  volatile unsigned char var_t0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s8 var_a1;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  var_s0 = 0;
  var_a2 = 0;
  do
  {
    temp_a0 = inline_fn(var_s0, 0x110);
    __repair_phase_storage.pointer = temp_a0 + (&D_8021E22F);
    var_v0 = 0 * 0x10;
    loop_2:
    temp_v0 = (var_v0 + var_a2) * 2;

    *((&sp10) + var_a2) = *((u8 *) (((char *) ((temp_v0 + __repair_phase_storage.pointer) + (*((&D_8021E22F) + (temp_v0 + temp_a0))))) + 2));
    var_a2 += 1;
    var_v0 = var_a2 * 0x10;
    if (var_a2 < 8)
    {
      goto loop_2;
    }
    func_80149CC4(var_s0, 1, var_a2, __repair_phase_storage.pointer);
    var_a2_2 = 0;
    var_v0_2 = 0 * 0x10;
    loop_4:
    var_t0 = var_v0_2;

    temp_v0_2 = ((var_v0_2 + var_a2_2) * 2) + (var_s0 * 0x110);
    *((&D_8021E22F) + temp_v0_2) = 0;
    var_a1 = 0;
    if ((*((&(*((s32 *) 0x8021e22f))) + temp_v0_2)) > 0)
    {
      var_v0_3 = var_s0 * 0x11;
      loop_6:
      temp_a3_2 = var_v0_3 * 0x10;

      __repair_phase_storage.value = (var_t0 + var_a2_2) * 2;
      __repair_addr = (char *) ((__repair_phase_storage.value + (temp_a3_2 + (&D_8021E22F))) + var_a1);
      if ((*((s8 *) (((char *) __repair_addr) + 2))) != (*((&sp10) + var_a2_2)))
      {
        var_a1 += 1;
        var_t0 = var_a2_2 * 0x10;
        {
          s32 __repair_value;
          __repair_value = var_s0 * 0x11; var_v0_3 = __repair_value; __repair_value = 0;
        }
        if (var_a1 >= (*((&D_8021E230) + ((var_a2_2 * 0x22) + (var_s0 * 0x110)))))
        {
          goto block_11;
        }
        goto loop_6;
      }
      *((&D_8021E22F) + (__repair_phase_storage.value + temp_a3_2)) = var_a1;
      var_a2_2 += 1;
    }
    else
    {
      block_11:
      var_a2_2 += 1;

    }
    var_v0_2 = var_a2_2 * 0x10;
    if (var_a2_2 < 8)
    {
      goto loop_4;
    }
    var_s0 += 1;
    var_a2 = 0;
  }
  while (var_s0 < 4);
}

