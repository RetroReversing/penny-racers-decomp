s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, f32, s32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E640(s32, s32, void *, s32, s32, f32, s32, s32, f32, s32, s32);
void func_801D7028(u8 *, s32, s32);
extern u8 D_8011F308;
extern u8 D_8011F30C;
extern u8 D_8011F310;
extern u8 D_8011F318;
extern u8 D_8011F320;
extern u8 D_8011F324;
extern u8 D_8011F328;
extern u8 D_8018D6C4;
extern u8 D_8018D727;
extern u8 D_8018D730;
extern u8 D_80239408;
extern u8 func_801619B4;

void func_801616C0(u8 *arg0) {
    s32 s0;
    s32 s1;
    s32 s3;
    s32 v;
    u16 fl;

    if (*(s32 *)(arg0 + 0x898) != 1) {
        return;
    }
    if (*(u16 *)(arg0 + 0x560) & 8) {
        return;
    }
    if (!((*(u16 *)(arg0 + 0x560) & 7) < 7)) {
        return;
    }
    s1 = func_8013E364();
    s0 = s1 & 0xFFFF;
    if (s0 == 0xFFFF) {
        return;
    }
    v = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_80239408, &func_801619B4, 0,
                      *(f32 *)(&D_8011F308 + *(u16 *)(arg0 + 2) * 0x64),
                      *(f32 *)(&D_8011F30C + *(u16 *)(arg0 + 2) * 0x64) + 15.0f,
                      *(f32 *)(&D_8011F310 + *(u16 *)(arg0 + 2) * 0x64),
                      0,
                      *(f32 *)(&D_8011F318 + *(u16 *)(arg0 + 2) * 0x64),
                      0,
                      *(f32 *)(&D_8011F320 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f,
                      *(f32 *)(&D_8011F324 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f,
                      *(f32 *)(&D_8011F328 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f);
    if ((u16)(v + 2) < 2) {
        func_8013E49C((s1 & 0xFFFF));
        return;
    }
    *(u16 *)(arg0 + 0x560) = (fl & 0xF8) | ((fl & 7) + 1);
    fl = *(u16 *)(arg0 + 0x560);
    s1 = v & 0xFFFF;
    do { func_8013E640(s0, s1, arg0, 0, 0, 15.0f, 0, 0, -0.1f, 0, 0x3C); } while (0);
    *(u8 *)(&D_8018D727 + s0 * 0x7C + *(u16 *)(arg0 + 4)) = 1;
    *(f32 *)(&D_8018D730 + s0 * 0x7C) = 20.0f;
    *(u8 **)(&D_8018D6C4 + s0 * 0x7C) = arg0;
    do { func_801D7028(arg0, s1, 0x2B); } while (0);
    if (*(s16 *)(arg0 + 0x55E) > 0) {
        *(s16 *)(arg0 + 0x55E) -= 1;
    }
}
