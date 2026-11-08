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
s32 func_8002ACC8(s32);                             /* extern */
M2C_UNK func_8002E6E4(void *, M2C_UNK, void *);     /* extern */
extern void *D_80046DF4;

void func_80030540(void *arg0, s32 arg1, f32 arg2, s16 arg3, u8 arg4, u8 arg5, s32 arg6) {
    void *temp_v0;

    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        temp_v0 = func_8002AB9C();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            M2C_FIELD(temp_v0, s16 *, 8) = 0xD;
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(D_80046DF4, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x88));
            M2C_FIELD(temp_v0, u8 *, 0x12) = arg4;
            M2C_FIELD(temp_v0, s16 *, 0x10) = arg3;
            M2C_FIELD(temp_v0, u8 *, 0x13) = arg5;
            M2C_FIELD(temp_v0, f32 *, 0xC) = arg2;
            M2C_FIELD(temp_v0, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
            M2C_FIELD(temp_v0, s32 *, 0x14) = func_8002ACC8(arg6);
            M2C_FIELD(temp_v0, s32 *, 0x18) = arg1;
            func_8002E6E4(M2C_FIELD(arg0, void **, 8), 3, temp_v0);
        }
    }
}
