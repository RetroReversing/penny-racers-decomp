typedef struct { s16 v; s16 pad[7]; } Rec;
f32 __sinf(f32);
extern u16 waveAngleDeg;
extern u16 waveAmplitude;
extern f64 kPi;
extern f64 kHalfTurnDeg;
extern Rec D_802E90F4[];
extern Rec D_802E8D54[];
extern Rec D_802E8DF4[];
extern Rec D_802E8E94[];
extern Rec D_802E93A4[];
extern Rec D_802E93F4[];
extern Rec D_802E9474[];
extern Rec D_802E9214[];
extern Rec D_802E9274[];

/* Advances the wave angle by 3 degrees (wrapping at 361) and writes a high and low sine height into each wave table entry. */
void animateWaveHeights(void)
{
    s16 prevAngle;
    s32 i;
    f64 piConst;
    f64 halfTurnConst;
    f64 angle;
    f32 highHeight;
    f32 lowHeight;

    prevAngle = waveAngleDeg;
    waveAngleDeg = prevAngle + 3;
    if ((u16) waveAngleDeg >= 0x169U) {
        waveAngleDeg = prevAngle - 0x165;
    }
    angle = (f64) waveAngleDeg;
    piConst = kPi;
    angle = angle * piConst;
    halfTurnConst = kHalfTurnDeg;
    angle = angle / halfTurnConst;
    highHeight = (__sinf((f32) angle) * (f32) waveAmplitude) + 400.0f;
    angle = (f64) waveAngleDeg;
    angle = angle * piConst;
    angle = angle / halfTurnConst;
    lowHeight = (__sinf((f32) angle) * (f32) waveAmplitude) + 200.0f;

    D_802E90F4[0].v = (s16) (s32) highHeight;
    D_802E90F4[1].v = (s16) (s32) highHeight;
    D_802E90F4[3].v = (s16) (s32) highHeight;
    D_802E90F4[2].v = (s16) (s32) lowHeight;
    D_802E90F4[4].v = (s16) (s32) lowHeight;
    D_802E90F4[5].v = (s16) (s32) lowHeight;

    for (i = 0; i < 6; i++) {
        D_802E9214[i].v = (s16) (s32) lowHeight;
        D_802E9274[i].v = (s16) (s32) highHeight;
    }

    D_802E8D54[0].v = (s16) (s32) highHeight;
    D_802E8D54[2].v = (s16) (s32) lowHeight;
    D_802E8D54[1].v = (s16) (s32) highHeight;
    D_802E8D54[4].v = (s16) (s32) lowHeight;

    D_802E8DF4[0].v = (s16) (s32) lowHeight;
    D_802E8DF4[1].v = (s16) (s32) lowHeight;
    D_802E8DF4[2].v = (s16) (s32) lowHeight;
    D_802E8DF4[3].v = (s16) (s32) lowHeight;
    D_802E8DF4[4].v = (s16) (s32) lowHeight;
    D_802E8DF4[6].v = (s16) (s32) lowHeight;

    D_802E8E94[0].v = (s16) (s32) highHeight;
    D_802E8E94[1].v = (s16) (s32) highHeight;
    D_802E8E94[2].v = (s16) (s32) highHeight;
    D_802E8E94[3].v = (s16) (s32) highHeight;
    D_802E8E94[4].v = (s16) (s32) highHeight;
    D_802E8E94[5].v = (s16) (s32) highHeight;

    D_802E93A4[0].v = (s16) (s32) lowHeight;
    D_802E93A4[-2].v = (s16) (s32) highHeight;
    D_802E93A4[-1].v = (s16) (s32) lowHeight;
    D_802E93A4[-4].v = (s16) (s32) highHeight;

    D_802E93F4[0].v = (s16) (s32) lowHeight;
    D_802E93F4[2].v = (s16) (s32) lowHeight;
    D_802E93F4[4].v = (s16) (s32) lowHeight;
    D_802E93F4[5].v = (s16) (s32) lowHeight;
    D_802E93F4[6].v = (s16) (s32) lowHeight;
    D_802E93F4[7].v = (s16) (s32) lowHeight;

    D_802E9474[0].v = (s16) (s32) highHeight;
    D_802E9474[1].v = (s16) (s32) highHeight;
    D_802E9474[2].v = (s16) (s32) highHeight;
    D_802E9474[3].v = (s16) (s32) highHeight;
    D_802E9474[4].v = (s16) (s32) highHeight;
    D_802E9474[6].v = (s16) (s32) highHeight;
}
