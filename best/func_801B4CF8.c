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
s32 func_801CABF4();
extern char D_8011F32E[];
extern char D_801C586C[];
extern u16 D_801C6BB4;
extern u16 D_801C7066;
extern u8 D_801C7070;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern u8 D_801C707B;
extern u8 *D_801C7AB0;
extern u8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7ABC;
extern char D_801CF4C8[];
extern char D_801D4390[];

void func_801B4CF8(s32 arg0) {
    s32 var_a1;
    u8 var_v1;

    if ((*(D_8011F32E + (D_801C7074 * 0x64)) == 0x10) && (D_801C707B == 1)) {
        func_801CA140();
        func_801CA468(arg0, 0xA0);
        func_8014A4C8(arg0, 0x36, 0x45, 0xD, 0x17);
        func_8014A4C8(arg0, 0x36, 0xA3, 0xD, 0x18);
        func_8014A4C8(arg0, 0xB2, 0x45, 0xD, 0x19);
        func_8014A4C8(arg0, 0xB2, 0xA3, 0xD, 0xB);
        func_801CA468(arg0, 0xFF);
        if (*D_801C7AB0 == 4) {
            var_v1 = D_801C7AB4 - 0x2E;
        } else {
            var_v1 = D_801C7AB4;
        }
        if ((u32) (var_v1 & 0xFF) < 0xAU) {
            var_a1 = 0x43;
            goto block_11;
        }
        var_a1 = 0x3E;
        if ((u32) ((var_v1 - 0xA) & 0xFF) < 0x20U) {
            goto block_11;
        }
        if ((u32) ((var_v1 - 0x2A) & 0xFF) < 4U) {
            var_a1 = 0x48;
block_11:
            func_801CABF4(arg0, var_a1, 0x93, 0xA);
        }
        func_801CABF4(arg0, 0x93, 0x93, 0xA, &D_801D4390, *(D_801C586C + ((D_801C7070 / 15) & 0x3FC)), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        if (D_801C7AB5 == 0) {
            if ((D_801C7078 != D_801C6BB4) && (D_801C7078 != D_801C7066)) {
                func_8014A4C8(arg0, 0x36, 0x6F, 0xD, 0xC);
                func_8014A4C8(arg0, 0xB3, 0x6F, 0xD, 0xD);
            }
            if (D_801C7ABC & 1) {
                func_8014A4C8(arg0, 0x71, 0x47, 0xD, 0xE);
            }
            if (D_801C7ABC & 2) {
                func_8014A4C8(arg0, 0x71, 0x9F, 0xD, 0xF);
            }
        }
    }
}
