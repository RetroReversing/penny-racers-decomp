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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, f32, f32, f32); /* extern */
s32 func_80148230();                                /* extern */
extern M2C_UNK D_80168DD0;
extern M2C_UNK D_80168E50;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_8014C080;
extern M2C_UNK func_8014C0FC;
extern M2C_UNK func_8014C264;
extern M2C_UNK func_8014C4D0;
extern M2C_UNK func_8014C77C;
extern M2C_UNK func_80167510;

void func_8014C7A0(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s4;
    M2C_UNK *temp_s6;

    func_800DE41C(0, 0xA, 2, 0, 0x53, 0x96, &D_80168DD0, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s6 = &D_80168DD0 + 0x20;
    func_800DE41C(0, 0xA, 2, 0, 0x54, 0x96, temp_s6, &func_8014C080, &func_8014C0FC, 0xC4BB8000, 0x42976B85, 0x44B54000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s4 = &D_80168DD0 + 0x30;
    func_800DE41C(0, 0xA, 2, 0, 0x55, 0x96, temp_s4, &func_8014C080, &func_8014C0FC, 0xC4B9F47B, 0x42200000, 0x44B6247B, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x53, 0x96, &D_80168DD0 + 0x10, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x54, 0x96, temp_s6, &func_8014C080, &func_8014C0FC, 0x44BB8000, 0x42976B85, 0x449C4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x55, 0x96, temp_s4, &func_8014C080, &func_8014C0FC, 0x44BD0B85, 0x42200000, 0x449D247B, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_80168DD0 + 0x40, &func_8014C264, &func_8014C4D0, 0x45177000, 0x4276AE14, 0xC49E8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, &D_80168DD0 + 0x50, &func_8013AE60, NULL, 0x451D2000, 0x430D0000, 0x44834000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0 = &D_80168DD0 + 0x60;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0xC4D40000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0xC4EE0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = &D_80168DD0 + 0x70;
    if (func_80148230() & 0xFF) {
        func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, temp_s1, &func_80167510, NULL, 0x44F0051F, 0, 0x448047AE, 0, 0, 0, 0.4f, 0.5f, 0.5f);
        func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, temp_s1, &func_80167510, NULL, 0x44E4ABD7, 0, 0x448DF0A4, 0, 0x42B40000, 0, 0.4f, 0.5f, 0.5f);
    }
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_80168E50, &func_8013AE60, &func_8014C77C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0_2 = &D_80168E50 + 0x10;
    func_800DE41C(0, 0xA, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC4CF8000, 0x3F800000, 0x44CFA000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x4503A000, 0x3F800000, 0xC4C9C000, 0, 0x42220000, 0, 1.0f, 1.0f, 1.0f);
}
