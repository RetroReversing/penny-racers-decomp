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

M2C_UNK func_8014A4C8(s32, s16, s16, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA494(s32, u8, u8, u8, s32);        /* extern */
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8011F324;
extern M2C_UNK D_8021F032;

void func_802155CC(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;

    func_801CA140();
    func_801CA494(arg0, M2C_FIELD(&D_8021F032, u8 *, 0), M2C_FIELD(&D_8021F032, u8 *, 1), M2C_FIELD(&D_8021F032, u8 *, 2), 0xFF);
    var_s2 = 0;
    var_s0 = 0;
    do {
        temp_s1 = (arg1 & 0xFFFF) * 0x64;
loop_2:
        func_8014A4C8(arg0, (s16) ((s32) *(&D_8011F320 + temp_s1) + (((var_s2 & 0xFF) << 6) - 0x40)), (s16) ((s32) *(&D_8011F324 + temp_s1) + (((var_s0 & 0xFF) << 6) - 0x40)), 0xB, 0);
        var_s0 += 1;
        if ((u32) (var_s0 & 0xFF) < 6U) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s0 = 0;
    } while ((u32) (var_s2 & 0xFF) < 7U);
}
