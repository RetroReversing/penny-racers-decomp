typedef struct { u8 count; u8 pad1[0xC]; u8 state; u8 pad[0x56]; } R64;
extern R64 D_8011F2F0[];
extern u8 D_80189B36[];
extern u16 D_80189C98;
extern u8 D_80189C9A;
extern u8 D_80189C9B[];
extern u8 D_80189CB6;
extern u8 D_80189CBE;
extern u16 D_80189CC6[];
extern u16 D_80190CA0[];
s32 func_8014A870(s32, s32, u8);
void playMenuSound(s32);
s32 func_8014BAC0(void);
void swapCarState(u8, u8);
s32 func_801485C8(void);

void func_80146EC4(u16 arg0)
{
    R64 *p;
    s32 flags;

    p = &D_8011F2F0[arg0];
    if (D_80189CC6[0] & 0x800) {
        flags = func_8014A870(0x14, 3, ((u8 *)D_80189CC6)[-8]);
        if (flags & 8) {
            if (!(D_80189CC6[0] & 0x8000)) {
                D_80189CC6[0] |= 0x8000;
                playMenuSound(0x3B);
            }
        }
        if (flags & 4) {
            if (D_80189CC6[0] & 0x8000) {
                D_80189CC6[0] &= 0x7FFF;
                playMenuSound(0x3B);
            }
        }
    } else {
        flags = func_8014BAC0() & 0x10;
        p->count++;
        if (p->count >= 0x29) {
            flags = 0x10;
        }
    }

    if (flags & 0x10) {
        D_80189B36[0] &= 0xEF;
        flags = 0;
        if (!(D_80189CC6[0] & 0x8000)) {
            D_8011F2F0[D_80190CA0[0]].state = 2;
            D_8011F2F0[D_80190CA0[1]].state = 2;
            D_80189CC6[0] |= 0x3000;
            playMenuSound(0x3D);
            swapCarState(((u8 *)D_80189CC6)[-0x10], ((u8 *)D_80189CC6)[-8]);
            if (func_801485C8() == 0) {
                *(u16 *)((u8 *)D_80189CC6 - 0x2E) = 0x100;
            } else {
                D_80189C9B[0]++;
                *(u16 *)(D_80189C9B - 3) = 0x21;
                D_80189C9B[-1] = 0;
            }
        } else {
            playMenuSound(0x3A);
            D_80189C98 = 0x41;
        }
    }
    if (flags & 0x20) {
        playMenuSound(0x3A);
        D_80189B36[0] &= 0xEF;
        D_80189C98 = 0x41;
    }
}
