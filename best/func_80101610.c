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

M2C_UNK func_80148688(s32, u8);                     /* extern */
s32 func_8014A870(M2C_UNK, M2C_UNK, u8);            /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
extern u16 D_80183BD4;
extern u8 D_80189B36;
extern u16 D_80189C98;
extern u8 D_80189CBE;
extern u16 D_80190CAE;
extern M2C_UNK D_80190CB0;

void func_80101610(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8014A870(0x14, 3, D_80189CBE);
    if (temp_v0 & 3) {
        func_8014B854(0x3B);
    }
    func_80148688(temp_v0 & 0xFF, M2C_FIELD(&D_80190CB0, u8 *, 0));
    var_v0 = temp_v0 & 0x20;
    if (temp_v0 & 0x10) {
        var_a0 = 0x3E;
        if (!(D_80183BD4 & 0x1000)) {
            var_a0 = 0x3D;
            D_80189B36 &= 0xEF;
            D_80189C98 = M2C_FIELD(&D_80190CB0, u16 *, -4);
        }
        func_8014B854(var_a0);
        var_v0 = 0 & 0x20;
    }
    if (var_v0 != 0) {
        func_8014B854(0x3A);
        D_80189B36 &= 0xEF;
        D_80189C98 = D_80190CAE;
    }
}
