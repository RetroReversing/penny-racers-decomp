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

M2C_UNK func_800285D4(void *);                      /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern M2C_UNK (*D_80046C50)(M2C_UNK *);
extern s32 D_8006FB2C;
extern M2C_UNK D_800DD894;

void func_8002841C(void) {
    s32 sp10;

    D_8006FB2C = 0;
loop_1:
    osRecvMesg(&D_800DD894, &sp10, 1);
    if (sp10 == 0x29A) {
        D_8006FB2C += 1;
        func_800285D4(&D_800DD894 - 0x74);
        goto loop_1;
    }
    if (sp10 != 0x29D) {
        goto loop_1;
    }
    func_800285D4(&D_800DD894 - 0x72);
    if (D_80046C50 == NULL) {
        goto loop_1;
    }
    D_80046C50(&D_800DD894);
    goto loop_1;
}
