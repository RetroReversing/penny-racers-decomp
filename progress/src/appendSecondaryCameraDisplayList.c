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
extern u8 sRowBoard[];
extern s32 D_8011F060;
extern u8 viewIndex;
extern LookAt D_80221080[];

/* Appends the perspective and look-at display list commands for the current view to the display list at *dlPtr, with a narrower field of view and a far plane of 5000. */
void appendSecondaryCameraDisplayList(void **dlPtr)
{
    u16 perspNorm;
    s32 *dl;
    s32 camIdx;
    s32 mtxOff;
    s32 viewOff;

    viewOff = viewIndex * 0x28;
    camIdx = *(s16 *)(sRowBoard + 0x210E + viewOff);
    mtxOff = camIdx << 6;
    guPerspective(mtxOff + D_8011F060, &perspNorm, 30.0f,
                  (f32) *(s16 *)(sRowBoard + 0x2114 + viewOff) / (f32) *(s16 *)(sRowBoard + 0x2116 + viewOff),
                  10.0f, 5000.0f, 1.0f);
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0xBC00000E;
    dl[1] = perspNorm;
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0x01030040;
    dl[1] = mtxOff + D_8011F060;
    mtxOff += 0x300;
    {
        guLookAt(mtxOff + D_8011F060, D_80221080[camIdx].a, D_80221080[camIdx].b, D_80221080[camIdx].c,
                 D_80221080[camIdx].d, D_80221080[camIdx].e, D_80221080[camIdx].f, D_80221080[camIdx].g,
                 D_80221080[camIdx].h, D_80221080[camIdx].i);
    }
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0x01010040;
    mtxOff += D_8011F060;
    dl[1] = mtxOff;
}
