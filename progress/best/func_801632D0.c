s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E49C(s32);
void func_8013E640(s32, s32, void *, s32, f32, f32, f32, f32, f32, f32, s32);
void func_801D7028(s32, s32);
void guMtxXFMF(void *, f32, f32, f32, f32 *, f32 *, f32 *);
extern u16 D_8011F2F0[];
extern u8 D_8018D6C4[];
extern u8 D_8018D727[];
extern u8 D_8018D730[];
extern u8 D_802394D8[];
extern u8 func_80163588[];

void func_801632D0(u8 *arg0) {
    f32 sp48, sp4C, sp50;
    s32 s0, s1, s3, a0;
    s32 v0, v0_2;
    u32 s5;
    u8 *s6;

    s6 = (u8 *) D_8011F2F0 + *(u16 *) (arg0 + 2) * 0x64;
    if (*(s32 *) (arg0 + 0x898) == 1 && !(*(u16 *) (arg0 + 0x560) & 8) && (s3 = 0, (*(u16 *) (arg0 + 0x560) & 7) < 7)) {
loop_4:
        s5 = *(u16 *) (arg0 + 0x560) & 7;
        if (s5 < 7 && *(s16 *) (arg0 + 0x55E) != 0) {
            v0 = func_8013E364();
            s0 = v0 & 0xFFFF;
            if (s0 != 0xFFFF) {
                guMtxXFMF(arg0 + 0x6D4, (f32) ((s3 & 0xFFFF) * 0x1E - 0xF), 1.0f, 0, &sp48, &sp4C, &sp50);
                v0_2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, D_802394D8, func_80163588, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                    *(f32 *) (s6 + 0x30), *(f32 *) (s6 + 0x34), *(f32 *) (s6 + 0x38));
                if (((v0_2 + 2) & 0xFFFF) < 2) {
                    func_8013E49C(s0);
                    return;
                }
                *(u16 *) (arg0 + 0x560) = (*(u16 *) (arg0 + 0x560) & 0xF8) | (s5 + 1);
                s1 = v0_2 & 0xFFFF;
                func_8013E640(s0, s1, arg0, 0x40, sp48, sp4C, sp50, *(f32 *) (arg0 + 0x7C0) + sp48, *(f32 *) (arg0 + 0x7C4) + sp4C, *(f32 *) (arg0 + 0x7C8) + sp50, 0xC8);
                a0 = s0 * 0x7C;
                *(u8 *) (D_8018D727 + a0 + *(u16 *) (arg0 + 4)) = 1;
                *(f32 *) (D_8018D730 + a0) = 8.0f;
                *(void **) (D_8018D6C4 + a0) = arg0;
                func_801D7028(s1, 0x2F);
                if (*(s16 *) (arg0 + 0x55E) > 0) {
                    *(s16 *) (arg0 + 0x55E) -= 1;
                }
                goto block_11;
            }
        } else {
block_11:
            s3 += 1;
            if ((s3 & 0xFFFF) < 2) {
                goto loop_4;
            }
        }
    }
}
