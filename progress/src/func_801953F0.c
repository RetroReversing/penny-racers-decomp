typedef struct {
  u8 unk0; u8 pad1[3]; u16 unk4; u8 pad6[4]; u8 unkA; u8 unkB; u8 unkC; u8 unkD; u8 padE[0x30]; u16 st; u8 pad40[0x24];
} R931;
typedef struct { s32 unk0; u32 unk4; u8 pad[0x68]; } Q931;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E931;
typedef struct { u8 unk0; u8 unk1; u8 pad2[2]; u8 *unk4; u8 pad8[8]; } M931;
typedef struct { u8 unk0; u8 unk1; u8 unk2; } H931;
typedef struct { s8 x; s8 z; s8 w; s8 pad3; u16 sel; } S931;
extern R931 D_8011F2F0[];
extern Q931 D_801E9990[];
extern E931 D_801C7080[];
extern M931 D_801C7D30[];
extern u8 D_8031445C[][8];
extern H931 *D_801C7AB0;
extern u16 D_801C7074;
extern S931 D_801C6BB0;
extern u16 D_801C6BB6;
extern u16 D_801C6BE0[];
extern u16 D_801C7470[];
extern u8 D_801C7AD8[];
extern u8 D_801C7469;
extern u16 D_801C746A;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern u8 D_801C7064;
extern u16 D_801C7066;
extern u8 D_801C7068;
extern u8 D_801C6BB9;
extern u8 D_801C6B20;
extern u8 D_801C6B21;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern u8 D_801C6B27;
extern u16 D_801C7078;
extern u16 D_801C5EA4;
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8014B854(s32);
void func_8019F7C0(u16);
u8 func_80199EAC(u16);
void func_801948E0(u8 *);
void func_80194B98(u8 *);
void func_80194E60(u8 *);
void func_80195124(u8 *);
void func_801BFA1C(u8, u8);

#define MAP(t) \
      D_801C7D30[D_801C7078].unk0 = 0; \
      D_801C7D30[D_801C7078].unk1 = 1; \
      D_801C7D30[D_801C7078].unk4 = D_8031445C[(s8)t]; \
      id = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C7078], 0, 0, \
                         (s8) D_801C7068 * 400.0f * 0.5f, 0, (s8) D_801C6BB9 * 400.0f * 0.5f, \
                         0, 0, 0, 0.5f, 0.5f, 0.5f); \
      D_8011F2F0[id].unk4 |= 8; \
      D_801C6BE0[D_801C7078] = id; \
      D_801C7AD8[D_801C7078] = D_801C7AB0->unk2; \
      D_801C7080[D_801C7AB0->unk2].a = D_801C7AB8; \
      D_801C7080[D_801C7AB0->unk2].b = 0; \
      D_801C7080[D_801C7AB0->unk2].c = D_801C7068; \
      D_801C7080[D_801C7AB0->unk2].d = D_801C6BB9; \
      D_801C7080[D_801C7AB0->unk2].e = t;

#define ERR \
      func_8014B854(0x3E); \
      D_8011F2F0[D_801C7074].unk0 = D_8011F2F0[D_801C7074].st; \
      D_8011F2F0[D_801C7074].st = 0xD; \
      D_801C5EA4 = 0;

#define DONE \
      D_801C6B27 = D_801C7AB0->unk2; \
      D_801C7AB0->unk2++; \
      D_801C7AB6++; \
      D_801C6B25 = D_801C7AB8; \
      D_801C7AB8 = 4; \
      sel = 4; \
      D_801C6B24 = 0;

