/* Partial candidate from function #90194315020 in project #21; rechecked locally. */
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

void *alHeapDBAlloc();
s32 func_800346C0();
extern f64 D_8004A3C8;
extern f64 D_8004A3D0;
extern char D_800BF7D0[];
extern char D_800BF838[];
extern char D_800BF8C0[];
extern char D_800BF8E8[];
extern char D_800BF910[];
extern char D_800BF938[];

void n_alFxNew(void **arg0, void *arg1, s32 arg2) {
    s32 *var_s2;
    f64 var_ft0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_v0;
    u8 temp_v0_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = alHeapDBAlloc(0, 0, 1, 0x2CU);
    *arg0 = temp_v0;
    temp_v0_2 = M2C_FIELD(arg1, u8 *, 0x1C);
    switch (temp_v0_2) {
    case 1:
        var_s2 = D_800BF7D0;
        break;
    case 2:
        var_s2 = D_800BF838;
        break;
    case 5:
        var_s2 = D_800BF8C0;
        break;
    case 3:
        var_s2 = D_800BF8E8;
        break;
    case 4:
        var_s2 = D_800BF910;
        break;
    case 6:
        var_s2 = M2C_FIELD(arg1, s32 **, 0x20);
        break;
    default:
        var_s2 = D_800BF938;
        break;
    }
    M2C_FIELD(temp_v0, u8 *, 0x24) = (u8) M2C_FIELD(var_s2, s32 *, 0);
    M2C_FIELD(temp_v0, u32 *, 0x1C) = (u32) M2C_FIELD(var_s2, u32 *, 4);
    M2C_FIELD(temp_v0, void **, 0x20) = alHeapDBAlloc(0, 0, arg2, M2C_FIELD(temp_v0, u8 *, 0x24), 0x28);
    temp_v0_3 = alHeapDBAlloc(0, 0, arg2, (u8) M2C_FIELD(temp_v0, u32 *, 0x1C), 2);
    var_s1 = 2;
    var_a0 = 0;
    M2C_FIELD(temp_v0, void **, 0x14) = temp_v0_3;
    M2C_FIELD(temp_v0, void **, 0x18) = temp_v0_3;
    if (M2C_FIELD(temp_v0, u32 *, 0x1C) != 0) {
        do {
            *(s32 *)(((var_a0 & 0xFFFF) * 2) + M2C_FIELD(temp_v0, void **, 0x14)) = 0;
            var_a0 += 1;
        } while ((u32) (var_a0 & 0xFFFF) < (u32) M2C_FIELD(temp_v0, u32 *, 0x1C));
    }
    var_s4 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 0x24) != 0) {
        var_v0 = 0 & 0xFFFF;
        do {
            temp_s0 = M2C_FIELD(temp_v0, void **, 0x20) + (var_v0 * 0x28);
            temp_a1 = var_s1 + 1;
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) *(((var_s1 & 0xFFFF) * 4) + var_s2);
            M2C_FIELD(temp_s0, s32 *, 4) = (s32) *(((temp_a1 & 0xFFFF) * 4) + var_s2);
            M2C_FIELD(temp_s0, s16 *, 0xA) = (s16) *((((temp_a1 + 1) & 0xFFFF) * 4) + var_s2);
            M2C_FIELD(temp_s0, s16 *, 8) = (s16) *((((temp_a1 + 2) & 0xFFFF) * 4) + var_s2);
            temp_s1 = temp_a1 + 4;
            M2C_FIELD(temp_s0, s16 *, 0xC) = (s16) *((((temp_a1 + 3) & 0xFFFF) * 4) + var_s2);
            if (*(((temp_s1 & 0xFFFF) * 4) + var_s2) != 0) {
                var_s1_2 = temp_a1 + 6;
                temp_a0 = M2C_FIELD(temp_s0, s32 *, 4) - M2C_FIELD(temp_s0, s32 *, 0);
                var_ft0 = (f64) temp_a0;
                M2C_FIELD(temp_s0, f32 *, 0x10) = (f32) ((2.0 * (f64) ((f32) *(((temp_s1 & 0xFFFF) * 4) + var_s2) / 1000.0f)) / (f64) M2C_FIELD(arg1, s32 *, 0x18));
                if (temp_a0 < 0) {
                    var_ft0 += D_8004A3D0;
                }
                M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
                M2C_FIELD(temp_s0, f32 *, 0x14) = 1.0f;
                M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) (((f64) (f32) *((((temp_a1 + 5) & 0xFFFF) * 4) + var_s2) / D_8004A3C8) * var_ft0);
                M2C_FIELD(temp_s0, void **, 0x24) = alHeapDBAlloc(0, 0, arg2, 1U, 0x34);
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x24), void **, 0x14) = alHeapDBAlloc(0, 0, arg2, 1U, 0x20);
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x24), s32 *, 0x20) = 0;
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x24), s32 *, 0x24) = 1;
            } else {
                M2C_FIELD(temp_s0, void **, 0x24) = NULL;
                var_s1_2 = temp_a1 + 6;
            }
            if (*(((var_s1_2 & 0xFFFF) * 4) + var_s2) != 0) {
                M2C_FIELD(temp_s0, void **, 0x20) = alHeapDBAlloc(0, 0, arg2, 1U, 0x30);
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0x28) = alHeapDBAlloc(0, 0, arg2, 1U, 8);
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s16 *, 0) = (s16) *(((var_s1_2 & 0xFFFF) * 4) + var_s2);
                var_s1 = var_s1_2 + 1;
                func_800346C0(M2C_FIELD(temp_s0, void **, 0x20));
            } else {
                M2C_FIELD(temp_s0, void **, 0x20) = NULL;
                var_s1 = var_s1_2 + 1;
            }
            var_s4 += 1;
            var_v0 = var_s4 & 0xFFFF;
        } while ((u32) (var_s4 & 0xFFFF) < (u8) M2C_FIELD(temp_v0, u8 *, 0x24));
    }
}
