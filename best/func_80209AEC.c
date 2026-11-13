typedef struct {
    s32 f0;
    s32 f4;
    f32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    f32 f1C;
    s32 f20;
} Entry;

extern Entry D_80221080[];

void func_80209AEC(void) {
    s32 i;
    f32 f_hi;
    f32 f_one;

    f_hi = 50.0f;
    f_one = 1.0f;
    for (i = 0; i < 12; i++) {
        D_80221080[i].f0 = 0;
        D_80221080[i].f4 = 0;
        D_80221080[i].f8 = f_hi;
        D_80221080[i].fC = 0;
        D_80221080[i].f10 = 0;
        D_80221080[i].f14 = 0;
        D_80221080[i].f18 = 0;
        D_80221080[i].f1C = f_one;
        D_80221080[i].f20 = 0;
    }
}
