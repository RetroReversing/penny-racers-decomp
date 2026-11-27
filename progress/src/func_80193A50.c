typedef struct { u8 pad0[4]; u16 flags; u8 pad6[7]; u8 fD; u8 padE[0x21]; u8 f2F_pad[0]; u8 pad2F[0x10]; u8 f3F; u8 pad40[0x24]; } Rec;
typedef struct { s32 a; s32 b; u8 pad[0x68]; } Slot;
typedef struct { s8 x; s8 y; s8 z; u8 w; u16 idx; } Cur;
typedef struct { u8 a; u8 b; u8 pad2[2]; void *p; u8 pad8[8]; } Msg;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } Hist;
typedef struct { u8 b[8]; } Eight;
extern u8 D_8011F2FD[], D_8011F32F[];
extern u16 D_801C7074, D_801C746A;
extern Slot D_801E9990[];
extern u8 D_801C7469, D_801C6B22, D_801C6B23, D_801C7AB6, D_801C7AB8;
extern Cur D_801C6BB0;
extern s8 D_801C6BB9, D_801C7068;
extern u16 D_801C6BE0[];
extern s16 D_801C7078, D_801C5EA4;
extern u8 D_801C7AD8[];
extern Hist D_801C7080[];
extern Msg D_801C7D30[];
extern Eight D_8031445C[];
extern u8 *D_801C7AB0;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
typedef struct { u16 v; u8 pad[0x62]; } Fl;
extern Fl D_8011F2F4[];
void func_8014B854(s32);
u8 func_80199AB0(u16);
void func_8019F7C0(u16);
void func_80192E00(u8);
void func_801BFA1C(s32, s32);

u8 func_80193A50(u16 id) {
    u8 pad[0x40];
    u16 handle;
    s32 result;

    result = D_8011F32F[D_801C7074 * 0x64];
    func_8019F7C0(id);
    func_80192E00(func_80199AB0(id));
    if (D_801E9990[id].a == 1 && D_801E9990[id].b == 0) {
        if (D_801C7469 != 4) {
            D_801C7D30[D_801C6BB0.idx].a = 0;
            D_801C7D30[D_801C6BB0.idx].b = result = 1;
            D_801C7D30[D_801C6BB0.idx].p = &D_8031445C[D_801C6BB0.z];
            handle = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C6BB0.idx], 0, 0, D_801C6BB0.x * 400.0f * 0.5f, 0, D_801C6BB0.y * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            D_8011F2F4[handle].v |= 8;
            D_801C6BE0[D_801C6BB0.idx] = handle;
            D_801C7AD8[D_801C6BB0.idx] = D_801C7AB0[2];
            D_801C7080[D_801C7AB0[2]].a = D_801C7469;
            D_801C7080[D_801C7AB0[2]].b = 0;
            D_801C7080[D_801C7AB0[2]].c = D_801C6BB0.x;
            D_801C7080[D_801C7AB0[2]].d = D_801C6BB0.y;
            D_801C7080[D_801C7AB0[2]].e = D_801C6BB0.z;
            func_801BFA1C(0, 0);
            D_801C7AB0[2] = result;
            D_801C7AB6++;
            D_801C7068 = D_801C6BB0.x + D_801C6B22;
            D_801C6BB9 = D_801C6BB0.y + D_801C6B23;
            if (D_801C7469 == 0) {
                if (D_801C6BB9 > 0) {
                    D_801C6BB9--;
                } else {
                    D_801C6BB9 += 2;
                }
            } else if (D_801C7469 == 1) {
                if (D_801C7068 > 0) {
                    D_801C7068--;
                } else {
                    D_801C7068 += 2;
                }
            } else if (D_801C7469 == 2) {
                if (D_801C6BB9 < 0x17) {
                    D_801C6BB9++;
                } else {
                    D_801C6BB9 -= 2;
                }
            } else if (D_801C7469 == 3) {
                if (D_801C7068 < 0x17) {
                    D_801C7068++;
                } else {
                    D_801C7068 -= 2;
                }
            }
            D_801C7AB8 = 4;
            D_801C7078 = D_801C7068 + D_801C6BB9 * 24;
            result = 9;
            D_801C5EA4 = 0;
            func_8014B854(0x40);
        }
    } else if (D_801E9990[id].a == 0 && D_801E9990[id].b == 1) {
        D_801C7AB0[2] = 0;
        D_801C7AB6 = 0;
        D_801C7080[D_801C7AB0[2]].a = 4;
        D_801C7080[D_801C7AB0[2]].b = 0;
        D_801C7080[D_801C7AB0[2]].c = -1;
        D_801C7080[D_801C7AB0[2]].d = -1;
        D_801C7080[D_801C7AB0[2]].e = -1;
        D_8011F2FD[D_801C746A * 0x64] = 1;
        D_801C7469 = 4;
        result = 1;
        func_8014B854(0x3F);
    }
    return result;
}
