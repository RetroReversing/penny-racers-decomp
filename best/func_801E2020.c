typedef struct {
    u8 unk0;
    u8 pad1[0xC];
    u8 unkD;
    u8 padE[0x30];
    u16 unk3E;
    u8 pad40[0x24];
} Unk8011F2F0;

typedef struct {
    u8 pad0[8];
    s32 error;
    s32 unkC;
} PakFile;

extern Unk8011F2F0 D_8011F2F0[];
extern u8 D_801F1888;
extern u8 D_801E4420;
extern PakFile D_801F1898[];
extern u16 D_801E9B32;
extern u16 D_801E979C;
extern s32 D_801E87A0[2];
extern u8 D_801E87A8[];
extern u8 D_801E87BC[];
extern u8 D_801E9766;
extern char D_801E9520[];
extern char D_801E9534[];
extern char D_801E9544[];
extern char D_801E9550[];
extern s32 D_801F18E0[];
extern s32 D_801E973C;
extern u8 D_80190CB2;
extern u8 D_8021B690[];

extern void func_800DEFF8(void);
extern void func_800DF138(u16);
extern void nuContPakOpen(PakFile *, s32);
extern s32 func_801DDCDC(s32, s32);
extern void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void nuContPakCodeSet(s32, s32);
extern void nuContPakFileOpenJis(PakFile *, u8 *, u8 *, s32, s32);
extern void nuContPakFileReadWrite(PakFile *, s32, s32, s32 *, s32);
extern void func_8003DE60(char *, ...);
extern void func_800DF094(void);

void func_801E2020(u16 arg0) {
    u8 flags = D_801F1888;
    u8 port = D_8011F2F0[arg0].unk0;
    u8 cnt;
    s32 i;
    s32 r;
    PakFile *pak;

    func_800DEFF8();
    func_800DF138(arg0);
    func_800DF138(D_801E9B32);
    func_800DF138(D_801E979C);
    switch (D_8011F2F0[arg0].unk3E) {
    case 0:
        cnt = 0;
        for (i = 0; i < 4; i++) {
            if ((D_801E4420 >> i) & 1) {
                if (port == cnt) {
                    cnt = i;
                    break;
                }
                cnt++;
            }
        }
        pak = &D_801F1898[port];
        nuContPakOpen(pak, cnt);
        r = func_801DDCDC(port, 0);
        if (r == 1) {
            nuContPakOpen(pak, cnt);
            r = func_801DDCDC(port, 1);
            func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 11);
        }
        if (r == 2) {
            func_801DD938(0x10, 0x1C, 0xA, 6, 200, 180, 18, 23, port, 13);
        } else if (r == 3 || D_801F1898[port].unkC != 1) {
            func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, port, 10);
        } else {
            D_8011F2F0[arg0].unk3E = 2;
            break;
        }
        D_8011F2F0[arg0].unk3E = 900;
        break;
    case 2:
        nuContPakCodeSet(D_801E87A0[0], D_801E87A0[1]);
        nuContPakFileOpenJis(&D_801F1898[port], D_801E87A8, D_801E87BC, 0, 0x4400);
        r = D_801F1898[port].error;
        if (r == 5) {
            if (!(flags & 1)) {
                D_801E9766 = 0;
                D_8011F2F0[arg0].unk3E = 3;
                break;
            }
            if (flags != 7) {
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 22);
            }
        } else if (r == 0) {
            D_801E9766 = 1;
            D_8011F2F0[arg0].unk3E = 4;
            break;
        } else {
            switch (r) {
            case 1:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 10);
                break;
            case 2:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 11);
                break;
            case 3:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 19);
                break;
            case 4:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 20);
                break;
            case 9:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 21);
                break;
            default:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 12);
                break;
            }
        }
        D_8011F2F0[arg0].unk3E = 900;
        break;
    case 3:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 25, port, 17);
        D_8011F2F0[arg0].unk3E = 4;
        break;
    case 4:
        if (D_801E9766 != 0) {
            switch (flags) {
            case 0:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 28);
                break;
            case 1:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 29);
                break;
            case 2:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 30);
                break;
            case 3:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 31);
                break;
            case 4:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 32);
                break;
            case 5:
                func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 28, port, 33);
                break;
            case 7:
                for (i = 0; i < 4; i++) {
                    func_8003DE60(D_801E9520, i);
                    nuContPakFileReadWrite(&D_801F1898[port], (i << 10) + 0x3340, 0x20, D_801F18E0, 0);
                    if (D_801F1898[port].error != 0 || D_801F1898[port].unkC != 1) {
                        if (D_801F1898[port].error == 6) {
                            func_8003DE60(D_801E9534);
                        } else {
                            func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 22, port, 12);
                        }
                        break;
                    }
                    if ((D_801E973C = D_801F18E0[0]) != 0) {
                        D_80190CB2 |= D_8021B690[i];
                        func_8003DE60(D_801E9544);
                    } else {
                        func_8003DE60(D_801E9550);
                    }
                }
                break;
            }
        }
        D_8011F2F0[arg0].unk3E = 900;
        break;
    case 900:
        D_8011F2F0[arg0].unkD = 2;
        D_8011F2F0[D_801E9B32].unkD = 2;
        D_8011F2F0[D_801E979C].unkD = 2;
        func_800DF094();
        break;
    }
}
