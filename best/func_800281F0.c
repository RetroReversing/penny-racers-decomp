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

M2C_UNK func_80033A90(void *, void *, M2C_UNK);     /* extern */
M2C_UNK osCreateThread(void *, M2C_UNK, M2C_UNK *, void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_80034090(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK osStartThread(void *);                      /* extern */
M2C_UNK func_80039B50(M2C_UNK);                     /* extern */
M2C_UNK func_80039E80(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_80039EE0(void *);                      /* extern */
M2C_UNK osViBlack(M2C_UNK);                     /* extern */
extern M2C_UNK D_800473F0;
extern M2C_UNK D_8005FCC0;
extern M2C_UNK D_80061CC0;
extern M2C_UNK D_80063CC0;
extern s16 D_800DD822;
extern s32 D_800DDE88;
extern M2C_UNK D_800DDE8C;
extern s32 D_800DDE90;
extern s32 D_800DDE94;
extern s32 D_800DDE98;
extern M2C_UNK func_8002841C;
extern M2C_UNK func_80028634;
extern M2C_UNK func_8002877C;

void func_800281F0(s32 arg0, s32 arg1) {
    s32 temp_s5;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_s4;

    temp_s2 = &D_800DDE8C - 0x5F8;
    temp_s5 = arg1 & 0xFF;
    M2C_FIELD(&D_800DDE8C, s32 *, 0) = 0;
    D_800DDE90 = 0;
    D_800DDE94 = 0;
    D_800DDE88 = 0;
    M2C_FIELD(&D_800DDE8C, s16 *, -0x66C) = 1;
    D_800DD822 = 2;
    D_800DDE98 = temp_s5;
    func_80033A90(temp_s2, &D_800DDE8C - 0x5E0, 8);
    temp_s4 = &D_800DDE8C - 0x5C0;
    do { func_80033A90(temp_s4, &D_800DDE8C - 0x5A8, 8); } while (0);
    temp_s3 = &D_800DDE8C - 0x588;
    func_80033A90(temp_s3, &D_800DDE8C - 0x570, 8);
    func_80033A90(&D_800DDE8C - 0x630, &D_800DDE8C - 0x618, 8);
    func_80033A90(&D_800DDE8C - 0x668, &D_800DDE8C - 0x650, 8);
    func_80033A90(&D_800DDE8C - 0x550, &D_800DDE8C - 0x538, 8);
    func_80039B50(0xFE);
    func_80039EE0(((arg0 & 0xFF) * 0x50) + &D_800473F0);
    osViBlack(1);
    func_80039E80(temp_s2, 0x29A, temp_s5);
    func_80034090(4, temp_s4, 0x29B);
    func_80034090(9, temp_s3, 0x29C);
    func_80034090(0xE, temp_s2, 0x29D);
    temp_s2_2 = &D_800DDE8C - 0x514;
    temp_s1 = &D_800DDE8C - 0x66C;
    osCreateThread(temp_s2_2, 0x13, &func_8002841C, temp_s1, &D_8005FCC0, 0x78);
    osStartThread(temp_s2_2);
    temp_s2_3 = &D_800DDE8C - 0x364;
    osCreateThread(temp_s2_3, 0x12, &func_80028634, temp_s1, &D_80061CC0, 0x6E);
    osStartThread(temp_s2_3);
    temp_s0 = &D_800DDE8C - 0x1B4;
    osCreateThread(temp_s0, 0x11, &func_8002877C, temp_s1, &D_80063CC0, 0x64);
    osStartThread(temp_s0);
}
