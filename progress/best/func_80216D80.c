static __inline__ int __repair_inline(int a, int b) { return a < b; }
extern void func_8014A4C8(s32, s32, s16, s32, s32);
extern void func_801CA140(void);
extern void func_801CA468(s32, s32);
extern void func_801CA494(s32, u8, u8, u8, s32);
extern void func_801CABF4(s32, s32, s32, s32, void *, s32, s32, void *, s32, s32, s32, s32);
extern void func_801D8BD0(s32, s32, s32, s32, s32, void *, void *);
extern u8 D_80190C9E;
extern u8 D_80190CA8;
extern u8 D_80190CAA;
extern u8 D_80190CAE;
extern u8 D_80190CB2;
extern u8 D_80190CB4;
extern u8 D_8011F2F0[];
extern u8 D_8021F080[];
extern u8 D_8021B690[];
extern u8 D_801CF4C8[];
extern u8 D_801D4390[];
extern u8 D_801E6B68[];
extern u8 D_801E7470[];
extern s32 D_802036BC;

void func_80216D80(s32 arg0, s32 arg1) {
    register u8 b;
    u8 a;
    u8 *sp34;
    long s2;
    u8 c;
    long i;
    u8 *__base_D_8011F2F0;

    __base_D_8011F2F0 = (int)D_8011F2F0;
    func_801CA140();
    sp34 = __base_D_8011F2F0 + ((u32)arg1 & 0xFFFF) * 0x64;
    if (*(u16 *)(sp34 + 0x40) & 1) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x36, 0x39, 0xA, 0x17);
        func_8014A4C8(arg0, 0x36, 0x8B, 0xA, 0x18);
        func_8014A4C8(arg0, 0x4B, 0x42, 0xA, 0xC);
        func_8014A4C8(arg0, 0xD8, 0x39, 0xA, 0x19);
        func_8014A4C8(arg0, 0xD8, 0x8B, 0xA, 0x1A);
        func_801CA468(arg0, 0xFF);
        b = 0x7F;
        c = 0x7F;
        a = 0x7F;
        if ((int)D_80190CA8 == 1) {
            a = (unsigned)D_80190CB4;
        } else if (D_80190CA8 == 2) {
            b = D_80190CB4;
        
        func_801CA494(arg0, c, c, c, 0xFF);} else {
            c = (s32)D_80190CB4;
        
        func_801CA494(arg0, c, c, c, 0xFF);}
        func_8014A4C8(arg0, 0x4B, 0x54, 0xA, 9);
        func_8014A4C8(arg0, 0x4B, 0x66, 0xA, 0xA);
        func_801CA494(arg0, a, a, a, 0xFF);
        func_801CA494(arg0, b, b, b, 0xFF);
        func_8014A4C8(arg0, 0x4B, 0x78, 0xA, 0xB);
        func_801CA468(arg0, 0xFF);
    }
    if (*(u16 *)(sp34 + 0x40) & 2) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x90, 0x54, 0xA, 0x1B);
        func_8014A4C8(arg0, 0x90, 0xC1, 0xA, 0x1C);
        func_8014A4C8(arg0, 0x10B, 0x54, 0xA, 0x1D);
        func_8014A4C8(arg0, 0x10B, 0xC1, 0xA, 0x1E);
        func_8014A4C8(arg0, 0x7D, 0x54, 0xA, 0x2B);
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_801CA468(arg0, 0xFF);
        for (i = 0; i < 5; i++) {
            s2 = D_8021F080[D_80190CAA + (unsigned)i];
            if (s2 != 0xFF) {
                if (s2 < 8) {
                    func_8014A4C8(arg0, 0xAD, (s16)((i * 0x12) + 0x63), 0xA, 7);
                } else {
                    s2 -= 8;
                    if (D_80190CB2 & D_8021B690[s2]) {
                        func_8014A4C8(arg0, 0xDE, (s16)((i * 0x12) + 0x68), 0xA, 0x2D);
                    }
                    func_8014A4C8(arg0, 0xAD, (s16)((i * 0x12) + 0x63), 0xA, 8);
                }
                func_8014A4C8(arg0, 0xD3, (s16)((i * 0x12) + 0x63), 0xA, s2 + 0x21);
            }
        }
        if (D_80190CAE & 0xF0) {
            func_8014A4C8(arg0, 0xCB, 0x54, 0xA, 0x13);
        }
        if (D_80190CAE & 0xF) {
            func_8014A4C8(arg0, 0xCB, 0xBE, 0xA, 0x14);
        }
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x9D, (D_80190C9E * 0x12) + 0x63, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
    }
    if (*(u16 *)(sp34 + 0x40) & 4) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x90, 0xD5, 0xA, 0x1C);
        func_8014A4C8(arg0, 0x90, 0x68, 0xA, 0x1B);
        func_8014A4C8(arg0, 0x10B, 0xD5, 0xA, 0x1E);
        func_8014A4C8(arg0, 0x10B, 0x68, 0xA, 0x1D);
        func_8014A4C8(arg0, 0x7D, 0x66, 0xA, 0x2B);
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_801CA468(arg0, 0xFF);
        for (i = 0; __repair_inline(i, 5); i++) {
            s2 = D_8021F080[D_80190CAA + (int)i];
            if ((int)s2 != 0xFF) {
                func_8014A4C8(arg0, 0xAD, (s16)((i * 0x12) + 0x75), 0xA, 8);
                func_8014A4C8(arg0, 0xD3, (s16)((i * 0x12) + 0x75), 0xA, s2 + 0x21);
                if (D_80190CB2 & D_8021B690[s2]) {
                    func_8014A4C8(arg0, 0xDE, (s16)((i * 0x12) + 0x7A), 0xA, 0x2D);
                }
            }
        }
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x9D, (D_80190C9E * 0x12) + 0x75, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
    }
    if (*(u16 *)(sp34 + 0x3E) == 0x41) {
        func_801D8BD0(arg0, 0x10, 0x4C, 0xA, 2, D_801E6B68, D_801E7470);
        func_801CABF4(arg0, 0x28, 0x64, 0xA, D_801D4390, D_802036BC, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
}
