inline static u16 __repair_inline(u16 a)
{
  return a;
}

s32 func_801496B0(s32, s32, s32);
extern u8 D_8018994E;
extern u8 D_80189B36;
extern u16 D_8018A288;
extern s32 D_8018D140;
s32 func_80149220(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *__base_D_8018D140;
  int __repair_literal;
  s32 temp_v1_2;
  s32 var_a0;
  s32 var_s0;
  s32 __repair_phase_var_s0;
  s32 var_s1;
  s32 var_s1_2;
  s32 var_s2;
  s32 var_v0_2;
  u16 temp_v1;
  u16 var_s4;
  u32 var_v0;
  do { var_s2 = arg0; } while (0);
 do { var_s4 = 0x2FFF; if (arg3 == 1) { var_s4 = 0x4FFF; } __repair_phase_var_s0 = var_s2 & 0xFF; var_s1_2 = __repair_phase_var_s0; var_v0 = var_s1_2; if ((var_s2 & 0xFF) == 8) { var_s1 = 0; var_s0 = 0; __repair_literal = 0; if ((arg2 & 0xFF) > __repair_literal) { var_v0_2 = 0 * 2; do { __base_D_8018D140 = &D_8018D140; do { do { temp_v1 = __repair_inline(*(var_v0_2 + ((arg3 * 0x12C) + __base_D_8018D140))); } while (0); var_s0 += 1; if ((temp_v1 & 0x1FFF) == 0xD) { var_s4 = temp_v1; var_s1 = 1; } } while (0); { s32 __repair_value; __repair_value = var_s0 * 2; var_v0_2 = __repair_value; } } while ((var_s1_2 = var_s0) < (arg2 & 0xFF)); } var_v0 = var_s2 & 0xFF; if (!(var_s1 & 0xFF)) { if (D_8018994E == 0) { var_s2 = 7; goto block_13; } var_v0 = var_s2 & 0xFF; if (!(D_80189B36 & 0x20)) { var_s2 = 7; block_13: var_v0 = 7 & 0xFF; } } } var_s1_2 = 0; if (var_v0 < 8U) { var_s0 = 0; var_a0 = arg3 & 0xFF; for (;;) { if (arg3) { temp_v1_2 = func_801496B0(var_a0, var_s2 & 0xFF, arg2 & 0xFF); } else { temp_v1_2 = func_801496B0(var_a0, var_s2 & 0xFF, arg2 & 0xFF); } if (D_8018A288 != 0xFFFF) { var_s1_2 = 1; } else if (((D_8018994E == 0) | (arg3 == 1)) != 0) { var_s2 = (var_s2 + 1) & 7; var_s0 += 1; var_a0 = arg3 & 0xFF; if (var_s0 < 8) { continue; } } break; } if (var_s1_2 & 0xFF) { if (!(arg1 & 0xFF)) { return D_8018A288 & 0xFFFF; } var_s4 = (&D_8018A288)[temp_v1_2]; return var_s4 & 0xFFFF; } return var_s4 & 0xFFFF; } } while (0);
  return var_s4 & 0xFFFF;
}
