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

void *func_8002AB9C(void *);                        /* extern */
M2C_UNK func_8002AC40(void *);                      /* extern */
M2C_UNK func_8002E6E4(void *, M2C_UNK, void *);     /* extern */
extern void *D_80046DF4;

void n_alSynFreeVoice(void *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 8);
    if (temp_a0 != NULL) {
        if (M2C_FIELD(temp_a0, s32 *, 0x88) != 0) {
            temp_v0 = func_8002AB9C(temp_a0);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s16 *, 8) = 0;
                M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(D_80046DF4, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x88));
                M2C_FIELD(temp_v0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 8);
                func_8002E6E4(M2C_FIELD(arg0, void **, 8), 3, temp_v0);
                M2C_FIELD(arg0, void **, 8) = NULL;
            }
        } else {
            func_8002AC40(temp_a0);
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
    }
}
