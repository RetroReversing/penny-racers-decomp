typedef struct {
    u16 unk0; u16 unk2; u16 unk4; u16 unk6; u16 unk8; u8 padA[0xE];
    f32 x; f32 y; f32 z; u8 pad24[0x1C];
    u16 type; u16 pad42; f32 vx; s32 unk48; f32 vz; u8 pad50[0x14];
} Effect;
typedef struct { f32 height; u8 pad4[0x58]; } EffectKind;
f32 __cosf(f32);
f32 __sinf(f32);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern Effect D_8011F2F0[];
extern EffectKind D_8016891C[];
extern u8 D_802390C8;
void func_801434CC(void);
void func_801435A8(void);

void func_80143250(u16 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 count, u16 type, u8 arg8, u8 arg9)
{
    Effect *src;
    Effect *dst;
    f32 step;
    f32 height;
    f32 angle;
    f32 s;
    f32 c;
    s32 i;
    s32 r;

    src = &D_8011F2F0[arg0];
    step = 360.0f / count;
    if (arg9 != 0) {
        height = D_8016891C[src->type].height;
    } else {
        height = src->y;
    }
    for (i = 0; i < count; i++) {
        angle = (i * step + arg5) * 0.0174f;
        s = __sinf(angle);
        c = __cosf(angle);
        r = objCreate(0, 0, 1, 0, 0x5B, arg8, &D_802390C8, func_801434CC, func_801435A8,
                          s * arg4 + src->x, height, c * arg4 + src->z, 0, 0, 0, arg3, arg3, arg3);
        if ((u16) (r + 2) >= 2) {
            dst = &D_8011F2F0[(u16) r];
            dst->unk8 = 0x40;
            dst->unk6 = 0x40;
            dst->unk4 = 0x40;
            dst->unk2 = 0x40;
            dst->vx = s * arg2;
            dst->vz = c * arg2;
            dst->unk48 = arg1;
            dst->type = type;
        }
    }
}
