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

M2C_UNK osSendMesg(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_8003BFC0(M2C_UNK *);                       /* extern */
s32 osEepromLongWrite(M2C_UNK *, u8, s32, u16);         /* extern */
s32 func_8003C130(M2C_UNK *, u8, s32, u16);         /* extern */
extern M2C_UNK D_800DE058;

s32 func_800299BC(void *arg0) {
    s16 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0);
    if (temp_v1 != 0x4000) {
        var_v0 = 0;
        if (temp_v1 >= 0x4001) {
            switch (temp_v1) {                      /* irregular */
            case 0x4001:
                var_v0_2 = func_8003C130(&D_800DE058, M2C_FIELD(arg0, u8 *, 0x10), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, u16 *, 0x12));
                goto block_8;
            case 0x4002:
                var_v0_2 = osEepromLongWrite(&D_800DE058, M2C_FIELD(arg0, u8 *, 0x10), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, u16 *, 0x12));
                goto block_8;
            default:
                return 0;
            }
        } else {
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
    } else {
        var_v0_2 = func_8003BFC0(&D_800DE058);
block_8:
        M2C_FIELD(arg0, s32 *, 0xC) = var_v0_2;
        osSendMesg(M2C_FIELD(arg0, s32 *, 4), 0, 1);
        var_v0 = 1;
        return var_v0;
    }
}
