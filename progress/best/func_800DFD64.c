#define U16(p,o) (*(u16 *)((u8 *)(p) + (o)))
#define U8(p,o)  (*(u8 *)((u8 *)(p) + (o)))
#define U32(p,o) (*(u32 *)((u8 *)(p) + (o)))
extern u8 D_8011F2F0[];
extern u8 D_800E2660[];
extern u8 D_80126FF6;
extern u8 D_80126FF7;
extern u32 D_800E1860[];
extern u32 D_800E188C;
extern u32 D_800E1890;
extern u32 D_800E1874;
extern u32 D_800E1880;
extern f64 D_800E1E10;
extern void guScale(u32 *m, f32 x, f32 y, f32 z);
extern void guTranslate(u32 *m, f32 x, f32 y, f32 z);
extern void func_800DF2AC(s32 mode, f32 a1, f32 a2, f32 a3, f32 p0, f32 p1, f32 p2, u32 *p3, u32 *p4);
extern volatile short func_801FA678(u32 a0, u32 a1, volatile char a2, u32 a3);
inline static u16 *inline_fn(u8 *arg0)
{
  return (u16 *) (((u8 *) arg0) + (2 + (D_80126FF6 * 2)));
}

inline static u8 *inline_fn2(u8 *arg0)
{
  return (u8 *) arg0;
}

void func_800DFD64(u32 **dl, u16 arg1, unsigned int arg2, f32 a3, f32 f1, f32 f2)
{
  u8 *rec = D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64);
  u8 *obj = D_800E2660 + ((*((u16 *) (inline_fn2(D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64)) + 0x3C))) * 0x308);
  u32 s3 = 0x80000000;
  u32 *g;
  u32 *__repair_phase_g;
  char s0 = arg2;
  u32 s5;
  s32 s6 = 0;
  f32 fs0 = a3;
  f32 fs1 = f1;
  f32 fs2 = f2;
  u8 v;
  u8 *p;
  if (!((*((u16 *) (inline_fn2(rec) + (2 + (D_80126FF6 * 2))))) & 8))
  {
    if (!(((((f64) (*((f32 *) (rec + 0x30)))) == D_800E1E10) && (((f64) (*((f32 *) (rec + 0x34)))) == D_800E1E10)) && (((f64) (*((f32 *) (rec + 0x38)))) == D_800E1E10)))
    {
      guScale((u32 *) ((obj + ((arg2 & 0xFF) << 6)) + 0x288), *((f32 *) (rec + 0x30)), *((f32 *) (rec + 0x34)), *((f32 *) (rec + 0x38)));
      s6 = 1;
    }
    guTranslate((u32 *) ((obj + ((arg2 & 0xFF) << 6)) + 0x8), *((f32 *) ((D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64)) + 0x18)), *((f32 *) (rec + 0x1C)), *((f32 *) (rec + 0x20)));
    if (!((*((u16 *) (((u8 *) rec) + (2 + (D_80126FF6 * 2))))) & 0x40))
    {
      if ((*inline_fn(rec)) & 0x80)
      {
        func_800DF2AC(0, fs0, fs1, fs2, *((f32 *) (rec + 0x18)), *((f32 *) (rec + 0x1C)), *((f32 *) (rec + 0x20)), (u32 *) (rec + 0x24), (u32 *) (rec + 0x28));
      }
    }
    else
    {
      func_800DF2AC(1, fs0, fs1, fs2, *((f32 *) (rec + 0x18)), *((f32 *) (rec + 0x1C)), *((f32 *) (rec + 0x20)), (u32 *) (rec + 0x24), (u32 *) (rec + 0x28));
    }
    g = *dl;
    *dl = g + 2; g[0] = 0x01020040;
    ;
    s5 = s0 << 6;
    g[1] = ((u32) ((obj + 0x8) + ((arg2 & 0xFF) << 6))) - s3;
    p = (obj + (s0 << 8)) + 0x88;
    func_801FA678((u32) (p + (D_80126FF6 << 6)), *((u32 *) (((u8 *) rec) + 0x24)), *((u32 *) (inline_fn2(rec) + 0x28)), *((u32 *) (inline_fn2(rec) + 0x2C)));
    g = *dl;
    *dl = g + 2;
    g[0] = 0x01000040; g[1] = ((u32) (p + (D_80126FF6 << 6))) - s3;
    if (s6 & 0xFF)
    {
      g = *dl;
      *dl = g + 2;
      g[0] = 0x01000040; g[1] = ((u32) ((obj + 0x288) + s5)) - s3;
    }
    if ((*inline_fn2(((u8 *) rec) + 0xB)) != 0)
    {
      if ((*inline_fn2(((u8 *) rec) + 0xC)) == 0xFF)
      {
        goto L158;
      }
      switch (*inline_fn2(inline_fn2(rec) + 0xB))
      {
        case 1:

        case 9:
          if (D_80126FF7 != 0xB)
        {
          g = *dl;
          *dl = g + 2;
          g[0] = 0x06000000; g[1] = D_800E188C;
        }
          v = 0xB;
          goto L188;

        case 2:

        case 10:
          if (D_80126FF7 != 0xC)
        {
          g = *dl;
          *dl = g + 2;
          g[0] = 0x06000000; g[1] = D_800E1890;
        }
          v = 0xC;
          goto L188;

        case 3:

        case 4:
          if (D_80126FF7 != 5)
        {
          g = *dl;
          *dl = g + 2;
          g[0] = 0x06000000; g[1] = D_800E1874;
        }
          v = 5;
          goto L188;

        case 6:

        case 7:
          if (D_80126FF7 != 8)
        {
          g = *dl;
          *dl = g + 2;
          g[0] = 0x06000000; g[1] = D_800E1880;
        }
          v = 8;
          goto L188;

        default:
          goto L144;

      }

      L144:
      if (D_80126FF7 == (*((u8 *) (inline_fn2(rec) + 0xB))))
      {
        goto L184;
      }

      L158:
      g = *dl;

      *dl = g + 2;
      g[0] = 0x06000000; g[1] = D_800E1860[*((u8 *) (((u8 *) rec) + 0xB))];
      L184:
      v = *inline_fn2(inline_fn2(rec) + 0xB);

      L188:
      D_80126FF7 = v;

      g = *dl;
      *dl = g + 2; g[0] = 0xFA000000; g[1] = (*((u8 *) (((u8 *) rec) + 0xC))) | 0xFFFFFF00;
    }
    if (!((*((u16 *) (inline_fn2(rec) + (2 + (D_80126FF6 * 2))))) & 0x4))
    {
      if (*((u32 *) (inline_fn2(rec) + 0x58)))
      {
        ((void (*)(u32 **, u16)) (*((u32 *) (inline_fn2(rec) + 0x58))))(dl, arg1);
      }
    }
    if (!((*((u16 *) (inline_fn2(rec) + (2 + (D_80126FF6 * 2))))) & 0x1))
    {
      if (((u32 *) (*((u32 *) (((u8 *) rec) + 0x50))))[1])
      {
        __repair_phase_g = *dl;
        *dl = __repair_phase_g + 2; __repair_phase_g[0] = 0x06000000; __repair_phase_g[1] = *((u32 *) ((u32 *) (*((u32 *) (inline_fn2(rec) + 0x50))))[1]);
      }
    }
  }
}

