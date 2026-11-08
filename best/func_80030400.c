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

void *func_8002AB9C();                              /* extern */
s32 func_8002ACC8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_8002E6E4(void *, M2C_UNK, void *);     /* extern */
extern void *D_80046DF4;

void func_80030400(void *arg0, s16 arg1, M2C_UNK arg2) {
    s32 temp_a1;
    void *temp_v0;

    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        temp_v0 = func_8002AB9C();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s16 *, 8) = 0xB;
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) arg1;
            temp_a1 = M2C_FIELD(D_80046DF4, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x88);
            M2C_FIELD(temp_v0, s32 *, 4) = temp_a1;
            M2C_FIELD(temp_v0, s32 *, 0x10) = func_8002ACC8(arg2, temp_a1);
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            func_8002E6E4(M2C_FIELD(arg0, void **, 8), 3, temp_v0);
        }
    }
}
