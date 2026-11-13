s32 func_80025DBC();
extern char D_800DA260[];
extern char D_800DA262[];
extern char D_800DA264[];
extern char D_800DA266[];
extern char D_800DA268[];
extern char D_800DA26A[];
void func_80231130(void)
{
  s16 var_s1;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_v0;
  s32 var_v0_2;
  var_s1 = 0;
  var_v0 = 0 & 0xFFFF;
  do
  {
    temp_s0 = var_v0 * 0x178;
    __repair_rows:
    {
      func_80025DBC(temp_s0 + D_800DA260);
    }

    if (0)
    {
      goto __repair_rows;
    }
    *((u16 *) (D_800DA260 + temp_s0)) = var_s1;
    *((u16 *) (D_800DA262 + temp_s0)) = 0;
    *((u16 *) (D_800DA264 + temp_s0)) = 0;
    *((u16 *) (D_800DA266 + temp_s0)) = 0;
    *((u16 *) (D_800DA268 + temp_s0)) = 0;
    *((u16 *) (D_800DA26A + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 2) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 4) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 6) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0xA) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0xE) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0x12) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0x16) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0x1A) + temp_s0)) = 0;
    *((u16 *) ((D_800DA26A + 0x1B) + temp_s0)) = 0;
    var_a0 = 0;
    var_v0_2 = 0 & 0xFFFF;
    do
    {
      temp_s0 = (var_v0_2 * 8) + ((var_s1 & 0xFFFF) * 0x178);
      *((u16 *) ((D_800DA26A + 0x1E) + temp_s0)) = 0;
      *((u16 *) ((D_800DA26A + 0x22) + temp_s0)) = 0;
      var_a0 += 1;
      var_v0_2 = var_a0 & 0xFFFF;
    }
    while (((u32) (var_a0 & 0xFFFF)) < 7U);
    temp_v1 = (var_s1 & 0xFFFF) * 0x178;
    *((u16 *) ((D_800DA26A + 0x5A) + temp_v1)) = 0;
    *((u16 *) ((D_800DA26A + 0x5C) + temp_v1)) = 0;
    *((u16 *) ((D_800DA26A + 0x5E) + temp_v1)) = 0;
    *((u16 *) ((D_800DA26A + 0x60) + temp_v1)) = 0;
    *((u16 *) ((D_800DA26A + 0x62) + temp_v1)) = 0;
    var_s1 += 1;
    var_v0 = var_s1 & 0xFFFF;
  }
  while ((((u32) (var_s1 & 0xFFFF)) - 1) < (7U - 1));
}

