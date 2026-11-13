typedef struct { s32 unk0; s32 unk4; } R8;
typedef struct { s16 unk0; s16 pad2; s32 pad4; R8 *unk8; s32 unkC; } V;
extern s32 D_80000300;
extern u8 D_80048190[];
extern s16 D_80048192;
extern s32 D_80048194;
extern s16 D_800481C2;
extern s32 D_800481C4;
extern V *D_800481C8;
extern u8 *D_800481F0;
extern V *D_800481F4;
extern u8 D_80048260[];
extern u8 D_800482B0[];
extern u8 D_80048210[];
extern s32 func_8003A140(void);
extern void func_8003DDC0(void *, s32);

void func_8003F210(void) {
    func_8003DDC0(D_80048190, 0x60);
    D_800481F0 = D_80048190;
    D_800481F4 = (V *)(D_80048190 + 0x30);
    D_800481C2 = 1;
    D_80048192 = 1;
    D_800481C4 = 0x80000000;
    D_80048194 = 0x80000000;
    if (D_80000300 == 0) {
        D_800481C8 = (V *)D_80048260;
    } else if (D_80000300 == 2) {
        D_800481C8 = (V *)D_800482B0;
    } else {
        D_800481C8 = (V *)D_80048210;
    }
    D_800481F4->unk0 = 0x20;
    D_800481F4->unkC = D_800481F4->unk8->unk4;
    while (*(volatile u32 *)0xA4400010 >= 0xB) {}
    *(volatile u32 *)0xA4400000 = 0;
    func_8003A140();
}
