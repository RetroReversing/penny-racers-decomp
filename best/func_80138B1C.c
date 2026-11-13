extern u8 D_8006FAF0[];
typedef struct 
{
  struct 
  {
    u32 w0;
    u32 w1;
  } words;
} Gfx;
void func_80138B1C(Gfx **gp)
{
  u32 r;
  u32 g;
  u32 b;
  u32 fr;
  u32 fg;
  u32 fb;
  Gfx **p = gp;
  Gfx *gfx;
  u32 c;
  switch (*((u16 *) (D_8006FAF0 + 0x20)))
  {
    case 1:
      r = 10;
      g = 10;
      b = 50;
      fr = 255;
      fg = 255;
      fb = 255;
      break;

    case 2:
      r = 150;
      g = 150;
      b = 150;
      fr = 140;
      fg = 140;
      fb = 140;
      break;

    case 3:
      r = 170;
      g = 170;
      b = 170;
      fg = 190;
      fr = 190;
      fb = 190;
      break;

    default:
      r = 0;
      g = 0;
      b = 250;
      fr = 255;
      fg = 255;
      fb = 255;
      break;

  }

  gfx = (*p)++;
  gfx->words.w0 = 0xE7000000;
  gfx->words.w1 = 0;
 do { gfx = (*p)++; } while (0);
  gfx->words.w0 = 0xBA001402;
  gfx->words.w1 = 0x300000;
  gfx = (*p)++;
  gfx->words.w0 = 0xF7000000;
  do
  {
    c = (((r << 8) & 0xF800) | ((g << 3) & 0x7C0)) | ((b >> 2) & 0x3E); gfx->words.w1 = (((c | 1) << 16) | 1) | c;
  }
  while (0);
  gfx = (*p)++;
  gfx->words.w0 = 0xF64FC3BC;
  gfx->words.w1 = 0;
  if (((*((u16 *) (D_8006FAF0 + 0x20))) == 2) || ((*((u16 *) (D_8006FAF0 + 0x20))) == 7))
  {
    gfx = (*p)++;
    gfx->words.w0 = 0xF8000000;
    gfx->words.w1 = (((fr << 24) | (fg << 16)) | (fb << 8)) | 0xFF;
    gfx = (*p)++;
    gfx->words.w0 = 0xBC000008;
    gfx->words.w1 = 0x500FC00;
  }
}
