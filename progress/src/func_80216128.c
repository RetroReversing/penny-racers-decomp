typedef struct {
    u8 pad[0x40];
    u16 state;
    u8 rest[0x22];
} Slot;

void func_8014A4C8(s32, s32, s32, s32, s32);
void func_801CA140(s32 arg0, s32);
void func_801CA468(s32, u16);
void func_801CABF4(s32, s32, s32, s32, void *, s32, s32, void *, s32, s32, s32, s32);

extern Slot D_8011F2F0[];
extern u8 D_80190C9E;
extern u8 D_801C5EA0;
extern s32 D_802030B0[];
extern u16 D_8021E19C;
extern u8 D_8021E19E;
extern s32 D_802D6898;
extern s32 D_802D92A0;

void func_80216128(s32 arg0, s32 arg1) {
    Slot *slot;

    slot = &D_8011F2F0[arg1 & 0xFFFF];
    func_801CA140(arg0, arg1 & 0xFFFF);
    func_801CA468(arg0, D_8021E19C);
    switch (slot->state) {
    case 0:
        slot->state = (u32)0x10;
        return;
    case 16:
    case 32:
        func_8014A4C8(arg0, 0x4F, 0x67, 0xA, 0x20);
        func_8014A4C8(arg0, 0x4F, 0x7F, 0xA, 0x20);
        func_801CABF4(arg0, 0x8B, 0x69, 0xD, &D_802D92A0, D_802030B0[0], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        func_801CABF4(arg0, 0x85, 0x81, 0xD, &D_802D92A0, D_802030B0[1], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        if (D_801C5EA0) {
            func_8014A4C8(arg0, 0x4F, 0x97, 0xA, 0x20);
            func_801CABF4(arg0, 0x6B, 0x99, 0xD, &D_802D92A0, D_802030B0[3], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        }
        if (slot->state != (u32)0x20) {
            func_801CA468(arg0, D_8021E19E);
            do { func_8014A4C8(arg0, 0x58, (D_80190C9E * 0x18) + 0x66, 0xA, 0x15); } while (0);
            func_8014A4C8(arg0, 0xD5, (D_80190C9E * 0x18) + 0x66, 0xA, 0x16);
        }
        return;
    }
}
