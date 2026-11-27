extern u8 D_801680B8[];
extern void animateWaveVerticesAlt(void);
extern void drawWaterStrips(void);
extern void func_8014C7A0(void);
extern void func_8014D830(void);
extern void func_8014F5A8(void);
extern void func_80151564(void);
extern void func_801528B4(void);
extern void func_801545E0(void);
extern void func_801552C4(void);
extern void func_8015657C(void);
extern void func_80158424(void);
s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, f32, s32, f32, f32, f32);
void func_8013D1A4(u16 arg0)
{
  switch (arg0)
  {
    case 0:
      break;
    case 1:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 604.0f, 108.0f, -1700.0f, 0, 90.0f, 0, 1.0f, 1.0f, 1.0f);
      func_8014C7A0();
      break;
    case 2:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, -4.0f, 108.0f, -1650.0f, 0, 270.0f, 0, 1.0f, 1.0f, 1.0f);
      func_8014D830();
      break;
    case 3:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, -1804.0f, 108.0f, -700.0f, 0, 270.0f, 0, 1.0f, 1.0f, 1.0f);
      func_8014F5A8();
      break;
    case 4:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 1400.0f, 108.0f, 4.0f, 0, 0.0f, 0, 0.96f, 1.0f, 1.0f);
      func_80151564();
      break;
    case 5:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, -2222.0f, 116.0f, 2.0f, 0, 0.0f, 0, 1.2f, 1.0f, 1.0f);
      func_801528B4();
      break;
    case 6:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 2300.0f, 108.0f, 1204.0f, 0, 0.0f, 0, 1.0f, 1.0f, 1.0f);
      func_801545E0();
      break;
    case 7:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 4.0f, 108.0f, 392.0f, 0, 90.0f, 0, 0.92f, 1.0f, 1.0f);
      func_801552C4();
      break;
    case 8:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 1400.0f, 108.0f, -1196.0f, 0, 0.0f, 0, 1.0f, 1.0f, 1.0f);
      func_8015657C();
      break;
    case 9:
      objCreate(0, 0, 2, 0, 0x51, 0xFF, &D_801680B8, animateWaveVerticesAlt, drawWaterStrips, 604.0f, 108.0f, 3987.5f, 0, 90.0f, 0, 1.0f, 1.0f, 1.0f);
      func_80158424();
      break;
  }
}
