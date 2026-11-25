inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

typedef struct 
{
  s32 f0;
  s32 f4;
  f32 f8;
  s32 fC;
  s32 f10;
  s32 f14;
  s32 f18;
  f32 f1C;
  s32 f20;
} Entry;
extern Entry D_80221080[];
inline static unsigned short inline_fn(unsigned short arg0)
{
  return (unsigned short) arg0;
}

void func_8021F5F0(void)
{
  unsigned short i;
  for (i = 0; __repair_inline(i, 12); i++)
  {
    D_80221080[(unsigned short) i].f0 = 0;
    D_80221080[(unsigned short) i].f4 = 0;
    D_80221080[(unsigned short) i].f8 = 50.0f;
    D_80221080[(unsigned short) i].fC = 0;
    D_80221080[(unsigned short) i].f10 = 0;
    D_80221080[(unsigned short) i].f14 = 0;
    do
    {
      D_80221080[(unsigned short) i].f18 = 0;
    }
    while (0);
    D_80221080[(unsigned short) i].f1C = 1.0f;
    D_80221080[inline_fn(i)].f20 = 0;
  }

}

