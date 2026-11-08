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

s32 osWritebackDCacheAll();
s32 osRecvMesg();
s32 osSendMesg();
s32 func_80039820();
s32 osSpTaskStartGo();
s32 func_80039A60();
s32 osSpTaskYielded();
extern char D_800DD824[];
extern s32 D_800DDE8C;

void func_80028634(void) {
    void *sp10;
    void *sp14;
    s32 *temp_s5;
    s32 temp_s1;
    s32 var_s0;
    void *temp_s0;
    void *temp_s3;

    temp_s3 = D_800DD824 + 0x66C;
    temp_s5 = D_800DD824 + 0xA8;
loop_1:
    osRecvMesg(&D_800DD824, &sp10, 1);
    var_s0 = 0;
    osWritebackDCacheAll();
    temp_s1 = D_800DDE8C;
    if (temp_s1 != 0) {
        var_s0 = 2;
        func_80039A60();
        osRecvMesg(D_800DD824 + 0xA8, &sp14, 1);
        if (osSpTaskYielded(temp_s1 + 0x10) != 0) {
            var_s0 = 1;
        }
    }
    *(void * *)(D_800DD824 + 0x66C) = sp10;
    func_80039820(sp10 + 0x10);
    osSpTaskStartGo(sp10 + 0x10);
    osRecvMesg(temp_s5, &sp14, 1);
    *(void * *)(D_800DD824 + 0x66C) = NULL;
    if (M2C_FIELD(temp_s3, s32 *, 4) != 0) {
        osSendMesg(temp_s3 - 0x554, &sp14, 1);
    }
    if (var_s0 == 1) {
        temp_s0 = temp_s1 + 0x10;
        func_80039820(temp_s0);
        osSpTaskStartGo(temp_s0);
    } else if (var_s0 == 2) {
        osSendMesg(temp_s5, &sp14, 1);
    }
    osSendMesg(M2C_FIELD(sp10, s32 **, 0x50), M2C_FIELD(sp10, void ***, 0x54), 1);
    goto loop_1;
}
