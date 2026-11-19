#define F(p, type, off) (*(type *)((u8 *)(p) + (off)))

typedef struct {
    u8 *p;
    u8 pad[0x60];
} Rec64;

s32 func_8013E364();
void func_800DF1E0(u16, void *);
void func_8013F44C(u16, void *);
void func_801D7028(u16, s32);
void func_8022FE50(s32, s32, s32, s32);

extern u16 D_8006F9E8;
extern u8 D_800DA26A[];
extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F33C[];
extern Rec64 D_8011F340[];
extern u8 *D_8018A280;
extern s32 D_8018D674;
extern u8 D_8018D6C0[];
extern s16 D_8021E1A6;
extern u8 D_8022A772[];
extern u8 D_8022AD5C[];
extern u8 D_8022DD10[];
extern u16 D_8022DD12;
extern u8 D_80237980[];
extern u8 D_80322A4C[];

void func_8013FE18(s32 arg0) {
    u8 *p;
    u8 *q;
    s32 r;
    s32 i;
    u32 u;

    if ((D_8006F9E8 & 0xFFFF) != 5) {
        switch (F(D_8011F32E, u16, (arg0 & 0xFFFF) * 0x64)) {
        case 0:
            r = func_8013E364();
            if ((r & 0xFFFF) != 0xFFFF) {
                p = D_8022DD10;
                F(D_800DA26A, s16, 0x8C6) = 0;
                F(D_800DA26A, s16, 0x8C8) = 0x37;
                F(D_800DA26A, s16, 0x8CA) = 0xA;
                F(D_800DA26A, s16, 0x8CC) = 9;
                F(D_800DA26A, s16, 0x8CE) = 7;
                F(D_800DA26A, s16, 0x8D0) = 0;
                F(D_800DA26A, s16, 0x8D2) = 0;
                F(D_800DA26A, s16, 0x8D4) = 0;
                F(D_800DA26A, s16, 0x8D6) = 0;
                F(D_800DA26A, s32, 0x8DA) = 0;
                F(D_800DA26A, s32, 0x8DE) = 0;
                F(D_800DA26A, s32, 0x8E2) = 0;
                F(D_800DA26A, s32, 0x8E6) = 0;
                F(D_800DA26A, s8, 0x8EA) = 0;
                do { func_8022FE50(6, 6, 6, 1); } while (0);
                switch (D_8021E1A6) {
                case 0:
                case 1:
                case 2:
                case 3:
                    F(p, u8 **, 0x8E0) = D_80322A4C;
                    F(p, s32, 0x5EC) = 0;
                    break;
                default:
                    F(p, s32, 0x5EC) = 0;
                    break;
                }
                F(D_8011F340[F(D_8011F304, u16, F(p, u16, 2) * 0x64)].p, u8 **, 4) = D_80237980;
                func_800DF1E0(F(D_8011F304, u16, F(p, u16, 2) * 0x64), p + 0x210);
                u = (u32) F(D_8011F334, f32, F(p, u16, 2) * 0x64);
                F(D_8011F33C, f32, (u & 0xFFFF) * 0x64) = 0.4f;
                F(D_8011F340[F(p, u16, 2) + 5].p, s32, 4) = 0;
                F(D_8011F340[F(p, u16, 2) + 6].p, s32, 4) = 0;
                F(D_8011F340[F(p, u16, 2) + 7].p, s32, 4) = 0;
                F(p, s16, 0x8E4) = 0x27;
                F(p, s16, 0x8E6) = 0x26;
                F(p, s16, 0x8E8) = 0;
                q = D_8011F2F0 + F(p, u16, 2) * 0x64;
                F(q, f32, 0x30) = F(q, f32, 0x30) + F(q, f32, 0x30);
                F(q, f32, 0x34) = F(q, f32, 0x34) + F(q, f32, 0x34);
                F(q, f32, 0x38) = F(q, f32, 0x38) + F(q, f32, 0x38);
                D_8018A280 = D_8018D6C0 + (r & 0xFFFF) * 0x7C;
                F(D_8018A280, f32, 0x70) = 30.0f;
                for (i = 0; i < 7; i++) {
                    D_8018A280[i + 0x67] = 0;
                    if ((F(D_8022A772, u16, i * 0x8F0) != 0xFFFF) && (F(D_8022AD5C, f32, i * 0x8F0) > 0.0f)) {
                        D_8018A280[i + 0x60] = i;
                    } else {
                        D_8018A280[i + 0x60] = -1;
                    }
                }
                F(D_8011F32E, u16, (arg0 & 0xFFFF) * 0x64) = 1;
                return;
            }
            break;
        case 1:
            func_8013F44C(D_8022DD12, D_8018A280);
            if (D_8018D674 != 0) {
                func_801D7028(D_8022DD12, 0x27);
            }
            break;
        }
    }
}
