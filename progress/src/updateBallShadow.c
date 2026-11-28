s32 func_80129C1C(u8 *, f32, f32, f32, s32, f32, s32);
extern u8 D_8011F2F0[];

/* Per-frame update for the shadow object linked to a ball: follows the ball, probes the ground below it and fades with height. */ void updateBallShadow(s32 shadowIndex)
{
    u8 probe[72];
    u8 *ball;
    u8 *shadow;
    u16 ballIndex;

    shadow = D_8011F2F0 + (shadowIndex & 0xFFFF) * 100;
    ballIndex = (u16) (u32) *(f32 *) (shadow + 0x44);
    ball = D_8011F2F0 + ballIndex * 100;
    *(u16 *) (probe + 4) = *(u16 *) (*(u8 **) (ball + 0x60) + 0x20);
    func_80129C1C(probe, *(f32 *) (ball + 0x18), *(f32 *) (ball + 0x1C), *(f32 *) (ball + 0x20), 0, -240.0f, 0);
    *(f32 *) (shadow + 0x18) = *(f32 *) (ball + 0x18) + 0.5f;
    *(f32 *) (shadow + 0x20) = *(f32 *) (ball + 0x20) - 0.5f;
    if (probe[1] != 0) {
        f32 fade;
        *(f32 *) (shadow + 0x1C) = *(f32 *) (probe + 0xC);
        fade = ((240.0f - (*(f32 *) (ball + 0x1C) - *(f32 *) (probe + 0xC))) / 240.0f) * 0.5f;
        *(f32 *) (shadow + 0x38) = fade;
        *(f32 *) (shadow + 0x30) = fade;
        if (probe[0] == 0x13) {
            f32 zero = 0.0f;
            *(f32 *) (shadow + 0x2C) = zero;
            *(f32 *) (shadow + 0x24) = zero;
            return;
        }
        *(f32 *) (shadow + 0x24) = -12.0f;
        *(f32 *) (shadow + 0x2C) = 12.0f;
        return;
    }
    *(f32 *) (shadow + 0x1C) = *(f32 *) (ball + 0x1C);
    *(f32 *) (shadow + 0x38) = 0.2f;
    *(f32 *) (shadow + 0x30) = 0.2f;
}
