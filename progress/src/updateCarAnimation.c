void func_801D74F4(u16, s32, u16, f32);
void func_801D754C(u16, s32);
f32 sqrtf(f32);
typedef struct { char pad0[4]; u16 unk4; u16 unk6; char pad8[0x626]; s16 unk62E; char pad630[4]; f32 unk634; char pad638[0x13C]; f32 unk774; char pad778[0x48]; f32 unk7C0; char pad7C4[4]; f32 unk7C8; u8 unk7CC; char pad7CD[0x93]; u8 unk860; char pad861[3]; f32 unk864; } Obj;

/* Chooses the car's animation from its state (or -1/-2/-3 for the steering-spin variants), starts it when it changes, and recomputes the car's speed from its velocity. */
void updateCarAnimation(Obj *obj)
{
    s16 anim;

    switch (obj->unk7CC) {
    case 16:
        anim = 0x17;
        break;
    case 11: case 12: case 19: case 32: case 33: case 34: case 35: case 38: case 39: case 42: case 43:
        anim = -2;
        break;
    case 13: case 36: case 37:
        anim = (obj->unk864 < 0.97f && anim < 0) ? -3 : 0x18;
        break;
    case 17: case 40: case 41:
        anim = 0x16;
        break;
    case 18: case 20:
        anim = 0x15;
        break;
    case 15: case 44: case 45:
        anim = 0x13;
        obj->unk6 |= 8;
        break;
    case 10:
    default:
        anim = -1;
        break;
    }

    if (obj->unk860 != 0 && obj->unk774 > 0.0f) {
        if (obj->unk864 < 0.97f && anim < 0) {
            if (anim < 0) switch (anim) {
            case -3:
                if (obj->unk62E != 0x12)
                    func_801D74F4(obj->unk4, 1, 0x12, 1.0f);
                break;
            case -2:
                if (obj->unk62E != 0x11)
                    func_801D74F4(obj->unk4, 1, 0x11, 1.0f);
                break;
            case -1:
                if (obj->unk62E != 0x10)
                    func_801D74F4(obj->unk4, 1, 0x10, 1.0f);
                break;
            }
        } else if (anim < 0 || obj->unk774 < 10.0f) {
            if (obj->unk62E != -1)
                func_801D754C(obj->unk4, 1);
        } else {
            if (obj->unk62E != anim) {
                if (anim == 0x16) {
                    if (obj->unk62E != -1)
                        func_801D754C(obj->unk4, 1);
                } else {
                    func_801D74F4(obj->unk4, 1, anim, 1.0f);
                }
            }
        }
    } else if (obj->unk62E != -1) {
        func_801D754C(obj->unk4, 1);
    }
    obj->unk634 = 1.0f;
    obj->unk774 = sqrtf(obj->unk7C0 * obj->unk7C0 + obj->unk7C8 * obj->unk7C8) * 20.0f;
}
