#include "common_local_source_339302417203.h"

extern unsigned char D_80126FF7;
void func_80140A0C(void **arg0)
{
  void *temp_v1;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_v1) + 4)) = -1;
  D_80126FF7 = 0xFF;
}
