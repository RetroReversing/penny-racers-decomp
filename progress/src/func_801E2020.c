typedef struct { u8 player; u8 unk1[0xC]; u8 unkD; u8 unkE[0x30]; u16 state; u8 unk40[0x24]; } Obj;
typedef struct { u8 unk0[8]; s32 file; s32 free; } Pak;
extern Obj D_8011F2F0[];
extern u8 D_801F1888;
extern u16 D_801E9B32;
extern u16 D_801E979C;
extern u8 D_801E4420;
extern Pak D_801F1898[];
extern s32 D_801E87A0[];
extern u8 D_801E87A8[];
extern u8 D_801E87BC[];
extern u8 D_801E9766;
extern u8 D_801E9520[];
extern u8 D_801E9534[];
extern u8 D_801E9544[];
extern u8 D_801E9550[];
typedef struct { u8 unk0[2]; u8 saved; } Marks;
extern Marks D_80190CB0;
extern u8 D_8021B690[];
extern u32 D_801F18E0;
extern u32 D_801E973C;
extern void func_800DEFF8();
extern void func_800DF138();
extern void func_800DF094();
extern void func_80028EB0();
extern s32 func_801DDCDC();
extern void func_801DD938();
extern void func_80029190();
extern void func_80029070();
extern void func_800291E0();
extern void debugPrintf();

#define MSG(k, m) func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, k, player, m)

void func_801E2020(u16 arg0)
{
    u8 player;
    u8 flags;
    u8 j;
    s32 i;
    s32 r;

    flags = D_801F1888;
    player = D_8011F2F0[arg0].player;
    func_800DEFF8();
    func_800DF138(arg0);
    func_800DF138(D_801E9B32);
    func_800DF138(D_801E979C);
    switch (D_8011F2F0[arg0].state) {
    case 0:
        j = 0;
        for (i = 0; i < 4; i++) {
            if ((D_801E4420 >> i) & 1) {
                if (player == j) {
                    j = i;
                    break;
                }
                j++;
            }
        }
        func_80028EB0(&D_801F1898[player], j);
        r = func_801DDCDC(player, 0);
        if (r == 1) {
            func_80028EB0(&D_801F1898[player], j);
            r = func_801DDCDC(player, 1);
            MSG(0x16, 0xB);
        }
        if (r == 2) {
            func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, player, 0xD);
            D_8011F2F0[arg0].state = 0x384;
        } else if (r == 3 || D_801F1898[player].free != 1) {
            MSG(0x14, 0xA);
            D_8011F2F0[arg0].state = 0x384;
        } else {
            D_8011F2F0[arg0].state = 2;
        }
        break;
    case 1:
        break;
    case 2:
        func_80029190(D_801E87A0[0], D_801E87A0[1]);
        func_80029070(&D_801F1898[player], D_801E87A8, D_801E87BC, 0, 0x4400);
        r = D_801F1898[player].file;
        if (r == 5) {
            if (!(flags & 1)) {
                D_801E9766 = 0;
                D_8011F2F0[arg0].state = 3;
            } else {
                if (flags != 7) {
                    MSG(0x16, 0x16);
                }
                D_8011F2F0[arg0].state = 0x384;
            }
        } else if (r == 0) {
            D_801E9766 = 1;
            D_8011F2F0[arg0].state = 4;
        } else {
            switch (r) {
            case 1:
                MSG(0x16, 0xA);
                break;
            case 2:
                MSG(0x16, 0xB);
                break;
            case 7:
                MSG(0x16, 0x13);
                break;
            case 8:
                MSG(0x16, 0x14);
                break;
            case 9:
                MSG(0x16, 0x15);
                break;
            default:
                MSG(0x16, 0xC);
                break;
            }
            D_8011F2F0[arg0].state = 0x384;
        }
        break;
    case 3:
        MSG(0x19, 0x11);
        D_8011F2F0[arg0].state = 4;
        break;
    case 4:
        if (D_801E9766) {
            switch (flags) {
            case 0:
                MSG(0x1C, 0x1C);
                break;
            case 1:
                MSG(0x1C, 0x1D);
                break;
            case 2:
                MSG(0x1C, 0x1E);
                break;
            case 3:
                MSG(0x1C, 0x1F);
                break;
            case 4:
                MSG(0x1C, 0x20);
                break;
            case 5:
                MSG(0x1C, 0x21);
                break;
            broken:
                debugPrintf(D_801E9534);
                break;
            case 7:
                for (i = 0; i < 4; i++) {
                    debugPrintf(D_801E9520, i);
                    func_800291E0(&D_801F1898[player], i * 0x400 + 0x3340, 0x20, &D_801F18E0, 0);
                    if (D_801F1898[player].file != 0 || D_801F1898[player].free != 1) {
                        if (D_801F1898[player].file == 6) {
                            goto broken;
                        }
                        MSG(0x16, 0xC);
                        goto done;
                    }
                    D_801E973C = D_801F18E0;
                    if (D_801E973C) {
                        D_80190CB0.saved |= D_8021B690[i];
                        debugPrintf(D_801E9544);
                    } else {
                        debugPrintf(D_801E9550);
                    }
                }
                break;
            }
        }
    done:
        D_8011F2F0[arg0].state = 0x384;
        break;
    case 0x384:
        D_8011F2F0[arg0].unkD = 2;
        D_8011F2F0[D_801E9B32].unkD = 2;
        D_8011F2F0[D_801E979C].unkD = 2;
        func_800DF094();
        break;
    }
}
