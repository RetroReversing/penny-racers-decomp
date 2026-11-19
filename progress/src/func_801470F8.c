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
M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA468(s32, M2C_UNK);                /* extern */
M2C_UNK func_801CA494(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_801CABF4(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern u16 D_80189CC6;
extern M2C_UNK D_802033FC;
extern M2C_UNK D_802D6898;
extern M2C_UNK D_802D92A0;

void func_801470F8(s32 arg0) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 var_a3;
    s32 var_s7;

    func_801CA140();
    func_801CA468(arg0, 0xC0);
    func_8014A4C8(arg0, 0x58, 0x52, 0xB, 0x4B);
    func_8014A4C8(arg0, 0x58, 0x8A, 0xB, 0x4C);
    func_8014A4C8(arg0, 0xE0, 0x52, 0xB, 0x4D);
    func_8014A4C8(arg0, 0xE0, 0x8A, 0xB, 0x4E);
    var_a3 = 0x5F;
    var_s7 = 0xFF;
    if (!(D_80189CC6 & 0x8000)) {
        var_a3 = 0xFF;
        var_s7 = 0x5F;
    }
    temp_a3 = var_a3 & 0xFFFF;
    func_801CA494(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
    func_801CABF4(arg0, 0x73, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 0), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    temp_a3_2 = var_s7 & 0xFFFF;
    func_801CA494(arg0, temp_a3_2, temp_a3_2, temp_a3_2, 0xFF);
    func_801CABF4(arg0, 0xAF, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 4), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    func_801CA468(arg0, 0xFF);
    func_801CABF4(arg0, 0x64, 0x5E, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, -0x344), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
