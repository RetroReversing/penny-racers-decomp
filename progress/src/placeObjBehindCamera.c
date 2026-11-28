f32 __cosf(f32);
f32 __sinf(f32);
extern u8 sRowBoard[];
extern f32 sCameraYaw;
typedef struct { f32 x, y, z, ox, oy, oz, a, b, c; } Rec;
extern Rec D_80221080[];
#define R(o) (*(Rec *)((u8 *)D_80221080 + (o)))

/* Places the record at the row-board index ahead of the camera, using camera yaw and a fixed 40 degree tilt. */ void placeObjBehindCamera(void)
{
  s32 recOffset = *(s16 *)(sRowBoard + 0x2134) * sizeof(Rec);
  f32 *yawPtr = &sCameraYaw;
  f32 offsetX;
  f32 offsetZ;
  offsetX = __sinf(*yawPtr * 3.1415927f / 180.0f) * 1050.0f;
  R(recOffset).x = offsetX - __sinf(*yawPtr * 3.1415927f / 180.0f) * __sinf(0.69813174f) * 1050.0f + R(recOffset).ox;
  R(recOffset).y = __sinf(0.69813174f) * 1050.0f + R(recOffset).oy;
  offsetZ = __cosf(*yawPtr * 3.1415927f / 180.0f) * 1050.0f;
  R(recOffset).z = offsetZ - __cosf(*yawPtr * 3.1415927f / 180.0f) * __sinf(0.69813174f) * 1050.0f + R(recOffset).oz;
}
