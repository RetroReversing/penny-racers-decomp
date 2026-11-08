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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_800E067C();                            /* extern */
M2C_UNK func_8013ADA8();                            /* extern */
M2C_UNK func_801FA338(M2C_UNK);                     /* extern */
M2C_UNK func_8022F780(u16);                         /* extern */
M2C_UNK func_8022FE50(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_80231A0C();                            /* extern */
M2C_UNK func_80231C5C();                            /* extern */
M2C_UNK func_80231E30();                            /* extern */
M2C_UNK func_80232360(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8006FB14;
extern s32 D_802038D0;
extern s32 D_802038D4;
extern s32 D_80203AB0;
extern M2C_UNK D_802282F0;
extern M2C_UNK D_8022A778;
extern s8 D_8022AFE9;
extern M2C_UNK D_80238EC0;
extern M2C_UNK func_8012AD9C;
extern M2C_UNK func_8015A728;

void func_80232480(void) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_v0;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_t1;
    s32 var_v1;
    void *temp_t0;

    func_801FA338(0);
    D_80203AB0 = 0;
    D_802038D0 = 0;
    D_802038D4 = 0;
    M2C_FIELD(&D_8006FB14, s8 *, 4) = 0;
    func_80231A0C();
    func_80231C5C();
    func_80231E30();
    var_s0 = 0;
    func_8022F780(M2C_FIELD((&D_8006FB14 + 4), u16 *, -8));
    func_800E067C();
    var_t1 = 0;
    do {
        var_v1 = 0 & 0xFFFF;
loop_2:
        temp_v0 = var_v1 * 0x34;
        var_a3 = temp_v0 + (((var_t1 & 0xFFFF) * 0x8F0) + &D_8022A778);
        var_a2 = temp_v0 + &D_80238EC0;
        temp_t0 = var_a2 + 0x30;
loop_3:
        M2C_FIELD(var_a3, s32 *, 0) = M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t0) {
            goto loop_3;
        }
        *var_a3 = *var_a2;
        var_s0 += 1;
        var_v1 = var_s0 & 0xFFFF;
        if ((u32) (var_s0 & 0xFFFF) < 8U) {
            goto loop_2;
        }
        var_t1 += 1;
        var_s0 = 0;
    } while ((u32) (var_t1 & 0xFFFF) < 6U);
    var_a2_2 = 0 & 0xFF;
    do {
        func_8022FE50(var_a2_2, var_a2_2, var_a2_2, 1);
        var_s0 += 1;
        var_a2_2 = var_s0 & 0xFF;
    } while ((u32) (var_s0 & 0xFFFF) < 6U);
    D_8022AFE9 = 0;
    func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 4, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 7, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 0xA, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    func_800DE41C(0, 0, 3, 0, 0x20, 0, 0, &D_802282F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xC0, 0xFF, 0, &func_8015A728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80232360(1, 0);
    func_80232360(2, 0);
    func_80232360(3, 0);
    func_80232360(4, 0);
    func_80232360(5, 0);
}