void func_801953F0(u16 arg0)
{
  u8 sel;
  u16 id;
  u8 i;

  func_8019F7C0(arg0);
  sel = func_80199EAC(arg0);
  if (sel == 0) {
    func_801948E0(&sel);
  } else if (sel == 1) {
    func_80194B98(&sel);
  } else if (sel == 2) {
    func_80194E60(&sel);
  } else if (sel == 3) {
    func_80195124(&sel);
  }
  if (D_801C6B24 != 0) {
    u8 unused[0xA0];
    if (sel != 4 && (D_801C7AB8 == 4 || D_801C7AB8 != sel)) {
      D_801C7AB8 = sel;
      D_801C7D30[D_801C7078].unk0 = 0;
      D_801C7D30[D_801C7078].unk1 = 1;
      D_801C7D30[D_801C7078].unk4 = D_8031445C[(s8)D_801C6B20];
      D_801C7080[D_801C6B27].a = D_801C7AB8;
      D_801C7080[D_801C6B27].b = 0;
      D_801C7080[D_801C6B27].c = D_801C7068;
      D_801C7080[D_801C6B27].d = D_801C6BB9;
      D_801C7080[D_801C6B27].e = D_801C6B20;
    }
    if (D_801E9990[arg0].unk0 == 1 && D_801E9990[arg0].unk4 == 0) {
      D_801C7078 = ((s8) D_801C7068 + (s8) D_801C6B22) + ((s8) D_801C6BB9 + (s8) D_801C6B23) * 0x18;
      if (D_801C7078 == D_801C7066) {
        if (D_801C7AB6 + 1 > 200) {
          ERR
        } else {
          D_801C7068 += D_801C6B22;
          D_801C6BB9 += D_801C6B23;
          if (D_801C7AB0->unk1 == 6) {
            if (D_801C7AB8 == 0) {
              D_801C6B21 = 0x2A;
            } else if (D_801C7AB8 == 2) {
              D_801C6B21 = 0x2B;
            } else if (D_801C7AB8 == 1) {
              D_801C6B21 = 0x2C;
            } else if (D_801C7AB8 == 3) {
              D_801C6B21 = 0x2D;
            }
            if (D_801C7AB0->unk0 == 4) {
              D_801C6B21 += 0x2E;
            }
            D_801C7064 = D_801C6B21;
          }
          MAP(D_801C6B21)
          D_801C7AB6 -= 4;
          func_801BFA1C(D_801C7AB0->unk2, 1);
          DONE
          D_8011F2F0[D_801C746A].unkA = 0x5B;
          D_8011F2F0[D_801C746A].unkC = 0x64;
          D_8011F2F0[D_801C6BB6].unkA = 0x5B;
          D_8011F2F0[D_801C6BB6].unkC = 0x64;
          D_8011F2F0[D_801C7074].st = 0xE;
          func_8014B854(0x40);
        }
      } else {
        if (D_801C7AB6 == 200) {
          ERR
        } else {
          D_801C7068 += D_801C6B22;
          D_801C6BB9 += D_801C6B23;
          MAP(D_801C6B21)
          DONE
          func_8014B854(0x40);
        }
      }
    }
  }
  if (D_801E9990[arg0].unk4 % 20 == 1) {
    if (D_801C6BE0[D_801C7078] != 0xFFFF) {
      D_8011F2F0[D_801C6BE0[D_801C7078]].unkD = 2;
      D_801C6BE0[D_801C7078] = 0xFFFF;
      D_801C7AD8[D_801C7078] = 0xFF;
      D_801C7AB0->unk2--;
      D_801C7AB6--;
      D_801C7080[D_801C7AB0->unk2].a = 4;
      D_801C7080[D_801C7AB0->unk2].b = 0;
      D_801C7080[D_801C7AB0->unk2].c = -1;
      D_801C7080[D_801C7AB0->unk2].d = -1;
      D_801C7080[D_801C7AB0->unk2].e = -1;
      D_801C6B27--;
      D_801C7068 = D_801C7080[D_801C6B27].c;
      D_801C6BB9 = D_801C7080[D_801C6B27].d;
      D_801C7078 = (s8) D_801C7068 + (s8) D_801C6BB9 * 0x18;
      D_801C7AB8 = 4;
      sel = 4;
      if (D_801C6B27 == 0) {
        D_801C6B25 = D_801C7469;
      } else {
        D_801C6B25 = D_801C7080[D_801C6B27 - 1].a;
      }
      if (D_801C6B25 == 0 || D_801C6B25 == 2) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1 || D_801C6B25 == 3) {
        D_801C6B20 = 0;
      }
      if (D_801C7AB0->unk0 == 4) {
        D_801C6B20 += 0x2E;
      }
      D_801C7D30[(u16)(D_801C7080[D_801C6B27].c + D_801C7080[D_801C6B27].d * 0x18)].unk4 = D_8031445C[(s8)D_801C6B20];
      D_801C7080[D_801C6B27].e = D_801C6B20;
      D_801C6B24 = 0;
      D_801C6B26 = 4;
    }
    if (D_801C7078 == D_801C6BB0.sel) {
      D_8011F2F0[D_801C746A].unkD = 2;
      D_8011F2F0[D_801C6BB6].unkD = 2;
      D_8011F2F0[D_801C6BE0[D_801C6BB0.sel]].unkD = 2;
      if (D_801C7AB0->unk1 != 5) {
        for (i = 0; i < 4; i++) {
          if (D_801C7470[i] != 0xFFFF) {
            D_8011F2F0[D_801C7470[i]].unkD = 2;
            D_801C7470[i] = 0xFFFF;
          }
        }
      }
      D_801C6BE0[D_801C6BB0.sel] = 0xFFFF;
      D_801C7AD8[D_801C6BB0.sel] = 0xFF;
      D_801C7469 = 4;
      D_801C7AB0->unk2 = 0;
      D_801C7AB6 = 0;
      D_801C7080[D_801C7AB0->unk2].a = 4;
      D_801C7080[D_801C7AB0->unk2].b = 0;
      D_801C7080[D_801C7AB0->unk2].c = -1;
      D_801C7080[D_801C7AB0->unk2].d = -1;
      D_801C7080[D_801C7AB0->unk2].e = -1;
      D_801C7068 = D_801C6BB0.x;
      D_801C6BB9 = D_801C6BB0.z;
      D_801C7078 = D_801C6BB0.sel;
      D_8011F2F0[D_801C7074].st = 1;
      D_801C6B24 = 0;
      D_801C6B26 = 4;
    }
    func_8014B854(0x3F);
  }
}
