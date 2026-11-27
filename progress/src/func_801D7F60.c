typedef struct { u16 button; s8 x; s8 y; u8 err; u8 unk5; } Pad;
typedef struct { u16 press; s8 x; s8 y; u16 held; u16 mask[16]; u8 unk26[2]; u32 cnt[18]; } Input;
extern u8 D_8006FE40[];
extern Pad D_801E96E0[];
extern Input D_801E9958[];
extern u8 D_801E4420;
extern void func_8003DAA0();

void func_801D7F60(void)
{
    u16 i;
    u16 j;
    Pad *pad;

    func_8003DAA0(D_8006FE40, D_801E96E0, 0x18);
    j = 0;
    for (i = 0; i < 4; i++) {
        if (!((D_801E4420 >> i) & 1)) {
            continue;
        }
        pad = &D_801E96E0[i];
        D_801E9958[j].press = ~D_801E9958[j].held & pad->button;
        if (pad->err) {
            D_801E9958[j].press = 0;
        }
        if (D_801E9958[j].held & 0x40) {
            D_801E9958[j].x = 0;
        } else {
            D_801E9958[j].x = pad->x;
        }
        if (D_801E9958[j].held & 0x80) {
            D_801E9958[j].y = 0;
        } else {
            D_801E9958[j].y = pad->y;
        }
        if (D_801E9958[j].x > 0x3C) {
            D_801E9958[j].cnt[0]++;
        } else {
            D_801E9958[j].cnt[0] = 0;
        }
        if (D_801E9958[j].x < -0x3C) {
            D_801E9958[j].cnt[1]++;
        } else {
            D_801E9958[j].cnt[1] = 0;
        }
        if (D_801E9958[j].y > 0x3C) {
            D_801E9958[j].cnt[2]++;
        } else {
            D_801E9958[j].cnt[2] = 0;
        }
        if (D_801E9958[j].y < -0x3C) {
            D_801E9958[j].cnt[3]++;
        } else {
            D_801E9958[j].cnt[3] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[12]) {
            D_801E9958[j].cnt[16]++;
        } else {
            D_801E9958[j].cnt[16] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[15]) {
            D_801E9958[j].cnt[4]++;
        } else {
            D_801E9958[j].cnt[4] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[14]) {
            D_801E9958[j].cnt[5]++;
        } else {
            D_801E9958[j].cnt[5] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[3]) {
            D_801E9958[j].cnt[8]++;
        } else {
            D_801E9958[j].cnt[8] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[2]) {
            D_801E9958[j].cnt[9]++;
        } else {
            D_801E9958[j].cnt[9] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[1]) {
            D_801E9958[j].cnt[11]++;
        } else {
            D_801E9958[j].cnt[11] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[0]) {
            D_801E9958[j].cnt[10]++;
        } else {
            D_801E9958[j].cnt[10] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[11]) {
            D_801E9958[j].cnt[12]++;
        } else {
            D_801E9958[j].cnt[12] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[10]) {
            D_801E9958[j].cnt[13]++;
        } else {
            D_801E9958[j].cnt[13] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[9]) {
            D_801E9958[j].cnt[15]++;
        } else {
            D_801E9958[j].cnt[15] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[8]) {
            D_801E9958[j].cnt[14]++;
        } else {
            D_801E9958[j].cnt[14] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[13]) {
            D_801E9958[j].cnt[17]++;
        } else {
            D_801E9958[j].cnt[17] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[5]) {
            D_801E9958[j].cnt[6]++;
        } else {
            D_801E9958[j].cnt[6] = 0;
        }
        if (D_801E9958[j].press & D_801E9958[j].mask[4]) {
            D_801E9958[j].cnt[7]++;
        } else {
            D_801E9958[j].cnt[7] = 0;
        }
        j++;
    }
}
