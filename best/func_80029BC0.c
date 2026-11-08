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

s32 func_800339C0(s32);                             /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, void **, M2C_UNK); /* extern */
M2C_UNK osViBlack(M2C_UNK);                     /* extern */
extern M2C_UNK (*D_80046D94)(void *);
extern M2C_UNK (*D_80046D98)(void *);
extern M2C_UNK D_8006C300;
extern s32 D_8006FB30;
extern s32 D_80092C00;
extern M2C_UNK D_800DE0E8;

void func_80029BC0(void) {
    void *sp10;
    s16 temp_v0;
    s32 temp_a0;

    osCreateMesgQueue(&D_800DE0E8, &D_8006C300, 8);
loop_1:
    osRecvMesg(&D_800DE0E8, &sp10, 1);
    temp_v0 = *M2C_FIELD(sp10, s16 **, 0x54);
    switch (temp_v0) {                              /* irregular */
    case 4:
        if (D_80046D94 != NULL) {
            D_80046D94(sp10);
        }
        if (D_8006FB30 == 1) {
            osViBlack(0);
        }
        break;
    case 8:
        if (D_80046D98 != NULL) {
            D_80046D98(sp10);
        }
        break;
    }
    temp_a0 = func_800339C0(1);
    D_80092C00 -= 1;
    func_800339C0(temp_a0);
    goto loop_1;
}
