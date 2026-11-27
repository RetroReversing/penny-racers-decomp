typedef struct {
    u8 player;
    u8 unk1[0xC];
    u8 unkD;
    u8 unkE[0x30];
    u16 state;
    u8 unk40[8];
    f32 timer;
    u8 unk4C[0x18];
} Obj;
typedef struct { s16 snd; u8 unk2[0x36]; } Slot;
typedef struct { u8 unk0[0x5F4]; Slot slots[4]; u8 unk6D4[0x879 - 0x6D4]; u8 mode; u8 unk87A[0x8F0 - 0x87A]; } Car;
typedef struct { u8 unk0[4]; u16 unk8; u8 unkA[2]; s16 unkC; u8 unkE[0x12]; u16 unk20; u8 unk22[10]; } Row;
typedef struct { u8 unk0[0x2108]; s16 laps; u8 unk210A[2]; Row rows[4]; } Race;

extern Obj D_8011F2F0[];
extern Car D_8022A770[];
extern Race D_800DB1B8;
extern u8 D_80189CC8;
extern u16 D_80167E62;
extern u16 D_80167E60;
extern u8 D_80189C84[];
extern u16 D_80183B4C[];
extern u16 D_80183B50;
extern u16 D_8018A26E[];
extern u16 D_80190C90;
extern void func_801348C8();
extern void func_80134C68();
extern void func_80135C64();
extern void func_80136A28();
extern void func_801D663C();
extern void func_801D65BC();
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define SPAWN(z) func_800DE41C(0, D_8011F2F0[arg0].player, 3, 0, 0x82, 0, 0, func_801348C8, func_80134C68, \
                               0.0f, 0.0f, z, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)

void func_80135544(u16 arg0)
{
    s32 i;
    u16 id;

    switch (D_8011F2F0[arg0].state) {
    case 0:
        if (D_8022A770[D_8011F2F0[arg0].player].mode != 5) {
            if (D_80189CC8 == 1) {
                if (D_80167E62) {
                    SPAWN(0.0f);
                } else {
                    SPAWN(D_80189C84[D_8011F2F0[arg0].player] - 1.0f);
                }
            } else {
                SPAWN(255.0f);
            }
            D_80183B4C[D_8011F2F0[arg0].player] = 200;
        } else {
            D_80183B4C[D_8011F2F0[arg0].player] = 400;
        }
        D_80183B50 = 0;
        D_8011F2F0[arg0].state = 1;
    case 1:
        D_8011F2F0[arg0].timer = (u16) ((u32) D_8011F2F0[arg0].timer + 1);
        if ((u16) (u32) D_8011F2F0[arg0].timer > D_80183B4C[D_8011F2F0[arg0].player]) {
            D_8011F2F0[arg0].state = 2;
            for (i = 0; i < 4; i++) {
                if (D_8022A770[D_8011F2F0[arg0].player].slots[i].snd != -1) {
                    func_801D663C(D_8022A770[D_8011F2F0[arg0].player].slots[i].snd);
                }
                D_8022A770[D_8011F2F0[arg0].player].slots[i].snd = -1;
            }
            if (D_800DB1B8.laps == D_80167E60 && D_80183B50 == 0) {
                func_801D65BC(5);
                D_80183B50 = 1;
            }
        }
        break;
    case 2:
        if (D_800DB1B8.rows[D_8011F2F0[arg0].player].unkC > 0x90) {
            D_800DB1B8.rows[D_8011F2F0[arg0].player].unkC -= 4;
            D_800DB1B8.rows[D_8011F2F0[arg0].player].unk20 =
                (D_800DB1B8.rows[D_8011F2F0[arg0].player].unk8 += 4);
        } else {
            D_8011F2F0[arg0].state = 3;
        }
        break;
    case 3:
        D_8011F2F0[arg0].unkD = D_8011F2F0[D_8018A26E[D_8011F2F0[arg0].player]].unkD = 2;
        if (D_80167E60 == D_800DB1B8.laps) {
            D_8011F2F0[D_80190C90].unkD = 2;
        }
        D_8018A26E[D_8011F2F0[arg0].player] =
            func_800DE41C(0, D_8011F2F0[arg0].player, 3, 0, 0x80, 0, 0, func_80135C64, func_80136A28,
                          0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        break;
    }
}
