f32 __sinf(f32);
f32 __cosf(f32);
void liftCopyFlags(s32);
typedef struct {
    f32 y;
    char pad4[4];
    f32 x;
    char padC[0xE];
    u16 flag;
    char pad1C[4];
    f32 phase;
    f32 baseY;
    char pad28[0x3C];
} Obj;
extern Obj liftPlatforms[];
extern f64 D_80183760;
extern f32 racerTimers;
extern f64 D_80183768;

/* Advances one lift platform's bob phase, wraps it at 360, and sets its vertical and circular offsets. */ void updateLiftPlatformBob(u16 platformIndex)
{
    f32 phaseAngle;

    liftCopyFlags(platformIndex);
    if (liftPlatforms[platformIndex].flag == 0) {
        liftPlatforms[platformIndex].baseY = liftPlatforms[platformIndex].y;
        liftPlatforms[platformIndex].flag = 1;
    }
    liftPlatforms[platformIndex].phase += 1.0f;
    {
        f32 racerTime = *(f32 *)((u8 *)&racerTimers + platformIndex * 0x64);
        if (racerTime > 360.0f) {
            liftPlatforms[platformIndex].phase = racerTime - 360.0f;
        }
    }
    phaseAngle = (f32) ((f64) liftPlatforms[platformIndex].phase * D_80183760 / D_80183768);
    liftPlatforms[platformIndex].y = __sinf(phaseAngle) * 20.0f - liftPlatforms[platformIndex].baseY;
    liftPlatforms[platformIndex].x = __cosf(phaseAngle) * 30.0f;
}
