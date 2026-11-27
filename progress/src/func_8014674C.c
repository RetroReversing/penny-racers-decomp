typedef struct { u8 count; u8 pad1[0x3D]; u16 state; u8 pad[0x24]; } R;
extern R D_8011F2F0[];
extern u8 D_80189B36[];
extern u16 D_80189C98;
extern u8 D_80189C9A[];
extern u16 D_80189CC6[];
extern u8 D_8018A276;
extern u8 D_8018A277[];
s32 func_8014A870(s32, s32, u8);
void func_8014B854(s32);

void func_8014674C(u16 arg0)
{
    R *p;
    u8 changed = 0;
    s32 flags = 0;
    s32 snd;

    p = &D_8011F2F0[arg0];
    if (D_80189CC6[0] & 0x800) {
        flags = func_8014A870(0x14, 3, ((u8 *)D_80189CC6)[-8]);
        if (flags & 1) {
            if (((u8 *)D_80189CC6)[-0x2C] != 0) {
                changed = 1;
                ((u8 *)D_80189CC6)[-0x2C]--;
            }
        }
        if (flags & 2) {
            if (D_80189C9A[0] != D_8018A276 - 1) {
                changed = 1;
                D_80189C9A[0]++;
            }
        }
    } else {
        switch (p->state) {
        case 0:
            p->count++;
            if (p->count >= 0x15) {
                p->count = 0;
                p->state = 1;
            }
            break;
        case 1:
            p->count++;
            if (D_80189C9A[0] != D_80189C9A[2]) {
                if (!(p->count & 0xF)) {
                    changed = 1;
                    D_80189C9A[0]++;
                }
            } else {
                p->count = 0;
                p->state = 2;
            }
            break;
        case 2:
            p->count++;
            if (p->count >= 0x1F) {
                flags |= 0x10;
            }
            break;
        }
    }
    if (changed) {
        func_8014B854(0x3B);
    }
    if (flags & 0x10) {
        snd = 0x3E;
        if (!(D_8018A277[D_80189C9A[0]] & 0x10)) {
            snd = 0x3D;
            D_80189B36[0] &= 0xEF;
            *(s16 *)(D_80189C9A - 2) = 0x30;
        }
        func_8014B854(snd);
    }
}
