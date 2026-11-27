typedef struct { u8 pad0[4]; u16 flags; u8 pad6[5]; u8 unkB; u8 padC[0xC]; f32 x; f32 y; f32 z; u8 pad24[0x1B]; u8 unk3F; u8 pad40[0x24]; } Obj;
typedef struct { s32 unk0; u8 pad[0x6C]; } Slot;
typedef struct { u8 pad0; u8 unk1; } Hdr;
extern Obj D_8011F2F0[];
extern Slot D_801E9990[];
extern Hdr *D_801C7AB0;
extern s8 D_801C6BB0[];
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7D18;
extern u16 D_801C746A;
extern u16 D_801C5EA4;
void func_801B3F08();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, void (*)(), f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_8019E734(u16);
void func_8019F7C0(u16);
void func_8014B854(s32);

u8 func_80192B34(u16 arg0) {
    u8 state;

    state = D_8011F2F0[D_801C7074].unk3F;
    func_8019E734(arg0);
    func_8019F7C0(arg0);
    D_8011F2F0[D_801C7D18].x = D_801C7068 * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].y = 0;
    D_8011F2F0[D_801C7D18].z = D_801C6BB9 * 400.0f * 0.5f;
    if (D_801E9990[arg0].unk0 == 1) {
        if (D_801C7AB0->unk1 == 5) {
            if (D_801C7068 != 0 || (D_801C6BB9 != 0 && D_801C6BB9 != 0x17)) {
            } else {
                goto done;
            }
            if (D_801C7068 == 0x17) {
                if (D_801C6BB9 == 0) goto done;
                if (D_801C6BB9 == 0x17) goto done;
            }
        }
        D_801C6BB0[0] = D_801C7068;
        D_801C6BB0[1] = D_801C6BB9;
        *(u16 *) &D_801C6BB0[4] = D_801C6BB0[0] + D_801C6BB0[1] * 24;
        D_801C746A = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, 0, 0, func_801B3F08,
                                   D_801C6BB0[0] * 400.0f * 0.5f, 0, D_801C6BB0[1] * 400.0f * 0.5f,
                                   0, 0, 0, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[D_801C746A].flags |= 0x20;
        D_8011F2F0[D_801C746A].unkB = 0xC;
        state = 6;
        D_801C5EA4 = 0;
        func_8014B854(0x3D);
    }
done:
    return state;
}
