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

M2C_UNK func_80028BA0();                            /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_8006A140;
extern s16 D_8006A144;
extern s16 D_8006A146;
extern M2C_UNK D_8006A148;
extern M2C_UNK D_8006C300;
extern M2C_UNK D_80071F80;
extern M2C_UNK D_80072BE0;
extern M2C_UNK D_80092BE0;
extern s32 D_80092C00;
extern M2C_UNK D_800DAE40;
extern M2C_UNK D_800DAE50;
extern M2C_UNK D_800DAE54;
extern M2C_UNK D_800DAE58;
extern M2C_UNK D_800DAE5C;
extern M2C_UNK D_800DAE64;
extern M2C_UNK D_800DAE6C;
extern M2C_UNK D_800DAE70;
extern M2C_UNK D_800DAE74;
extern M2C_UNK D_800DAE78;
extern M2C_UNK D_800DAE7C;
extern M2C_UNK D_800DAE88;
extern M2C_UNK D_800DAE8C;
extern M2C_UNK D_800DAE98;
extern M2C_UNK *D_800DB158;
extern M2C_UNK D_800DD420;
extern M2C_UNK D_800DE0E8;
extern M2C_UNK func_80029BC0;
extern M2C_UNK func_800428B0;

void func_80029CCC(void) {
    M2C_UNK **var_a0;
    M2C_UNK *temp_v1;
    M2C_UNK *var_a1;
    s32 var_v1;
    u32 var_a2;

    D_8006A144 = 8;
    D_8006A146 = 4;
    D_80092C00 = 0;
    func_80028BA0();
    osCreateThread(&D_8006A148, 5, &func_80029BC0, 0, &D_8006C300, 0x3C);
    osStartThread(&D_8006A148);
    var_a2 = 0;
    var_a0 = &D_800DAE98 - 8;
    var_a1 = &D_800DAE98;
    var_v1 = 0;
    __repair_rows: {
        *(&D_800DAE40 + var_v1) = var_a1;
        *var_a0 = &D_800DE0E8;
        *(&D_800DAE50 + var_v1) = 1;
        *(&D_800DAE54 + var_v1) = 0;
        *(&D_800DAE58 + var_v1) = &func_800428B0;
        *(&D_800DAE5C + var_v1) = (&func_800428B0 + 0xD0) - &func_800428B0;
        *(&D_800DAE64 + var_v1) = 0x1000;
        *(&D_800DAE6C + var_v1) = 0x800;
        *(&D_800DAE70 + var_v1) = &D_800DD420;
        *(&D_800DAE74 + var_v1) = 0x400;
        *(&D_800DAE78 + var_v1) = &D_80072BE0;
        *(&D_800DAE7C + var_v1) = &D_80092BE0;
        *(&D_800DAE88 + var_v1) = &D_80071F80;
        *(&D_800DAE8C + var_v1) = 0xC00;
        *var_a0 = &D_800DE0E8;
        var_a0 += 0x58;
        var_a1 += 0x58;/*__repair_loop_weight*/do {
        var_a2 += 1;} while (0);
        var_v1 += 0x58;
    }
if (var_a2 < 0xAU) goto __repair_rows;
    temp_v1 = &D_800DB158 - 0x318;
    D_800DB158 = temp_v1;
    D_8006A140 = temp_v1;
}
