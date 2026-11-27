typedef struct { u8 pad[0x3E]; u16 state; u8 pad40[0x24]; } Rec;
typedef struct { s32 w0, w4, w8, wC, w10, w14, w18, w1C, w20, w24, w28, w2C, w30, w34, w38, w3C, w40, w44; u8 pad[0x28]; } Pad;
typedef struct { f32 x, y, dist, yaw, pitch; } Cam;
typedef struct { f32 a, b, c, d, e, f; u8 pad[0xC]; } Obj;
typedef struct { u8 pad[0x210C]; s16 f210C; } Big;
extern Rec D_8011F2F0[];
extern Pad D_801E9980[];
extern Cam D_801C6BC0;
extern Obj D_80221080[];
extern Big sRowBoard;
extern s8 D_801C57C9, cursorX, cursorY;
extern u8 D_801C57C8, D_801C6B40;
extern f32 D_801C57C0, D_801C57C4;
extern u16 hudSlotIndex;
extern f32 func_80033640(f32);
extern f32 func_80032320(f32);

void updateBoardCamera(u16 id) {
    s32 n;
    s32 k;
    u32 a;
    f32 t;
    f32 u;

    if (D_801C57C9 == 0) {
        if (D_8011F2F0[hudSlotIndex].state != 0x14) {
            if (D_801E9980[id].w28 == 1) {
                if (D_801E9980[id].w2C == 0 && D_801E9980[id].w18 == 0 && D_801E9980[id].w1C == 0) {
                    D_801C57C9 = 10;
                    if (D_801C6BC0.yaw == 360.0f) {
                        D_801C6BC0.yaw = 0.0f;
                    }
                }
            } else if (D_801E9980[id].w2C == 1) {
                if (D_801E9980[id].w28 == 0 && D_801E9980[id].w18 == 0 && D_801E9980[id].w1C == 0) {
                    D_801C57C9 = -10;
                    if (D_801C6BC0.yaw == 0.0f) {
                        D_801C6BC0.yaw = 360.0f;
                    }
                }
            }
        }
    } else if (D_801C57C9 > 0) {
        D_801C6BC0.yaw += 9.0f;
        D_801C57C9--;
    } else if (D_801C57C9 < 0) {
        D_801C6BC0.yaw -= 9.0f;
        D_801C57C9++;
    }
    if (D_801E9980[id].w44) {
        if (D_8011F2F0[hudSlotIndex].state != 0x14) {
            if (D_801E9980[id].w20) {
                D_801C6BC0.pitch += 1.0f;
                if (85.0f < D_801C6BC0.pitch) {
                    D_801C6BC0.pitch = 85.0f;
                }
            } else if (D_801E9980[id].w24) {
                D_801C6BC0.pitch -= 1.0f;
                if (D_801C6BC0.pitch < 5.0f) {
                    D_801C6BC0.pitch = 5.0f;
                }
            }
        }
    } else if (D_8011F2F0[hudSlotIndex].state != 0x14) {
        a = D_801E9980[id].w20;
        if (a != 0 && D_801E9980[id].w24 == 0 && D_801E9980[id].w18 == 0 && D_801E9980[id].w1C == 0) {
            if (1000.0f < D_801C6BC0.dist) {
                if (a > 0x14) {
                    D_801C6BC0.dist -= 20.0f;
                } else {
                    D_801C6BC0.dist -= 5.0f;
                }
                D_801C57C8 = 1;
                if (D_801C6BC0.dist < 1000.0f) {
                    D_801C6BC0.dist = 1000.0f;
                }
            }
        }
        a = D_801E9980[id].w24;
        if (a != 0 && D_801E9980[id].w20 == 0 && D_801E9980[id].w18 == 0 && D_801E9980[id].w1C == 0) {
            if (D_801C6BC0.dist < 5000.0f) {
                if (a > 0x14) {
                    D_801C6BC0.dist += 20.0f;
                } else {
                    D_801C6BC0.dist += 5.0f;
                }
                D_801C57C8 = 1;
                if (5000.0f < D_801C6BC0.dist) {
                    D_801C6BC0.dist = 5000.0f;
                }
            }
        }
        if (D_801E9980[id].w20 == 0 || D_801E9980[id].w24 != 0) {
            if (D_801E9980[id].w8 == 1 || D_801E9980[id].wC == 1 || D_801E9980[id].w4 == 1 || D_801E9980[id].w0 == 1) {
                D_801C57C8 = 0;
            }
        }
    }
    n = sRowBoard.f210C;
    if (D_801C6BC0.dist == 5000.0f) {
        if (D_801C6BC0.x != 11.5f) {
            if (D_801C57C0 == 0.0f) {
                D_801C57C0 = (11.5f - D_801C6BC0.x) / 30.0f;
                D_801C6B40 = 0;
            } else {
                D_801C6BC0.x += D_801C57C0;
                if (D_801C6B40 == 30) {
                    D_801C6BC0.x = 11.5f;
                    D_801C57C0 = 0.0f;
                    D_801C57C8 = 0;
                }
            }
        }
        if (D_801C6BC0.y != 11.5f) {
            if (D_801C57C4 == 0.0f) {
                D_801C57C4 = (11.5f - D_801C6BC0.y) / 30.0f;
                D_801C6B40 = 0;
            } else {
                D_801C6BC0.y += D_801C57C4;
                if (D_801C6B40 == 30) {
                    D_801C6BC0.y = 11.5f;
                    D_801C57C4 = 0.0f;
                    D_801C57C8 = 0;
                }
            }
        }
        if (D_801C6B40 < 30) {
            D_801C6B40++;
        }
        D_80221080[n].d = D_801C6BC0.x * 400.0f * 0.5f;
        D_80221080[n].e = 0.0f;
        D_80221080[n].f = D_801C6BC0.y * 400.0f * 0.5f;
    } else {
        if (D_801C57C8 != 1) {
            D_801C6BC0.x = cursorX;
            D_801C6BC0.y = cursorY;
        }
        if (D_801C6BC0.x != cursorX) {
            if (D_801C57C0 == 0.0f) {
                D_801C57C0 = (cursorX - D_801C6BC0.x) / 30.0f;
                D_801C6B40 = 0;
            } else {
                D_801C6BC0.x += D_801C57C0;
                if (D_801C6B40 == 30) {
                    D_801C6BC0.x = cursorX;
                    D_801C57C0 = 0.0f;
                    D_801C57C8 = 0;
                }
            }
        }
        if (D_801C6BC0.y != cursorY) {
            if (D_801C57C4 == 0.0f) {
                D_801C57C4 = (cursorY - D_801C6BC0.y) / 30.0f;
                D_801C6B40 = 0;
            } else {
                D_801C6BC0.y += D_801C57C4;
                if (D_801C6B40 == 30) {
                    D_801C6BC0.y = cursorY;
                    D_801C57C4 = 0.0f;
                    D_801C57C8 = 0;
                }
            }
        }
        if (D_801C6B40 < 30) {
            D_801C6B40++;
        }
        if (D_801C57C8 == 1) {
            D_80221080[n].d = D_801C6BC0.x * 400.0f * 0.5f;
            D_80221080[n].e = 0.0f;
            D_80221080[n].f = D_801C6BC0.y * 400.0f * 0.5f;
        } else {
            D_80221080[n].d = cursorX * 400.0f * 0.5f;
            D_80221080[n].e = 0.0f;
            D_80221080[n].f = cursorY * 400.0f * 0.5f;
        }
    }
    k = n * 36;
    t = func_80033640(D_801C6BC0.yaw * 3.14159265f / 180.0f) * D_801C6BC0.dist;
    *(f32 *)((u8 *)D_80221080 + k + 0) = t - func_80033640(D_801C6BC0.yaw * 3.14159265f / 180.0f) * func_80033640(D_801C6BC0.pitch * 3.14159265f / 180.0f) * D_801C6BC0.dist + *(f32 *)((u8 *)D_80221080 + k + 12);
    *(f32 *)((u8 *)D_80221080 + k + 4) = func_80033640(D_801C6BC0.pitch * 3.14159265f / 180.0f) * D_801C6BC0.dist + *(f32 *)((u8 *)D_80221080 + k + 16);
    u = func_80032320(D_801C6BC0.yaw * 3.14159265f / 180.0f) * D_801C6BC0.dist;
    *(f32 *)((u8 *)D_80221080 + k + 8) = u - func_80032320(D_801C6BC0.yaw * 3.14159265f / 180.0f) * func_80033640(D_801C6BC0.pitch * 3.14159265f / 180.0f) * D_801C6BC0.dist + *(f32 *)((u8 *)D_80221080 + k + 20);
}
