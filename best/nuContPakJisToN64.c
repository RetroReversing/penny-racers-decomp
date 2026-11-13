extern s32 D_80046DB0;
extern u8 D_80046DB1;
void nuContPakJisToN64(void *arg0, u8 *arg1, u32 arg2)
{
int __repair_literal;

  s32 var_a3;
  s32 var_v1;
  u32 temp_t0;
  u32 var_t1;
  u8 *var_a1;
  u8 temp_a3;
  u8 temp_v0;
  u8 temp_v1;
  void *var_a0;
  var_a0 = arg0;
  var_a1 = arg1;
  var_t1 = 0;
  if (arg2 != 0)
  {
 do { loop_2: temp_v1 = *((u8 *) (((char *) var_a0) + 0)); temp_t0 = temp_v1 & 0xFF; if (temp_t0 != 0) { if (((u32) (temp_v1 - 0x41)) < 0x1AU) { *var_a1 = temp_v1 - 0x27; } else { temp_a3 = temp_v1 - 0x61; if (((u32) (temp_a3 & 0xFF)) < 0x1AU) { *var_a1 = temp_v1 - 0x47; } else if (((u32) (temp_v1 - 0x30)) < 0xAU) { *var_a1 = temp_v1 - 0x20; } else if (((u32) ((unsigned char) (temp_v1 + 0x4F))) < 0x2CU) { temp_v0 = *((u8 *) (((char *) var_a0) + 1)); if (temp_v0 == 0xDE) { temp_a3 = temp_v1 - 0x3A; if (temp_t0 >= 0xCAU) { temp_a3 = temp_v1 - 0x3F; } goto block_17; } if (temp_v0 == 0xDF) { temp_a3 = temp_v1 - 0x3A; block_17: *var_a1 = temp_a3; var_a0 += 1; } else { *var_a1 = temp_a3; } } else { var_a3 = 0; if (D_80046DB1 != 0) { var_v1 = 0; loop_21: if ((*((&D_80046DB0) + var_v1)) != temp_t0) { var_v1 += 2; do { do { do { var_a3 += 1; } while (0); } while (0); } while (0); if ((&D_80046DB1)[var_v1] != 0) { goto loop_21; } } else { *var_a1 = (&D_80046DB1)[var_v1]; }
__repair_literal = 2;
 if ((*((&D_80046DB1) + (var_a3 * __repair_literal))) == 0) { goto block_24; } } else { block_24: *var_a1 = 0xF; } } } var_a1 += 1; var_t1 += 1; var_a0 += 1; if (var_t1 < arg2) { goto loop_2; } } } while (0);
  }
}
