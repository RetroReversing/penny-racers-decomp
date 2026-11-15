extern u8 D_8011F2F0[];
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F2F2;
extern Slot_8011F2F2 D_8011F2F2[];
extern u8 D_8011F300[];
extern u8 D_8011F32E[];
extern s8 D_80187CF0;
extern u8 D_801E9994[];
extern u8 D_801E99C0[];
extern u16 func_800E1850;

void func_8015A728(s32 arg0) {
    u16 self;
    u16 idx;
    u16 next;
    s32 state;

    self = arg0 & 0xFFFF;
    state = *(u16 *)(D_8011F32E + self * 0x64);
    switch (state) {
    case 0:
        D_80187CF0 = 0;
        *(u16 *)(D_8011F32E + self * 0x64) = 1;
        return;
    case 1:
        if (*(s32 *)(D_801E99C0 + 0) == 1 || *(s32 *)(D_801E99C0 + 0x70) == 1 ||
            *(s32 *)(D_801E99C0 + 0xE0) == 1 || *(s32 *)(D_801E99C0 + 0x150) == 1) {
            idx = func_800E1850;
            while (idx != 0xFFFF) {
                if (idx != self) {
                    if (*(D_8011F2F0 + idx * 0x64) != 0x63) {
                        D_8011F2F2[idx].f0 |= 0x10;
                    }
                }
                next = *(u16 *)(D_8011F300 + idx * 0x64);
                idx = next;
            }
            *(u16 *)(D_8011F32E + self * 0x64) = 2;
            return;
        }
        break;
    case 2:
        if (*(s32 *)(D_801E9994 + 0) == 1 || *(s32 *)(D_801E9994 + 0x70) == 1 ||
            *(s32 *)(D_801E9994 + 0xE0) == 1 || *(s32 *)(D_801E9994 + 0x150) == 1) {
            idx = func_800E1850;
            while (idx != 0xFFFF) {
                D_8011F2F2[idx].f0 &= 0xFFEF;
                next = *(u16 *)(D_8011F300 + idx * 0x64);
                idx = next;
            }
            *(u16 *)(D_8011F32E + self * 0x64) = 1;
            return;
        }
        break;
    }
}
