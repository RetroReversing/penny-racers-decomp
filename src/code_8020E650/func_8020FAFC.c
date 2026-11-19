#include "common.h"

extern u8 D_8011F2F0[];
extern u8 D_80168C60[];
extern u16 D_80190C98;
extern s16 D_8021E1A6;
extern u8 D_8021EEA6;
void func_8020FAFC(s32 arg0)
{
  u8 *p;
  volatile u16 *q;
  u16 st;
 do { p = D_8011F2F0 + ((arg0 & 0xFFFF) * 100); } while (0);
  q = &D_80190C98;
  *((u16 *) (p + 0x3E)) = 0;
  if (D_80168C60[D_8021E1A6] < D_8021EEA6)
  {
    *((u16 *) (p + 0x3E)) = 1;
  }
  st = *((u16 *) (p + 0x3E));
  switch (st)
  {
    case 0:
      *q = 0;
      break;

    case 1:
      *q = (*q) + 0x10;
      if ((*q) >= 0x100)
    {
      *q = 0xFF;
    }
      break;

  }

  p[0] = ((u8 *) q)[1];
}
