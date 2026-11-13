extern u8 D_80237640[];
extern u8 D_80237642[];
extern u8 D_80237644[];
extern u8 D_80237648[];
extern u8 D_8023764A[];
void func_80235074(s32 arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  temp_v1 = (arg0 & 0xFFFF) * 0xC;
  temp_v0 = (arg1 & 0xFFFF) * 0xC;
  *(u16 *)(D_80237640 + temp_v1) = *(u16 *)(D_80237640 + temp_v0);
  *(u16 *)(D_80237642 + temp_v1) = *(u16 *)(D_80237642 + temp_v0);
  *(f32 *)(D_80237644 + temp_v1) = *(f32 *)(D_80237644 + temp_v0);
  *(u16 *)(D_80237648 + temp_v1) = *(u16 *)(D_80237648 + temp_v0);
  *(u8 *)(D_8023764A + temp_v1) = *(u8 *)(D_8023764A + temp_v0);
}
