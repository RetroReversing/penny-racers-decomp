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

s32 func_8003A490(s32, s32 *);                      /* extern */
s32 func_8003A520(M2C_UNK, s32);                    /* extern */
M2C_UNK func_8003CF70(M2C_UNK, u32 *);              /* extern */
M2C_UNK func_8003DDC0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_8003EA30();                                /* extern */
M2C_UNK func_8003EA40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8003EBD0(M2C_UNK);                     /* extern */
M2C_UNK func_8003EBE0(s32);                         /* extern */
M2C_UNK func_8003EBF0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_8003EC70();                            /* extern */
s32 func_80042630(s32, u32, M2C_UNK, M2C_UNK);      /* extern */
extern s32 D_80000000;
extern s32 D_80000300;
extern s32 D_8000030C;
extern M2C_UNK D_8000031C;
extern s32 D_800470B0;
extern u32 D_800470B4;
extern s32 D_800470B8;
extern s32 D_800DD3DC;
extern M2C_UNK func_8003E0D0;

void func_80033C20(void) {
    s32 sp10;
    u32 sp14;
    s32 temp_ret;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_a1;

    sp14 = 0;
    D_800DD3DC = 1;
    func_8003EBE0(func_8003EA30() | 0x20000000);
    func_8003EBD0(0x01000800);
    do {

    } while (func_8003A490(0x1FC007FC, &sp10) != 0);
    do {

    } while (func_8003A520(0x1FC007FC, sp10 | 8) != 0);
    D_80000000 = M2C_FIELD(&func_8003E0D0, s32 *, 0);
    D_80000000 = M2C_FIELD(&func_8003E0D0, s32 *, 4);
    D_80000000 = M2C_FIELD(&func_8003E0D0, s32 *, 8);
    D_80000000 = M2C_FIELD(&func_8003E0D0, s32 *, 0xC);
    M2C_FIELD((void *)0x80000080, s32 *, 0) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0);
    M2C_FIELD((void *)0x80000080, s32 *, 4) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 4);
    M2C_FIELD((void *)0x80000080, s32 *, 8) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 8);
    M2C_FIELD((void *)0x80000080, s32 *, 0xC) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0xC);
    M2C_FIELD((void *)0x80000100, s32 *, 0) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0);
    M2C_FIELD((void *)0x80000100, s32 *, 4) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 4);
    M2C_FIELD((void *)0x80000100, s32 *, 8) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 8);
    M2C_FIELD((void *)0x80000100, s32 *, 0xC) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0xC);
    M2C_FIELD((void *)0x80000180, s32 *, 0) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0);
    M2C_FIELD((void *)0x80000180, s32 *, 4) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 4);
    M2C_FIELD((void *)0x80000180, s32 *, 8) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 8);
    M2C_FIELD((void *)0x80000180, s32 *, 0xC) = (s32) M2C_FIELD(&func_8003E0D0, s32 *, 0xC);
    func_8003EBF0(0x80000000, 0x190, 0x80000180);
    func_8003EA40(0x80000000, 0x190);
    func_8003EC70();
    func_8003CF70(4, &sp14);
    temp_a0 = sp14 & ~0xF;
    sp14 = temp_a0;
    if (temp_a0 != 0) {
        D_800470B0 = 0;
        D_800470B4 = temp_a0;
    }
    temp_a1 = D_800470B4 * 3;
    temp_ret = func_80042630(((D_800470B0 * 2) | ((u32) D_800470B4 >> 0x1F)) + D_800470B0 + (temp_a1 < (u32) D_800470B4), temp_a1, 0, 4);
    D_800470B0 = temp_ret;
    D_800470B4 = (u32) (u64) temp_ret;
    if (D_8000030C == 0) {
        func_8003DDC0(&D_8000031C, 0x40);
    }
    switch (D_80000300) {                           /* irregular */
    case 0:
        var_v0 = 0x02F5B2D2;
        break;
    case 2:
        var_v0 = 0x02E6025C;
        break;
    default:
        var_v0 = 0x02E6D354;
        break;
    }
    D_800470B8 = var_v0;
}
