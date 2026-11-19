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

extern unsigned short D_8006FB10;
s32 func_80224030();
extern char D_8006FAF0[];
extern char D_802CC024[];
extern char D_802CC028[];
extern char D_802CC02C[];
extern char D_802CC030[];
extern char D_802CC544[];
extern char D_802CC548[];
extern char D_802CC54C[];
extern char D_802CC552[];
extern char D_802CF134[];
extern char D_802CF13A[];
extern char D_802CF7D4[];
extern char D_802CF7DA[];
extern char D_802D2B94[];
extern char D_802D2B9A[];
extern char D_802D2C7A[];

void func_80221670(void *arg0) {
    f32 temp_fv1;
    s16 var_s2;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    u16 temp_a0_3;
    u16 var_a1;
    u32 temp_v0_2;
    u32 temp_v1_3;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a0;
    void *temp_a1_3;

    M2C_FIELD(arg0, u16 *, 0x232) = (u16) *(D_802D2B9A + (M2C_FIELD(arg0, u16 *, 0x534) * 0xC));
    M2C_FIELD(arg0, f32 *, 0x760) = (f32) *(f32 *)*(D_802D2B94 + (M2C_FIELD(arg0, u16 *, 0x534) * 0xC));
    M2C_FIELD(arg0, u16 *, 0x232) += *(D_802CC552 + (M2C_FIELD(arg0, u16 *, 0x234) * 0x14));
    M2C_FIELD(arg0, f32 *, 0x760) += *(D_802CC54C + (M2C_FIELD(arg0, u16 *, 0x234) * 0x14));
    M2C_FIELD(arg0, s32 *, 0x238) = (s32) *(D_802CC544 + (M2C_FIELD(arg0, u16 *, 0x234) * 0x14));
    M2C_FIELD(arg0, s32 *, 0x23C) = (s32) *(D_802CC548 + (M2C_FIELD(arg0, u16 *, 0x234) * 0x14));
    if (D_8006FB10 == 2) {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x242) + 0xE;
    } else {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x242);
    }
    M2C_FIELD(arg0, u16 *, 0x232) += *(D_802CF7DA + ((var_a1 & 0xFFFF) * 0xC));
    var_s0 = 0;
    do {
        temp_v1 = var_s0 & 0xFFFF;
        temp_a0 = arg0 + (temp_v1 * 0x10);
        temp_v0 = temp_v1 * 0x14;
        M2C_FIELD(temp_a0, f32 *, 0x244) = (f32) *(D_802CC024 + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x248) = (f32) *(D_802CC028 + temp_v0);
        M2C_FIELD(temp_a0, u8 *, 0x250) = (u8) *(D_802CC030 + temp_v0);
        var_s0 += 1;
        M2C_FIELD(temp_a0, f32 *, 0x24C) = (f32) *(D_802CC02C + temp_v0);
    } while ((u32) (var_s0 & 0xFFFF) < 0x2FU);
    temp_v1_2 = var_a1 & 0xFFFF;
    temp_a1 = *(u8 *)*(D_802CF7D4 + (temp_v1_2 * 0xC));
    var_s0_2 = 0;
    if ((temp_a1 & 0xFFFF) != 0xFF) {
        var_a1_2 = temp_a1 * 0x10;
        do {
            temp_a1_3 = arg0 + var_a1_2;
            temp_a0_2 = (var_s0_2 & 0xFFFF) * 0x14;
            M2C_FIELD(temp_a1_3, f32 *, 0x244) = (f32) M2C_FIELD((temp_a0_2 + *(D_802CF7D4 + (M2C_FIELD(arg0, u16 *, 0x242) * 0xC))), f32 *, 4);
            M2C_FIELD(temp_a1_3, f32 *, 0x248) = (f32) M2C_FIELD((temp_a0_2 + *(D_802CF7D4 + (M2C_FIELD(arg0, u16 *, 0x242) * 0xC))), f32 *, 8);
            M2C_FIELD(temp_a1_3, u8 *, 0x250) = (u8) M2C_FIELD((temp_a0_2 + *(D_802CF7D4 + (M2C_FIELD(arg0, u16 *, 0x242) * 0xC))), u8 *, 0x10);
            M2C_FIELD(temp_a1_3, f32 *, 0x24C) = (f32) M2C_FIELD((temp_a0_2 + *(D_802CF7D4 + (M2C_FIELD(arg0, u16 *, 0x242) * 0xC))), f32 *, 0xC);
            var_s0_2 += 1;
            temp_a1_2 = *(u8 *)(((var_s0_2 & 0xFFFF) * 0x14) + *(D_802CF7D4 + (temp_v1_2 * 0xC)));
            var_a1_2 = temp_a1_2 * 0x10;
        } while ((temp_a1_2 & 0xFFFF) != 0xFF);
    }
    temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x232) + *(D_802D2C7A + (M2C_FIELD(arg0, u16 *, 0x536) * 0xC));
    M2C_FIELD(arg0, u16 *, 0x232) = temp_a0_3;
    M2C_FIELD(arg0, u16 *, 0x232) = (u16) (temp_a0_3 + *(D_802CF13A + (M2C_FIELD(arg0, u16 *, 0x240) * 0xC)));
    var_s0_3 = 0;
    var_s2 = 0;
    M2C_FIELD(arg0, u16 *, 0x55C) = 0U;
    var_a0 = 0 << 0x10;
loop_9:
    temp_fv1 = *(s32 *)((func_80224030(var_a0 >> 0x10) * 4) + *(D_802CF134 + (M2C_FIELD(arg0, u16 *, 0x240) * 0xC)));
    if (temp_fv1 >= 2.1474836e9f) {
        var_a0_2 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0_2 = (s32) temp_fv1;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) < (u32) (var_a0_2 & 0xFFFF)) {
        M2C_FIELD(arg0, u16 *, 0x55C) = (u16) var_a0_2;
    }
    if ((u32) (var_a0_2 & 0xFFFF) >= (u32) (var_s0_3 & 0xFFFF)) {
        M2C_FIELD((((var_s0_3 & 0xFFFF) * 2) + arg0), s16 *, 0x53C) = var_s2;
        var_s0_3 += 1;
    }
    var_s2 += 4;
    if ((u32) (var_s2 & 0xFFFF) < 0x3DU) {
        var_a0 = var_s2 << 0x10;
        if ((u32) (var_s0_3 & 0xFFFF) < 0x10U) {
            goto loop_9;
        }
    }
    temp_v0_2 = var_s0_3 & 0xFFFF;
    if (temp_v0_2 < 0x10U) {
        var_v0 = temp_v0_2 * 2;
        do {
            M2C_FIELD((var_v0 + arg0), s16 *, 0x53C) = 0x3C;
            var_s0_3 += 1;
            temp_v1_3 = var_s0_3 & 0xFFFF;
            var_v0 = temp_v1_3 * 2;
        } while (temp_v1_3 < 0x10U);
    }
}
