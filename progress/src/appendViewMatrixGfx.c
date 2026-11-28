s32 guLookAt(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, f32, f32, f32, f32);
extern u8 sRowBoard[];
extern s32 D_8011F060;
extern u8 viewIndex;
extern s32 D_80220E40;

/* Builds the projection and view matrices for the current view and appends the matrix-load display commands. */ void appendViewMatrixGfx(void **gfxPtr)
{
    u16 projMatrixId;
    s32 *dl;
    s32 viewSlot;
    s32 matrixOffset;
    s32 viewOffset;

    viewOffset = viewIndex * 0x28;
    viewSlot = *(s16 *)(sRowBoard + 0x210A + viewOffset);
    if (*(s16 *)(sRowBoard + 0x2108 + viewOffset) == 2) {
        guPerspective((viewSlot << 6) + D_8011F060, &projMatrixId, D_80220E40, 2.6666667f, 10.0f, 5000.0f, 1.0f);
    } else {
        guPerspective((viewSlot << 6) + D_8011F060, &projMatrixId, D_80220E40, 1.3333334f, 10.0f, 5000.0f, 1.0f);
    }
    matrixOffset = viewSlot << 6;
    dl = *gfxPtr;
    *gfxPtr = dl + 2;
    dl[0] = 0xBC00000E;
    dl[1] = projMatrixId;
    dl = *gfxPtr;
    *gfxPtr = dl + 2;
    dl[0] = 0x01030040;
    dl[1] = matrixOffset + D_8011F060;
    matrixOffset += 0x300;
    guLookAt(matrixOffset + D_8011F060, 0.0f, 0.0f, 50.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    dl = *gfxPtr;
    *gfxPtr = dl + 2;
    dl[0] = 0x01010040;
    dl[1] = matrixOffset + D_8011F060;
}
