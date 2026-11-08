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

M2C_UNK alLink(void *, void *);              /* extern */
M2C_UNK alUnlink(void *);                      /* extern */

void func_80031DD8(void *arg0, void *arg1) {
    u16 temp_s3;
    u8 var_v0;
    void *temp_s2;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x50);
    if (var_s0 != NULL) {
loop_2:
        temp_s3 = M2C_FIELD(var_s0, u16 *, 0xC);
        temp_s2 = M2C_FIELD(var_s0, void **, 0);
        if (((u32) (temp_s3 - 0x16) < 2U) && (M2C_FIELD(var_s0, s32 *, 0x10) == arg1)) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x78)(M2C_FIELD(var_s0, s32 *, 0x14));
            alUnlink(var_s0);
            if (temp_s2 != NULL) {
                M2C_FIELD(temp_s2, s32 *, 8) = (s32) (M2C_FIELD(temp_s2, s32 *, 8) + M2C_FIELD(var_s0, s32 *, 8));
            }
            do { alLink(var_s0, arg0 + 0x48); } while (0);
            if ((s16) temp_s3 == 0x16) {
                var_v0 = M2C_FIELD(arg1, u8 *, 0x37) & 0xFE;
            } else {
                var_v0 = M2C_FIELD(arg1, u8 *, 0x37) & 0xFD;
            }
            M2C_FIELD(arg1, u8 *, 0x37) = var_v0;
            if (M2C_FIELD(arg1, u8 *, 0x37) != 0) {
                goto block_10;
            }
        } else {
block_10:
            var_s0 = temp_s2;
            if (var_s0 != NULL) {
                goto loop_2;
            }
        }
    }
}
