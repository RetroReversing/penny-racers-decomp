s32 guLookAt(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, f32, f32, f32, f32);
extern u8 sRowBoard[];
extern s32 D_8011F060;
extern u8 viewIndex;
extern s32 D_80220E40;

void func_80220A50(void **arg0)
{
    u16 sp28;
    s32 *dl;
    s32 s2;
    s32 s0;
    s32 off;

    off = viewIndex * 0x28;
    s2 = *(s16 *)(sRowBoard + 0x210A + off);
    if (*(s16 *)(sRowBoard + 0x2108 + off) == 2) {
        guPerspective((s2 << 6) + D_8011F060, &sp28, D_80220E40, 2.6666667f, 10.0f, 5000.0f, 1.0f);
    } else {
        guPerspective((s2 << 6) + D_8011F060, &sp28, D_80220E40, 1.3333334f, 10.0f, 5000.0f, 1.0f);
    }
    s0 = s2 << 6;
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0xBC00000E;
    dl[1] = sp28;
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x01030040;
    dl[1] = s0 + D_8011F060;
    s0 += 0x300;
    guLookAt(s0 + D_8011F060, 0.0f, 0.0f, 50.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x01010040;
    dl[1] = s0 + D_8011F060;
}
