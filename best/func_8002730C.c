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

s32 n_alInit();
s32 osCreateMesgQueue();
s32 osCreateThread();
s32 osStartThread();
s32 alHeapInit();
s32 alHeapDBAlloc();
s32 osAiSetFrequency();
extern char D_800437A0[];
extern s8 D_80046C3C;
extern char D_800485C0[];
extern char D_8004CE10[];
extern char D_8004EFC0[];
extern s32 D_8005CFC0;
extern s32 D_8005CFC4;
extern char D_8005CFD8[];
extern char D_8005CFE0[];
extern char D_8005CFE4[];
extern char D_8005CFE8[];
extern char D_8005CFF0[];
extern char D_8005CFF4[];
extern char D_8005CFF8[];
extern char D_8005CFFC[];
extern char D_8005D000[];
extern char D_8005D004[];
extern char D_8005D010[];
extern char D_8005D014[];
extern char D_8005D01C[];
extern s32 D_8005D078;
extern s32 D_8005D07C;
extern s32 D_8005D080;
extern char D_8005D088[];
extern char D_8005D0A0[];
extern char D_8006E780[];
extern char D_8006FCB4[];
extern char D_80072B80[];
extern s32 func_80027108;
extern s32 func_800276E0;
extern s32 func_800428B0;

void func_8002730C(s32 arg0, s32 arg1, void *arg2) {
    s32 var_a0;
    s32 var_v1;
    u32 var_a1;

    D_80046C3C = 1;
    alHeapInit(&D_8006E780, arg0, arg1);
    D_8005CFC0 = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x2000);
    D_8005CFC4 = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x2000);
    D_8005D078 = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x8000);
    D_8005D07C = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x8000);
    D_8005D080 = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x8000);
    osCreateMesgQueue(&D_8005D088, &D_8005D0A0, 0x40);
    M2C_FIELD(arg2, s32 **, 0x10) = &func_80027108;
    M2C_FIELD(arg2, s32 **, 0x14) = &D_8006E780;
    M2C_FIELD(arg2, s32 *, 0x18) = osAiSetFrequency(M2C_FIELD(arg2, s32 *, 0x18));
    n_alInit(&D_80072B80, arg2);
    var_a1 = 0;
    var_a0 = 0;
    var_v1 = 0;
    do {
        *(D_8005D01C + var_v1) = 0;
        *(D_8005CFD8 + var_v1) = 2;
        *(D_8005CFE0 + var_v1) = &func_800428B0;
        *(D_8005CFE4 + var_v1) = (&func_800428B0 + 0xD0) - &func_800428B0;
        *(D_8005CFE8 + var_v1) = &D_800437A0;
        *(D_8005CFF0 + var_v1) = &D_800485C0;
        *(D_8005CFF4 + var_v1) = 0x800;
        *(D_8005CFF8 + var_v1) = 0;
        *(D_8005CFFC + var_v1) = 0;
        *(D_8005D000 + var_v1) = 0;
        *(D_8005D004 + var_v1) = 0;
        *(D_8005D010 + var_v1) = 0;
        *(D_8005D014 + var_v1) = 0;
        *(D_8006FCB4 + var_a0) = 0;
        var_a0 += 0x184;
        var_a1 += 1;
        var_v1 += 0x58;
    } while (var_a1 < 2U);
    osCreateThread(&D_8004CE10, 6, &func_800276E0, 0, &D_8004EFC0, 0x46);
    osStartThread(&D_8004CE10);
}
