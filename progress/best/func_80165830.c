extern s32 func_800DE41C();
extern s32 func_8013E364(void);
extern void func_8013E49C(s32);
extern int D_8011F2F0;
extern int D_8011F350;
extern int D_8018D6C0;
extern int D_8018D6C4;
extern int D_8018D6C8;
extern int D_8018D6CC;
extern int D_8018D6D4;
extern int D_80239A20;
extern int func_80165BDC;
extern int func_8016608C;
extern int func_801666E8;

void func_80165830(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_a0;
    char *temp_s2;
    int *var_v0;

    temp_s0 = *(s32 *)((s8 *)arg0 + 0x898);
    if (temp_s0 == 1 && !(*(u16 *)((s8 *)arg0 + 0x560) & 0xF)) {
        temp_v0 = func_8013E364();
        if ((temp_v0 & 0xFFFF) != 0xFFFF) {
            if ((arg1 & 0xFFFF) == 0) {
                var_v0 = &func_80165BDC;
            } else if ((arg1 & 0xFFFF) == temp_s0) {
                var_v0 = &func_8016608C;
            } else {
                func_8013E49C(temp_v0 & 0xFFFF);
                return;
            }
            temp_v0_3 = func_800DE41C(0, 0U, 3, 0, var_v0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0);
            if ((u32)((temp_v0_3 + 2) & 0xFFFF) < 2U) {
                func_8013E49C(temp_v0 & 0xFFFF);
                return;
            }
            temp_a0 = (temp_v0 & 0xFFFF) * 0x7C;
            *(float *)((char *)&D_8018D6C8 + temp_a0) = 10.0f;
            *(float *)((char *)&D_8018D6CC + temp_a0) = 270.0f;
            *(s32 *)((char *)&D_8018D6C0 + temp_a0) = *(u16 *)((s8 *)arg0 + 2);
            *(void **)((char *)&D_8018D6C4 + temp_a0) = arg0;
            *(s32 *)((char *)&D_8018D6D4 + temp_a0) = 0xFF;
            *(s8 *)((s8 *)arg0 + 0x8D0) = 0xF0;
            *(s32 *)((char *)&D_8011F350 + (temp_v0_3 & 0xFFFF) * 0x64) = (s32)((char *)&D_8018D6C0 + temp_a0);
            temp_s2 = (char *)&D_8011F2F0 + *(u16 *)((s8 *)arg0 + 2) * 0x64;
            temp_v0_4 = *(s16 *)((s8 *)arg0 + 0x55E);
            if (temp_v0_4 > 0) {
                *(s16 *)((s8 *)arg0 + 0x55E) = (s16)(temp_v0_4 - 1);
            }
            switch (arg1 & 0xFFFF) {
            case 0:
                func_800DE41C(0, *(u8 *)((s8 *)arg0 + 3), 1, 0);
                break;
            case 1:
                func_800DE41C(0, *(u8 *)((s8 *)arg0 + 3), 1, 0, (void *)0x5B, 0xFF, &D_80239A20, &func_801666E8, 0, *(u32 *)(temp_s2 + 0x18), *(u32 *)(temp_s2 + 0x1C), *(u32 *)(temp_s2 + 0x20), 0, 0, 0, 0.1f, 0.05f, 0.1f);
                func_800DE41C(0, *(u8 *)((s8 *)arg0 + 3), 1, 0);
                break;
            }
        }
    }
}
