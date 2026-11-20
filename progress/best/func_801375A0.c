typedef struct {
    u8 pad00[0xC];
    u8 state;
    u8 flag;
    u8 pad0E[2];
    u16 next;
    u8 pad12[0x2C];
    u16 timer;
    u8 pad40[4];
    f32 f44;
    f32 f48;
    f32 f4C;
    u8 pad50[0x14];
} Racer;

typedef struct {
    u8 a;
    u8 pad;
    u16 b;
} RacerObj;

typedef struct {
    RacerObj *obj;
    u8 pad[0x60];
} PtrSlot;

extern Racer D_8011F2F0[];
extern PtrSlot D_8011F350[];
extern u8 D_8011F2FD[];
extern u8 D_8011F300[];
extern u32 D_801E9990[];
extern u8 D_8018993F[];
extern u8 D_80189940[];
extern u8 D_8018D661[];
extern u8 D_8018D662[];
extern u8 D_8018A248;
extern u8 D_8018BC32;
extern u8 D_80189DC0;
extern u16 D_8018BC3C;
extern s16 D_800DD2C0;
extern u16 D_800E1850;
extern s16 D_8006F9E8;

void func_802319E8(void);
void func_80231C5C(void);
void func_801CF468(u16 idx, s32 a, s32 b, s32 c);
void func_8021F5F0(void);
void func_80028100(s32, s32 a, s32 b);

void func_801375A0(s32 arg0)
{
    u8 *__base_D_8018A248;
    s32 i;
    u16 t;

#define R D_8011F2F0[arg0 & 0xFFFF]

    switch (R.timer) {
    case 0:
        for (i = 0; i < 7; i++) {
            D_80189940[i] = 0;
            D_8018D662[i] = 0x78;
        }
        __base_D_8018A248 = &D_8018A248;
        (*__base_D_8018A248) = 0;
        D_8018BC32 = 0xFF;
        D_80189DC0 = 0x78;
        R.timer = 1;
        break;

    case 1:
        if (R.state < 7) {
            R.f44 = 1.0f;
            R.f48 = 0.0f;
            R.f4C = 30.0f;
            R.state++;
            R.timer = 0x14;
        } else {
            R.timer = 2;
        }
        break;

    case 2:
        if (D_800DD2C0 > 0) {
            for (i = 0; i < D_800DD2C0; i++) {
                if (D_801E9990[i * 0x1C] == 1) {
                    D_8011F350[D_8018BC3C].obj->a = 2;
                    D_8011F350[D_8018BC3C].obj->b = 0x14;
                    do { func_801CF468(D_8018BC3C, 0, 0, 0); } while (0);
                    R.f44 = 3.0f;
                    R.f48 = 0.0f;
                    R.f4C = 4.0f;
                    func_80028100(arg0, 0, 0x14);
                    R.timer = 0x1E;
                }
            }
        }
        break;

    case 3:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        D_8006F9E8 = 0xA;
        break;

    case 4:
        R.f48 = (f32)(u16)((u32)R.f48 + 1);
        if ((u16)R.f4C < (u16)(u32)R.f48) {
            R.timer = (u16)(u32)R.f44;
        }
        /* fall through */
    case 5:
        if (D_800DD2C0 > 0) {
            for (i = 0; (s32)i < (int)D_800DD2C0; i++) {
                if (D_801E9990[i * 0x1C] == 1) {
                    R.timer = R.f44;
                }
            }
        }
        break;

    case 6:
        R.f48 = (f32)(u16)((u32)R.f48 + 1);
        if ((u16)(u32)R.f4C < (u16)(u32)R.f48) {
            R.timer = (u16)(u32)R.f44;
        }
        break;

    case 7:
        if (D_8011F350[D_8018BC3C].obj->a == 0) {
            t = D_800E1850;
            if (t != 0xFFFF) {
                do {
                    t = *(u16 *)(D_8011F300 + t * 0x64);
                    D_8011F2FD[t * 0x64] = 4;
                } while (t != 0xFFFF);
            }
            R.flag = 0;
            D_8011F2FD[D_8018BC3C * 0x64] = 0;
            R.timer = 0x15;
        }
        break;
    }

    if ((*__base_D_8018A248) < 0xFF) {
        (*__base_D_8018A248) += 5;
    }
    if (D_80189DC0 != 0) {
        D_80189DC0 -= 5;
        if (D_80189DC0 != 0) {
            return;
        }
    }
    for (i = 1; i < R.state; i++) {
        if (D_8018993F[i] < 0xFF) {
            D_8018993F[i] += 5;
        }
        if (D_8018D661[i] != 0) {
            D_8018D661[i] -= 0xA;
        }
    }
}
