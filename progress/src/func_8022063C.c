typedef struct {
    s32 a;
    s32 b;
    s32 c;
    f32 d;
    f32 e;
    f32 f;
    f32 g;
    f32 h;
    f32 i;
} LookAt;

s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, f32, f32, f32, f32, f32);
extern u8 D_800DB1B8[];
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern LookAt D_80221080[];

void func_8022063C(void **arg0)
{
    u16 sp28;
    s32 *dl;
    s32 s2;
    s32 s0;
    s32 off;

    off = D_80126FF6 * 0x28;
    s2 = *(s16 *)(D_800DB1B8 + 0x210E + off);
    s0 = s2 << 6;
    guPerspective(s0 + D_8011F060, &sp28, 30.0f,
                  (f32) *(s16 *)(D_800DB1B8 + 0x2114 + off) / (f32) *(s16 *)(D_800DB1B8 + 0x2116 + off),
                  10.0f, 5000.0f, 1.0f);
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0xBC00000E;
    dl[1] = sp28;
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x01030040;
    dl[1] = s0 + D_8011F060;
    s0 += 0x300;
    {
        guLookAt(s0 + D_8011F060, D_80221080[s2].a, D_80221080[s2].b, D_80221080[s2].c,
                 D_80221080[s2].d, D_80221080[s2].e, D_80221080[s2].f, D_80221080[s2].g,
                 D_80221080[s2].h, D_80221080[s2].i);
    }
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x01010040;
    s0 += D_8011F060;
    dl[1] = s0;
}

