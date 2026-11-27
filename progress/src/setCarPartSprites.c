typedef struct { f32 f0; f32 f4; f32 f8; f32 fC; } FRow;
typedef struct { u8 pad[0xC]; } Rec0C;
typedef struct { s32 unk0; void *unk4; } Sub;
typedef struct { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; f32 unk24; u8 pad28[0x28]; Sub *unk50; u8 pad54[0x10]; } Obj;
typedef struct { u8 pad0[2]; u16 unk2; u8 pad4[0x22C]; u16 unk230; u8 pad232[0x302]; u16 unk534; u8 pad536[2]; u16 unk538; u16 unk53A; } Car;
extern u16 carPartIdsA[];
extern u16 carPartIdsB[];
extern u16 carPartIdsC[];
extern Obj carPartObjs[];
extern Obj carPartObjsB[];
extern Obj carPartObjsC[];
extern Rec0C carPartSpriteInfo[];
extern u8 carPartFrameTable[][16];
extern FRow carPartFrameUvs[];

/* Points each of a car's three part-sprite slots at the sprite for its current part id and frame, or clears it when the part is empty. */
void setCarPartSprites(Car *arg0)
{
    u16 partId;
    Obj *partObj;
    s32 frame;

    partId = carPartIdsA[arg0->unk53A];
    partObj = &carPartObjs[arg0->unk2];
    if (partId != 0) {
        partObj->unk50->unk4 = &carPartSpriteInfo[partId];
        frame = carPartFrameTable[partId][arg0->unk230];
        partObj->unk18 = carPartFrameUvs[frame].f0;
        partObj->unk1C = carPartFrameUvs[frame].f4;
        partObj->unk20 = carPartFrameUvs[frame].f8;
        partObj->unk24 = carPartFrameUvs[frame].fC;
    } else {
        partObj->unk50->unk4 = 0;
    }
    partId = carPartIdsB[arg0->unk538];
    partObj = &carPartObjsB[arg0->unk2];
    if (partId != 0) {
        partObj->unk50->unk4 = &carPartSpriteInfo[partId];
        frame = carPartFrameTable[partId][arg0->unk230];
        partObj->unk18 = carPartFrameUvs[frame].f0;
        partObj->unk1C = carPartFrameUvs[frame].f4;
        partObj->unk20 = carPartFrameUvs[frame].f8;
        partObj->unk24 = carPartFrameUvs[frame].fC;
    } else {
        partObj->unk50->unk4 = 0;
    }
    partId = carPartIdsC[arg0->unk534];
    partObj = &carPartObjsC[arg0->unk2];
    if (partId != 0) {
        partObj->unk50->unk4 = &carPartSpriteInfo[partId];
        frame = carPartFrameTable[partId][arg0->unk230];
        partObj->unk18 = carPartFrameUvs[frame].f0;
        partObj->unk1C = carPartFrameUvs[frame].f4;
        partObj->unk20 = carPartFrameUvs[frame].f8;
        partObj->unk24 = carPartFrameUvs[frame].fC;
    } else {
        partObj->unk50->unk4 = 0;
    }
}
