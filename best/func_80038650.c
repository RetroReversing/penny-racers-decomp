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

u8 func_80038D64();
s32 func_80038E1C();

s32 func_80038650(void *arg0, s32 arg1, void *arg2) {
    s32 temp_s4;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a2;
    void *temp_a2_2;
    
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a3;
    void *var_v0;

    temp_v0 = func_80038D64();
    temp_s4 = temp_v0 & 0xFF;
    if (temp_s4 == 0xFF) {
        temp_v0_2 = func_80038D64(arg0);
        temp_v1 = temp_v0_2 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0x51:
            M2C_FIELD(arg2, s16 *, 0) = 3;
            M2C_FIELD(arg2, u8 *, 8) = temp_v0;
            M2C_FIELD(arg2, u8 *, 9) = temp_v0_2;
            M2C_FIELD(arg2, u8 *, 0xB) = func_80038D64(arg0, arg1);
            M2C_FIELD(arg2, u8 *, 0xC) = func_80038D64(arg0, arg1);
            M2C_FIELD(arg2, u8 *, 0xD) = func_80038D64(arg0, arg1);
            M2C_FIELD((arg0 + arg1), s8 *, 0xA8) = 0;
            break;
        case 0x2F:
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 4) ^ (1 << arg1);
            M2C_FIELD(arg0, s32 *, 4) = temp_v1_2;
            if (temp_v1_2 != 0) {
                M2C_FIELD(arg2, s16 *, 0) = 0x12;
            } else {
                M2C_FIELD(arg2, s16 *, 0) = 4;
            }
            break;
        case 0x2E:
            func_80038D64(arg0, arg1, temp_v0_2);
            do { func_80038D64(arg0, arg1); } while (0);
            M2C_FIELD((arg0 + arg1), s8 *, 0xA8) = 0;
            M2C_FIELD(arg2, s16 *, 0) = 0x13;
            break;
        case 0x2D:
            temp_a3 = (arg1 * 4) + arg0;
            temp_a2 = M2C_FIELD(temp_a3, void **, 0x18);
            temp_a2_2 = temp_a2 + 1;
            temp_v0_3 = M2C_FIELD(temp_a2, u8 *, 1);
            temp_v1_3 = temp_v0_3 & 0xFF;
            if (temp_v1_3 == 0) {
                var_v0 = temp_a2_2 + 5;
                M2C_FIELD(temp_a2, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0);
            } else {
                if (temp_v1_3 != temp_s4) {
                    M2C_FIELD(temp_a2, u8 *, 1) = (u8) (temp_v0_3 - 1);
                }
                temp_a2 = temp_a2_2 + 1;
                temp_a2_4 = temp_a2 + 1;
                temp_a2_5 = temp_a2_4 + 1;
                var_v0 = (temp_a2_5 + 1 + 1) - ((M2C_FIELD(temp_a2_2, u8 *, 1) << 0x18) + (M2C_FIELD(temp_a2, u8 *, 1) << 0x10) + (M2C_FIELD(temp_a2_4, u8 *, 1) << 8) + M2C_FIELD(temp_a2_5, u8 *, 1));
            }
            M2C_FIELD(temp_a3, void **, 0x18) = var_v0;
            M2C_FIELD((arg0 + arg1), s8 *, 0xA8) = 0;
            M2C_FIELD(arg2, s16 *, 0) = 0x14;
            break;
        }
    } else {
        M2C_FIELD(arg2, s16 *, 0) = 1;
        if (temp_v0 & 0x80) {
            M2C_FIELD(arg2, u8 *, 8) = temp_v0;
            M2C_FIELD(arg2, u8 *, 9) = func_80038D64(arg0, arg1);
            M2C_FIELD((arg0 + arg1), u8 *, 0xA8) = temp_v0;
        } else {
            M2C_FIELD(arg2, u8 *, 9) = temp_v0;
            M2C_FIELD(arg2, u8 *, 8) = (u8) M2C_FIELD((arg0 + arg1), u8 *, 0xA8);
        }
        temp_v0_4 = M2C_FIELD(arg2, u8 *, 8) & 0xF0;
        if ((temp_v0_4 != 0xC0) & (temp_v0_4 != 0xD0)) {
            M2C_FIELD(arg2, u8 *, 0xA) = func_80038D64(arg0, arg1);
            if ((M2C_FIELD(arg2, u8 *, 8) & 0xF0) == 0x90) {
                M2C_FIELD(arg2, u8 *, 0xC) = func_80038E1C(arg0, arg1);
            }
        } else {
            M2C_FIELD(arg2, u8 *, 0xA) = 0U;
        }
    }
    return 1;
}
