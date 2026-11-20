#include "common.h"

extern char D_8004A4B0[];
extern char D_8004A4B4[];
extern void func_800346B0();
inline static char *inline_fn(char *arg0, s32 arg1)
{
  return arg0 + (arg1 * 4);
}

void *func_800319F4(char *arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3)
{
  char *entry;
  char *tbl;
  char *elem;
  unsigned char *rec;
  s32 lo;
  s32 hi;
  s32 mid;
  u32 k1;
  u32 k2;
  entry = (*((char **) (arg0 + 0x60))) + (arg3 * 16);
  tbl = *((char **) ((*((char **) (arg0 + 0x60))) + (arg3 * 16)));
  hi = *((s16 *) (tbl + 0xE));
  lo = 1;
  if (tbl == NULL)
  {
    func_800346B0(D_8004A4B0, D_8004A4B4, 0x3CE, (*((char **) (arg0 + 0x60))) + (arg3 * 16));
  }
  if (hi > 0)
  {
    k1 = arg1 & 0xFF;
    k2 = arg2 & 0xFF;
    do
    {
      mid = (lo + hi) / 2;
      elem = *((char **) (inline_fn(tbl, mid) + 0xC));
      rec = *((unsigned char **) (elem + 4));
      if ((((k1 >= rec[2]) && (k1 <= rec[3])) && (k2 >= rec[0])) && (k2 <= rec[1]))
      {
        return elem;
      }
      if ((k1 < rec[2]) || ((k2 < rec[0]) && (k1 <= rec[3])))
      {
        hi = mid - 1;
      }
      else
      {
        lo = mid + 1;
      }
    }
    while (lo <= hi);
  }
  return NULL;
}
