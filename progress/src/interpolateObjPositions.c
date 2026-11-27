typedef struct { s16 v[4]; } Key;
typedef struct {
    u8 pad0[0x40];
    s16 to[8];
    s16 from[8];
} Pose;
typedef struct Node { s32 a; struct Node *next; } Node;
typedef struct {
    u8 id;
    u8 state;
    u16 flags;
    u8 pad4[12];
    u16 next;
    u8 pad12[6];
    f32 base[3];
    u8 pad24[0x20];
    f32 pos[3];
    Node *anim;
    u8 pad54[0x10];
} Obj;
extern Obj D_8011F2F0[];
extern f64 D_800E1E70;
extern u16 D_80233EC0;
extern u16 objListHead;

/* Walks the object list. For each object in state 2 with an animation track, sets its
   position to the base offset plus the current keyframe pair interpolated by D_800E1E70;
   objects without a full track sit at their base position. */
void interpolateObjPositions(void)
{
    u16 objIdx;
    Obj *o;
    Pose *p;
    s32 i;

    objIdx = objListHead;
    do {
        if (D_8011F2F0[objIdx].state == 2) {
            if (D_8011F2F0[objIdx].anim->next != 0 && D_8011F2F0[objIdx].anim->next->next != 0) {
                D_8011F2F0[objIdx].pos[0] = (((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->to[0] - ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[0]) * D_800E1E70 + ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[0] + D_8011F2F0[objIdx].base[0];
                D_8011F2F0[objIdx].pos[1] = (((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->to[1] - ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[1]) * D_800E1E70 + ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[1] + D_8011F2F0[objIdx].base[1];
                D_8011F2F0[objIdx].pos[2] = (((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->to[2] - ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[2]) * D_800E1E70 + ((Pose *) D_8011F2F0[objIdx].anim->next->next->next)->from[2] + D_8011F2F0[objIdx].base[2];
            } else {
                D_8011F2F0[objIdx].pos[0] = D_8011F2F0[objIdx].base[0];
                D_8011F2F0[objIdx].pos[1] = D_8011F2F0[objIdx].base[1];
                D_8011F2F0[objIdx].pos[2] = D_8011F2F0[objIdx].base[2];
            }
        }
        objIdx = D_8011F2F0[objIdx].next;
    } while (objIdx != 0xFFFF && objIdx >= D_80233EC0);
}
