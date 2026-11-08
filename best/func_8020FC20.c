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

M2C_UNK func_8012AD20(u16, void *, s32, u8);        /* extern */
s32 func_80149F40(u8, M2C_UNK, s8);                 /* extern */
M2C_UNK func_80230960(void *);                      /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F340;
extern f64 D_8021DD18;
extern u16 D_8021E120;
extern M2C_UNK D_8021E231;
extern M2C_UNK D_8021E2DB;
extern M2C_UNK D_8021E2FD;
extern M2C_UNK D_8021E31F;
extern M2C_UNK D_8021EEA7;
extern M2C_UNK D_8021F048;
extern M2C_UNK D_8021F0A0;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_80237DC0;

void func_8020FC20(s32 arg0) {
    f32 temp_fv1;
    s32 temp_a0;
    s8 temp_a2;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s2;

    temp_s2 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s2, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s2, u16 *, 2) = (u16) (M2C_FIELD(temp_s2, u16 *, 2) | 0x8000);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x10U;
        return;
    case 16:
        temp_s0 = (M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x8F0) + &D_8022A770;
        M2C_FIELD(temp_s0, u16 *, 2) = (u16) D_8021E120;
        M2C_FIELD(temp_s0, s16 *, 0x534) = (s16) (func_80149F40(M2C_FIELD(&D_8021EEA7, u8 *, 0), 5, *(&D_8021E2DB + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 6)))) & 0xFF);
        M2C_FIELD(temp_s0, s16 *, 0x538) = (s16) (func_80149F40(M2C_FIELD(&D_8021EEA7, u8 *, 0), 6, *(&D_8021E2FD + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 7)))) & 0xFF);
        M2C_FIELD(temp_s0, s16 *, 0x53A) = (s16) (func_80149F40(M2C_FIELD(&D_8021EEA7, u8 *, 0), 7, *(&D_8021E31F + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 8)))) & 0xFF);
        M2C_FIELD(temp_s0, s16 *, 0x230) = (s16) (s8) *(&D_8021E231 + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 1)));
        func_80230960(temp_s0);
        temp_a2 = *(&D_8021E231 + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 1)));
        temp_a0 = D_8021E120 * 0x64;
        M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + temp_a0) * 0x64)), void **, 4) = (void *) ((temp_a2 * 0xC) + &D_80237DC0);
        func_8012AD20(*(&D_8011F304 + temp_a0), (M2C_FIELD(&D_8021EEA7, u8 *, 0) << 5) + &D_8021F0A0, temp_a2 & 0xFF, *((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0xE) + &D_8021F048 + temp_a2));
        if (*M2C_FIELD(temp_s2, u8 **, 0x50) == 0) {
            temp_fv1 = (f32) ((f64) M2C_FIELD(temp_s2, f32 *, 0x28) - D_8021DD18);
            M2C_FIELD(temp_s2, f32 *, 0x28) = temp_fv1;
            if (temp_fv1 < 0.0f) {
                M2C_FIELD(temp_s2, f32 *, 0x28) = (f32) (temp_fv1 + 360.0f);
            }
        }
        return;
    }
}
