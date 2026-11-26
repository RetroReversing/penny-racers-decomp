typedef struct { u8 pad0[0x14]; u16 f14; u8 pad16[2]; f32 f18[9]; u8 pad3C[0x24]; s32 f60; } Ent_80160930;
typedef struct { u8 pad0[4]; void *f4; u8 pad8[0xF]; u8 f17; u8 f18; u8 f19; u8 pad1A[0x4D]; u8 f67[0x15]; } Slot_80160930;
typedef struct { u8 pad0[2]; u16 f2; u16 f4; u8 pad6[0x558]; s16 f55E; u16 f560; u8 pad562[0x336]; s32 f898; u8 pad89C[0x34]; s8 f8D0; } Obj_80160930;
extern Ent_80160930 D_8011F2F0[];
extern Slot_80160930 D_8018D6C0[];
extern s32 D_802396AC;
extern void func_80160B68(void);
extern void func_801610E0(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E818(s32, s32, s32, s32, f32, f32, s32);

void func_80160930(Obj_80160930 *obj) {
    s32 ret;
    u16 slot;
    s32 id;

    id = (s32) &D_8011F2F0[obj->f2];
    if (obj->f898 == 1 && !(obj->f560 & 0x28)) {
        ret = func_8013E364();
        slot = ret & 0xFFFF;
        if (slot != 0xFFFF) {
            id = func_800DE41C(0, 0, 1, 0, 0x52, 0, &D_802396AC, func_80160B68, func_801610E0,
                               ((Ent_80160930 *) id)->f18[0], ((Ent_80160930 *) id)->f18[1], ((Ent_80160930 *) id)->f18[2], ((Ent_80160930 *) id)->f18[3], ((Ent_80160930 *) id)->f18[4], ((Ent_80160930 *) id)->f18[5], ((Ent_80160930 *) id)->f18[6], ((Ent_80160930 *) id)->f18[7], ((Ent_80160930 *) id)->f18[8]);
            if ((u16)(id + 2) < 2) {
                func_8013E49C(slot);
            } else {
                s32 idx = ret & 0xFFFF;
                id &= 0xFFFF;
                func_8013E818(idx, id, 0, 0, 0.0f, 0.0f, 0x258);
                D_8018D6C0[idx].f4 = obj;
                D_8018D6C0[idx].f17 = D_8018D6C0[idx].f18 = D_8018D6C0[idx].f19 = 0xFF;
                D_8018D6C0[idx].f67[obj->f4] = 1;
                obj->f8D0 = 0x78;
                obj->f560 |= 0x20;
                D_8011F2F0[D_8011F2F0[id].f14].f60 = D_8011F2F0[id].f60;
                if (obj->f55E > 0) {
                    obj->f55E--;
                }
            }
        }
    }
}
