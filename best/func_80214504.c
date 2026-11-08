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

M2C_UNK func_800DE2E0();                            /* extern */
M2C_UNK func_800DE38C();                            /* extern */
M2C_UNK func_801CF468(u16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80231C5C();                            /* extern */
extern M2C_UNK D_8011F32E;
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 D_8021E130;
extern s8 D_8021E189;

void func_80214504(s32 arg0) {
    u16 temp_v1;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_8021E130 = 0;
        D_8021E189 = 0;
        *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        func_80203DF8(1, 0x78, 0xFF, 0xFF, 0xFF);
        return;
    case 1:
        if (D_8021E130 == 0x10E) {
            func_80203DF8(2, 0x78, 0, 0, 0);
        }
        if ((D_8021E130 >= 0x186) || (0 & 0x10)) {
            func_80203DF8(1, 0x78, 0xFF, 0xFF, 0xFF);
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
        }
block_20:
        D_8021E130 += 1;
        return;
    case 3:
        if (D_8021E130 == 0x24E) {
            func_80203DF8(2, 0x78, 0, 0, 0);
        }
        if ((D_8021E130 >= 0x2D0) || (0 & 0x10)) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
        }
        goto block_20;
    case 2:
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x28;
        D_80168BB0 = 0x28;
        return;
    }
}
