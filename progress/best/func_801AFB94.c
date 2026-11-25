extern s32 func_8003DE60();
extern s16 func_800DE41C();
extern void func_8013ADA8();
extern void func_8013E188();
extern void func_801B09F0(s32 arg0, unsigned char arg1);
extern void func_801B0B60(s32);
extern void func_801B312C(s32, void *, s32, s32, f32);
extern void func_801B36F8(s32);
extern void func_801B7970(void *, s32);
extern s32 func_801F9D8C();
extern u32 func_801FA30C();
extern void func_8021F6A0(s32);
extern void func_8022132C(void *);
extern void func_8022FE50(s32, s32, s32, s32);
extern void func_80231A0C(s32 arg0, void *);
extern void func_80231E30(unsigned short arg0);
extern f32 sqrtf(f32);
extern char D_8006FAF0[];
extern s16 D_8018A438;
extern u8 D_801C6A38[];
extern u8 D_801C6A3C[];
extern u8 *D_801C7AB0;
extern u8 D_8022A770[];
extern u8 D_8022A778[];
extern u8 D_8022AD07[];
extern u8 D_8022B04C[];
extern u8 D_80235C60[];
extern u8 D_80235300[];
extern u8 D_80235620[];
extern u8 D_80235940[];
extern u8 D_80236F58[];
extern u8 D_80237070[];
extern u8 D_80238EC0[];
extern u8 D_802352CC[];
extern u8 D_802352F4[];
extern u8 D_802CBEE0[];
extern u8 D_8018A460[];
extern u8 D_80323ED0[];
extern u8 D_8031EA70[];
extern void func_8012AD9C();
extern void func_8013DD2C();
extern void func_8015A414();
extern u8 D_80159230[];
inline static int inline_fn(long long arg0)
{
  return arg0 & 0xFF;
}

void func_801AFB94(s32 arg0, long long arg1)
{
  u8 *__repair_cached_pointer = D_801C7AB0;
  u8 sp48[8];
  s32 i;
  s32 j;
  s32 k;
  u32 n = inline_fn(arg1);
  u8 *car;
  if (__repair_cached_pointer)
  {
    if (arg0)
    {
      *((u32 *) D_801C6A38) = *((u32 *) D_801C6A38);
      *((u16 *) (D_8006FAF0 + 0x20)) = 0;
      func_80231A0C(arg0, D_801C6A38);
      func_80231E30(arg0);
      func_801B09F0(arg0, arg1);
      func_801B0B60(arg0);
      func_801B312C(arg0, D_80323ED0, inline_fn(arg1), 0x43C80000, 400.0f);
      func_801B7970(D_801C7AB0, arg0 & 0xFFFFu);
      func_801B36F8(arg0);
    }
    else
    {
      *((u32 *) D_801C6A38) = *((u32 *) D_801C6A38);
      *((u16 *) (D_8006FAF0 + 0x20)) = 0;
      __repair_rows_:
      {
        func_80231A0C(arg0, D_801C6A38);
      }

      if (0)
      {
        goto __repair_rows_;
      }
      if (D_8006FAF0)
      {
        func_80231E30(arg0);
        func_801B09F0(arg0, arg1);
        func_801B0B60(arg0);
        func_801B312C(arg0, D_80323ED0, inline_fn(arg1), 0x43C80000, 400.0f);
        func_801B7970(D_801C7AB0, arg0);
        func_801B36F8(arg0);
      }
      else
      {
        func_80231E30(arg0);
        func_801B09F0(arg0, arg1);
        func_801B0B60(arg0);
        func_801B312C(arg0, D_80323ED0, inline_fn(arg1), 0x43C80000, 400.0f);
        func_801B7970(D_801C7AB0, arg0);
        func_801B36F8(arg0);
      }
    }
  }
  else
  {
    *((u32 *) D_801C6A38) = *((u32 *) D_801C6A38);
    *((u16 *) (D_8006FAF0 + 0x20)) = 0;
    __repair_rows:
    {
      func_80231A0C(arg0, D_801C6A38);
    }

    if (0)
    {
      goto __repair_rows;
    }
    func_80231E30(arg0);
    func_801B09F0(arg0, arg1);
    func_801B0B60(arg0);
    func_801B312C(arg0, D_80323ED0, inline_fn(arg1), 0x43C80000, 400.0f);
    func_801B7970(__repair_cached_pointer, arg0);
    func_801B36F8((short) arg0);
  }
}

