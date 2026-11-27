typedef struct { u8 pad0[2]; s16 unk2; s16 unk4; s16 unk6; s16 unk8; u8 padA[2]; u8 unkC; u8 unkD; u8 padE[0xA]; f32 x; f32 y; f32 z; u8 pad24[4]; f32 unk28; u8 pad2C[4]; f32 unk30; f32 unk34; f32 unk38; u8 pad3C[8]; f32 unk44; f32 unk48; f32 unk4C; s32 *unk50; u8 pad54[0xC]; u8 *car; } Cam;
typedef struct { void *owner; u8 pad4[0x78]; } Row7C;
extern Row7C D_8018D6C4[];
extern Cam D_8011F2F0[];
extern u8 D_80168408[];
extern u8 D_802390C8[];
extern u8 D_802378B4[];
extern void func_80163E5C();
extern void func_8016410C();
extern void func_80164324();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E640(s32, s32, void *, s32, f32, f32, f32, f32, f32, f32, s32);
void func_801D7028(s32, s32);
void func_8003DF6C(void *, f32, f32, f32, f32 *, f32 *, f32 *);

void func_80163A38(u16 arg0)
{
    u8 *car = D_8011F2F0[arg0].car;
    Cam *rec = &D_8011F2F0[*(u16 *) (car + 2)];
    s32 *p = *(s32 **) ((u8 *) &D_8011F2F0[*(u16 *) (car + 2)] + 0x244);
    s32 id;
    u16 slot;
    u16 h;
    f32 v[3];
    s32 count;

    id = func_8013E364();
    slot = id;
    if (slot != 0xFFFF) {
        h = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, D_80168408, func_80163E5C, 0,
                          rec->x, rec->y + 15.0f, rec->z, 0, rec->unk28, 0,
                          rec->unk30 + rec->unk30, rec->unk34 + rec->unk34, rec->unk38 + rec->unk38);
        if (h == 0xFFFE || h == 0xFFFF) {
            func_8013E49C(slot);
            return;
        }
        count = *(u16 *) (car + 0x560) & 7;
        *(u16 *) (car + 0x560) = (*(u16 *) (car + 0x560) & 0xF8) | (count + 1);
        func_801D7028(h, 0x30);
        func_8003DF6C(car + 0x6D4, 0.0f, 15.0f, *(f32 *) (car + 0x774) * 0.3 + 20.0, &v[0], &v[1], &v[2]);
        func_8013E640(slot, h, car, 0, 0.0f, 15.0f, 0.0f, v[0], v[1], v[2], 0x78);
        D_8018D6C4[slot].owner = car;
        if (*(s16 *) (car + 0x55E) > 0) {
            *(s16 *) (car + 0x55E) -= 1;
        }
        if (*(s16 *) (car + 0x55E) == 0) {
            p[1] = (s32) D_802378B4;
        }
        func_8003DF6C(car + 0x6D4, 0.0f, 15.0f, -40.0f, &v[0], &v[1], &v[2]);
        h = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C, func_80164324,
                          v[0] + rec->x, v[1] + rec->y, v[2] + rec->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if (h != 0xFFFE && h != 0xFFFF) {
            D_8011F2F0[h].unk2 = D_8011F2F0[h].unk4 = D_8011F2F0[h].unk6 = D_8011F2F0[h].unk8 = 0x40;
            D_8011F2F0[h].unk44 = *(f32 *) (car + 0x7C0);
            D_8011F2F0[h].unk48 = *(f32 *) (car + 0x7C4) * 0.8f + 1.0f;
            D_8011F2F0[h].unk4C = *(f32 *) (car + 0x7C8);
        }
        D_8011F2F0[arg0].unkD = 2;
    }
}
