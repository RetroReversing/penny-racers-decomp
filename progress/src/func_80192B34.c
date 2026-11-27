typedef struct { u8 pad0[4]; u16 flags; u8 pad6[5]; u8 unkB; u8 padC[0xC]; f32 x; f32 y; f32 z; u8 pad24[0x1B]; u8 unk3F; u8 pad40[0x24]; } Obj;
typedef struct { s32 unk0; u8 pad[0x6C]; } Slot;
typedef struct { u8 pad0; u8 unk1; } Hdr;
extern Obj D_8011F2F0[];
extern Slot D_801E9990[];
extern Hdr *trackInfo;
extern s8 blockPos[];
extern s8 cursorY;
extern s8 cursorX;
extern u16 hudSlotIndex;
extern u16 D_801C7D18;
extern u16 D_801C746A;
extern u16 D_801C5EA4;
void func_801B3F08();
u16 objCreate(s32, s32, s32, s32, s32, s32, s32, s32, void (*)(), f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_8019E734(u16);
void func_8019F7C0(u16);
void playMenuSound(s32);

u8 func_80192B34(u16 arg0) {
    u8 state;

    state = D_8011F2F0[hudSlotIndex].unk3F;
    func_8019E734(arg0);
    func_8019F7C0(arg0);
    D_8011F2F0[D_801C7D18].x = cursorX * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].y = 0;
    D_8011F2F0[D_801C7D18].z = cursorY * 400.0f * 0.5f;
    if (D_801E9990[arg0].unk0 == 1) {
        if (trackInfo->unk1 == 5) {
            if (cursorX != 0 || (cursorY != 0 && cursorY != 0x17)) {
            } else {
                goto done;
            }
            if (cursorX == 0x17) {
                if (cursorY == 0) goto done;
                if (cursorY == 0x17) goto done;
            }
        }
        blockPos[0] = cursorX;
        blockPos[1] = cursorY;
        *(u16 *) &blockPos[4] = blockPos[0] + blockPos[1] * 24;
        D_801C746A = objCreate(0, 0, 3, 0, 0x53, 0xFF, 0, 0, func_801B3F08,
                                   blockPos[0] * 400.0f * 0.5f, 0, blockPos[1] * 400.0f * 0.5f,
                                   0, 0, 0, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[D_801C746A].flags |= 0x20;
        D_8011F2F0[D_801C746A].unkB = 0xC;
        state = 6;
        D_801C5EA4 = 0;
        playMenuSound(0x3D);
    }
done:
    return state;
}
