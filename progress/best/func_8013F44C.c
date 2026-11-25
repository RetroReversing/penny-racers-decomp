f32 sqrtf(f32);
extern u8 D_8011F2F0[];
extern s32 D_8018D674;
extern u8 D_8022A770[];
inline static f32 inline_fn(f32 *arg0)
{
  return *arg0;
}

void func_8013F44C(s32 arg0, u8 *arg1)
{
  f32 a;
  f32 b;
  f32 c;
  f32 d0;
  f32 d1;
  f32 d2;
  f32 dist;
  s32 i;
  
  u8 *s0;
  u8 *s1;
  s8 t;
  if (dist)
  {
u8 *p;

    do
    {
      p = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
      D_8018D674 = 0;
      do
      {
        a = *((f32 *) (p + 0x18));
        b = *((f32 *) (p + 0x1C));
      }
      while (0);
    }
    while (0);
    c = *((f32 *) (p + 0x20));
  }
  else
  {
u8 *p;

    p = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    D_8018D674 = 0;
    a = *((f32 *) (p + 0x18));
    b = *((f32 *) (p + 0x1C));
    c = *((f32 *) (p + 0x20));
  }
  for (i = 0; i < 7; i++)
  {
 do { do { t = *((s8 *) ((arg1 + 0x60) + i)); if (t != (-1)) { s0 = D_8022A770 + (t * 0x8F0); s1 = D_8011F2F0 + ((*((u16 *) (s0 + 2))) * 0x64); d0 = a - (*((f32 *) (s1 + 0x18))); d1 = b - (*((f32 *) (s1 + 0x1C))); do { do { d2 = c - (*((f32 *) (s1 + 0x20))); } while (0); dist = sqrtf((((a - (*((f32 *) (s1 + 0x18)))) * (a - (*((f32 *) (s1 + 0x18))))) + (d1 * d1)) + (d2 * d2)); } while (0); if (dist < (*((f32 *) (arg1 + 0x70)))) {
u8 *p;
 if ((*((f32 *) (s1 + 0x18))) > (*((f32 *) (p + 0x18)))) { *((f32 *) (s0 + 0x854)) = (*((f32 *) (s0 + 0x854))) + ((*((f32 *) (arg1 + 0x70))) - dist); } else { *((f32 *) (s0 + 0x854)) = (*((f32 *) (s0 + 0x854))) - ((*((f32 *) (arg1 + 0x70))) - dist); } if ((*((f32 *) (p + 0x20))) < inline_fn((f32 *) (s1 + 0x20))) { *((f32 *) (s0 + 0x85C)) = ((*((f32 *) (arg1 + 0x70))) - dist) + (*((f32 *) (s0 + 0x85C))); } else { *((f32 *) (s0 + 0x85C)) = (*((f32 *) (s0 + 0x85C))) - ((*((f32 *) (arg1 + 0x70))) - dist); } D_8018D674 = 1; } } } while (0); } while (0);
  }

}
