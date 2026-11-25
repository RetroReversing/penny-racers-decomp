typedef struct Gfx
{
  u32 w0;
  u32 w1;
} Gfx;
extern u8 D_8011F2F0[];
extern u8 D_80126FF6;
extern u8 D_8018A264[];
extern u8 D_8011F32E[];
extern u8 D_8011F2FC[];
void func_8013B704(Gfx **pkt, s32 arg1)
{
  Gfx *g;
  Gfx *__repair_phase_g;
  s32 r;
  s32 gr;
  s32 b;
  
  u16 idx = arg1 & 0xFFFF;
  if (D_8011F2F0[idx * 0x64] == D_80126FF6)
  {
    b = D_8018A264[D_8011F2F0[idx * 0x64]];
    if (b == 1)
    {
      g = *pkt;
      *pkt = g + 1;
      g->w0 = 0xE7000000;
      g->w1 = 0;
      g = *pkt;
      *pkt = g + 1;
      g->w0 = 0xB6000000;
      g->w1 = b;
      g = *pkt;
      do { *pkt = g + 1;
      g->w0 = 0xB900031D & 0xFF; } while (0);
      g->w1 = 0x00504340;
    }
  }
  switch ((*((u16 *) (D_8011F32E + ((arg1 & 0xFFFF) * 0x64)))) - 0xB)
  {
    case 0x0:
      r = 0xFF;
      gr = 0xFF;
      b = 0;
      break;

    case 0x1:
      r = 0xFF;
      b = 0xFF;
      gr = 0xFF;
      break;

    case 0x2:
      r = 0;
      gr = 0x96;
      b = 0x32;
      break;

    case 0x3:
      r = 0xC8;
      gr = 0xC8;
      b = 0xFF;
      break;

    case 0x4:

    case 0x5:

    case 0x6:

    case 0x7:

    case 0x8:

    case 0x9:

    case 0xA:

    case 0xB:

    case 0xC:

    case 0xD:

    case 0xE:

    case 0xF:

    case 0x10:

    case 0x11:

    case 0x12:

    case 0x13:

    case 0x14:

    case 0x15:

    case 0x16:

    case 0x17:

    case 0x18:

    case 0x19:

    case 0x1A:

    case 0x1B:

    case 0x1C:

    case 0x1D:

    case 0x1E:

    case 0x1F:

    case 0x20:

    case 0x21:

    case 0x22:

    default:
      r = 0x64;
      b = 0x64;
      gr = 0x64;
      break;

  }

  __repair_phase_g = *pkt;
  *pkt = __repair_phase_g + 1;
  __repair_phase_g->w0 = 0xFA000000;
  __repair_phase_g->w1 = (((r << 24) | (gr << 16)) | (b << 8)) | D_8011F2FC[(arg1 & 0xFFFF) * 0x64];
}

