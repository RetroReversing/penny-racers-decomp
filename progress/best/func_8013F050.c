inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

extern char D_8011F308[];
typedef struct 
{
  u16 f0;
  u8 pad[2286];
} Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
f32 sqrtf(f32);
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFFFF) * 100;
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 + 0x67;
}

s32 func_8013F050(s32 arg0, s8 *arg1)
{
  f32 x;
  f32 y;
  f32 z;
  f32 dx;
  f32 dy;
  f32 dz;
  f32 dist;
  s32 i;
  s32 j;
  if (D_8022A772[(unsigned short) i].f0 || arg1)
  {
    x = *((f32 *) (D_8011F308 + inline_fn(arg0)));
    y = *((f32 *) ((D_8011F308 + 4) + inline_fn(arg0)));
    z = *((f32 *) ((D_8011F308 + 8) + inline_fn(arg0)));
  }
  else
  {
    x = *((f32 *) (D_8011F308 + inline_fn(arg0)));
    y = *((f32 *) ((D_8011F308 + 4) + inline_fn(arg0)));
    z = *((f32 *) ((D_8011F308 + 8) + ((arg0 & 0xFFFF) * 100)));
  }
  for (i = 0; (i < 7); i++)
  {
    do
    {
      if ((arg1 + i)[0x60] != (-1))
      {
        j = D_8022A772[(unsigned short) i].f0 * 100; dx = x - (*((f32 *) (D_8011F308 + j))); dy = y - (*((f32 *) ((D_8011F308 + 4) + j))); dz = z - (*((f32 *) ((D_8011F308 + 8) + j)));
 do { dist = sqrtf((dz * dz) + ((dx * dx) + (dy * dy))); } while (0);
        if (dist < (*((f32 *) (arg1 + 0x70))))
        {
          {
            if (arg1[inline_fn2(i)] == 0)
            {
              arg1[inline_fn2(i)] = 1;
              return 1;
            }
          }
        }
      }
    }
    while (0);
  }

  return 0;
}
