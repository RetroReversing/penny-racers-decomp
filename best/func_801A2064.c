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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_80143DCC();                            /* extern */
M2C_UNK func_8020805C(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802080AC(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_400E00;
extern M2C_UNK D_404F10;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_8021AF20;
extern M2C_UNK func_8021E174;

void func_801A2064(void) {
    M2C_UNK var_a0;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;

    func_800294A0(&D_400E00, &D_8030BD90, &D_404F10 - &D_400E00);
    M2C_FIELD(&func_8021AF20, s32 *, 0xFC) = 0;
    M2C_FIELD(&func_8021AF20, s32 *, 0x100) = 0;
    var_s0 = 0;
    func_80143DCC();
    M2C_FIELD(&func_8021AF20, s32 *, 0x208) = 0;
    M2C_FIELD((&func_8021AF20 + 0x208), s32 *, 4) = 0;
    var_v0 = 0 * 8;
    __repair_rows: {
        temp_v0 = var_v0 + var_s0;
        *(&func_8021E174 + 0x98 + temp_v0) = 0;
        *(&func_8021E174 + 0x97 + temp_v0) = 0;
        *((var_s0 * 4) + (&func_8021AF20 + 0xCC)) = 0;
        var_s0 += 1;
        var_v0 = var_s0 * 8;
    }
if (var_s0 < 4) goto __repair_rows;
    M2C_FIELD(&func_8021AF20, s8 *, 0x294) = 0;
    var_a0 = 4;
    if (M2C_FIELD(&func_8021E174, s16 *, 0x2E) == 0) {
        var_a0 = 1;
    }
    func_8021F6A0(var_a0);
    temp_a0 = 0 * 4;
    if (M2C_FIELD(&func_8021E174, s16 *, 0x2E) != 0) {
        if (M2C_FIELD(&func_8021E174, s16 *, 0x2E) != 1) {
            func_8020805C(temp_a0, 0x6C, 0x90, 0xF0);
            return;
        }
        temp_v0_2 = 0 * 4 * 8;
        *(&D_800DB1B8 + 0x2112 + temp_v0_2) = 0x3E;
        *(&D_800DB1B8 + 0x2114 + temp_v0_2) = 0x90;
        *(&D_800DB1B8 + 0x2116 + temp_v0_2) = 0x6C;
        func_802080AC(temp_a0, 0x6C, 0x90, 0xF0);
        return;
    }
    temp_v1 = 0 * 4 * 8;
    *(&D_800DB1B8 + 0x2110 + temp_v1) = *(&func_8021AF20 + 0x270 + temp_a0);
    *(&D_800DB1B8 + 0x2112 + temp_v1) = *(&func_8021AF20 + 0x272 + temp_a0);
    *(&D_800DB1B8 + 0x2114 + temp_v1) = 0x120;
    *(&D_800DB1B8 + 0x2116 + temp_v1) = 0xD8;
    func_802080AC(temp_a0, 0x6C, 0x90, 0xF0);
}
