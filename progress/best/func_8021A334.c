extern u8 D_800DE080[];
extern u8 D_8011F2F0[];
extern u8 D_80190CB2[];
extern u8 D_801D4390[];
extern u8 D_8021C840[];
extern u8 D_8021D334[];
extern u8 D_801CF4C8[];
extern u8 D_8021CA80[];
extern u8 D_8021CA81[];
extern u8 D_8021CA82[];
extern u8 D_8021C994[];
extern u8 D_80203080[];
extern u8 D_8018D140[];
void *func_801CA140();
void func_801CA494();
void func_801CABF4();
void func_8021A334(volatile unsigned long long arg0)
{
  volatile long long a1;
  u8 *__base_D_800DE080;
  register u8 *s1;
  u16 a2;
  u32 *dl;
  volatile unsigned long long s4;
  s32 s0;
  register volatile unsigned long s5;
  unsigned int s3;
  volatile int pad;
  do
  {
    *((u32 **) (__base_D_800DE080 + 0x64)) = dl + 2;
    __base_D_800DE080 = (int) D_800DE080;
    do
    {
      if (dl)
      {
        dl = *((u32 **) (__base_D_800DE080 + 0x64));
        dl[0] = 0xED000000;
      }
      else
      {
        dl = *((u32 **) (__base_D_800DE080 + 0x64));
        dl[0] = 0xED000000;
      }
      do
      {
        dl[1] = 0x005003C0;
      }
      while (0);
    }
    while (0);
  }
  while (0);
  s5 = (unsigned short) 0;
  a1 = 0;
  s3 = 0;
  s1 = (u8 *) func_801CA140(0, (float) 0);
  s4 = 0xFF;
}

