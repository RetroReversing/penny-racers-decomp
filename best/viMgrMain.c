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

M2C_UNK osRecvMesg(s32, u16 **, M2C_UNK);        /* extern */
M2C_UNK osSendMesg(s32, s32, M2C_UNK);           /* extern */
M2C_UNK __osTimerInterrupt();                            /* extern */
M2C_UNK func_8003A140();                            /* extern */
u32 func_8003EA20();                                /* extern */
void *func_8003F320();                              /* extern */
extern u16 D_8006C370;
extern u32 D_8006E798;
extern s32 D_8006F9EC;
extern s32 D_8006FE98;
extern u32 D_8006FE9C;

void viMgrMain(void *arg0) {
    u16 *sp10;
    s32 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_v0_5;
    u32 temp_v1;
    u32 temp_v1_2;
    void *temp_v0_4;

    sp10 = NULL;
    temp_v0 = M2C_FIELD(func_8003F320(), u16 *, 2);
    D_8006C370 = temp_v0;
    if (temp_v0 == 0) {
        D_8006C370 = 1;
    }
loop_3:
    osRecvMesg(M2C_FIELD(arg0, s32 *, 0xC), &sp10, 1);
    temp_v0_2 = *sp10;
    if (temp_v0_2 == 0xD) {
        func_8003A140();
        temp_v0_3 = D_8006C370 - 1;
        D_8006C370 = temp_v0_3;
        if (!(temp_v0_3 & 0xFFFF)) {
            temp_v0_4 = func_8003F320();
            temp_a0 = M2C_FIELD(temp_v0_4, s32 *, 0x10);
            if (temp_a0 != 0) {
                osSendMesg(temp_a0, M2C_FIELD(temp_v0_4, s32 *, 0x14), 0);
            }
            D_8006C370 = M2C_FIELD(temp_v0_4, u16 *, 2);
        }
        D_8006F9EC += 1;
        if (0 != 0) {
            temp_v1 = func_8003EA20();
            D_8006FE98 = 0;
            D_8006FE9C = temp_v1;
        }
        temp_s0 = D_8006E798;
        temp_v0_5 = func_8003EA20();
        D_8006E798 = temp_v0_5;
        temp_s0_2 = temp_v0_5 - temp_s0;
        temp_v1_2 = D_8006FE9C + temp_s0_2;
        D_8006FE98 += temp_v1_2 < temp_s0_2;
        D_8006FE9C = temp_v1_2;
        goto loop_3;
    }
    if (temp_v0_2 != 0xE) {
        goto loop_3;
    }
    __osTimerInterrupt();
    goto loop_3;
}
