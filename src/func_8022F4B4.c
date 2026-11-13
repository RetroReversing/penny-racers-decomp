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

M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA468(s32, M2C_UNK);                /* extern */
M2C_UNK func_801CB74C(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_801CBF48(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_801D4FC0;
extern s32 D_80232830;
extern M2C_UNK D_80232B68;
extern M2C_UNK D_80232B74;
extern M2C_UNK D_80232B84;
extern M2C_UNK D_80232B98;
extern M2C_UNK D_80232BA4;
extern M2C_UNK D_80232BB4;
extern M2C_UNK D_80232BBC;
extern M2C_UNK D_80232BC4;
extern M2C_UNK D_80232BCC;
extern M2C_UNK D_80232BD4;
extern M2C_UNK D_80232BE0;
extern M2C_UNK D_80232BEC;
extern M2C_UNK D_80232BFC;
extern M2C_UNK D_80232C08;
extern u16 D_802330A0;

void func_8022F4B4(s32 arg0) {
    D_80232830 += 1;
    func_801CA140();
    func_801CA468(arg0, 0xFF);
    func_801CB74C(arg0, 0x78, 0x46, 8, &D_801D4FC0, &D_80232B68);
    func_801CBF48(arg0, 0xC8, 0x46, 8, &D_801D4FC0, 1, (s32) M2C_FIELD(&D_8006FAF0, s16 *, 0x20));
    func_801CB74C(arg0, 0x70, 0x50, 8, &D_801D4FC0, &D_80232B74);
    func_801CB74C(arg0, 0x70, 0xC8, 8, &D_801D4FC0, &D_80232B74);
    func_801CB74C(arg0, 0x18, 0x10, 8, &D_801D4FC0, &D_80232B84);
    func_801CB74C(arg0, 0x78, 0x64, 8, &D_801D4FC0, &D_80232B98);
    func_801CB74C(arg0, 0x78, 0x6E, 8, &D_801D4FC0, &D_80232BA4);
    func_801CB74C(arg0, 0x78, 0x78, 8, &D_801D4FC0, &D_80232BB4);
    func_801CB74C(arg0, 0x78, 0x82, 8, &D_801D4FC0, &D_80232BBC);
    func_801CB74C(arg0, 0x78, 0x8C, 8, &D_801D4FC0, &D_80232BC4);
    func_801CB74C(arg0, 0x78, 0x96, 8, &D_801D4FC0, &D_80232BCC);
    func_801CB74C(arg0, 0x78, 0xA0, 8, &D_801D4FC0, &D_80232BD4);
    func_801CB74C(arg0, 0x78, 0xAA, 8, &D_801D4FC0, &D_80232BE0);
    func_801CB74C(arg0, 0x78, 0xB4, 8, &D_801D4FC0, &D_80232BEC);
    func_801CB74C(arg0, 0x78, 0xBE, 8, &D_801D4FC0, &D_80232BFC);
    if (!(D_80232830 & 8)) {
        func_801CB74C(arg0, 0x5C, ((D_802330A0 * 0xA) + 0x64) & 0xFFFF, 8, &D_801D4FC0, &D_80232C08);
    }
}
