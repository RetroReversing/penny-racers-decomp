/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_801CA140(void **, s32);                /* extern */
M2C_UNK func_801CA2D4(void **);                     /* extern */
M2C_UNK func_801CA528(void **, M2C_UNK, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_801CB820(void **, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_801CBC20(void **, M2C_UNK, s32, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_801CC150(void **, s32, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_8011F350;
extern u8 D_80126FF6;
extern M2C_UNK D_801CF4C8;
extern M2C_UNK D_801E4438;
extern M2C_UNK D_801E4BC0;
extern M2C_UNK D_801E4DC8;
extern M2C_UNK D_801E59D0;
extern M2C_UNK D_801E59F8;
extern M2C_UNK D_801E60E0;
extern M2C_UNK D_801E6108;
extern M2C_UNK D_801E6430;
extern M2C_UNK D_801E6638;
extern M2C_UNK D_801E6960;
extern M2C_UNK D_801E8790;
extern s32 D_801E8798;
extern u8 D_801E87C0;
extern u16 D_801E9730;
extern u16 D_801E9764;
extern M2C_UNK D_801E9768;
extern u8 D_801E9799;
extern u8 D_801E9B1C;
extern M2C_UNK D_801E9B38;
extern s16 D_801E9D5C;
extern u16 D_801F188A;

void func_801DECB4(void **arg0, s32 arg1) {
    s32 *temp_s0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_v0;
    u16 temp_v1;
    u32 temp_s5;
    void *temp_a2;
    void *temp_v1_2;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0x0:
        *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        /* fallthrough */
    case 0x1:
        func_801CA2D4(arg0);
        var_s3 = 0;
        do {
            var_s0 = 0;
            var_a1 = 0 << 0x16;
loop_12:
            func_801CC150(arg0, var_a1 >> 0x10, (s16) (var_s3 * 0x3C), 0, 0, 0x40, 0x3C, 0x40, 0x3C, 0x40, 0x1E, 0, 0, 0x13F, 0xEF, &D_801E4438, &D_801E4BC0);
            var_s0 += 1;
            var_a1 = var_s0 << 0x16;
            if (var_s0 < 5) {
                goto loop_12;
            }
            var_s3 += 1;
        } while (var_s3 < 4);
        func_801CA140(arg0, var_a1);
        func_801CC150(arg0, 0x40, 0x16, 0, 0, 0xC0, 0x20, 0xC0, 0x20, 0xC0, 0x10, 0, 0, 0x13F, 0xEF, &D_801E4DC8, &D_801E59D0);
        temp_s5 = (u32) D_801E9D5C >> 0x1F;
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0xED000100;
        M2C_FIELD(temp_v1_2, s32 *, 4) = 0x4FC288;
        var_s3_2 = -(D_801E9D5C > 0);
        if (var_s3_2 < (temp_s5 + 7)) {
            do {
                temp_s1 = (var_s3_2 * 0xE) + 0x40;
                temp_s0 = (((D_801F188A + var_s3_2) == D_801E9730) * 4) + &D_801E8790;
                temp_s2 = var_s3_2 + 1;
                func_801CB820(arg0, 0x20, (temp_s1 + (u16) D_801E9D5C) & 0xFFFF, 0xA, *temp_s0, 2, (temp_s2 + D_801F188A) & 0xFFFF);
                func_801CA528(arg0, 0x34, (temp_s1 + (u16) D_801E9D5C) & 0xFFFF, 0x1A, &D_801CF4C8, *temp_s0);
                func_801CBC20(arg0, 0x48, (temp_s1 + (u16) D_801E9D5C) & 0xFFFF, 0xA, *temp_s0, ((D_801F188A + var_s3_2) << 5) + &D_801E9B38);
                func_801CB820(arg0, 0x106, (temp_s1 + (u16) D_801E9D5C) & 0xFFFF, 0xA, *temp_s0, 3, ((u32) *(&D_801E9B38 + ((D_801F188A + var_s3_2) << 5)) >> 8) & 0xFFFF);
                var_s3_2 = temp_s2;
            } while (var_s3_2 < (temp_s5 + 7));
        }
        temp_a2 = *arg0;
        *arg0 = temp_a2 + 8;
        temp_a1 = D_80126FF6 * 0x28;
        M2C_FIELD(temp_a2, s32 *, 0) = (s32) ((((s32) ((f32) *(&D_800DB1B8 + 0x2128 + temp_a1) * 4.0f) & 0xFFF) << 0xC) | (((s32) ((f32) *(&D_800DB1B8 + 0x212A + temp_a1) * 4.0f) & 0xFFF) | 0xED000000));
        M2C_FIELD(temp_a2, s32 *, 4) = (s32) ((((s32) ((f32) *(&D_800DB1B8 + 0x212C + temp_a1) * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) *(&D_800DB1B8 + 0x212E + temp_a1) * 4.0f) & 0xFFF));
        var_s2 = 0;
        var_s3_3 = 0;
        var_v0 = 0 << 5;
        __repair_rows: {
            var_s2 += *(&D_801E9B38 + var_v0);
            var_s3_3 += 1;
            var_v0 = var_s3_3 << 5;
        }
if (var_s3_3 < 0x10) goto __repair_rows;
        func_801CC150(arg0, 0x48, 0xAC, 0, 0, 0xB0, 0x14, 0xB0, 0x14, 0xB0, 0x14, 0, 0, 0x13F, 0xEF, &D_801E59F8, &D_801E60E0);
        func_801CB820(arg0, 0xB0, 0xB0, 0xA, D_801E8798, 3, ((s32) *(&D_801E9768 + (D_801E87C0 * 4)) >> 8) & 0xFFFF);
        func_801CA528(arg0, 0xCE, 0xB0, 0xF, &D_801CF4C8, D_801E8798);
        func_801CB820(arg0, 0xD8, 0xB0, 0xA, D_801E8798, 3, ((s32) (var_s2 + *(&D_801E9768 + (D_801E87C0 * 4))) >> 8) & 0xFFFF);
        if (D_801E9799 != 0) {
            M2C_FIELD(*(&D_8011F350 + (D_801E9764 * 0x64)), s8 *, 9) = 0x96;
            func_801CC150(arg0, 0x48, 0xC5, 0, 0, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0, 0, 0x13F, 0xEF, &D_801E6108, &D_801E6430);
            func_801CC150(arg0, 0xA8, 0xC5, 0, 0, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0, 0, 0x13F, 0xEF, &D_801E6638, &D_801E6960);
            if (D_801E9B1C == 1) {
                M2C_FIELD(*(&D_8011F350 + (D_801E9764 * 0x64)), s16 *, 0xA) = 0xA8;
                return;
            }
            M2C_FIELD(*(&D_8011F350 + (D_801E9764 * 0x64)), s16 *, 0xA) = 0x48;
            return;
        }
        M2C_FIELD(*(&D_8011F350 + (D_801E9764 * 0x64)), s8 *, 9) = 0;
        return;
    case 0x64:
        func_801CA2D4(arg0);
        var_s3_4 = 0;
        do {
            var_s0_2 = 0;
            var_a1_2 = 0 << 0x16;
loop_26:
            func_801CC150(arg0, var_a1_2 >> 0x10, (s16) (var_s3_4 * 0x3C), 0, 0, 0x40, 0x3C, 0x40, 0x3C, 0x40, 0x1E, 0, 0, 0x13F, 0xEF, &D_801E4438, &D_801E4BC0);
            var_s0_2 += 1;
            var_a1_2 = var_s0_2 << 0x16;
            if (var_s0_2 < 5) {
                goto loop_26;
            }
            var_s3_4 += 1;
        } while (var_s3_4 < 4);
block_33:
        func_801CA140(arg0, var_a1_2);
        func_801CC150(arg0, 0x40, 0x16, 0, 0, 0xC0, 0x20, 0xC0, 0x20, 0xC0, 0x10, 0, 0, 0x13F, 0xEF, &D_801E4DC8, &D_801E59D0);
        return;
    case 0xC8:
        func_801CA2D4(arg0);
        var_s3_5 = 0;
        do {
            var_s0_3 = 0;
            var_a1_2 = 0 << 0x16;
loop_31:
            func_801CC150(arg0, var_a1_2 >> 0x10, (s16) (var_s3_5 * 0x3C), 0, 0, 0x40, 0x3C, 0x40, 0x3C, 0x40, 0x1E, 0, 0, 0x13F, 0xEF, &D_801E4438, &D_801E4BC0);
            var_s0_3 += 1;
            var_a1_2 = var_s0_3 << 0x16;
            if (var_s0_3 < 5) {
                goto loop_31;
            }
            var_s3_5 += 1;
        } while (var_s3_5 < 4);
        goto block_33;
    }
}
