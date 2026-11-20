extern char D_8018D3A0[];
extern u8 D_8021E1A7;
extern char D_8021E22F[];
extern char D_8021E230[];
extern char D_8021E231[];
extern char D_8021E251[];
extern char D_8021E273[];
extern char D_8021E295[];
extern char D_8021E2B7[];
extern char D_8021E2D9[];
extern char D_8021E2FB[];
extern char D_8021E31D[];
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

void func_80149CC4(s32 arg0, s32 arg1)
{
    char *__base_D_8018D3A0;
  s32 temp_a1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 var_a2;
  s32 var_t0;
  s32 var_t0_2;
  s32 var_t1;
  s32 __repair_phase_var_t1;
  u8 var_a2_2;
  s8 var_a3;
  u32 temp_a0;
  u8 var_a2_3;
  var_a2 = 1;
  var_t0 = 0;
  do
  {
    temp_a1 = inline_fn(1, 0xFF);
    do
    {
      if (var_a2 || var_t0_2)
      {
        *(((inline_fn(var_t0, 0xFF) * 0x22) + ((arg0 * 0x110) + D_8021E22F)) + temp_a1) = 0;
        var_a2 += 1;
        temp_a1 = inline_fn(var_a2, 0xFF);
      }
      else
      {
        *(((inline_fn(var_t0, 0xFF) * 0x22) + ((arg0 * 0x110) + D_8021E22F)) + temp_a1) = 0;
        var_a2 += 1;
        temp_a1 = inline_fn(var_a2, 0xFF);
      }
    }
    while (((u32) inline_fn(var_a2, 0xFF)) < 0x22U);
    var_t0 += 1;
    var_a2 = 1;
  }
  while (((u32) inline_fn(var_t0, 0xFF)) < 8U);
  var_a3 = 0;
  var_t0_2 = 0;
  do
  {
    var_a2_2 = 0;
    var_t1 = 1;
    temp_a1 = inline_fn(var_t0_2, 0xFF);
    do
    {
      __base_D_8018D3A0 = D_8018D3A0;
      if (inline_fn(var_t1, *((temp_a1 * 4) + ((arg0 << 5) + __base_D_8018D3A0))))
      {
 *(((temp_a1 * 0x22) + ((arg0 * 0x110) + D_8021E22F)) + (inline_fn(var_a3, 0xFF) + (inline_fn(-(((u32) inline_fn(var_t0_2, 0xFF)) >= 5U), 3) | 2))) = var_a2_2;
        var_a3 += 1;
      }
      var_a2_2 += 1;
      var_t1 *= 2;
    }
    while (((u32) inline_fn(var_a2_2, 0xFF)) < 0x1FU);
    temp_a0 = inline_fn(var_t0_2, 0xFF);
    if (!inline_fn(var_a3, 0xFF))
    {
      __repair_phase_var_t1 = (inline_fn(var_t0_2, 0xFF) * 0x22) + (arg0 * 0x110);
      *(D_8021E230 + __repair_phase_var_t1) = 1;
      *(D_8021E231 + __repair_phase_var_t1) = 0x5A;
      var_t0_2 += 1;
    }
    else
      if (temp_a0 >= 5U)
    {
      temp_a1 = (temp_a0 * 0x22) + (arg0 * 0x110);
      *(D_8021E230 + temp_a1) = var_a3 + 1;
      *(D_8021E231 + temp_a1) = 0x5A;
      var_t0_2 += 1;
    }
    else
    {
      *(D_8021E230 + ((inline_fn(var_t0_2, 0xFF) * 0x22) + (arg0 * 0x110))) = var_a3;
      var_t0_2 += 1;
    }
    var_a3 = 0;
  }
  while (((u32) inline_fn(var_t0_2, 0xFF)) < 8U);
  if (!inline_fn(arg1, 0xFF))
  {
    var_a2_3 = D_8021E1A7;
    if (var_a2_3 >= 3U)
    {
      var_a2_3 = 2;
    }
    var_t0_2 = arg0 * 0x110;
    *(D_8021E22F + var_t0_2) = 0;
    *(D_8021E251 + var_t0_2) = var_a2_3;
    *(D_8021E273 + var_t0_2) = 0;
    *(D_8021E295 + var_t0_2) = 0;
    *(D_8021E2B7 + var_t0_2) = 0;
    *(D_8021E2D9 + var_t0_2) = 0;
    *(D_8021E2FB + var_t0_2) = 0;
    *(D_8021E31D + var_t0_2) = 0;
  }
}
