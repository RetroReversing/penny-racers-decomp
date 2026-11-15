extern void _bnkfPatchBank(void *, void *, s32);
void alBnkfNew(void *arg0, s32 arg1)
{
  int __repair_literal;
  s32 var_s1;
  s32 *temp_a0;
  s32 *var_s0;
  if ((*((s16 *) arg0)) == 0x4231)
  {
 do { var_s1 = 0; } while (0);
    __repair_literal = 0;
    if ((*((s16 *) (((s8 *) arg0) + 2))) > __repair_literal)
    {
      var_s0 = arg0;
      __repair_rows:
      {
        temp_a0 = (s32 *) (var_s0[1] + ((s32) arg0));
        var_s0[1] = (s32) temp_a0;
        if (temp_a0 != NULL)
        {
          _bnkfPatchBank(temp_a0, arg0, arg1);
        }
        var_s1 += 1;
        var_s0 += 1;
      }

      if (var_s1 < (*((s16 *) (((s8 *) arg0) + 2))))
      {
        goto __repair_rows;
      }
    }
  }
}
