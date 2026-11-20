#include "common_local_source_339302417571.h"

extern f32 D_8021B0A4;
extern u8 D_8021B0A8;
void func_80205EBC(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4)
{
  if (arg4 == 0)
  {
    D_8021B0A8 = 0;
  }
  switch (D_8021B0A8)
  {
    case 0:
 do { *arg0 = arg1; } while (0);
      D_8021B0A4 = arg2;
      D_8021B0A8 = 1;
      return;

    case 1:
      *arg0 += D_8021B0A4;
      D_8021B0A4 += arg3;
      if (arg1 < (*arg0))
    {
      D_8021B0A8 = 0;
    }
      return;

  }

}
