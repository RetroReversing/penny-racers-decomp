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

M2C_UNK func_8014A4C8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140(s32);                         /* extern */
M2C_UNK func_801CA468(s32, u16);                    /* extern */
M2C_UNK func_801CA494(s32, s32, s32, s32, s32);     /* extern */
extern M2C_UNK D_8011F2F0;
extern u16 D_80190CA0;
extern u8 D_80190CA2;
extern u8 D_80190CA4;
extern M2C_UNK D_80190CB4;

void func_8021662C(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_s1;
    s32 var_s1_2;
    u16 temp_v1;
    u8 var_a3;
    u8 var_s3;
    void *temp_s1;

    temp_a1 = arg1 & 0xFFFF;
    temp_s1 = (temp_a1 * 0x64) + &D_8011F2F0;
    func_801CA140(temp_a1);
    temp_v1 = M2C_FIELD(temp_s1, u16 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s1, u16 *, 0x40) = 0x10U;
        return;
    case 16:
        var_a3 = M2C_FIELD(&D_80190CB4, u8 *, 0);
        var_s3 = 0x7F;
        if (M2C_FIELD(&D_80190CB4, u8 *, -0xE) != 0) {
            var_a3 = 0x7F;
            var_s3 = M2C_FIELD(&D_80190CB4, u8 *, 0);
        }
        temp_a3 = var_a3 & 0xFF;
        func_801CA494(arg0, temp_a3, temp_a3, temp_a3, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0x40, 0x48, 0xA, 0xD);
        func_8014A4C8(arg0, 0x40, 0x80, 0xA, 0xE);
        func_8014A4C8(arg0, 0xF8, 0x48, 0xA, 0xF);
        func_8014A4C8(arg0, 0xF8, 0x80, 0xA, 0x10);
        func_801CA468(arg0, D_80190CA0);
        func_8014A4C8(arg0, 0x76, 0x3A, 0xA, 4);
        var_a3_2 = 0xFF;
        var_s1 = 0x7F;
        if (D_80190CA2 != 0) {
            var_a3_2 = 0x7F;
            var_s1 = 0xFF;
        }
        temp_a3_2 = var_a3_2 & 0xFF;
        func_801CA494(arg0, temp_a3_2, temp_a3_2, temp_a3_2, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0x49, 0x51, 0xA, 0);
        temp_a3_3 = var_s1 & 0xFF;
        func_801CA494(arg0, temp_a3_3, temp_a3_3, temp_a3_3, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0xA2, 0x51, 0xA, 1);
        temp_a3_4 = var_s3 & 0xFF;
        func_801CA494(arg0, temp_a3_4, temp_a3_4, temp_a3_4, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0x40, 0x98, 0xA, 0xD);
        func_8014A4C8(arg0, 0x40, 0xD0, 0xA, 0xE);
        func_8014A4C8(arg0, 0xF8, 0x98, 0xA, 0xF);
        func_8014A4C8(arg0, 0xF8, 0xD0, 0xA, 0x10);
        func_801CA468(arg0, D_80190CA0);
        func_8014A4C8(arg0, 0x76, 0x89, 0xA, 5);
        var_a3_3 = 0xFF;
        var_s1_2 = 0x7F;
        if (D_80190CA4 != 0) {
            var_a3_3 = 0x7F;
            var_s1_2 = 0xFF;
        }
        temp_a3_5 = var_a3_3 & 0xFF;
        func_801CA494(arg0, temp_a3_5, temp_a3_5, temp_a3_5, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0x49, 0xA1, 0xA, 2);
        temp_a3_6 = var_s1_2 & 0xFF;
        func_801CA494(arg0, temp_a3_6, temp_a3_6, temp_a3_6, (s32) D_80190CA0);
        func_8014A4C8(arg0, 0xA2, 0xA1, 0xA, 3);
        return;
    }
}
