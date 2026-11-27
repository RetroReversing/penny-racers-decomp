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

/* Appends the perspective and look-at matrix commands for the current view's camera to the display list, using a fixed 50-degree field of view. */ void appendViewCameraDLFixedFov(void **dlPtr)
{
    u16 perspMtx;
    s32 *dl;
    s32 cam;
    s32 matOff;
    s32 viewOff;

    viewOff = viewIndex * 0x28;
    cam = *(s16 *)(sRowBoard + 0x210A + viewOff);
    if (*(s16 *)(sRowBoard + 0x2108 + viewOff) == 2) {
        guPerspective((cam << 6) + D_8011F060, &perspMtx, 50.0f, 2.6666667f, 10.0f, 5000.0f, 1.0f);
    } else {
        guPerspective((cam << 6) + D_8011F060, &perspMtx, 50.0f, 1.3333334f, 10.0f, 5000.0f, 1.0f);
    }
    matOff = cam << 6;
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0xBC00000E;
    dl[1] = perspMtx;
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0x01030040;
    dl[1] = matOff + D_8011F060;
    matOff += 0x300;
    guLookAt(matOff + D_8011F060, D_80221080[cam].a, D_80221080[cam].b, D_80221080[cam].c,
             D_80221080[cam].d, D_80221080[cam].e, D_80221080[cam].f, D_80221080[cam].g,
             D_80221080[cam].h, D_80221080[cam].i);
    dl = *dlPtr;
    *dlPtr = dl + 2;
    dl[0] = 0x01010040;
    dl[1] = matOff + D_8011F060;
}
