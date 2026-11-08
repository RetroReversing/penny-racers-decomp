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
M2C_UNK func_801CA468(void **, u8);                 /* extern */
M2C_UNK func_801CC150(void **, M2C_UNK, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_80175DD0;
extern M2C_UNK D_801760B8;
extern M2C_UNK D_801760E0;
extern M2C_UNK D_80176368;
extern M2C_UNK D_801763A0;
extern M2C_UNK D_80176628;
extern M2C_UNK D_80176660;
extern M2C_UNK D_801768E8;
extern M2C_UNK D_80176910;
extern M2C_UNK D_80176B98;
extern f32 D_80189C78;
extern u8 D_80189C7C;
extern u8 D_80189DC1;
extern M2C_UNK D_8018A148;
extern M2C_UNK D_80220ED8;

void func_8015A414(void **arg0, s32 arg1) {
    s32 temp_s0;
    u16 temp_v0;
    void *temp_v1;

    if (D_80189DC1 != 0) {
        temp_s0 = (arg1 & 0xFFFF) * 0x64;
        temp_v0 = *(&D_8011F32E + temp_s0);
        if (((temp_v0 != 0) & (temp_v0 != 4)) && (*(&D_8011F32E + temp_s0) != 5)) {
            func_801CA140();
            temp_v1 = *arg0;
            *arg0 = temp_v1 + 8;
            M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
            func_801CA468(arg0, *(&D_8011F2FC + temp_s0));
            func_801CC150(arg0, 0x7F, (s16) (0x3F - (s32) D_80189C78), 0, 0, 0x40, 0x17, 0x40, 0x17, 0x40, 0x17, 0, 0, 0x13F, 0xEF, &D_80175DD0, &D_801760B8);
            func_801CA468(arg0, M2C_FIELD(&D_8018A148, u8 *, 0));
            func_801CC150(arg0, 0x78, 0x5A, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801760E0, &D_80176368);
            func_801CA468(arg0, M2C_FIELD(&D_8018A148, u8 *, 1));
            func_801CC150(arg0, 0x78, 0x70, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176660, &D_801768E8);
            func_801CA468(arg0, M2C_FIELD(&D_8018A148, u8 *, 2));
            func_801CC150(arg0, 0x78, 0x86, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801763A0, &D_80176628);
            if (D_80189C7C == 1) {
                func_801CA468(arg0, M2C_FIELD(&D_8018A148, u8 *, 3));
                func_801CC150(arg0, 0x78, 0x9C, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176910, &D_80176B98);
            }
        }
    }
}
