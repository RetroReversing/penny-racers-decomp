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

s32 func_80148230();                                /* extern */
extern u8 D_801C5EA0;
extern M2C_UNK D_8021E18C;
extern s8 D_8021E190;
extern M2C_UNK D_8021E1A2;

void func_8020E650(void) {
    s32 var_v0;

    if ((M2C_FIELD(&D_8021E1A2, s16 *, 0) < 2) && ((func_80148230() & 0xFF) == 2)) {
        M2C_FIELD(&D_8021E1A2, s8 *, -0x12) = 0;
        M2C_FIELD(&D_8021E1A2, s8 *, -0x13) = 8;
    } else if (M2C_FIELD(&D_8021E1A2, s16 *, 0) < 2) {
        if (((func_80148230() & 0xFF) == 1) || !(func_80148230() & 0xFF)) {
            M2C_FIELD(&D_8021E190, s8 *, 0) = 0;
            goto block_9;
        }
        if (M2C_FIELD(&D_8021E1A2, s16 *, 0) >= 2) {
            goto block_8;
        }
    } else {
block_8:
        M2C_FIELD(&D_8021E190, s8 *, 0) = 9;
block_9:
        M2C_FIELD(&D_8021E190, s8 *, -1) = 0x10;
        if (D_801C5EA0 == 1) {
            M2C_FIELD(&D_8021E190, s8 *, -1) = 0x11;
        }
    }
    if (M2C_FIELD(&D_8021E18C, s8 *, 3) < M2C_FIELD(&D_8021E18C, s16 *, 0)) {
        var_v0 = M2C_FIELD(&D_8021E18C, u8 *, 4) << 0x18;
        goto block_15;
    }
    if (M2C_FIELD(&D_8021E18C, s16 *, 0) < (s8) M2C_FIELD(&D_8021E18C, u8 *, 4)) {
        var_v0 = (u8) M2C_FIELD(&D_8021E18C, s8 *, 3) << 0x18;
block_15:
        M2C_FIELD(&D_8021E18C, s16 *, 0) = (s16) (var_v0 >> 0x18);
    }
}
