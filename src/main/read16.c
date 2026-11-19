#include "common_local_source_339302416841.h"

inline static s16 inline_fn(int arg0)
{
  return (s16) arg0;
}

s16 read16(void *arg0)
{
  u8 *temp_a1;
  u8 hi;
  u8 lo;
  temp_a1 = *((u8 **) (((char *) arg0) + 8));
  *((u8 **) (((char *) arg0) + 8)) = temp_a1 + 1;
  hi = temp_a1[0];
  do
  {
    *((u8 **) (((char *) arg0) + 8)) = temp_a1 + 2; lo = temp_a1[1];
    return inline_fn((hi << 8) | lo);
  }
  while (0);
}
