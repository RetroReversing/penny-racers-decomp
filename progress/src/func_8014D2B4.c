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
extern Obj D_8011F314[];
extern f64 D_80183760;
extern f32 D_8011F334;
extern f64 D_80183768;

void func_8014D2B4(u16 arg0)
{
    f32 v;

    liftCopyFlags(arg0);
    if (D_8011F314[arg0].flag == 0) {
        D_8011F314[arg0].baseY = D_8011F314[arg0].y;
        D_8011F314[arg0].flag = 1;
    }
    D_8011F314[arg0].phase += 1.0f;
    {
        f32 w = *(f32 *)((u8 *)&D_8011F334 + arg0 * 0x64);
        if (w > 360.0f) {
            D_8011F314[arg0].phase = w - 360.0f;
        }
    }
    v = (f32) ((f64) D_8011F314[arg0].phase * D_80183760 / D_80183768);
    D_8011F314[arg0].y = __sinf(v) * 20.0f - D_8011F314[arg0].baseY;
    D_8011F314[arg0].x = __cosf(v) * 30.0f;
}
