void func_801CA140(void);
void func_801CA468(void **arg0, u8 arg1);
void func_801CC150(void **arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, void *a15, void *a16);
void func_801CCE7C(void **arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, void *a15, void *a16);

extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern f32 D_8011F308[];
extern f32 D_8011F30C[];
extern f32 D_8011F310[];
extern u8 D_80126FF6;
extern u16 D_80167F58[];
extern u16 D_80167F60[];
extern u8 D_8016D8F8[];
extern u8 D_8016E8C0[];
extern u8 D_80174058[];
extern u8 D_80174538[];
extern u8 D_80174560[];
extern u8 D_80174A40[];
extern u8 D_80220ED8[];
extern s16 D_800DD2C0;

void func_80134C68(void **arg0, s32 arg1) {
    s16 *cnt;
    s32 a1;
    s32 a2;
    s32 t;
    u32 *dl;
    void *p1;
    void *p2;

    cnt = &D_800DD2C0;
    if (D_80126FF6 == *cnt - 1) {
        dl = *arg0;
        *arg0 = dl + 2;
        dl[0] = 0x06000000;
        dl[1] = (u32)D_80220ED8;
        func_801CA140();
        func_801CA468(arg0, D_8011F2FC[((u16)arg1) * 0x64]);
        if (*cnt == 1) {
            a1 = 0x70;
            a2 = 0x63;
        } else if (D_800DD2C0 == 2) {
            a1 = 0x70;
            a2 = D_8011F2F0[(arg1 & 0xFFFF) * 0x64] * 0x6C + 0x32;
        } else {
            t = D_8011F2F0[(arg1 & 0xFFFF) * 0x64];
            a1 = D_80167F58[t];
            a2 = D_80167F60[t];
        }
        switch (((u32)D_8011F310[(arg1 & 0xFFFF) * 25]) & 0xFFFF) {
        case 0:
            a1 = (s32)((f32)a1 + D_8011F308[(arg1 & 0xFFFF) * 25] + 8.0f) << 16;
            a2 = (s32)((f32)a2 + D_8011F30C[(arg1 & 0xFFFF) * 25] + 5.0f) << 16;
            p1 = D_80174560;
            p2 = D_80174A40;
            goto common;
        case 1:
            a1 = (s32)((f32)a1 + D_8011F308[(arg1 & 0xFFFF) * 25] + 8.0f) << 16;
            a2 = (s32)((f32)a2 + D_8011F30C[(arg1 & 0xFFFF) * 25] + 5.0f) << 16;
            p1 = D_80174058;
            p2 = D_80174538;
        common:
            func_801CC150(arg0, a1 >> 16, a2 >> 16, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 0x13F, 0xEF, p1, p2);
            break;
        case 0xFF:
            func_801CCE7C(arg0, (s32)((f32)a1 + D_8011F308[(arg1 & 0xFFFF) * 25]) << 16 >> 16, (s32)((f32)a2 + D_8011F30C[(arg1 & 0xFFFF) * 25]) << 16 >> 16, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, D_8016D8F8, D_8016E8C0);
            break;
        }
    }
}
