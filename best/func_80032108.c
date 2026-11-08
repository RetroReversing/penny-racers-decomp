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

M2C_UNK func_80031FA0(void *, s16 *);               /* extern */

void func_80032108(void *arg0, void *arg1, u32 arg2) {
    s16 sp10;
    u16 sp26;
    s32 temp_s4;
    s32 temp_s7;
    u16 var_s3;
    u32 temp_fp;
    u32 var_s2;

    if (arg2 == 0) {
        M2C_FIELD(arg1, u16 *, 0xC) = 0U;
        M2C_FIELD(arg1, u32 *, 4) = 0U;
        M2C_FIELD(arg1, u32 *, 8) = 0U;
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
        return;
    }
    temp_s7 = M2C_FIELD(arg0, s32 *, 8);
    sp26 = M2C_FIELD(arg0, u16 *, 0x1A);
    temp_fp = M2C_FIELD(arg0, u32 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x1A) = 0U;
    M2C_FIELD(arg0, u32 *, 0xC) = 0U;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
loop_4:
    temp_s4 = M2C_FIELD(arg0, s32 *, 8);
    var_s3 = M2C_FIELD(arg0, u16 *, 0x1A);
    var_s2 = M2C_FIELD(arg0, u32 *, 0xC);
    func_80031FA0(arg0, &sp10);
    if (sp10 != 4) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xC) >= arg2) {
            M2C_FIELD(arg1, s32 *, 0) = temp_s4;
        } else {
            goto loop_4;
        }
    } else {
        var_s3 = M2C_FIELD(arg0, u16 *, 0x1A);
        var_s2 = M2C_FIELD(arg0, u32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 8);
    }
    M2C_FIELD(arg1, u16 *, 0xC) = var_s3;
    M2C_FIELD(arg1, u32 *, 4) = var_s2;
    M2C_FIELD(arg1, u32 *, 8) = (u32) M2C_FIELD(arg0, u32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8) = temp_s7;
    M2C_FIELD(arg0, u16 *, 0x1A) = sp26;
    M2C_FIELD(arg0, u32 *, 0xC) = temp_fp;
}
