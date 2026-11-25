typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F330;
extern Slot_8011F330 D_8011F330[];
extern s8 D_8021E189;
void func_801CA140();
void func_801CA494();
void func_801CCE7C();
void func_8014A4C8();
void func_80207440(s32 arg0, volatile s32 arg1)
{
  register u16 st = D_8011F330[arg1 & 0xFFFF].f0;
  if (!st)
  {
    D_8021E189 = 0;
    (*(&D_8011F330[(long) ((unsigned char) (arg1 & ((short) 0xFFFF)))])).f0 = 1;
    return;
  }
  if (1 == ((u32) ((s32) st)))
  {
    if (arg0)
    {
      do
      {
        func_801CA140(arg0);
        func_801CA494(arg0, 0x78);
      }
      while (0);
      func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, 0);
    }
    else
    {
      func_801CCE7C(arg0, 0, 0, 0, (double) 0, 0x140, 0xF0, (long long) 0x140, 0xF0, 0x40, 0x20, 0, (float) 0, 0x13F, (unsigned long long) 0xEF, 0);
      func_801CA140(arg0);
      func_801CA494(arg0, 0x78, 0x78, (unsigned long long) 0x78, (long long) 0xFF);
    }
  }
}

