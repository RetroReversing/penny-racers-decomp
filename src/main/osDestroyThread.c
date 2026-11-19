#include "common_local_source_339302416960.h"

/* identical to osDestroyThread in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8003E894();
s32 func_8003EAC0();
s32 func_8003EAE0();
s32 func_80034300();
extern void *D_800470DC;
extern void *D_800470E0;

void osDestroyThread(void *arg0)
{
  s32 temp_s1;
  void *var_s0;
  void *var_v0;
  void *var_v1;

  var_s0 = arg0;
  temp_s1 = func_8003EAC0();
  if (arg0 == NULL)
  {
    var_s0 = D_800470E0;
  }
  else if (*((u16 *) (((char *) var_s0) + 0x10)) != 1)
  {
    func_80034300(*((s32 *) (((char *) var_s0) + 8)), var_s0);
  }

  if (D_800470DC == var_s0)
  {
    D_800470DC = *((void **) (((char *) var_s0) + 0xC));
    goto done;
  }
  goto walk;
unlink:
  *((void **) (((char *) var_v1) + 0xC)) = *((void **) (((char *) var_s0) + 0xC));
  goto done;
walk:
  var_v1 = D_800470DC;
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
  if (var_s0 == D_800470E0)
  {
    func_8003E894();
  }
  func_8003EAE0(temp_s1);
}
