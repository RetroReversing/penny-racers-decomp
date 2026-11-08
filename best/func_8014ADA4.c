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

s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CA494();
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F330[];
extern u8 D_80189C9A;
extern u16 D_80190CB4;

void func_8014ADA4(s32 arg0, s32 arg1) {
    s16 var_a1_2;
    s16 var_a2_2;
    s16 var_s1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u16 temp_v0;
    u16 temp_v1;

    func_801CA140();
    func_801CA468(arg0, 0xFF);
    temp_v1 = *(D_8011F330 + (D_80190CB4 * 0x64));
    switch (temp_v1) {                              /* irregular */
    default:
        var_a1 = 0xE2;
        if (temp_v1 != 0x50) {
            return;
        }
block_9:
        var_a2 = 0x38;
        var_a3 = 0x73;
        temp_v0 = *(D_8011F330 + (D_80190CB4 * 0x64));
        var_s1 = 0x7C;
        if (((temp_v0 == 0x40) | (temp_v0 == 0x50)) != 0) {
            func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
            func_8014A4C8(arg0, (s16) (s32) *(D_8011F30C + ((arg1 & 0xFFFF) * 0x64)), 0x8E, 7, 0x1B);
            var_a1 = 0x71;
            var_a2 = 0;
            var_a3 = 0x38;
            var_s1 = 0x70;
        }
        func_801CA494(arg0, var_a1 & 0xFF, var_a2 & 0xFF, var_a3 & 0xFF, 0xFF);
        var_a1_2 = (s16) (s32) *(D_8011F308 + ((arg1 & 0xFFFF) * 0x64));
        var_a2_2 = var_s1;
block_12:
        func_8014A4C8(arg0, var_a1_2, var_a2_2, 7);
        return;
    case 0x20:
        func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
        var_a1_2 = 0x8E;
        var_a2_2 = (D_80189C9A * 0x25) + 0x58;
        goto block_12;
    case 0x30:
    case 0x40:
        var_a1 = 0xE2;
        goto block_9;
    }
}
