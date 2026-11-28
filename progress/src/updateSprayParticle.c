f32 waveTableLookup(s32);
f32 waveTableCos(s32);
extern u8 D_8011F2F0[];
extern f32 waveValue;

/* Moves one spray particle with the wave force and kills it once it drifts past the floor. */ void updateSprayParticle(s32 objIndex) {
    f32 wave;
    u8 *obj = D_8011F2F0 + (objIndex & 0xFFFF) * 0x64;
    wave = waveValue + 0.5f;
    *(f32 *)(obj + 0x44) = -(wave * 0.00765765f * 5.0f);
    *(f32 *)(obj + 0x4C) = -(wave * 0.9977477f * 5.0f);
    *(f32 *)(obj + 0x18) = 2.0f * *(f32 *)(obj + 0x44) + *(f32 *)(obj + 0x18);
    *(f32 *)(obj + 0x20) = 2.0f * *(f32 *)(obj + 0x4C) + *(f32 *)(obj + 0x20);
    *(u16 *)(obj + 0x40) -= 1;
    *(f32 *)(obj + 0x1C) = waveTableLookup((*(u16 *)(obj + 0x40) & 0x1F) * 8) + *(f32 *)(obj + 0x1C);
    *(u8 *)(obj + 0xC) = (u32)(waveTableCos((*(u16 *)(obj + 0x40) & 0x3F) * 4) * 127.0f + 127.0f);
    if (*(f32 *)(obj + 0x20) < -4000.0f) {
        D_8011F2F0[(objIndex & 0xFFFF) * 0x64 + 0xD] = 2;
    }
}
