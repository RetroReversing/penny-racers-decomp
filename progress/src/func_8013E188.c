typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad0[8]; V3 v; s16 t14; u8 pad16[0x60]; u16 id; u16 prev; u16 next; } Node;
extern Node hitSlots[];
extern s16 nodeListCount, nodeListTail, nodeListHead;
void func_8013E188(void) {
    u16 i;
    nodeListCount = 0x40;
    for (i = 0; i < 0x40; i++) {
        hitSlots[i].v.x = hitSlots[i].v.y = hitSlots[i].v.z = 0.0f;
        hitSlots[i].t14 = 0;
        hitSlots[i].id = i;
    }
    nodeListHead = 0;
    nodeListTail = 0x3F;
    for (i = 1; i < 0x3F; i++) {
        hitSlots[i].prev = i - 1;
        hitSlots[i].next = i + 1;
    }
    hitSlots[0].prev = -1; hitSlots[0].next = 1; hitSlots[0x3F].prev = 0x3E; hitSlots[0x3F].next = -1;
}
