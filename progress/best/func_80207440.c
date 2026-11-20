typedef struct { u16 f0; u8 pad[98]; } Slot_8011F330;
extern Slot_8011F330 D_8011F330[];
extern s8 D_8021E189;
void func_801CA140(s32);
void func_801CA494(s32, u8, u8, u8, u8);
void func_801CCE7C(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_80207440(s32 arg0, s32 arg1) {
    u16 st = D_8011F330[arg1 & 0xFFFF].f0;

    if (!st) {
        D_8021E189 = 0;
        D_8011F330[arg1 & (short)0xFFFF].f0 = 1;
        return;
    }
    if ((u32)st == 1) {
        func_801CA140(arg0);
        func_801CA494(arg0, 0x78, 0x78, 0x78, 0xFF);
        func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, 0, 0);
    }
}
