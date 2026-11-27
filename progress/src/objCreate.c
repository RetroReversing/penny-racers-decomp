typedef struct {
    u8 unk0;
    u8 b1;
    u8 pad2[6];
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 padE;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    u8 pad28[0xC];
} Def;
typedef struct {
    u8 unk0;
    u8 b1;
    u8 pad2[0xE];
} SmallDef;
typedef struct {
    u8 unk0;
    u8 type;
    u16 h[4];
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u16 unkE;
    u16 prev;
    u16 next;
    u16 child;
    f32 x;
    f32 y;
    f32 z;
    f32 rx;
    f32 ry;
    f32 rz;
    f32 sx;
    f32 sy;
    f32 sz;
    u16 mtx;
    u16 unk3E;
    u16 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    void *def;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
} Obj;
typedef struct {
    u16 prev;
    u16 next;
    u8 pad4[0x304];
} Mat;
extern Obj D_8011F2F0[];
extern Mat modelTransforms[];
extern u16 D_800E1E80;
extern u16 D_800E1ED0;
extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 objListHead;

s32 objCreate(u8 arg0, u8 arg1, u8 arg2, u16 arg3, u8 arg4, u8 arg5, Def *arg6, s32 arg7, s32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15, f32 arg16, f32 arg17) {
    u16 slot;
    u16 i;
    u16 c;

    if (arg15 == 0.0) {
        arg15 = 1.0f;
    }
    if (arg16 == 0.0) {
        arg16 = 1.0f;
    }
    if (arg17 == 0.0) {
        arg17 = 1.0f;
    }
    if (arg2 != 4) {
        if (arg2 == 1) {
            if (D_80126FF0 < arg6[arg0].unk8) {
                return 0xFFFF;
            }
            if (D_800E1ED0 < arg6[arg0].unk8) {
                return 0xFFFE;
            }
        } else {
            if (D_80126FF4 == 0xFFFF) {
                return 0xFFFF;
            }
            if (arg2 != 3 && D_80126FF2 == 0xFFFF) {
                return 0xFFFE;
            }
        }
    }
    D_80126FF0--;
    slot = D_80126FF4;
    D_80126FF4 = D_8011F2F0[D_80126FF4].next;
    D_8011F2F0[D_80126FF4].prev = 0xFFFF;
    D_8011F2F0[slot].prev = objListHead;
    D_8011F2F0[slot].next = 0xFFFF;
    D_8011F2F0[slot].child = 0xFFFF;
    if (objListHead != 0xFFFF) {
        if (arg2 == 4) {
            D_8011F2F0[objListHead].child = slot;
        } else {
            D_8011F2F0[objListHead].next = slot;
        }
    }
    objListHead = slot;
    if ((arg2 != 3) | (arg8 != 0)) {
        D_800E1ED0--;
        D_8011F2F0[slot].mtx = D_80126FF2;
        D_80126FF2 = modelTransforms[D_80126FF2].next;
        modelTransforms[D_80126FF2].prev = 0xFFFF;
        modelTransforms[D_8011F2F0[slot].mtx].next = 0xFFFF;
        modelTransforms[D_8011F2F0[slot].mtx].prev = 0xFFFF;
    } else {
        D_8011F2F0[slot].mtx = 0xFFFF;
    }
    D_8011F2F0[slot].unk0 = arg1;
    D_8011F2F0[slot].type = arg2;
    for (i = 0; i < 4; i++) {
        D_8011F2F0[slot].h[i] = arg3;
    }
    D_8011F2F0[slot].unkA = arg4;
    D_8011F2F0[slot].unkC = arg5;
    D_8011F2F0[slot].unkD = 0;
    D_8011F2F0[slot].unk3E = 0;
    D_8011F2F0[slot].unk40 = 0;
    D_8011F2F0[slot].x = arg9;
    D_8011F2F0[slot].y = arg10;
    D_8011F2F0[slot].z = arg11;
    D_8011F2F0[slot].sx = arg15;
    D_8011F2F0[slot].sy = arg16;
    D_8011F2F0[slot].sz = arg17;
    D_8011F2F0[slot].rx = arg12;
    D_8011F2F0[slot].ry = arg13;
    D_8011F2F0[slot].rz = arg14;
    D_8011F2F0[slot].unk54 = arg7;
    D_8011F2F0[slot].unk58 = arg8;
    D_8011F2F0[slot].unk5C = 0;
    D_8011F2F0[slot].unk44 = 0;
    D_8011F2F0[slot].unk48 = 0;
    D_8011F2F0[slot].unk4C = 0;
    switch (arg2) {
    case 1:
        D_8011F2F0[slot].child = D_80126FF4;
        D_800E1E80 = slot;
        D_8011F2F0[slot].unkE = slot;
    case 4:
        D_8011F2F0[slot].unkB = arg6[arg0].b1;
        D_8011F2F0[slot].def = &arg6[arg0];
        c = arg6[arg0].unkC;
        if (c != 0xFFFF) {
            objCreate(c, arg1, 4, arg3, arg4, arg5, arg6, arg7, arg8, arg6[c].f10, arg6[c].f14, arg6[c].f18, arg6[c].f1C, arg6[c].f20, arg6[c].f24, 1.0f, 1.0f, 1.0f);
        }
        c = arg6[arg0].unkA;
        if (c != 0xFFFF) {
            objCreate(c, arg1, 4, arg3, arg4, arg5, arg6, arg7, arg8, arg6[c].f10, arg6[c].f14, arg6[c].f18, arg6[c].f1C, arg6[c].f20, arg6[c].f24, 1.0f, 1.0f, 1.0f);
        }
        D_8011F2F0[slot].unkE = D_800E1E80;
        break;
    case 2:
        D_8011F2F0[slot].unkB = ((SmallDef *) arg6)[arg0].b1;
        D_8011F2F0[slot].def = &((SmallDef *) arg6)[arg0];
        break;
    case 3:
        D_8011F2F0[slot].unkB = 0;
        break;
    }
    if (arg2 != 4) {
        objListHead = slot;
    }
    return slot;
}
