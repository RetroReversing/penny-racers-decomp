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

extern char D_800DB1B8[];
extern u8 D_80126FF6;
extern f64 D_80221070;
extern f64 D_80221078;

void func_8021FE04(void **arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_5;
    s16 temp_v1_8;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1_2;

    temp_v1 = D_80126FF6 * 0x28;
    *(D_800DB1B8 + 0x2118 + temp_v1) = *(D_800DB1B8 + 0x2114 + temp_v1) * 2;
    *(D_800DB1B8 + 0x211A + temp_v1) = *(D_800DB1B8 + 0x2116 + temp_v1) * 2;
    *(D_800DB1B8 + 0x211C + temp_v1) = 0x1FF;
    *(D_800DB1B8 + 0x211E + temp_v1) = 0;
    *(D_800DB1B8 + 0x2120 + temp_v1) = (s16) (s32) (((f64) *(D_800DB1B8 + 0x2110 + temp_v1) + ((f64) *(D_800DB1B8 + 0x2114 + temp_v1) * D_80221070)) * D_80221078);
    *(D_800DB1B8 + 0x2122 + temp_v1) = (s16) (s32) (((f64) *(D_800DB1B8 + 0x2112 + temp_v1) + ((f64) *(D_800DB1B8 + 0x2116 + temp_v1) * D_80221070)) * D_80221078);
    *(D_800DB1B8 + 0x2124 + temp_v1) = 0x1FF;
    *(D_800DB1B8 + 0x2126 + temp_v1) = 0;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_2, void **, 4) = NULL;
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    M2C_FIELD(temp_a0, s32 *, 0) = 0x03800010;
    temp_v1_3 = D_80126FF6 * 0x28;
    M2C_FIELD(temp_a0, void **, 4) = (void *) (temp_v1_3 + (D_800DB1B8 + 0x2118));
    if (*(D_800DB1B8 + 0x2128 + temp_v1_3) < 0) {
        *(D_800DB1B8 + 0x2128 + temp_v1_3) = 0;
    }
    temp_v1_4 = D_80126FF6 * 0x28;
    if (*(D_800DB1B8 + 0x212C + temp_v1_4) >= 0x141) {
        *(D_800DB1B8 + 0x2128 + temp_v1_4) = 0x140;
    }
    temp_a0_2 = D_80126FF6 * 0x28;
    temp_v0 = *(D_800DB1B8 + 0x212C + temp_a0_2);
    if (temp_v0 < *(D_800DB1B8 + 0x2128 + temp_a0_2)) {
        *(D_800DB1B8 + 0x2128 + temp_a0_2) = temp_v0;
    }
    temp_a0_3 = D_80126FF6 * 0x28;
    temp_v1_5 = *(D_800DB1B8 + 0x2128 + temp_a0_3);
    if (*(D_800DB1B8 + 0x212C + temp_a0_3) < temp_v1_5) {
        *(D_800DB1B8 + 0x212C + temp_a0_3) = temp_v1_5;
    }
    temp_v1_6 = D_80126FF6 * 0x28;
    if (*(D_800DB1B8 + 0x212A + temp_v1_6) < 0) {
        *(D_800DB1B8 + 0x212A + temp_v1_6) = 0;
    }
    temp_v1_7 = D_80126FF6 * 0x28;
    if (*(D_800DB1B8 + 0x212E + temp_v1_7) >= 0xF1) {
        *(D_800DB1B8 + 0x212A + temp_v1_7) = 0xF0;
    }
    temp_a0_4 = D_80126FF6 * 0x28;
    temp_v0_2 = *(D_800DB1B8 + 0x212E + temp_a0_4);
    if (temp_v0_2 < *(D_800DB1B8 + 0x212A + temp_a0_4)) {
        *(D_800DB1B8 + 0x212A + temp_a0_4) = temp_v0_2;
    }
    temp_a0_5 = D_80126FF6 * 0x28;
    temp_v1_8 = *(D_800DB1B8 + 0x212A + temp_a0_5);
    if (*(D_800DB1B8 + 0x212E + temp_a0_5) < temp_v1_8) {
        *(D_800DB1B8 + 0x212E + temp_a0_5) = temp_v1_8;
    }
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 8;
    temp_a1 = D_80126FF6 * 0x28;
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) ((((s32) ((f32) *(D_800DB1B8 + 0x2128 + temp_a1) * 4.0f) & 0xFFF) << 0xC) | (((s32) ((f32) *(D_800DB1B8 + 0x212A + temp_a1) * 4.0f) & 0xFFF) | 0xED000000));
    M2C_FIELD(temp_a2, void **, 4) = (void *) ((((s32) ((f32) *(D_800DB1B8 + 0x212C + temp_a1) * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) *(D_800DB1B8 + 0x212E + temp_a1) * 4.0f) & 0xFFF));
}
