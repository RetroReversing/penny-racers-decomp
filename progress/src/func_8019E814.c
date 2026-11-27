typedef struct { u8 unk0; u8 unk1; u8 unk2; } MenuState;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; u8 unk4; } Slot;
typedef struct { u8 pad0[2]; s8 x; s8 y; u8 pad[0x24]; u32 cnt0; u32 cnt1; s32 unk2E; s32 unk32; u8 pad2[0x70 - 0x38]; } Pad;
typedef struct { u8 pad0[0xD]; u8 unkD; u8 pad[0x64 - 0xE]; } Part;
typedef struct { u8 pad[8]; } Row;
extern Pad D_801E9958[];
extern Part D_8011F2F0[];
extern u8 D_801C5E8B[];
extern u8 D_801C5E8D[];
extern u8 D_801C5E90[];
extern u8 D_801C5E92[];
extern u16 D_801C6BB4;
extern u16 D_801C7066;
extern s8 D_801C7070;
extern u16 D_801C7078;
extern Slot D_801C7081[];
extern u8 D_801C7468;
extern MenuState *D_801C7AB0;
extern u8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7ABC;
extern Row *D_801C7AC4;
extern u16 D_801C7D1A[];
extern u8 D_801CA130;
extern s8 D_801CA138;
extern Row D_8031445C[];
s8 func_80190D40(s8);
void func_801BD7E8(void);
void func_8014B854(s32);
#define CLEAR_NEW() \
    for (i = 0; i < 4; i++) { \
        if (D_801C7D1A[i] != 0xFFFF) { \
            D_8011F2F0[D_801C7D1A[i]].unkD = 2; \
            D_801C7D1A[i] = 0xFFFF; \
        } \
    }

