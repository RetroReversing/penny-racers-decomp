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

M2C_UNK func_80029E84(void *, s32, s32, M2C_UNK);   /* extern */
s32 func_80034640(s32);                             /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_801F97E0(void *);                      /* extern */
extern M2C_UNK D_2D62D8;
extern M2C_UNK D_2D6308;
extern s32 D_8006F9D0;
extern s32 D_8006FB14;
extern s32 D_800DB1B0;
extern M2C_UNK D_800DE080;
extern M2C_UNK D_801F9970;
extern M2C_UNK D_801F9974;
extern s32 D_801F9980;
extern M2C_UNK func_80220E94;

void func_8019380C(void *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x848);
    M2C_FIELD(arg0, s32 *, 0x840) = 0xBC000006;
    M2C_FIELD(arg0, s32 *, 0x844) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x850);
    M2C_FIELD(arg0, s32 *, 0x848) = 0x06000000;
    M2C_FIELD(arg0, M2C_UNK **, 0x84C) = &D_2D6308;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x858);
    M2C_FIELD(arg0, s32 *, 0x850) = 0x06000000;
    M2C_FIELD(arg0, M2C_UNK **, 0x854) = &D_2D62D8;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x860);
    M2C_FIELD(arg0, s32 *, 0x858) = 0x06000000;
    M2C_FIELD(arg0, void **, 0x85C) = (void *) (&func_80220E94 + 0x44);
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x868);
    M2C_FIELD(arg0, s32 *, 0x860) = 0xBC000404;
    M2C_FIELD(arg0, s32 *, 0x864) = 1;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x870);
    M2C_FIELD(arg0, s32 *, 0x868) = 0xBC000C04;
    M2C_FIELD(arg0, s32 *, 0x86C) = 1;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x878);
    M2C_FIELD(arg0, s32 *, 0x870) = 0xBC001404;
    M2C_FIELD(arg0, s32 *, 0x874) = 0xFFFF;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x880);
    M2C_FIELD(arg0, s32 *, 0x878) = 0xBC001C04;
    M2C_FIELD(arg0, s32 *, 0x87C) = 0xFFFF;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x888);
    M2C_FIELD(arg0, s32 *, 0x880) = 0xFE000000;
    temp_v1 = D_8006F9D0 - 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x884) = temp_v1;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x890);
    M2C_FIELD(arg0, s32 *, 0x888) = 0xBA001402;
    M2C_FIELD(arg0, s32 *, 0x88C) = 0x300000;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x898);
    M2C_FIELD(arg0, s32 *, 0x890) = 0xFF10013F;
    M2C_FIELD(arg0, s32 *, 0x894) = temp_v1;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x8A0);
    M2C_FIELD(arg0, s32 *, 0x898) = 0xF7000000;
    M2C_FIELD(arg0, s32 *, 0x89C) = 0xFFFCFFFC;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x8A8);
    M2C_FIELD(arg0, s32 *, 0x8A0) = 0xF64FC3BC;
    M2C_FIELD(arg0, s32 *, 0x8A4) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x8B0);
    M2C_FIELD(arg0, s32 *, 0x8A8) = 0xE7000000;
    M2C_FIELD(arg0, s32 *, 0x8AC) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (arg0 + 0x8B8);
    M2C_FIELD(arg0, s32 *, 0x8B0) = 0xFF10013F;
    M2C_FIELD(arg0, s32 *, 0x8B4) = func_80034640(D_800DB1B0);
    temp_v0 = M2C_FIELD(&D_800DE080, void **, 0x64);
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 8);
    M2C_FIELD(temp_v0, s32 *, 0) = 0xF7000000;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x10001;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x10);
    M2C_FIELD(temp_v0, s32 *, 8) = 0xF64FC3BC;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x18);
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0xE7000000;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x20);
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0xBA001102;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x28);
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0xBA001001;
    M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x30);
    M2C_FIELD(temp_v0, s32 *, 0x28) = 0xBA000C02;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0x2000;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x38);
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0xBA000903;
    M2C_FIELD(temp_v0, s32 *, 0x34) = 0xC00;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x38) = 0xBA000602;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = 0xC0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x48);
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0xBA000602;
    M2C_FIELD(temp_v0, s32 *, 0x44) = 0x40;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x50);
    M2C_FIELD(temp_v0, s32 *, 0x48) = 0xBA000402;
    M2C_FIELD(temp_v0, s32 *, 0x4C) = 0x30;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0 + 0x58);
    M2C_FIELD(temp_v0, s32 *, 0x50) = 0xF9000000;
    M2C_FIELD(temp_v0, s32 *, 0x54) = 0xFF;
    func_801F97E0(arg0);
    temp_v0_2 = M2C_FIELD(&D_800DE080, void **, 0x64);
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0_2 + 8);
    M2C_FIELD(temp_v0_2, s32 *, 0) = 0xE9000000;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v0_2 + 0x10);
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0xB8000000;
    M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
    if (((s32) ((temp_v0_2 - 0x830) - arg0) >> 3) >= 0x4650) {
        func_800346B0(&D_801F9970, &D_801F9974, 0x8D);
    }
    func_80029E84(arg0 + 0x840, ((s32) ((M2C_FIELD(&D_800DE080, void **, 0x64) - 0x840) - arg0) >> 3) * 8, D_8006FB14, 1);
    D_801F9980 += 1;
}
