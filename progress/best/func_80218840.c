extern volatile int D_80046832;
extern s32 D_800DA260;
extern s32 D_8011F304;
extern s32 D_8011F340;
extern s16 D_80189C94;
extern int D_8018A43C;
extern s16 D_8018A44A;
extern s32 D_8018F5D0;
extern s32 D_80190C9C;
extern s32 D_80190CB0;
extern s32 D_801D5A90;
extern s16 D_8021E1A6;
extern s32 D_8021F0A0;
extern s32 D_8021FE04;
extern s32 D_8022026C;
extern f32 D_80220E40;
extern s32 D_8022A770;
extern s32 D_80237DC0;
extern s32 D_80238EC0;
extern s32 D_80239714;
extern s32 D_802399B8;
extern s32 func_8013DD2C;
extern s32 func_80149A80;
extern s32 func_8020FED8;
extern s32 func_802191E4;
extern s32 func_8021999C;
extern s32 func_80219A60;
extern s32 func_80219B58;
extern s32 func_80219C14;
extern s32 func_80219CCC;
extern s32 func_80219CF0;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, s32, s32, s32, f32, f32, f32, f32, f32);
s32 func_8012AD20(u16, void *, u8, u8);
s32 func_80203DF8(s32, s32, s32, s32, s32);
void func_8021FCA4(void);
void func_80230960(void *);
inline static volatile unsigned long long inline_fn(s32 *arg0)
{
  return (unsigned long) arg0;
}

void func_80218840(void)
{
  s32 i;
  s32 j;
  s32 k;
  s32 *__base_D_8021FE04;
  s32 *src;
  s32 *dst;
  s32 temp;
  *((s8 *) (&D_80190CB0)) = 0;
  do
  {
    s32 *end;
    *((&D_8018A44A) + (D_8021E1A6 * 2)) = 0;
    do
    {
      *((u16 *) (&D_80189C94)) = 0;
      do
      {
        *((u8 *) (&D_8018A43C)) = 0; D_80046832 = 1;
      }
      while (0);
    }
    while (0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, NULL, &D_801D5A90, NULL, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
    func_8021FCA4();
    __base_D_8021FE04 = &D_8021FE04;
    func_800DE41C(0, 0, 3, 0, 0x72, 0xFF, NULL, NULL, __base_D_8021FE04, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
    D_80220E40 = 10.0f;
 do { if (inline_fn(__base_D_8021FE04) & 0x100) { func_800DE41C(0, 0, 3, 0, 0x74, 0xFF, NULL, NULL, &D_8022026C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0); } else { func_800DE41C(0, 0, 3, 0, 0x74, 0xFF, NULL, NULL, &D_8022026C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0); } func_800DE41C(0, 0, 3, 0, 0x7A, 1, NULL, &func_80149A80, NULL, 0, 0, 0, 0, 30.0f, 50.0f, 0, 0, 0); } while (0);
  }
  while (0);
  do
  {
    func_80203DF8(1, 0x3C, 0, 0, 0);
  }
  while (0);
}
