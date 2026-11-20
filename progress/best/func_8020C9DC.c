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

M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA494(s32, u8, u8, u8);             /* extern */
M2C_UNK func_801CABF4(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
s32 func_8020557C(s32, M2C_UNK);                    /* extern */
extern M2C_UNK D_800DE080;
extern u8 D_8021B068;
extern s32 D_8021E1BC;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_802D6898;
extern M2C_UNK D_802D92A0;

void func_8020C9DC(s32 arg0) {
    s32 temp_s1;
    u8 var_a1;
    u8 var_a2;
    u8 var_a3;
    void *temp_v1;

    func_801CA140();
    temp_v1 = M2C_FIELD(&D_800DE080, void **, 0x64);
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v1 + 8);
    M2C_FIELD(temp_v1, s32 *, 0) = 0xED0002B4;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x500380;
    temp_s1 = func_8020557C(D_8021E1BC, 0xF) & 0xFFFF;
    if (D_8021B068 == 0) {
        var_a1 = M2C_FIELD(&D_8021F260, u8 *, 0);
        var_a2 = M2C_FIELD(&D_8021F260, u8 *, 1);
        var_a3 = M2C_FIELD(&D_8021F260, u8 *, 2);
    } else {
        var_a1 = 0xFF;
        var_a2 = 0xFF;
        var_a3 = 0xFF;
    }
    func_801CA494(arg0, var_a1, var_a2, var_a3);
    func_801CABF4(arg0, temp_s1 & 0xFFFF, 0xC6, 0xF, &D_802D92A0, D_8021E1BC, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
