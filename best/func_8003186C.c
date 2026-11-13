s32 func_800382AC();
s32 func_800382CC();
s32 func_8003186C(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a3;
  s32 var_a0;
  s32 var_s2;
  void *temp_v1;
  void *var_s0;
  if (temp_v1)
  {
    var_s0 = *((void **) (((char *) arg0) + 0x50));
    var_a0 = 0;
    var_s2 = 1;
  }
  else
  {
    var_s0 = *((void **) (((char *) arg0) + 0x50));
    var_a0 = 0;
    var_s2 = 1;
  }
 do { if (var_s0 != NULL) { loop_2: temp_a3 = *((s32 *) (((char *) var_s0) + 8)); temp_v1 = *((void **) (((char *) var_s0) + 0)); var_a0 += temp_a3; if (((*((s16 *) (((char *) var_s0) + 0xC))) == 5) && ((*((s32 *) (((char *) var_s0) + 0x10))) == arg1)) { if (arg2 >= var_a0) { var_s2 = 0; goto block_11; } if (temp_v1 != NULL) { *((s32 *) (((char *) temp_v1) + 8)) += temp_a3; } func_800382CC(var_s0); func_800382AC(var_s0, arg0 + 0x48); return 1; } var_s0 = temp_v1; if (var_s0 == NULL) { goto block_11; } goto loop_2; } } while (0);
  block_11:
  return var_s2;

}
