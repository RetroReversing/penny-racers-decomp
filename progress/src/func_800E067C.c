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

void func_800E067C(void)
{
    u16 idx;
    Obj *o;
    Pose *p;
    s32 i;

    idx = objListHead;
    do {
        if (D_8011F2F0[idx].state == 2) {
            if (D_8011F2F0[idx].anim->next != 0 && D_8011F2F0[idx].anim->next->next != 0) {
                D_8011F2F0[idx].pos[0] = (((Pose *) D_8011F2F0[idx].anim->next->next->next)->to[0] - ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[0]) * D_800E1E70 + ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[0] + D_8011F2F0[idx].base[0];
                D_8011F2F0[idx].pos[1] = (((Pose *) D_8011F2F0[idx].anim->next->next->next)->to[1] - ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[1]) * D_800E1E70 + ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[1] + D_8011F2F0[idx].base[1];
                D_8011F2F0[idx].pos[2] = (((Pose *) D_8011F2F0[idx].anim->next->next->next)->to[2] - ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[2]) * D_800E1E70 + ((Pose *) D_8011F2F0[idx].anim->next->next->next)->from[2] + D_8011F2F0[idx].base[2];
            } else {
                D_8011F2F0[idx].pos[0] = D_8011F2F0[idx].base[0];
                D_8011F2F0[idx].pos[1] = D_8011F2F0[idx].base[1];
                D_8011F2F0[idx].pos[2] = D_8011F2F0[idx].base[2];
            }
        }
        idx = D_8011F2F0[idx].next;
    } while (idx != 0xFFFF && idx >= D_80233EC0);
}
