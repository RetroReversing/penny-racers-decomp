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

s32 osVirtualToPhysical();
extern void *D_800481F0;
extern void *D_800481F4;
extern f64 D_8004A990;
extern s32 D_A4400000;

void func_8003A140(void) {
    f32 temp_fv1;
    f64 var_ft0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a2;
    void *var_a3;

    temp_s0 = D_800481F4;
    temp_s1 = M2C_FIELD(temp_s0, void **, 8);
    temp_s2 = *(s32 *)0xA4400010 & 1;
    var_a1 = osVirtualToPhysical(M2C_FIELD(temp_s0, s32 *, 4)) + M2C_FIELD((temp_s1 + (temp_s2 * 0x14)), s32 *, 0x28);
    if (M2C_FIELD(temp_s0, u16 *, 0) & 2) {
        M2C_FIELD(temp_s0, s32 *, 0x20) |= (M2C_FIELD(temp_s1, s32 *, 0x20) & ~0xFFF);
    } else {
        M2C_FIELD(temp_s0, s32 *, 0x20) = (s32) M2C_FIELD(temp_s1, s32 *, 0x20);
    }
    if (M2C_FIELD(temp_s0, u16 *, 0) & 4) {
        temp_v0 = M2C_FIELD((temp_s1 + (temp_s2 * 0x14)), s32 *, 0x2C) & 0xFFF;
        var_ft0 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_ft0 += D_8004A990;
        }
        temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x24) * (f32) var_ft0;
        if (temp_fv1 >= 2.1474836e9f) {
            var_a0 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
            var_v0 = temp_s2 * 4;
        } else {
            var_a0 = (s32) temp_fv1;
            var_v0 = temp_s2 * 4;
        }
        M2C_FIELD(temp_s0, s32 *, 0x2C) = var_a0;
        var_v0_2 = var_a0 | (M2C_FIELD((temp_s1 + ((var_v0 + temp_s2) * 4)), s32 *, 0x2C) & ~0xFFF);
    } else {
        var_v0_2 = M2C_FIELD((temp_s1 + (temp_s2 * 0x14)), s32 *, 0x2C);
    }
    M2C_FIELD(temp_s0, s32 *, 0x2C) = var_v0_2;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0);
    temp_s3 = M2C_FIELD(temp_s1, s32 *, 0x1C) & -((temp_v1 & 0x20) == 0);
    if (temp_v1 & 0x40) {
        M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
        var_a1 = osVirtualToPhysical(M2C_FIELD(temp_s0, s32 *, 4), var_a1);
    }
    if (M2C_FIELD(temp_s0, u16 *, 0) & 0x80) {
        M2C_FIELD(temp_s0, s32 *, 0x2C) = (s32) ((M2C_FIELD(temp_s0, u16 *, 0x28) << 0x10) & 0x03FF0000);
        var_a1 = osVirtualToPhysical(M2C_FIELD(temp_s0, s32 *, 4), var_a1);
    }
    *(s32 *)0xA4400004 = var_a1;
    *(s32 *)0xA4400008 = M2C_FIELD(temp_s1, s32 *, 8);
    *(s32 *)0xA4400014 = M2C_FIELD(temp_s1, s32 *, 0xC);
    *(s32 *)0xA4400018 = M2C_FIELD(temp_s1, s32 *, 0x10);
    *(s32 *)0xA440001C = M2C_FIELD(temp_s1, s32 *, 0x14);
    *(s32 *)0xA4400020 = M2C_FIELD(temp_s1, s32 *, 0x18);
    temp_v0_2 = temp_s1 + (temp_s2 * 0x14);
    *(s32 *)0xA4400024 = temp_s3;
    *(s32 *)0xA4400028 = M2C_FIELD(temp_v0_2, s32 *, 0x30);
    *(s32 *)0xA440002C = M2C_FIELD(temp_v0_2, s32 *, 0x34);
    *(s32 *)0xA440000C = M2C_FIELD(temp_v0_2, s32 *, 0x38);
    *(s32 *)0xA4400030 = M2C_FIELD(temp_s0, s32 *, 0x20);
    *(s32 *)0xA4400034 = M2C_FIELD(temp_s0, s32 *, 0x2C);
    temp_v0_3 = D_800481F0;
    var_a2 = temp_s0;
    temp_t0 = var_a2 + 0x30;
    D_800481F0 = var_a2;
    var_a3 = temp_v0_3;
    D_800481F4 = var_a3;
    D_A4400000 = M2C_FIELD(temp_s0, s32 *, 0xC);
    do {
        M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
    } while (var_a2 != temp_t0);
}
