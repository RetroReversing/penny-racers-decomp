typedef struct {
    s32 w[8];
} Unk801C6AC8;

extern Unk801C6AC8 D_801C6AC8;
extern u8 D_801C6BAC;
extern u16 D_8011F32E;
extern f32 D_801C6B60[8];
extern s32 D_801C6B80;
extern u8 D_80167FB8[];
typedef struct { s16 f0; u8 pad[14]; } Slot_80167FBC;
extern Slot_80167FBC D_80167FBC[];

s32 func_8013AE60(s32, Unk801C6AC8 *);
f32 __sinf(f32);

void func_801C1424(s32 arg0) {
    Unk801C6AC8 sp10;
    s32 i;
    s32 k;
    s32 v;
    s32 temp;
    u32 off;

    sp10 = D_801C6AC8;
    v = arg0 & 0xFFFF;
    if (D_801C6BAC == 0) {
        func_8013AE60(arg0 & 0xFFFF, &D_801C6AC8);
        v = arg0 & 0xFFFF;
    }
    off = v * 100;
    if (*(u16 *) ((char *) &D_8011F32E + off) == 0) {
        for (i = 0; i < 8; i++) {
            D_801C6B60[i] = (f32) i * 45.0f;
        }
        D_801C6B80 = 0;
        *(u16 *) ((char *) &D_8011F32E + (arg0 & 0xFFFF) * 100) = 1;
    } else if (*(u16 *) ((char *) &D_8011F32E + off) == 1) {
        for (i = 0; i < 8; i++) {
            if (D_801C6B60[i] < 360.0f) {
                D_801C6B60[i] = D_801C6B60[i] + 4.0f;
            } else {
                D_801C6B60[i] = D_801C6B60[i] - 360.0f;
            }
        }
        for (k = 0; k < 8; k++) {
            temp = (s32) (__sinf((D_801C6B60[k] * 3.1415927f) / 180.0f) * ((f32 *) &sp10)[k]);
            *(s16 *) (D_80167FB8 + (k + 8) * 0x10 + 4) = (s16) temp;
            D_80167FBC[k].f0 = (s16) temp;
        }
    }
}
