extern u8 D_8011F2F0[];
typedef struct 
{
  u16 flags;
  u8 pad[98];
} Flags100;
typedef struct 
{
  u8 *data;
  u8 pad[96];
} Ptr100;
extern Flags100 D_8011F2F2[];
extern Ptr100 D_8011F340[];
void func_8014ABD8(s32 arg0)
{
  u8 *p;
  f32 t;
  p = D_8011F2F0 + ((arg0 & 0xFFFF) * 100);
  switch (*((u16 *) (p + 0x3E)))
  {
    case 0:
      D_8011F2F2[arg0 & 0xFFFF].flags |= 0x8000;
      *((u16 *) (p + 0x3E)) = 1;
      return;

    case 1:
      if ((*D_8011F340[(u16) arg0].data) == 0)
    {
 t = (*((f32 *) (p + 0x28))) - 1.0f; *((f32 *) (p + 0x28)) = t; if (t < 0.0f) { *((f32 *) (p + 0x28)) = t + 360.0f; }
    }
      return;

  }

}
