extern short D_800DD2C0;
extern char D_800DB1B8[];
extern f32 D_80220E40;
extern u8 D_80220FB0[];
extern char D_80220FB4[];
extern char D_80220FB8[];
extern char D_80220FBC[];
extern char D_80220FC0[];
extern char D_80220FC4[];
extern char D_80220FC8[];
extern char D_80220FCC[];
void func_8021FCA4(void)
{
  char *__repair_loop_constant;
  s16 temp_v1;
  s32 temp_a0;
  s32 temp_a1;
  s32 var_a2;
  D_80220E40 = 65.0f;
  var_a2 = 0;
 do { __repair_loop_constant = D_800DB1B8; } while (0);
  __repair_rows:
  {
    temp_a0 = var_a2 * 0x28;
    do
    {
      *((u16 *) ((D_800DB1B8 + 0x2108) + temp_a0)) = 0;
      do
      {
        do
        {
          do
          {
            do
            {
              do
              {
                do
                {
                  temp_a1 = var_a2 * 2;
                }
                while (0);
              }
              while (0);
            }
            while (0);
          }
          while (0);
        }
        while (0);
      }
      while (0);
      do
      {
        temp_v1 = var_a2 * 3;
      }
      while (0);
      *((u16 *) ((D_800DB1B8 + 0x210A) + temp_a0)) = temp_v1;
      *((u16 *) ((D_800DB1B8 + 0x210C) + temp_a0)) = temp_v1 + 1;
      *((u16 *) ((D_800DB1B8 + 0x2110) + temp_a0)) = *(temp_a1 + D_80220FB0);
      *((u16 *) ((D_800DB1B8 + 0x210E) + temp_a0)) = temp_v1 + 2;
      *((__repair_loop_constant + 0x2112) - (-temp_a0)) = *(temp_a1 + D_80220FB4);
      *((__repair_loop_constant + 0x2114) + temp_a0) = *(temp_a1 + D_80220FB8);
      *((__repair_loop_constant + 0x2116) + temp_a0) = *(temp_a1 + D_80220FBC);
      *((__repair_loop_constant + 0x2128) + temp_a0) = *(temp_a1 + D_80220FC0);
      *((__repair_loop_constant + 0x212A) + temp_a0) = *(temp_a1 + D_80220FC4);
      *((__repair_loop_constant + 0x212C) + temp_a0) = *(temp_a1 + D_80220FC8);
      *((__repair_loop_constant + 0x212E) + temp_a0) = *(temp_a1 + D_80220FCC);
    }
    while (0);
    var_a2 += 1;
  }

  if (var_a2 < 4)
  {
    goto __repair_rows;
  }
  D_800DD2C0 = 1;
}
