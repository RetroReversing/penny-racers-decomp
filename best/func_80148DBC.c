s32 func_8014A030();
s32 func_801FA30C();
extern char D_800DA260[];
extern char D_80168BC0[];
extern char D_80168C40[];
extern u8 D_80189B34;
extern char D_8018D3A0[];
extern char D_8018D3A4[];
extern char D_8018D3A8[];
extern char D_8018D3AC[];
extern char D_8018D3B0[];
extern char D_8018D3B4[];
extern char D_8018D3B7[];
extern char D_8018D3B8[];
extern char D_8018D3BC[];
extern s16 D_8021E1A2;
void func_80148DBC(s32 arg0)
{
  char *__repair_loop_constant_;
  char *__repair_loop_constant;
  s32 *temp_a1;
  s32 *temp_s0;
  s32 temp_a0;
  s32 __repair_phase_temp_a0;
  s32 temp_a0_2;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 temp_s1_4;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_s2_2;
  s32 var_v1;
  u32 var_s1;
  u32 var_s4;
  void *temp_s0_2;
  var_s1 = 1;
 do { if (D_8021E1A2 != 0) { var_s1 = 2; } } while (0);
  temp_a0 = 0;
  if (D_80189B34 == 2)
  {
    var_s4 = var_s1;
    if (var_s4 < 6U)
    {
      temp_a0 = 0;
      do
      {
        loop_6:
        temp_s1 = func_801FA30C();

        temp_s0 = ((temp_a0 & 0xFF) * 4) + (((var_s4 & 0xFF) << 5) + D_8018D3A0);
        *temp_s0 = temp_s1 | (func_801FA30C() << 0x10);
        temp_s1_2 = func_801FA30C();
        *temp_s0 &= ~(temp_s1_2 | (func_801FA30C() << 0x10));
        temp_a0 += 1;
        if (((u32) (temp_a0 & 0xFF)) < 8U)
        {
          goto loop_6;
        }
        temp_a0 = var_s4 & 0xFF;
        temp_s0_2 = (temp_a0 * 0x178) + D_800DA260;
        do
        {
          temp_s1_4 = temp_a0 << 5;
        }
        while (0);
        *(D_8018D3A0 + temp_s1_4) = func_8014A030(*(D_8018D3A0 + temp_s1_4), *((u16 *) (((char *) temp_s0_2) + 0)), 1);
        *(D_8018D3B4 + temp_s1_4) = func_8014A030(*(D_8018D3B4 + temp_s1_4), ((*((u8 *) (((char *) temp_s0_2) + 9))) - 1) & 0xFF, 1);
        *(D_8018D3B8 + temp_s1_4) = func_8014A030(*(D_8018D3B8 + temp_s1_4), ((*((u8 *) (((char *) temp_s0_2) + 0xD))) - 1) & 0xFF, 1);
        *(D_8018D3BC + temp_s1_4) = func_8014A030(*(D_8018D3BC + temp_s1_4), ((*((u8 *) (((char *) temp_s0_2) + 0xF))) - 1) & 0xFF, 1);
        var_s2_2 = 0;
        do
        {
          __repair_phase_temp_a0 = var_s2_2 & 0xFF;
          temp_a0_2 = __repair_phase_temp_a0 * 4;
          temp_a1 = temp_a0_2 + (((var_s4 & 0xFF) << 5) + D_8018D3A0);
          temp_v1 = (*temp_a1) & (*(((((arg0 & 3) * 8) + __repair_phase_temp_a0) * 4) + D_80168BC0));
          *temp_a1 = temp_v1;
          var_s2_2 += 1;
          *temp_a1 = temp_v1 | (*(temp_a0_2 + D_80168C40));
        }
        while (((u32) (var_s2_2 & 0xFF)) < 8U);
        var_s4 += 1;
        temp_a0 = 0;
      }
      while (((u32) (var_s4 & 0xFF)) < 6U);
    }
  }
  var_v1 = 0 & 0xFF;
  __repair_loop_constant = D_8018D3A0;
  __repair_loop_constant_ = D_8018D3A4;
  do
  {
    temp_v1_2 = var_v1 << 5;
    *(__repair_loop_constant + temp_v1_2) = (*(__repair_loop_constant + temp_v1_2)) & 0x3FFF;
    *(__repair_loop_constant_ + temp_v1_2) = (*(__repair_loop_constant_ + temp_v1_2)) & 0x01FFFFFF;
    *(D_8018D3A8 + temp_v1_2) = (*(D_8018D3A8 + temp_v1_2)) & 0xFFF;
    *(D_8018D3AC + temp_v1_2) = (*(D_8018D3AC + temp_v1_2)) & 0x1FF;
    *(D_8018D3B0 + temp_v1_2) = (*(D_8018D3B0 + temp_v1_2)) & 0x3FF;
    *(D_8018D3B4 + temp_v1_2) = (s32) (*(D_8018D3B7 + temp_v1_2));
    *(D_8018D3B8 + temp_v1_2) = (*(D_8018D3B8 + temp_v1_2)) & 0x1FFFFF;
    *(D_8018D3BC + temp_v1_2) = (*(D_8018D3BC + temp_v1_2)) & 0x7FFF;
    temp_a0 += 1;
    var_v1 = temp_a0 & 0xFF;
  }
  while (((u32) (temp_a0 & 0xFF)) < 6U);
}
