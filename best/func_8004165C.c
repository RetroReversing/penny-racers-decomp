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

s32 func_80033E30();
s32 func_8003F350();
extern s8 D_8006FF10;
extern s32 D_8006FF4C;
extern s8 D_80092C04;

s32 func_8004165C(s32 arg0, void *arg1) {
    s8 sp10;
    s8 sp11;
    u8 sp12;
    s8 sp13;
    u8 sp14;
    u8 sp15;
    u8 sp16;
    s8 sp17;
    char *var_a2;
    char *var_v1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    char *var_a2_2;
    u8 temp_a0;

    var_v0_2 = 0xF;
    var_v1 = &D_8006FF4C;
    do {
        *(s32 *)var_v1 = 0;
        var_v0_2 -= 1;
        var_v1 -= 4;
    } while (var_v0_2 >= 0);
    D_8006FF4C = 1;
    var_a2 = &D_8006FF4C - 0x3C;
    var_v0_3 = 3;
    do {
        *(s32 *)var_a2 = 0;
        var_v0_3 -= 1;
        var_a2 += 1;
    } while (var_v0_3 >= 0);
    sp11 = 1;
    sp10 = 0xFF;
    sp12 = 3;
    sp13 = 0;
    sp14 = 0xFF;
    sp15 = 0xFF;
    sp16 = 0xFF;
    sp17 = 0xFF;
    M2C_FIELD(var_a2, s32 *, 0) = M2C_UNALIGNED32(sp10);
    M2C_FIELD(var_a2, s32 *, 4) = M2C_UNALIGNED32(sp14);
    M2C_FIELD(var_a2, u8 *, 8) = 0xFE;
    func_8003F350(1, &D_8006FF10, var_a2);
    func_80033E30(arg0, 0, 1);
    D_80092C04 = 0;
    temp_s0 = func_8003F350(0, &D_8006FF10);
    func_80033E30(arg0, 0, 1);
    var_v0 = temp_s0;
    if (temp_s0 == 0) {
        var_a2_2 = &D_8006FF10;
        var_v0_4 = 3;
        do {
            *(s8 *)var_a2_2 = 0;
            var_v0_4 -= 1;
            var_a2_2 += 1;
        } while (var_v0_4 >= 0);
        temp_v1 = M2C_UNALIGNED32(M2C_FIELD(var_a2_2, s32 *, 4));
        sp10 = M2C_UNALIGNED32(M2C_FIELD(var_a2_2, s8 *, 0));
        sp14 = temp_v1;
        M2C_FIELD(arg1, u8 *, 3) = (u8) ((u32) (sp12 & 0xC0) >> 4);
        temp_a0 = M2C_FIELD(arg1, u8 *, 3);
        M2C_FIELD(arg1, s16 *, 0) = (s16) (temp_v1 | (sp15 << 8));
        var_v0 = temp_a0 & -(temp_a0 != 0);
        M2C_FIELD(arg1, u8 *, 2) = sp16;
    }
    return var_v0;
}
