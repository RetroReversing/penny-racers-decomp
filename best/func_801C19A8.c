typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern f32 D_801C6AC8[8];
extern f32 D_801C6B88[8];
extern s32 D_801C6BA8;
extern u8 D_801C6BAC;
extern u8 D_80167FB8[];
extern u8 D_80167FBC[];
extern f32 __sinf(f32);
extern void func_8013AE60(s32, f32 *);

typedef struct { f32 v[8]; } F8;

void func_801C19A8(s32 arg0) {
    F8 tmp;
    s32 i;
    s16 v;
    u16 idx;
    u16 st;
    f32 *src;

    src = D_801C6AC8;
    tmp = *(F8 *)src;
    idx = arg0 & 0xFFFF;
    if (D_801C6BAC == 0) {
        func_8013AE60(idx, D_801C6AC8);
    }
    st = D_8011F32E[idx].f0;
    if (st == 0) {
        for (i = 0; i < 8; i++) {
            D_801C6B88[i] = (f32) i * 45.0f;
        }
        D_801C6BA8 = 0;
        D_8011F32E[idx].f0 = 1;
        return;
    }
    if (st != 1) {
        return;
    }
    for (i = 0; i < 8; i++) {
        if (D_801C6B88[i] < 360.0f) {
            D_801C6B88[i] = D_801C6B88[i] + 4.0f;
        } else {
            D_801C6B88[i] = D_801C6B88[i] - 360.0f;
        }
    }
    for (i = 0; i < 8; i++) {
        v = (s16) (__sinf((D_801C6B88[i] * 3.1415927f) / 180.0f) * tmp.v[i]);
        *(s16 *)(D_80167FB8 + (i + 8) * 16 + 4) = v;
        *(s16 *)(D_80167FBC + i * 16) = v;
    }
}
