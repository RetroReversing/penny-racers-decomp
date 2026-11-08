void *func_800319A0(void *arg0, s32 arg1, s32 arg2)
{
  void *var_v0;
  void *var_v1;
  var_v1 = *((void **) (((char *) arg0) + 0x64));
  var_v0 = NULL;
  if (var_v1 != NULL)
  {
 do { loop_2: if ((((*((u8 *) (((char *) var_v1) + 0x32))) != (arg1 & 0xFF)) || ((*((u8 *) (((char *) var_v1) + 0x31))) != (arg2 & 0xFF))) || ((var_v0 = var_v1, (((u32) ((*((u8 *) (((char *) var_v1) + 0x35))) - 3)) < 2U) != 0))) { var_v1 = *((void **) (((char *) var_v1) + 0)); var_v0 = NULL; if (var_v1 != NULL) { goto loop_2; } } } while (0);
  }
  return var_v0;
}
