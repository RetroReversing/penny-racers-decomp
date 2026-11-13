typedef struct { u16 id; u8 pad[0x23]; u8 flag; u8 pad2[0x178 - 0x26]; } Ent;
extern Ent D_800DA260[];
extern s16 D_8021E1A6;
extern u8 D_80232CF8[], D_80232D04[], D_80232D10[], D_80232D1C[], D_80232D28[];
void func_8003DE60(void *, ...);
void func_80230BC4(u16, u16);

void func_802306F0(s32 arg0) {
    u8 used[14];
    s32 i;
    s32 n;

    func_8003DE60(D_80232CF8, arg0 & 0xFFFF);
    switch (D_8021E1A6) {
    case 0: func_8003DE60(D_80232D04); break;
    case 1: func_8003DE60(D_80232D10); break;
    case 2: func_8003DE60(D_80232D1C); break;
    case 3: func_8003DE60(D_80232D28); break;
    }
    i = 0;
loop0:
    used[i] = 0;
    i++;
    if (i < 14) goto loop0;
    switch (arg0 & 0xFFFF) {
    case 1:
        n = D_800DA260[0].id + 1;
        i = 1;
loop1:
        n++;
        if (n >= 13) n = 0;
        func_80230BC4(i, n);
        D_800DA260[i].flag = 0;
        i++;
        if (i < 6) goto loop1;
        break;
    case 2:
        used[D_800DA260[0].id] = 1;
        used[D_800DA260[1].id] = 1;
        n = D_800DA260[0].id;
        i = 2;
loop2:
        while (used[n]) {
            n++;
            if (n >= 13) n = 0;
        }
        func_80230BC4(i, n);
        D_800DA260[i].flag = 0;
        used[n] = 1;
        i++;
        if (i < 4) goto loop2;
        n = D_800DA260[1].id;
        i = 4;
loop3:
        while (used[n]) {
            n++;
            if (n >= 13) n = 0;
        }
        func_80230BC4(i, n);
        D_800DA260[i].flag = 1;
        used[n] = 1;
        i++;
        if (i < 6) goto loop3;
        break;
    }
}
