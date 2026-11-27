f32 __sinf(f32);
void liftCopyFlags(s32);
typedef struct {
    f32 y;
    char pad4[0x16];
    u16 flag;
    char pad1C[4];
    f32 phase;
    f32 baseY;
    char pad28[0x3C];
} Obj;
extern Obj D_8011F314[];
extern f64 D_80183780;
extern f32 racerTimers;
extern f64 D_80183788;

void func_8014D5CC(u16 arg0)
{
    f32 v;

    liftCopyFlags(arg0);
    if (D_8011F314[arg0].flag == 0) {
        D_8011F314[arg0].baseY = D_8011F314[arg0].y;
        D_8011F314[arg0].flag = 1;
    }
    D_8011F314[arg0].phase += 1.0f;
    v = *(f32 *)((u8 *)&racerTimers + arg0 * 0x64);
    if (v > 360.0f) {
        D_8011F314[arg0].phase = v - 360.0f;
    }
    D_8011F314[arg0].y = __sinf((f32) ((f64) D_8011F314[arg0].phase * D_80183780 / D_80183788)) * -20.0f - D_8011F314[arg0].baseY;
}
