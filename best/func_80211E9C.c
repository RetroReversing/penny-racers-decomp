extern char D_802030CC[];
extern volatile short D_8021F270[];
void func_80211E9C(s32 arg0)
{
  s32 var_a0;
  s32 var_a1;
  s32 var_v0;
  var_a1 = 0;
  do
  {
    var_a0 = 0;
    var_v0 = 0 * 2;
    loop_2:
    *(var_v0 + ((var_a1 * 0x10) + ((arg0 * 0xE0) + D_8021F270))) = *((s32 *) (var_v0 + (*((var_a1 * 4) + D_802030CC))));

    do
    {
      var_a0 += 1;
    }
    while (0);
    var_v0 = var_a0 * 2;
    if (var_a0 < 8)
    {
      goto loop_2;
    }
    var_a1 += 1;
  }
  while (var_a1 < 0xE);
}

