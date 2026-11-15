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

s32 func_80038650();
s32 func_80038E1C();
extern f64 D_8004A928;
extern f64 D_8004A930;

void func_800389E4(void **arg0, void *arg1, u32 arg2) {
    s16 sp10;
    void *sp20;
    u32 sp24;
    f32 sp28;
    u32 sp2C;
    u32 sp30;
    s32 sp34;
    u8 spB8;
    u8 spC8;
    f64 var_ft0;
    char *var_a1;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a2;
    u32 temp_v1_2;
    u32 var_a1_2;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s5;
    char *var_a3;
    char *var_t0;
    void **temp_a0;
    void **var_a0_2;
    void **var_s1;
    void *temp_s4;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;

    var_s0 = 0;
    temp_s4 = *arg0;
    var_s1 = &sp20;
    sp24 = 0;
    sp30 = 0;
    sp2C = 0;
    sp34 = 1;
    sp20 = temp_s4;
    do {
        temp_v0 = &sp20 + var_s0;
        M2C_FIELD(temp_v0, s8 *, 0xA8) = 0;
        M2C_FIELD(var_s1, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x98) = 0;
        temp_a2 = *(s32 *)((var_s0 * 4) + sp20);
        if (temp_a2 != 0) {
            sp24 |= 1 << var_s0;
            M2C_FIELD(var_s1, void **, 0x18) = (void *) (temp_s4 + temp_a2);
            M2C_FIELD(var_s1, s32 *, 0xB8) = func_80038E1C(&sp20, var_s0, temp_a2);
        } else {
            M2C_FIELD(var_s1, void **, 0x18) = NULL;
        }
        var_s0 += 1;
        var_s1 += 4;
    } while (var_s0 < 0x10U);
    temp_v0_2 = M2C_FIELD(sp20, s32 *, 0x40);
    var_ft0 = (f64) temp_v0_2;
    if (temp_v0_2 < 0) {
        var_ft0 += D_8004A928;
    }
    sp28 = (f32) (D_8004A930 / (f64) (f32) var_ft0);
do {
    var_a2 = 0;
    M2C_FIELD(arg1, u32 *, 0) = sp24;
    var_t0 = &spC8;
    var_a3 = &spB8;
    M2C_FIELD(arg1, u32 *, 4) = sp2C;
    var_a1 = &sp10;
    var_a0 = arg1;
    M2C_FIELD(arg1, u32 *, 8) = sp30;
    __repair_rows: {
        M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0x28);
        M2C_FIELD(var_a0, s32 *, 0x4C) = (s32) M2C_FIELD(var_a1, s32 *, 0x68);
        temp_v1 = arg1 + var_a2;
        M2C_FIELD(temp_v1, u8 *, 0x8C) = (u8) *(u8 *)var_a3;
        var_a2 += 1;
        var_a3 += 1;
        M2C_FIELD(temp_v1, u8 *, 0x9C) = (u8) *(u8 *)var_t0;
        temp_v0_3 = M2C_FIELD(var_a1, s32 *, 0xC8);
        var_t0 += 1;
        var_a1 += 4;
        M2C_FIELD(var_a0, s32 *, 0xAC) = temp_v0_3;
        var_a0 += 4;
    }
if (var_a2 < 0x10) goto __repair_rows;
    var_s0_2 = -1U;
    var_a1_2 = 0;
    var_a0_2 = &sp20;
    __repair_rows_: {
        if ((sp24 >> var_a1_2) & 1) {
            if (sp34 != 0) {
                M2C_FIELD(var_a0_2, u32 *, 0xB8) -= sp30;
            }
            temp_v1_2 = M2C_FIELD(var_a0_2, u32 *, 0xB8);
            if (temp_v1_2 < var_s0_2) {
                var_s0_2 = temp_v1_2;
                var_s5 = var_a1_2;
            }
        }
        var_a1_2 += 1;
        var_a0_2 += 4;
    }
if (var_a1_2 < 0x10U) goto __repair_rows_;
    func_80038650(&sp20, var_s5, &sp10, var_a3);
    M2C_FIELD(&sp10, u32 *, 4) = var_s0_2;
    sp30 = var_s0_2;
    sp2C += var_s0_2;
    if (M2C_FIELD(&sp10, s16 *, 0) != 0x12) {
        temp_a0 = &(&sp20)[var_s5];
        M2C_FIELD(temp_a0, s32 *, 0xB8) += func_80038E1C(&sp20, var_s5);
    }
    M2C_FIELD(&sp20, s32 *, 0x14) = 1;
    } while ((sp10 != 4) && (sp2C < arg2));
}
