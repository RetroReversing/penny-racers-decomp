f32 __cosf(f32);
f32 __sinf(f32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
s32 func_8013E364(void);
s32 func_8013E49C(s32);
void func_8013E818(s32, s32, s32, f32, f32, f32, s32);
void func_801D7028(s32, s32);
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F318;
extern s32 D_8018D6C4;
extern s32 func_80164FC0;

void func_80164D00(void *arg0) {
    f32 temp_fs1;
    f32 temp_fs3;
    s32 temp_v0_2;
    s32 temp_v0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    u16 temp_v0_3;
    s16 temp_v0_4;

    void *temp_s2 = arg0;
    temp_s1 = *(s32 *)((s8 *)temp_s2 + 0x898);
    if (temp_s1 == 1) {
        temp_v1 = *(u16 *)((s8 *)arg0 + 0x560);
        if (((temp_v1 & 8) == 0) && ((temp_v1 & 7) < 5)) {
            temp_v0 = func_8013E364();
            temp_s0 = temp_v0 & 0xFFFF;
            if (temp_s0 != 0xFFFF) {
                temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s1, 0, (void *)&func_80164FC0, 0,
                    *(f32 *)((s8 *)&D_8011F308 + (*(u16 *)((s8 *)arg0 + 2) * 0x64)),
                    *(f32 *)((s8 *)&D_8011F30C + (*(u16 *)((s8 *)arg0 + 2) * 0x64)),
                    *(f32 *)((s8 *)&D_8011F310 + (*(u16 *)((s8 *)arg0 + 2) * 0x64)), 0, 0, 0, 0, 0, 0);
                if ((u32)((temp_v0_2 + 2) & 0xFFFF) < 2U) {
                    func_8013E49C(temp_s0);
                    return;
                }
                temp_v0_3 = *(u16 *)((s8 *)arg0 + 0x560);
                *(u16 *)((s8 *)arg0 + 0x560) = (u16)((temp_v0_3 & 0xF8) | ((temp_v0_3 & 7) + 1));
                temp_fs3 = __sinf((*(f32 *)((s8 *)&D_8011F318 + (*(u16 *)((s8 *)arg0 + 2) * 0x64)) * 3.14f) / 180.0f) * 8.0f;
                temp_fs1 = __cosf((*(f32 *)((s8 *)&D_8011F318 + (*(u16 *)((s8 *)arg0 + 2) * 0x64)) * 3.14f) / 180.0f) * 8.0f;
                temp_s1 = temp_v0_2 & 0xFFFF;
                func_801D7028(temp_s1, 0x35);
                func_8013E818(temp_s0, temp_s1, 0, (-*(f32 *)((s8 *)arg0 + 0x7C0) * 8.0f) + temp_fs3, *(f32 *)((s8 *)arg0 + 0x7C4), (-*(f32 *)((s8 *)arg0 + 0x7C8) * 8.0f) + temp_fs1, 5);
                *(void **)((s8 *)&D_8018D6C4 + (temp_s0 * 0x7C)) = arg0;
                temp_v0_4 = *(s16 *)((s8 *)arg0 + 0x55E);
                if (temp_v0_4 > 0) {
                    *(s16 *)((s8 *)arg0 + 0x55E) = (s16)(temp_v0_4 - 1);
                }
            }
        }
    }
}
