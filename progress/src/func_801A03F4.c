f32 __cosf(f32);
f32 __sinf(f32);
extern u8 sRowBoard[];
extern f32 sCameraYaw;
typedef struct { f32 x, y, z, ox, oy, oz, a, b, c; } Rec;
extern Rec D_80221080[];
#define R(o) (*(Rec *)((u8 *)D_80221080 + (o)))

void func_801A03F4(void)
{
  s32 off = *(s16 *)(sRowBoard + 0x2134) * sizeof(Rec);
  f32 *ang = &sCameraYaw;
  f32 t;
  f32 u;
  t = __sinf(*ang * 3.1415927f / 180.0f) * 1050.0f;
  R(off).x = t - __sinf(*ang * 3.1415927f / 180.0f) * __sinf(0.69813174f) * 1050.0f + R(off).ox;
  R(off).y = __sinf(0.69813174f) * 1050.0f + R(off).oy;
  u = __cosf(*ang * 3.1415927f / 180.0f) * 1050.0f;
  R(off).z = u - __cosf(*ang * 3.1415927f / 180.0f) * __sinf(0.69813174f) * 1050.0f + R(off).oz;
}
