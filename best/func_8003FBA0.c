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

s32 func_8003F500();
extern s8 D_800DD3E0;
extern s32 D_800DD41C;

void func_8003FBA0(s32 arg0, s32 arg1, u8 *arg2) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    s16 sp14;
    u8 sp16;
    s32 sp30;
    s8 sp36;
    s32 var_v1_2;
    char *var_a2;
    char *var_a3;
    char *var_s2;
    char *var_s3;
    char *var_v1;

    var_s3 = arg2;
    var_s2 = &D_800DD3E0;
    D_800DD41C = 1;
    sp11 = 0x23;
    sp12 = 1;
    sp10 = 0xFF;
    sp13 = 3;
    var_v1 = &sp16;
    sp14 = (func_8003F500(arg1 & 0xFFFF) & 0xFF) | (arg1 << 5);
    sp36 = 0xFF;
    do {
        *(u8 *)var_v1 = *(u8 *)var_s3;
        var_v1 += 1;
        var_s3 += 1;
    } while ((s32) var_v1 < (s32) &sp36);
    var_a2 = &sp10;
    if (arg0 != 0) {
        var_v1_2 = 0;
        if (arg0 > 0) {
            do {
                *(s8 *)var_s2 = 0;
                var_v1_2 += 1;
                var_s2 += 1;
            } while (var_v1_2 < arg0);
            var_a2 = &sp10;
        }
    }
    var_a3 = var_s2;
    if (((s32) var_a2 | (s32) var_s2) & 3) {
        do {
            M2C_FIELD(var_a3, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s8 *, 0));
            M2C_FIELD(var_a3, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s32 *, 4));
            M2C_FIELD(var_a3, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s32 *, 8));
            M2C_FIELD(var_a3, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s32 *, 0xC));
            var_a2 += 0x10;
            var_a3 += 0x10;
        } while (var_a2 != &sp30);
    } else {
        do {
            M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
            M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
            M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
            M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
            var_a2 += 0x10;
            var_a3 += 0x10;
        } while (var_a2 != &sp30);
    }
    M2C_FIELD(var_a3, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s8 *, 0));
    M2C_FIELD(var_a3, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, s32 *, 4));
    M2C_FIELD(var_s2, u8 *, 0x28) = 0xFE;
}
