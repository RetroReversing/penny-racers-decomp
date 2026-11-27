typedef struct {
  /* 0x00 */ u8 player;
  /* 0x01 */ u8 pad1[0xB];
  /* 0x0C */ u8 alpha;
  /* 0x0D */ u8 unkD;
  /* 0x0E */ u8 padE[0xA];
  /* 0x18 */ f32 unk18;
  /* 0x1C */ f32 unk1C;
  /* 0x20 */ f32 unk20;
  /* 0x24 */ u8 pad24[0x1A];
  /* 0x3E */ u16 state;
  /* 0x40 */ u8 pad40[4];
  /* 0x44 */ f32 timer;
  /* 0x48 */ u8 pad48[0x1C];
} Rec_801348C8;
extern Rec_801348C8 D_8011F2F0[];

/* Runs a banner's state machine: fade in and hold for 120 frames, then slide out horizontally and vertically. */ void updateSlideOutBanner(u16 objIndex)
{
  switch (D_8011F2F0[objIndex].state) {
    case 0:
      {
        u32 alpha = D_8011F2F0[objIndex].alpha + 8;
        if (alpha >= 0xFF) {
          D_8011F2F0[objIndex].alpha = 0xFF;
        } else {
          D_8011F2F0[objIndex].alpha = alpha;
        }
      }
      D_8011F2F0[objIndex].timer = (u16)((u32)D_8011F2F0[objIndex].timer + 1);
      if ((u16)(u32)D_8011F2F0[objIndex].timer > 0x78) {
        if ((u16)(u32)D_8011F2F0[objIndex].unk20 == 0xFF) {
          D_8011F2F0[objIndex].unkD = 2;
          D_8011F2F0[objIndex].state = 3;
        } else {
          D_8011F2F0[objIndex].state = 1;
        }
      }
      break;
    case 1:
      if (D_8011F2F0[objIndex].unk18 > -80.0f) {
        D_8011F2F0[objIndex].unk18 -= 1.0f;
      } else {
        D_8011F2F0[objIndex].state = 2;
      }
      break;
    case 2:
      if (D_8011F2F0[objIndex].unk1C > -36.0f) {
        D_8011F2F0[objIndex].unk1C -= 1.0f;
      } else {
        D_8011F2F0[objIndex].state = 3;
      }
      break;
  }
}
