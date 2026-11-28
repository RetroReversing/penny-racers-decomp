s32 objCreate(s32, u8, s32, s32, s32, s32, void *, s32, s32 *, s32, s32, s32, s32, f32, s32, f32, f32, f32);
s32 func_8012AD20(u16, void *, u8, u8);
extern s32 sCarSlots;
extern s32 D_800DA26A;
typedef struct
{
    u16 f0;
    u8 pad[98];
} Slot_8011F304;
extern Slot_8011F304 D_8011F304[];
extern s32 sPathNodes;
extern u8 D_8018F5D0[];
extern unsigned char D_8021F0A0;
extern char D_80237DC0;
extern s32 func_8020FED8;

/* Spawns a menu entry object for one car slot at (x, y), wires its car data and returns its object id. */ s32 spawnMenuCarEntry(s32 row, s32 slot, s32 x, s32 y)
{
    s32 slotOffset;
    u8 carClass;
    s32 objId;
    void *dstBuf;

    slotOffset = slot * 0x178;
    carClass = *((u8 *) &sCarSlots + 1 + slotOffset);
    objId = 0xFFFF & objCreate(0, carClass, 1, 0, 0x5C, 0xFF, (void *) ((row * 0x1A0) + D_8018F5D0), 0, &func_8020FED8, x, y, 0, 0, -10.0f, 0, 0.02f, 0.02f, 0.02f);
    *((void **) (((char *) (*(s32 *) ((char *) &sPathNodes + D_8011F304[objId].f0 * 0x64))) + 4)) = (void *) ((carClass * 0xC) + (&D_80237DC0));
    dstBuf = (void *) ((row << 5) + (&D_8021F0A0));
    slotOffset += (s32) ((char *) &D_800DA26A + 0x160);
    func_8012AD20(D_8011F304[objId].f0, dstBuf, carClass, *((u8 *) (slotOffset + carClass)));
    return objId;
}
