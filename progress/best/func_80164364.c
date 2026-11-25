extern u16 D_8006FB1C;
extern u8 D_8011F2FC[];
extern char D_801839E0[];
extern void func_8003DE60(char *);
void func_80164364(u32 **arg0, u16 arg1)
{
  s32 v;
  s32 r;
  s32 g;
  s32 b;
  s32 a;
  u32 *p;
  u8 temp;
  int temp2;
 do { if (v) { temp = D_8011F2FC[arg1 * 0x64]; v = temp; } else { v = D_8011F2FC[arg1 * 0x64]; } if (v < 0xB4) { if (v < 0xA0) { if (v < 0x8C) { if (v < 0x78) { if (v < 0) { do { goto bad; } while (0); } r = (g = (b = 0xFF)); } else { r = (g = (b = 0xC8)); } } else { r = (g = (b = 0xA0)); } } else { r = (g = (b = 0x50)); } } else if (v < 0xDC) { b = (v < 0xC8) ? (0) : (0x80); r = (g = 0); } else { do { if (v < 0x100) { b = 0xFF; r = (g = 0); } else { do { bad: func_8003DE60(D_801839E0); } while (0); return; } } while (0); } temp2 = (arg1 * 0x64) + 1; a = D_8011F2FC[temp2]; } while (0);
  do
  {
    if (!(D_8006FB1C & 1))
    {
      r = (g = (b = 0xFF)); a = a + 0x64;
      if (((u32) a) >= 0x100)
      {
        a = 0xFF;
      }
    }
    p = *arg0;
    do
    {
      *arg0 = p + 2; p[0] = 0xFA000000; p[1] = (((b << 24) | (g << 16)) | (r << 8)) | (a & 0xFF);
    }
    while (0);
  }
  while (0);
}
