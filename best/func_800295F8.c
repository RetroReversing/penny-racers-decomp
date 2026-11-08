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

M2C_UNK func_800284D8(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80033A90(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern M2C_UNK D_80092BE0;
extern void *D_80092BF8;

void func_800295F8(void) {
    M2C_UNK sp10;
    M2C_UNK sp20;
    s32 sp40;
    s32 (*temp_v0)(s32);
    void *var_s0;

    func_80033A90(&D_80092BE0, &sp20, 8);
    func_800284D8(&sp10, &D_80092BE0, 3);
loop_1:
    osRecvMesg(&D_80092BE0, &sp40, 1);
    var_s0 = D_80092BF8;
    if (var_s0 == NULL) {
        goto loop_1;
    }
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 (**)(s32), 4);
        if ((temp_v0 != NULL) && (temp_v0(sp40) != 0)) {
            goto loop_1;
        }
        var_s0 = M2C_FIELD(var_s0, void **, 0);
    } while (var_s0 != NULL);
    goto loop_1;
}
