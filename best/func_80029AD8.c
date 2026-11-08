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
M2C_UNK osRecvMesg(M2C_UNK *, s16 **, M2C_UNK);  /* extern */
extern M2C_UNK (*D_80046D80)(s32);
extern M2C_UNK (*D_80046D84)();
extern M2C_UNK D_80065F70;
extern M2C_UNK D_8006FE80;
extern s32 D_80092C00;

void func_80029AD8(void) {
    M2C_UNK sp10;
    s16 *sp20;
    s16 temp_v0;

    D_80046D80 = NULL;
    D_80046D84 = NULL;
    func_80033A90(&D_8006FE80, &D_80065F70, 8);
    func_800284D8(&sp10, &D_8006FE80, 3);
loop_1:
    osRecvMesg(&D_8006FE80, &sp20, 1);
    temp_v0 = *sp20;
    if (temp_v0 == 1) {
        if (D_80046D80 != NULL) {
            D_80046D80(D_80092C00);
        }
        goto loop_1;
    }
    if (temp_v0 != 2) {
        goto loop_1;
    }
    if (D_80046D84 == NULL) {
        goto loop_1;
    }
    D_80046D84();
    goto loop_1;
}
