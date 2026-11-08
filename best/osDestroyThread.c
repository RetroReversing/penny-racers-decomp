/* identical to osDestroyThread in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003E894();
s32 __osDisableInt();
s32 func_8003EAE0();
s32 func_80034300();
extern void *D_800A251C;
extern void *D_800A2520;

void osDestroyThread(void *arg0)
{
  s32 temp_s1;
  void *var_s0;
  void *var_v0;
  void *var_v1;

  var_s0 = arg0;
  temp_s1 = __osDisableInt();
  if (arg0 == NULL)
  {
    var_s0 = D_800A2520;
  }
  else if (*((u16 *) (((char *) var_s0) + 0x10)) != 1)
  {
    func_80034300(*((s32 *) (((char *) var_s0) + 8)), var_s0);
  }

  if (D_800A251C == var_s0)
  {
    D_800A251C = *((void **) (((char *) var_s0) + 0xC));
    goto done;
  }
  goto walk;
unlink:
  *((void **) (((char *) var_v1) + 0xC)) = *((void **) (((char *) var_s0) + 0xC));
  goto done;
walk:
  var_v1 = D_800A251C;
  var_v0 = *((void **) (((char *) var_v1) + 0xC));
  if (var_v0 != NULL)
  {
    do
    {
      if (var_v0 == var_s0)
      {
        goto unlink;
      }
      var_v1 = var_v0;
      var_v0 = *((void **) (((char *) var_v0) + 0xC));
    } while (var_v0 != NULL);
  }
done:
  if (var_s0 == D_800A2520)
  {
    func_8003E894();
  }
  func_8003EAE0(temp_s1);
}
