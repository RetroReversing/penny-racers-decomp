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

void *func_8002AB9C();
s32 func_8002E6E4();
s32 func_800300F0();
extern void *D_80046DF4;

s32 func_8002FFD0(void *arg0, void *arg1) {
    void *sp10;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp10 = NULL;
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg1, u16 *, 2);
    temp_v0 = func_800300F0(&sp10, (s16) M2C_FIELD(arg1, u16 *, 0));
    if (sp10 != NULL) {
        if (temp_v0 != 0) {
            M2C_FIELD(sp10, s32 *, 0x88) = 0x200;
            M2C_FIELD(M2C_FIELD(sp10, void **, 8), s32 *, 8) = 0;
            M2C_FIELD(sp10, void **, 8) = arg0;
            M2C_FIELD(arg0, void **, 8) = sp10;
            temp_v0_2 = func_8002AB9C(sp10);
            M2C_FIELD(temp_v0_2, s16 *, 8) = 0xB;
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) M2C_FIELD(D_80046DF4, s32 *, 0x28);
            M2C_FIELD(temp_v0_2, s32 *, 0x10) = (s32) (M2C_FIELD(sp10, s32 *, 0x88) - 0x40);
            func_8002E6E4(M2C_FIELD(arg0, void **, 8), 3, temp_v0_2);
            temp_v0_3 = func_8002AB9C();
            if (temp_v0_3 != NULL) {
                M2C_FIELD(temp_v0_3, s16 *, 8) = 0xF;
                M2C_FIELD(temp_v0_3, s32 *, 0) = 0;
                M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) (M2C_FIELD(D_80046DF4, s32 *, 0x28) + M2C_FIELD(sp10, s32 *, 0x88));
                func_8002E6E4(M2C_FIELD(arg0, void **, 8), 3, temp_v0_3);
            }
        } else {
            M2C_FIELD(sp10, s32 *, 0x88) = 0;
            M2C_FIELD(sp10, void **, 8) = arg0;
            M2C_FIELD(arg0, void **, 8) = sp10;
        }
    }
    return sp10 != NULL;
}
