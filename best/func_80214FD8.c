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

M2C_UNK func_8014A4C8(s32, s16, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140(s32);                         /* extern */
M2C_UNK func_801CA468(s32, M2C_UNK);                /* extern */
M2C_UNK func_801CA494(s32, u8, u8, u8, s32);        /* extern */
extern M2C_UNK D_8011F330;
extern u8 D_80190C98;
extern u8 D_8021F028;
extern u8 D_8021F029;
extern u8 D_8021F02A;

void func_80214FD8(s32 arg0, s32 arg1) {
    union {
        unsigned char bytes[56];
        struct { unsigned char pad[24]; u8 value; } view_sp18;
        struct { unsigned char pad[25]; u8 value; } view_sp19;
        struct { unsigned char pad[26]; u8 value; } view_sp1A;
        struct { unsigned char pad[27]; u8 value; } view_sp1B;
    } m2c_initial_frame;

            
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s2;
    u16 temp_v1;
    u8 *var_v0;
    u8 temp_a3;
    u8 temp_a3_2;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        func_801CA140(arg0);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0x48, 0xD, 0xB, 0x54);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x5A, 0xF, 0xC, 1);
        func_8014A4C8(arg0, 0x48, 0x4A, 0xC, 0);
        func_8014A4C8(arg0, 0x48, 0x7B, 0xC, 0);
        func_8014A4C8(arg0, 0xFA, 0x48, 0xC, 7);
        func_8014A4C8(arg0, 0xFA, 0x79, 0xC, 7);
        func_8014A4C8(arg0, 0x32, 0x48, 0xC, 8);
        func_8014A4C8(arg0, 0x32, 0x79, 0xC, 8);
        var_s0 = 0xFF;
        var_s2 = 0x7F;
        if (D_8021F02A != 0) {
            var_s0 = 0x7F;
            var_s2 = 0xFF;
        }
        temp_a3 = var_s0 & 0xFFFF;
        func_801CA494(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
        func_8014A4C8(arg0, 0x4F, 0xAC, 0xC, 3);
        temp_a3_2 = var_s2 & 0xFFFF;
        func_801CA494(arg0, temp_a3_2, temp_a3_2, temp_a3_2, 0xFF);
        func_8014A4C8(arg0, 0xA2, 0xAC, 0xC, 2);
        var_s0_2 = 0;
        var_v0 = &m2c_initial_frame.view_sp18.value;
        do {
            *var_v0 = 0x7F;
            var_s0_2 += 1;
            var_v0 = &(&m2c_initial_frame.view_sp18.value)[var_s0_2];
        } while (var_s0_2 < 4);
        (&m2c_initial_frame.view_sp18.value)[D_80190C98] = 0xFF;
        func_801CA494(arg0, m2c_initial_frame.view_sp18.value, m2c_initial_frame.view_sp18.value, m2c_initial_frame.view_sp18.value, 0xFF);
        func_8014A4C8(arg0, 0x72, 0x36, 0xC, 4);
        func_801CA494(arg0, m2c_initial_frame.view_sp19.value, m2c_initial_frame.view_sp19.value, m2c_initial_frame.view_sp19.value, 0xFF);
        func_8014A4C8(arg0, 0x72, 0x67, 0xC, 5);
        func_801CA494(arg0, m2c_initial_frame.view_sp1A.value, m2c_initial_frame.view_sp1A.value, m2c_initial_frame.view_sp1A.value, 0xFF);
        func_8014A4C8(arg0, 0x74, 0x99, 0xC, 6);
        func_801CA494(arg0, m2c_initial_frame.view_sp1B.value, m2c_initial_frame.view_sp1B.value, m2c_initial_frame.view_sp1B.value, 0xFF);
        func_8014A4C8(arg0, 0x81, 0xCC, 0xC, 9);
        func_801CA494(arg0, 0U, 0U, 0U, 0x80);
        var_s0_3 = 0x15 - D_8021F028;
        var_a1 = var_s0_3 * 8;
        if (var_s0_3 != 0) {
            do {
                func_8014A4C8(arg0, (s16) (0xF4 - var_a1), 0x4D, 0xB, 0x55);
                var_s0_3 -= 1;
                var_a1 = var_s0_3 * 8;
            } while (var_s0_3 != 0);
        }
        var_s0_4 = 0x15 - D_8021F029;
        if (var_s0_4 != 0) {
            var_a1_2 = var_s0_4 * 8;
            do {
                func_8014A4C8(arg0, (s16) (0xF4 - var_a1_2), 0x7E, 0xB, 0x55);
                var_s0_4 -= 1;
                var_a1_2 = var_s0_4 * 8;
            } while (var_s0_4 != 0);
        }
        return;
    }
}
