typedef struct { f32 v[8]; } V8;
f32 __sinf(f32);
extern void func_8013AE60(s32, void *);
extern u8 D_8011F32E[];
extern s16 D_80167FB8[];
extern V8 D_80183308;
extern f32 D_80183B80[8];
extern s32 D_80183BA0;

void func_8013CF4C(u16 arg0) {
int __repair_literal;

    V8 sp;
    s32 i;

    sp = D_80183308;
    func_8013AE60(arg0, &D_80183308);
    if (*(u16 *)(D_8011F32E + arg0 * 0x64) == 0) {
        for (i = 0; i < 8; i++) D_80183B80[i] = i * 45;
        D_80183BA0 = 0;
        *(u16 *)(D_8011F32E + arg0 * 0x64) = 1;
        return;
    }
    if (*(u16 *)(D_8011F32E + arg0 * 0x64) != 1) return;
    for (i = 0; i < 8; i++) {
        if (D_80183B80[i] < 360.0f) D_80183B80[i] = D_80183B80[i] + 1.0;
        else D_80183B80[i] = D_80183B80[i] - 360.0f;
    }
    for (i = 0; i < 8; i++) {
        s32 v = __sinf(D_80183B80[i] * 3.14159 / 180.0) * sp.v[i];
__repair_literal = 8;

        D_80167FB8[(i + 8) * __repair_literal + 2] = v;
        D_80167FB8[i * 8 + 4] = v;
    }
}
