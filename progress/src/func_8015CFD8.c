typedef struct { u8 pad0[8]; f32 x; f32 y; f32 z; u16 timer; u8 pad16[0x60]; u16 node; } Fx;
typedef struct { Fx *p; u8 pad[0x60]; } SlotP;
typedef struct { u16 v; u8 pad[0x62]; } SlotH;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 v; u8 pad[0x63]; } SlotB;
extern SlotP D_8011F350[];
extern SlotH D_8011F32E[];
extern SlotF D_8011F320[];
extern SlotB D_8011F2FC[];
extern SlotB D_8011F2FD[];
void func_8013EC48(u16, f32);
void func_8013EBB0(u16, f32, f32, f32);
void func_8013EB20(u16, Fx *, f32, f32, f32);
u32 func_801FA30C(void);

void func_8015CFD8(u16 id) {
    Fx *fx;

    fx = D_8011F350[id].p;
    switch (D_8011F32E[id].v) {
    case 0:
        func_8013EBB0(id, -fx->x * 0.01f, -fx->y * 0.01f, -fx->z * 0.01f);
        func_8013EC48(id, (f32)(func_801FA30C() & 8) * 0.1f + 0.3f);
        func_8013EA18(fx, 0xFF, (func_801FA30C() & 0x10) + 0xEF, 0xDF);
        if ((s16)--fx->timer < 0) {
            D_8011F32E[id].v = 1;
        }
        break;
    case 1:
        func_8013EB20(id, fx, 0.0f, -0.1f, 0.0f);
        func_8013EA90(fx, 0, (s16)-(func_801FA30C() & 7), -9);
        func_8013EC48(id, (3.0f - D_8011F320[id].v) * 0.2f + D_8011F320[id].v);
        if (D_8011F320[id].v > 2.9f) {
            D_8011F32E[id].v = 2;
        }
        break;
    case 2:
        func_8013EB20(id, fx, 0.0f, -0.15f, 0.0f);
        func_8013EA90(fx, 0, (s16)-(func_801FA30C() & 7), -9);
        func_8013EC48(id, (0.3f - D_8011F320[id].v) * 0.05f + D_8011F320[id].v);
        D_8011F2FC[id].v -= 4;
        if (D_8011F2FC[id].v < 5) {
            D_8011F32E[id].v = 3;
        }
        break;
    case 3:
        func_8013E49C(fx->node);
        D_8011F2FD[id].v = 2;
        break;
    }
}
