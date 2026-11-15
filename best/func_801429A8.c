extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern s16 func_8012913C(u16, s32, s32, s32);
extern s32 func_80129C1C(void *, s32, s32, s32, s32, f32, s32);
extern s32 func_8013E364(void);
extern void func_8013E818(s32, s32, s32, s32, s32, s32, s32);
extern void func_80142C6C(void);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern s32 D_801688C4;
extern s32 D_801688C8;
extern s32 D_801688CC;
extern s32 D_801688D0;
extern s32 D_801688D4;
extern s32 D_801688D8;
extern s32 D_801688DC;
extern s32 D_801688DE;
extern s32 D_801688E4;
extern s32 D_8016891C;
extern s32 D_8016D658;
extern s32 D_8018D6C4;
extern s32 D_8018D730;
extern s32 D_8022A770;
extern u16 D_80233EC0;

void func_801429A8(s32 arg0) {
    s32 s2;
    s32 s1;
    s32 s0;
    s32 s3;
    s32 temp;
    s8 *p;

    s2 = 0;
    do {
        temp = func_8013E364();
        s3 = temp & 0xFFFF;
        if (s3 != 0xFFFF) {
            s1 = s2 * 0x5C;
            s0 = func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, &D_8016D658, (void *)func_80142C6C, 0,
                *(f32 *)((s8 *)&D_801688C4 + s1), *(f32 *)((s8 *)&D_801688C8 + s1), *(f32 *)((s8 *)&D_801688CC + s1),
                0, 0, 0, 1.0f, 1.0f, 1.0f);
            if ((u16)(s0 + 2) >= 2) {
                s0 &= 0xFFFF;
                p = (s8 *)&D_8011F2F0 + s0 * 0x64;
                *(s32 *)(p + 0x44) = 0;
                *(s16 *)(p + 0x40) = s2;
                *(f32 *)((s8 *)&D_801688D0 + s1) = *(f32 *)(p + 0x1C);
                *(s16 *)((s8 *)&D_801688D4 + s1) = s2 * 0x28 + 0xA;
                s2++;
                *(s16 *)((s8 *)&D_801688DC + s1) = func_8012913C(D_80233EC0,
                    *(s32 *)((s8 *)&D_801688C4 + s1), *(s32 *)((s8 *)&D_801688C8 + s1), *(s32 *)((s8 *)&D_801688CC + s1));
                *(s16 *)((s8 *)&D_801688DE + s1) = 0;
                func_80129C1C((s8 *)&D_801688D8 + s1, *(s32 *)((s8 *)&D_801688C4 + s1),
                    *(s32 *)((s8 *)&D_801688C8 + s1), *(s32 *)((s8 *)&D_801688CC + s1), 0, -300.0f, 0);
                *(f32 *)((s8 *)&D_8016891C + s1) = *(f32 *)((s8 *)&D_801688E4 + s1);
                func_8013E818(s3, s0, 0, 0, 0, 0, 0);
                *(void **)((s8 *)&D_8018D6C4 + s3 * 0x7C) = &D_8022A770;
                *(f32 *)((s8 *)&D_8018D730 + s3 * 0x7C) = 50.0f;
            } else {
                func_8013E49C(temp & 0xFFFF);
                s2++;
            }
        } else {
            s2++;
        }
    } while (s2 < 8);
    *(u8 *)((s8 *)&D_8011F2FD + (arg0 & 0xFFFF) * 0x64) = 2;
}
