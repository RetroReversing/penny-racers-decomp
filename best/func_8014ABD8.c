extern unsigned int D_8011F2F0[];
extern char D_8011F2F2[];
typedef struct 
{
  u32 f0;
  u8 pad[96];
} Slot_8011F340;
extern Slot_8011F340 D_8011F340[];
void func_8014ABD8(s32 arg0)
{
  f32 temp_fv1;
  s32 temp_v0;
  u16 temp_v1;
  void *temp_a1;
  temp_a1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
  temp_v1 = *((u16 *) (((char *) temp_a1) + 0x3E));
  switch (temp_v1)
  {
 do { case 0: temp_v0 = (arg0 & 0xFFFF) * 0x64; *((u16 *) (D_8011F2F2 + temp_v0)) = (*((u16 *) (D_8011F2F2 + temp_v0))) | 0x8000; *((u16 *) (((char *) temp_a1) + 0x3E)) = 1U; return; } while (0);
    case 1:
      if ((*((s32 *) D_8011F340[arg0 & 0xFFFF].f0)) == 0)
    {
      temp_fv1 = (*((f32 *) (((char *) temp_a1) + 0x28))) - 1.0f;
      *((f32 *) (((char *) temp_a1) + 0x28)) = temp_fv1;
      if (temp_fv1 < 0.0f)
      {
        *((f32 *) (((char *) temp_a1) + 0x28)) = (f32) (temp_fv1 + 360.0f);
      }
    }
      return;

  }

}
