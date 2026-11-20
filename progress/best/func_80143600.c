static __inline__ int __repair_inline(s32 a, s32 b) { return a < b; }
#define FLD(p, t, o) (*(t *)((u8 *)(p) + (o)))

s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
f32 func_801F99A8(u8);
s16 func_801FA30C(s32, s32, void *, s32, s32);
extern u8 D_8011F2F0[];
extern f64 D_80183550;
extern f64 D_80183558;
extern f32 D_80187BE4;
extern u8 D_8022A770[];
extern u8 D_8022A772[];
extern u8 D_8023936C[];
extern u8 func_80143B68[];

void func_80143600(s32 arg0) {
    f32 *__base_D_80187BE4;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *entry;
    f32 f_a;
    f32 f_b;
    f32 f_c;
    f32 f_d;
    s32 i;
    s32 flag;
    s32 k;
    s32 v;

    temp_s0 = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    FLD((D_8011F2F0 + (arg0 & 0xFFFF) * 0x64), u8, 0xC) = FLD(temp_s0, u8, 0xC) + 1;
    (*(&D_80187BE4)) = func_801F99A8(FLD(temp_s0, u8, 0xC));
    __base_D_80187BE4 = &D_80187BE4;
    if ((*__base_D_80187BE4) < 0.0f) {
        (*(&D_80187BE4)) = -(*__base_D_80187BE4);
    }
    flag = 0;
    for (i = 0; __repair_inline(i, 7); i++) {{ s32 __repair_value; __repair_value = i * 8; k = __repair_value; }
    }
}
