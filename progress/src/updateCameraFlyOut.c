typedef struct { u8 pad0[8]; f32 unk8; u8 padC[0xA]; u8 unk16; u8 pad17[0x59]; f32 unk70; u8 pad74[2]; u16 unk76; } Ctl;
typedef struct { u8 pad0[0xC]; u8 unkC; u8 unkD; u8 padE[0x1A]; f32 unk28; u8 pad2C[4]; f32 unk30; u8 pad34[0xA]; u16 unk3E; u8 pad40[0x20]; Ctl *ctl; } Cam;
extern Cam D_8011F2F0[];
void func_8013EC48(s32, f32);

/* Advances one camera's fly-out: pulls back from the target, then flips to phase 2 and sets a random flash color. */ void updateCameraFlyOut(u16 arg0)
{
    Cam *cam = &D_8011F2F0[arg0];
    Ctl *ctl = cam->ctl;

    cam->unk28 -= 10.0f;
    switch (D_8011F2F0[arg0].unk3E) {
    case 0:
        func_8013EC48(arg0, cam->unk30 + (ctl->unk8 * 12.0f - cam->unk30) * 0.3f);
        ctl->unk70 = cam->unk30 * 15.0f;
        func_8013EDFC(arg0, ctl);
        if (ctl->unk8 * 9.8f < cam->unk30) {
            D_8011F2F0[arg0].unk3E = 1;
        }
        break;
    case 1:
        func_8013EC48(arg0, cam->unk30 + (ctl->unk8 * 12.0f - cam->unk30) * 0.3f);
        ctl->unk70 = cam->unk30 * 15.0f;
        cam->unkC -= 4;
        if (cam->unkC < 5) {
            func_8013E49C(ctl->unk76);
            D_8011F2F0[arg0].unkD = 2;
        }
        break;
    }
    switch (ctl->unk16) {
        case 0:
            func_8013EA18((u8 *) ctl, 0xFF, (nextRandom() & 0xF) + 0xB4, 0);
            break;
        case 1:
            func_8013EA18((u8 *) ctl, 0xFF, 0, (nextRandom() & 0xF) + 0xB4);
            break;
        case 2:
            func_8013EA18((u8 *) ctl, 0, (nextRandom() & 0xF) + 0xB4, 0xFF);
            break;
        case 3:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, 0, 0xFF);
            break;
        case 4:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, 0xFF, 0);
            break;
        case 5:
            func_8013EA18((u8 *) ctl, 0, 0xFF, (nextRandom() & 0xF) + 0xB4);
            break;
        case 6:
            func_8013EA18((u8 *) ctl, 0xFF, 0xFF, (nextRandom() & 0xF) + 0xB4);
            break;
        case 7:
            func_8013EA18((u8 *) ctl, 0xFF, (nextRandom() & 0xF) + 0xB4, 0xFF);
            break;
        case 8:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, 0xFF, 0xFF);
            break;
        case 9:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, (nextRandom() & 0xF) + 0xB4, 0xFF);
            break;
        case 10:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, 0xFF, (nextRandom() & 0xF) + 0xB4);
            break;
        case 11:
            func_8013EA18((u8 *) ctl, 0xFF, (nextRandom() & 0xF) + 0xB4, (nextRandom() & 0xF) + 0xB4);
            break;
        case 12:
            func_8013EA18((u8 *) ctl, (nextRandom() & 0xF) + 0xB4, (nextRandom() & 0xF) + 0xB4, (nextRandom() & 0xF) + 0xB4);
            break;
        case 0xD ... 0xFF:
            func_8013EA18((u8 *) ctl, nextRandom() & 0xFF, nextRandom() & 0xFF, nextRandom() & 0xFF);
            break;
    }
}
