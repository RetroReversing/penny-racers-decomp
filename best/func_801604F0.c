#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Obj {
    u8 pad0[4];
    void *ptr4;
    f32 f8;
    f32 fC;
    f32 f10;
    u16 f14;
    u8 f16;
    u8 pad3[0x64 - 0x17];
} Obj;

f32 __cosf(f32);
f32 __sinf(f32);
void func_8013E49C(u16);
extern Obj D_8011F2F0[];
extern s8 D_8011F2FC[];
extern s8 D_8011F2FD[];
extern s8 D_8011F32E[];

void func_801604F0(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 var_fv0;
    s32 temp_a1;
    u16 temp_v1;
    Obj *temp_s0;
    Obj *temp_s1;
    Obj *temp_s3;

    temp_a1 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = &D_8011F2F0[arg0 & 0xFFFF];
    temp_s0 = M2C_FIELD(temp_s1, Obj **, 0x60);
    temp_s3 = &D_8011F2F0[*(u16 *)((s8 *)temp_s0->ptr4 + 2)];
    temp_s0->f14 = temp_s0->f14 - 1;
    if (temp_s0->f14 == 0) {
        D_8011F32E[temp_a1] = 1;
    }
    temp_fs5 = __sinf((((f32) (s16) temp_s0->f14 * 45.0f) + ((f32) temp_s0->f16 * 660.0f)) * 0.002454369f) * 10.0f;
    temp_fs4 = __cosf((((f32) (s16) temp_s0->f14 * 45.0f) + ((f32) temp_s0->f16 * 660.0f)) * 0.002454369f) * 10.0f;
    M2C_FIELD(temp_s1, f32 *, 0x30) = (f32) ((__sinf((f32) (s16) temp_s0->f14 * 0.002454369f * 50.0f) * 0.075f) + 0.15f);
    M2C_FIELD(temp_s1, f32 *, 0x34) = (f32) ((__cosf((f32) (s16) temp_s0->f14 * 0.002454369f * 50.0f) * 0.075f) + 0.15f);
    temp_v1 = D_8011F32E[temp_a1];
    switch (temp_v1) {
    case 0:
        temp_fs0 = M2C_FIELD(temp_s3, f32 *, 0x1C) + 8.0f;
        if ((temp_fs0 + __sinf((((f32) (s16) temp_s0->f14 * 60.0f) + ((f32) temp_s0->f16 * 600.0f)) * 0.002454369f)) < M2C_FIELD(temp_s1, f32 *, 0x1C)) {
            var_fv0 = temp_s0->fC - 1.0f;
        } else {
            var_fv0 = temp_s0->fC + 1.0f;
        }
        temp_s0->fC = var_fv0;
        temp_s0->f8 = (((temp_fs5 + M2C_FIELD(temp_s3, f32 *, 0x18)) - M2C_FIELD(temp_s1, f32 *, 0x18)) * 0.3f);
        temp_s0->fC = temp_s0->fC * 0.5f;
        temp_s0->f10 = (((temp_fs4 + M2C_FIELD(temp_s3, f32 *, 0x20)) - M2C_FIELD(temp_s1, f32 *, 0x20)) * 0.3f);
        M2C_FIELD(temp_s1, f32 *, 0x18) = M2C_FIELD(temp_s1, f32 *, 0x18) + temp_s0->f8;
        M2C_FIELD(temp_s1, f32 *, 0x1C) = M2C_FIELD(temp_s1, f32 *, 0x1C) + temp_s0->fC;
        M2C_FIELD(temp_s1, f32 *, 0x20) = M2C_FIELD(temp_s1, f32 *, 0x20) + temp_s0->f10;
        return;
    case 1:
        temp_s0->f8 = temp_s0->f8 * 0.1f;
        temp_s0->fC = temp_s0->fC * 0.1f;
        temp_s0->f10 = temp_s0->f10 * 0.1f;
        M2C_FIELD(temp_s1, f32 *, 0x18) = M2C_FIELD(temp_s1, f32 *, 0x18) + temp_s0->f8;
        M2C_FIELD(temp_s1, f32 *, 0x1C) = M2C_FIELD(temp_s1, f32 *, 0x1C) + temp_s0->fC;
        M2C_FIELD(temp_s1, f32 *, 0x20) = M2C_FIELD(temp_s1, f32 *, 0x20) + temp_s0->f10;
        D_8011F2FC[temp_a1] = D_8011F2FC[temp_a1] - 5;
        if ((u8) D_8011F2FC[temp_a1] < 6U) {
            func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
            D_8011F2FD[temp_a1] = 2;
        }
        return;
    }
}
