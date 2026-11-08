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
M2C_UNK func_8020E70C(void *);                      /* extern */
M2C_UNK func_8020E72C();                            /* extern */
M2C_UNK func_8020E770(void *);                      /* extern */
extern u8 D_801C5EA0;
extern M2C_UNK func_8021E174;

void func_801A8800(void) {
    void *temp_a0;
    void *temp_a0_2;

    if ((M2C_FIELD(&func_8021E174, s16 *, 0x2E) < 2) && ((func_80148230() & 0xFF) == 2)) {
        M2C_FIELD((&func_8021E174 + 0x2E), s8 *, -0x12) = 0;
        func_8020E72C();
        return;
    }
    if (M2C_FIELD(&func_8021E174, s16 *, 0x2E) < 2) {
        if (((func_80148230() & 0xFF) == 1) || !(func_80148230() & 0xFF)) {
            func_8020E70C(&func_8021E174 + 0x1C);
            return;
        }
        if (M2C_FIELD(&func_8021E174, s16 *, 0x2E) >= 2) {
            goto block_10;
        }
        goto block_12;
    }
block_10:
    temp_a0 = &func_8021E174 + 0x1C;
    M2C_FIELD(&func_8021E174, s8 *, 0x1C) = 9;
    M2C_FIELD(temp_a0, s8 *, -1) = 0x10;
    if (D_801C5EA0 == 1) {
        M2C_FIELD(temp_a0, s8 *, -1) = 0x11;
    }
block_12:
    temp_a0_2 = &func_8021E174 + 0x18;
    if (M2C_FIELD(temp_a0_2, s8 *, 3) < M2C_FIELD(&func_8021E174, s16 *, 0x18)) {
        func_8020E770(temp_a0_2);
        return;
    }
    if (M2C_FIELD(&func_8021E174, s16 *, 0x18) < (s8) M2C_FIELD(temp_a0_2, u8 *, 4)) {
        M2C_FIELD(&func_8021E174, s16 *, 0x18) = (s16) (s8) (u8) M2C_FIELD(temp_a0_2, s8 *, 3);
    }
}
