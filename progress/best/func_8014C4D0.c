extern u8 D_8011F338[];
extern u32 D_8016B760[];
extern u32 D_8016B774[];
extern u8 D_8016B788[];
inline static u32 *inline_fn(u32 *arg0, int arg1)
{
  return arg0 + arg1;
}

inline static u32 *inline_fn2(u32 **arg0)
{
  return *arg0;
}

void func_8014C4D0(u32 **arg0, u32 arg1)
{
  u32 *p;
  u32 *__repair_phase_p;
  u32 i;
  p = inline_fn2(arg0);
  *arg0 = inline_fn(p, 2); p[0] = 0xB6000000; p[1] = 0x2000;
  p = *arg0;
  *arg0 = inline_fn(p, 2);
  do
  {
    p[0] = 0xFD100000;
    do
    {
      i = ((u32) (*((f32 *) inline_fn(D_8011F338, (arg1 & 0xFFFF) * 0x64)))) & 0xFFFF; p[1] = D_8016B774[D_8016B788[i]]; p = *arg0;
      *arg0 = inline_fn(p, 2); p[0] = 0xE8000000; p[1] = 0;
    }
    while (0);
    p = inline_fn2(arg0);
    *arg0 = inline_fn(p, 2);
    do
    {
      p[0] = 0xF5000100;
      if (1)
      {
        do
        {
          p[1] = 0x07000000; p = *arg0;
          *arg0 = p - (-2);
          p[0] = 0xE6000000;
          do
          {
            p[1] = 0;
            p = *arg0;
            *arg0 = inline_fn(p, 2); p[0] = 0xF0000000;
          }
          while (0);
          p[1] = 0x073FC000; p = *arg0;
          *arg0 = inline_fn(p, 2); p[0] = 0xE7000000; p[1] = 0;
          p = *arg0;
          *arg0 = inline_fn(p, 2); p[0] = 0xFD500000;
          do
          {
            i = ((u32) (*((f32 *) inline_fn(D_8011F338, (arg1 & 0xFFFF) * 0x64)))) & 0xFFFF; p[1] = D_8016B760[D_8016B788[i]]; p = inline_fn2(arg0);
            *arg0 = inline_fn(p, 2); p[0] = 0xF5500000; p[1] = 0x07098260; p = *arg0;
            *arg0 = inline_fn(p, 2); p[0] = 0xF3000000;
            do
            {
              p[1] = 0x073FF200; p = *arg0;
              do
              {
                *arg0 = inline_fn(p, 2); p[0] = 0xE6000000; p[1] = 0; __repair_phase_p = inline_fn2(arg0);
                *arg0 = inline_fn(__repair_phase_p, 2); __repair_phase_p[0] = 0xE7000000; __repair_phase_p[1] = 0; p = inline_fn2(arg0);
                *arg0 = inline_fn(p, 2);
              }
              while (0);
              p[0] = (char) 0xF5400800;
            }
            while (0);
            p[1] = 0x98260; p = *arg0;
            *arg0 = inline_fn(p, 2); p[0] = 0xF2000000;
          }
          while (0);
        }
        while (0);
        p[1] = 0xFC0FC;
      }
    }
    while (0);
  }
  while (0);
}

