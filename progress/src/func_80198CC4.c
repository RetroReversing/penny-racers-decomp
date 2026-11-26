typedef struct { f32 x; char pad[96]; } CC4Rec;
typedef struct { u8 b0; u8 b1; u8 b2; } CC4Mode;
extern CC4Rec D_8011F30C[];
extern s8 D_801C6BB9;
extern u8 D_801C7081[];
extern u8 D_801C7084[];
extern CC4Mode *D_801C7AB0;
extern u8 D_801CA130;
u8 func_80198CC4(u16 arg0)
{
  s32 r = 0;
  u8 v;
  if (D_801C7AB0->b0 == 3) {
    v = D_801C7084[D_801CA130 * 5];
  } else {
    v = D_801C7084[D_801CA130 * 5] - 0x2E;
  }
  if (D_801C6BB9 != 0) {
    if (D_801CA130 != D_801C7AB0->b2) {
      if ((u8)(v - 0x16) < 0x14) {
        D_8011F30C[arg0].x = (D_801C7081[D_801CA130 * 5] + 0x3C) * 0.5f;
      } else {
        D_8011F30C[arg0].x = D_801C7081[D_801CA130 * 5] * 0.5f;
      }
    }
    r = 1;
  }
  return r;
}
