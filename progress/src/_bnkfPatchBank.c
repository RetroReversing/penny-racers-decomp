void _bnkfPatchInst(s32, s32, s32);
void _bnkfPatchBank(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  s32 temp_a0_3;
  s32 var_s1;
  volatile long long pad;
  s32 *var_s0;
  if ((*(((u8 *) arg0) + 2)) == 0)
  {
 do { temp_a0 = *((s32 *) (((u8 *) arg0) + 8)); *(((u8 *) arg0) + 2) = 1; if (temp_a0 != 0) { temp_a0 += arg1; *((s32 *) (((u8 *) arg0) + 8)) = temp_a0; _bnkfPatchInst(temp_a0, arg1, arg2); } var_s1 = 0; } while (0);
    if ((*((s16 *) arg0)) > 0)
    {
      do
      {
        var_s0 = arg0;
        __repair_rows:
        {
          temp_a0_3 = var_s0[3] + arg1; var_s0[3] = temp_a0_3;
          if (temp_a0_3 != 0)
          {
            _bnkfPatchInst(temp_a0_3, arg1, arg2);
          }
          var_s1 += 1; var_s0 += 1;
        }

        if (var_s1 < (*((s16 *) arg0)))
        {
          goto __repair_rows;
        }
      }
      while (0);
    }
  }
}
