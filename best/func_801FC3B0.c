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

M2C_UNK func_801CA140(void **);                     /* extern */
M2C_UNK func_801CB74C(void **, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8011F330;
extern M2C_UNK D_801D4FC0;
extern M2C_UNK D_8020352C;
extern u16 D_802038C0;
extern s16 D_802038C2;
extern M2C_UNK D_80220ED8;

void func_801FC3B0(void **arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_802038C2 = 0;
        D_802038C0 = 0;
        *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        D_802038C0 += 1;
        if ((u16) D_802038C0 < 0xAU) {
            func_801CA140(arg0);
            temp_v1_2 = *arg0;
            *arg0 = temp_v1_2 + 8;
            M2C_FIELD(temp_v1_2, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_80220ED8;
            func_801CB74C(arg0, 0x18, 0x10, 8, &D_801D4FC0, &D_8020352C);
        }
        if ((u16) D_802038C0 >= 0x15U) {
            D_802038C0 = 0;
        }
        return;
    }
}
