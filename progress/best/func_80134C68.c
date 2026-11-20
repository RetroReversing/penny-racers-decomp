extern u8 D_800DB1B8[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_80126FF6;
extern u8 D_80167F58[];
extern u8 D_80167F60[];
extern u8 D_8016D8F8[];
extern u8 D_8016E8C0[];
extern u8 D_80174058[];
extern u8 D_80174538[];
extern u8 D_80174560[];
extern u8 D_80174A40[];
extern u8 D_80220ED8[];

void func_801CA140(void);
void func_801CA468(void **arg0, u8 arg1);
void func_801CC150(void **arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, void *arg15, void *arg16);
void func_801CCE7C(void **arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, void *arg15, void *arg16);

void func_80134C68(void **arg0, s16 arg1) {
    u8 *__base_D_800DB1B8;
    u32 *p;
    s32 a1;
    s32 a2;
    s32 idx;
    u32 sel;
    s32 i;

    __base_D_800DB1B8 = D_800DB1B8;
    if (D_80126FF6 == *(s16 *)(__base_D_800DB1B8 + 0x2108) - 1) {
        p = *arg0;
        *arg0 = p + 2;
        p[0] = 0x06000000;
        p[1] = (u32)D_80220ED8;
        func_801CA140();
        func_801CA468(arg0, D_8011F2FC[(arg1 & 0xFFFF) * 0x64]);
        if (*(s16 *)(__base_D_800DB1B8 + 0x2108) == 1) {
            a1 = 0x70;
            a2 = 0x63;
        } else if (*(s16 *)(__base_D_800DB1B8 + 0x2108) == 2) {
            a1 = 0x70;
            a2 = D_8011F2F0[(arg1 & 0xFFFF) * 0x64] * 0x6C + 0x32;
        } else {
            i = D_8011F2F0[(arg1 & 0xFFFF) * 0x64] * 2;
            a1 = *(u16 *)(D_80167F58 + i);
            a2 = *(u16 *)(D_80167F60 + i);
        }
        sel = (u32)*(f32 *)(D_8011F310 + (arg1 & 0xFFFF) * 0x64) & 0xFFFF;
        switch (sel) {
        case 0:
            idx = (arg1 & 0xFFFF) * 0x64;
            a1 = (s32)((f32)a1 + *(f32 *)(D_8011F308 + idx) + 8.0f);
            a2 = (s32)((f32)a2 + *(f32 *)(D_8011F30C + idx) + 5.0f);
            func_801CC150(arg0, a1, a2, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 0x13F, 0xEF, D_80174560, D_80174A40);
            break;
        case 0xFF:
            idx = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s32)((f32)a1 + *(f32 *)(D_8011F308 + idx)), (s32)((f32)a2 + *(f32 *)(D_8011F30C + idx)), 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, D_8016D8F8, D_8016E8C0);
            break;
        case 1:
            idx = (arg1 & 0xFFFF) * 0x64;
            a1 = (s32)((f32)a1 + *(f32 *)(D_8011F308 + idx) + 8.0f);
            a2 = (s32)((f32)a2 + *(f32 *)(D_8011F30C + idx) + 5.0f);
            func_801CC150(arg0, a1, a2, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 0x13F, 0xEF, D_80174058, D_80174538);
            break;
        }
    }
}