void func_8019E814(u16 arg0)
{
    u8 i;
    u8 id;

    if (D_801C7AB5 == 0 && D_801C7078 != D_801C6BB4 && D_801C7078 != D_801C7066) {
        if (D_801E9958[arg0].x >= 0x33 && D_801E9958[arg0].cnt0 % 15 == 1) {
            D_801CA138 = 1;
            D_801C7AB4++;
            if (D_801C7AB0->unk0 == 3) {
                if ((s8)D_801C7AB4 == 0x2A) {
                    D_801C7AB4 = 0;
                }
                if (D_801CA130 == D_801C7AB0->unk2) {
                    D_801C7070 = func_80190D40(D_801C7AB4);
                } else if (D_801C7468 == 0x78) {
                    if (D_801C7AB4 >= 0x16 && D_801C7AB4 < 0x2A) {
                        D_801C7070 = 0x3C;
                    } else {
                        D_801C7070 = 0x78;
                    }
                }
            } else if (D_801C7AB0->unk0 == 4) {
                if ((s8)D_801C7AB4 == 0x58) {
                    D_801C7AB4 = 0x2E;
                }
                if (D_801CA130 == D_801C7AB0->unk2) {
                    D_801C7070 = func_80190D40(D_801C7AB4);
                } else if (D_801C7468 == 0x78) {
                    if (D_801C7AB4 >= 0x44 && D_801C7AB4 < 0x58) {
                        D_801C7070 = 0x3C;
                    } else {
                        D_801C7070 = 0x78;
                    }
                }
            }
            CLEAR_NEW();
            D_801C7AC4 = &D_8031445C[(s8)D_801C7AB4];
            func_801BD7E8();
            func_8014B854(0x3B);
        } else if (D_801E9958[arg0].x < -0x32 && D_801E9958[arg0].cnt1 % 15 == 1) {
            D_801CA138 = -1;
            D_801C7AB4--;
            if (D_801C7AB0->unk0 == 3) {
                if ((s8)D_801C7AB4 == -1) {
                    D_801C7AB4 = 0x29;
                }
                if (D_801CA130 == D_801C7AB0->unk2) {
                    D_801C7070 = func_80190D40(D_801C7AB4);
                } else if (D_801C7468 == 0x78) {
                    if (D_801C7AB4 >= 0x16 && D_801C7AB4 < 0x2A) {
                        D_801C7070 = 0x3C;
                    } else {
                        D_801C7070 = 0x78;
                    }
                }
            } else if (D_801C7AB0->unk0 == 4) {
                if ((s8)D_801C7AB4 == 0x2D) {
                    D_801C7AB4 = 0x57;
                }
                if (D_801CA130 == D_801C7AB0->unk2) {
                    D_801C7070 = func_80190D40(D_801C7AB4);
                } else if (D_801C7468 == 0x78) {
                    if (D_801C7AB4 >= 0x44 && D_801C7AB4 < 0x58) {
                        D_801C7070 = 0x3C;
                    } else {
                        D_801C7070 = 0x78;
                    }
                }
            }
            CLEAR_NEW();
            D_801C7AC4 = &D_8031445C[(s8)D_801C7AB4];
            func_801BD7E8();
            func_8014B854(0x3B);
        }
    }
    if (D_801CA138 == 0) {
        if (D_801E9958[arg0].x >= -0x13 && D_801E9958[arg0].x < 0x14) {
            if (D_801E9958[arg0].y >= 0x33 && D_801E9958[arg0].unk2E == 1) {
                if ((D_801C7ABC & 1) && D_801C7AB5 == 0) {
                    D_801CA138 = 1;
                    D_801C7AB5 = 0x3C;
                    if (D_801C7AB0->unk0 == 3) {
                        id = D_801C7081[D_801CA130].unk3;
                    } else {
                        id = D_801C7081[D_801CA130].unk3 - 0x2E;
                    }
                    if (D_801C7081[D_801CA130].unk0 == 0x3C && (u8)(id - 0x16) < 0x14) {
                        D_801C7070 = 0x78;
                        if ((u8)(id - 0x16) < 0x5) {
                            D_801C7AB4 = D_801C5E92[(s8)id];
                        } else if ((u8)(id - 0x1B) < 0x5) {
                            D_801C7AB4 = D_801C5E8D[(s8)id];
                        } else if ((u8)(id - 0x20) < 0x5) {
                            D_801C7AB4 = D_801C5E90[(s8)id];
                        } else if ((u8)(id - 0x25) < 0x5) {
                            D_801C7AB4 = D_801C5E8B[(s8)id];
                        }
                        if (D_801C7AB0->unk0 == 4) {
                            D_801C7AB4 += 0x2E;
                        }
                        CLEAR_NEW();
                        D_801C7AC4 = &D_8031445C[(s8)D_801C7AB4];
                        func_801BD7E8();
                    } else {
                        D_801C7070 = D_801C7081[D_801CA130].unk0 + 0x3C;
                    }
                    func_8014B854(0x3B);
                }
            } else if (D_801E9958[arg0].y < -0x32 && D_801E9958[arg0].unk32 == 1) {
                if ((D_801C7ABC & 2) && D_801C7AB5 == 0) {
                    D_801CA138 = -1;
                    D_801C7AB5 = -0x3C;
                    if (D_801C7AB0->unk0 == 3) {
                        id = D_801C7081[D_801CA130].unk3;
                    } else {
                        id = D_801C7081[D_801CA130].unk3 - 0x2E;
                    }
                    if (D_801C7081[D_801CA130].unk0 == 0 && (u8)(id - 0x16) < 0x14) {
                        D_801C7070 = 0;
                        if ((u8)(id - 0x16) < 0x5) {
                            D_801C7AB4 = D_801C5E92[(s8)id];
                        } else if ((u8)(id - 0x1B) < 0x5) {
                            D_801C7AB4 = D_801C5E8D[(s8)id];
                        } else if ((u8)(id - 0x20) < 0x5) {
                            D_801C7AB4 = D_801C5E90[(s8)id];
                        } else if ((u8)(id - 0x25) < 0x5) {
                            D_801C7AB4 = D_801C5E8B[(s8)id];
                        }
                        if (D_801C7AB0->unk0 == 4) {
                            D_801C7AB4 += 0x2E;
                        }
                        CLEAR_NEW();
                        D_801C7AC4 = &D_8031445C[(s8)D_801C7AB4];
                        func_801BD7E8();
                    } else {
                        D_801C7070 = D_801C7081[D_801CA130].unk0 - 0x3C;
                    }
                    func_8014B854(0x3B);
                }
            }
        }
    } else {
        D_801C7ABC = 0;
    }
}
