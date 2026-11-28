extern u8 randomMasks[];
extern u8 D_8018D3A4[];
extern u8 D_8018D3B0[];
extern u8 D_8018D3B4[];
extern u8 D_8018D3B8[];
extern u8 D_8018D3BC[];

/* Packs the property bits of one object type (32-byte table entries) into a 16-bit flag word. */
u16 getObjTypeFlags(u8 typeId)
{
    u32 flags = 0;

    if (*(u32 *)(randomMasks + ((typeId & 0xFF) << 5)) & 0x2000) {
        flags |= 0x800;
    }
    if (*(u32 *)(D_8018D3A4 + ((typeId & 0xFF) << 5)) & 0x200000) {
        flags |= 0x1;
    }
    if (*(u32 *)(D_8018D3A4 + ((typeId & 0xFF) << 5)) & 0x400000) {
        flags |= 0x2;
    }
    if (*(u32 *)(D_8018D3A4 + ((typeId & 0xFF) << 5)) & 0x800000) {
        flags |= 0x4;
    }
    if (*(u32 *)(D_8018D3A4 + ((typeId & 0xFF) << 5)) & 0x1000000) {
        flags |= 0x8;
    }
    if (*(u32 *)(D_8018D3B0 + ((typeId & 0xFF) << 5)) & 0x200) {
        flags |= 0x10;
    }
    if (*(u32 *)(D_8018D3B4 + ((typeId & 0xFF) << 5)) & 0x40) {
        flags |= 0x20;
    }
    if (*(u32 *)(D_8018D3B4 + ((typeId & 0xFF) << 5)) & 0x80) {
        flags |= 0x40;
    }
    if (*(u32 *)(D_8018D3B8 + ((typeId & 0xFF) << 5)) & 0x40000) {
        flags |= 0x80;
    }
    if (*(u32 *)(D_8018D3B8 + ((typeId & 0xFF) << 5)) & 0x80000) {
        flags |= 0x100;
    }
    if (*(u32 *)(D_8018D3B8 + ((typeId & 0xFF) << 5)) & 0x100000) {
        flags |= 0x200;
    }
    if (*(u32 *)(D_8018D3BC + ((typeId & 0xFF) << 5)) & 0x4000) {
        flags |= 0x400;
    }
    return flags & 0xFFFF;
}
