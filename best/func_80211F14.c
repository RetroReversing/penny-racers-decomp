extern short D_800DA26A;
extern s32 D_8021F270;
void func_80211F14(s32 arg0)
{
int __repair_literal;

  s32 temp_t1;
  s32 var_a1;
  s32 var_a2;
  var_a2 = 0;
  temp_t1 = arg0 * 0x178;
  __repair_rows:
  {
    s32 var_v0;
    var_a1 = 0;
    var_v0 = 0 * 2;
    do
    {
      *(var_v0 + ((var_a2 * 0x12) + (temp_t1 + ((&D_800DA26A) + 0x64)))) = *(var_v0 + ((var_a2 * 0x10) + ((arg0 * 0xE0) + (&D_8021F270))));/*__repair_loop_weight*/do {
      var_a1 += 1;} while (0);
__repair_literal = 2;

      var_v0 = var_a1 * __repair_literal;
    }
    while (var_a1 < 8);
    *(((&D_800DA26A) + 0x74) + ((var_a2 * 0x12) + temp_t1)) = 0xFFFF;
    var_a2 += 1;
  }

  if (var_a2 < 0xE)
  {
    goto __repair_rows;
  }
}

