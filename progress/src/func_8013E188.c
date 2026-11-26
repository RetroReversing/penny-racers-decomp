typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad0[8]; V3 v; s16 t14; u8 pad16[0x60]; u16 id; u16 prev; u16 next; } Node;
extern Node D_8018D6C0[];
extern s16 D_80187BE0, D_80189DC2, D_8018F5C2;
void func_8013E188(void) {
    u16 i;
    D_80187BE0 = 0x40;
    for (i = 0; i < 0x40; i++) {
        D_8018D6C0[i].v.x = D_8018D6C0[i].v.y = D_8018D6C0[i].v.z = 0.0f;
        D_8018D6C0[i].t14 = 0;
        D_8018D6C0[i].id = i;
    }
    D_8018F5C2 = 0;
    D_80189DC2 = 0x3F;
    for (i = 1; i < 0x3F; i++) {
        D_8018D6C0[i].prev = i - 1;
        D_8018D6C0[i].next = i + 1;
    }
    D_8018D6C0[0].prev = -1; D_8018D6C0[0].next = 1; D_8018D6C0[0x3F].prev = 0x3E; D_8018D6C0[0x3F].next = -1;
}
