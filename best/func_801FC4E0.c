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
M2C_UNK func_801CA468(void **, u16);                /* extern */
M2C_UNK func_801CB74C(void **, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_801FFD30;
extern s32 D_801FFD40;
extern M2C_UNK D_802038C4;
extern u16 D_80203AC8;
extern M2C_UNK D_80220ED8;

void func_801FC4E0(void **arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_3;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_v1_2;

    if (D_80203AC8 != 0) {
        temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(&D_802038C4, u16 *, 2) = 0U;
            M2C_FIELD(&D_802038C4, s16 *, 0) = 0;
            *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
            return;
        case 1:
            temp_v0 = M2C_FIELD(&D_802038C4, s16 *, 0) + 5;
            if (M2C_FIELD(&D_802038C4, s16 *, 0) < 0xFF) {
                M2C_FIELD(&D_802038C4, s16 *, 0) = temp_v0;
                if (temp_v0 >= 0x100) {
                    M2C_FIELD(&D_802038C4, s16 *, 0) = 0xFF;
                }
            } else {
                *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 2;
            }
block_21:
            func_801CA140(arg0);
            temp_v1_2 = *arg0;
            *arg0 = temp_v1_2 + 8;
            M2C_FIELD(temp_v1_2, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_80220ED8;
            func_801CA468(arg0, (u16) M2C_FIELD(&D_802038C4, s16 *, 0));
            func_801CB74C(arg0, 0x64, 0xA0, 8, &D_801FFD30, D_801FFD40);
            func_801CB74C(arg0, 0x64, 0x6E, 8, &D_801FFD30, (&D_801FFD40)[M2C_FIELD(&D_8006FAF0, u16 *, 0x20)]);
            break;
        case 2:
            temp_v0_2 = M2C_FIELD(&D_802038C4, u16 *, 2) + 1;
            M2C_FIELD(&D_802038C4, u16 *, 2) = temp_v0_2;
            if ((s16) temp_v0_2 >= 0x33) {
                *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 3;
            }
            goto block_21;
        case 3:
            if (M2C_FIELD(&D_802038C4, s16 *, 0) > 0) {
                temp_v0_3 = M2C_FIELD(&D_802038C4, s16 *, 0) - 5;
                M2C_FIELD(&D_802038C4, s16 *, 0) = temp_v0_3;
                if (temp_v0_3 & 0x8000) {
                    M2C_FIELD(&D_802038C4, s16 *, 0) = 0;
                }
            } else {
                D_80203AC8 = 0;
                *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 0;
            }
            goto block_21;
        }
    }
}
