extern u16 D_8006FB10;
extern u8 *trackInfo;
extern u8 *D_802352CC[];
extern f32 D_80235300[];
extern f32 D_80235620[];
extern f32 D_80235940[];
f32 sqrtf(f32);
typedef struct { f32 x; f32 y; f32 z; u8 pad[0x58]; } Rec64;
extern Rec64 D_8011F308[];
typedef struct { f32 x; f32 z; u8 pad[0x20]; f32 dx; f32 dz; u8 pad2[0x3C]; } Row6C;
typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0x590];
    s16 unk594;
    u8 pad596;
    u8 unk597;
    f32 unk598;
    s32 unk59C;
    u8 pad5A0[0x2D9];
    u8 unk879;
    u8 pad87A[0x62];
    Row6C *unk8DC;
} Obj;

void func_80223DB0(Obj *obj) {
    Row6C *row;
    u8 *tbl;
    f32 dx;
    f32 dz;

    tbl = D_802352CC[D_8006FB10];
    row = &obj->unk8DC[tbl[obj->unk597 * 2]];
    dx = D_8011F308[obj->unk2].x - (row->dx * 50.0f + row->x);
    dz = D_8011F308[obj->unk2].z - (row->dz * 50.0f + row->z);
    obj->unk598 = sqrtf(dx * dx + dz * dz);
    if (D_8006FB10 == 0 && trackInfo[1] == 6) {
        switch (obj->unk879) {
        case 0:
            obj->unk59C = (s32) D_80235620[obj->unk597] + (s32) ((D_80235940[obj->unk597] - obj->unk598) * D_80235300[obj->unk597]);
            break;
        case 4:
            obj->unk59C = 0x12C;
            break;
        }
    } else {
        obj->unk59C = obj->unk594 * 0x64 + (s32) D_80235620[obj->unk597] + (s32) ((D_80235940[obj->unk597] - obj->unk598) * D_80235300[obj->unk597]);
    }
}
