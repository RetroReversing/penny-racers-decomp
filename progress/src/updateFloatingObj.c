extern u8 D_8011F2F0[];
extern u8 D_80190CB0;
extern f32 D_8021CA4C[];
extern u8 D_8021CA44[];
f32 __sinf(f32);
s32 nextRandom();

/* Per-frame update for one floating object: random start pose on first call, then drifts, bobs and spins until it is marked done. */ void updateFloatingObj(s32 objId) {
    s32 idx = objId & 0xFFFF;
    u8 *obj = D_8011F2F0 + idx * 100;
    f32 drift;
    f32 bobPhase;
    f32 spin;

    obj[0] += 1;
    switch (*(u16 *)(obj + 0x3E)) {
    case 0:
        *(f32 *)(obj + 0x18) = D_8021CA4C[nextRandom(idx) & 7];
        *(f32 *)(obj + 0x4C) = (f32)D_8021CA44[nextRandom() & 7];
        *(u16 *)(obj + 0x3E) = 1;
        return;
    case 1:
        drift = *(f32 *)(obj + 0x1C);
        if (drift > -7.0f && D_80190CB0 == 0) {
            *(f32 *)(obj + 0x1C) = drift - 0.04f;
            if (!(obj[0] & 7)) {
                if (!(nextRandom() & 1)) {
                    *(f32 *)(obj + 0x48) = -0.01f;
                } else {
                    *(f32 *)(obj + 0x48) = 0.01f;
                }
            }
            if (*(f32 *)(obj + 0x44) > 0.1f) {
                *(f32 *)(obj + 0x48) = -0.01f;
            }
            if (*(f32 *)(obj + 0x44) < -0.1f) {
                *(f32 *)(obj + 0x48) = 0.01f;
            }
            bobPhase = *(f32 *)(obj + 0x44) + *(f32 *)(obj + 0x48);
            *(f32 *)(obj + 0x44) = bobPhase;
            *(f32 *)(obj + 0x18) = __sinf(bobPhase) + *(f32 *)(obj + 0x18);
            spin = *(f32 *)(obj + 0x28) + 4.0f;
            *(f32 *)(obj + 0x28) = spin;
            if (spin > 360.0f) {
                *(f32 *)(obj + 0x28) = spin - 360.0f;
            }
            return;
        } else {
            obj[0xD] = 2;
            return;
        }
    }
}
