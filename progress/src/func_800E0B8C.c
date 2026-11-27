typedef struct {
    u8 pad0; u8 type; u16 flags[4]; u8 group; u8 kind; u8 xC; u8 hidden; u8 padE[2];
    u16 next; u8 pad12[6]; f32 pos[3]; u8 pad24[0x18]; u16 x3C; u8 pad3E[6]; f32 alt[3]; u8 pad50[0x14];
} Obj;
extern Obj D_8011F2F0[];
extern u16 func_800E1850;
extern u8 D_80126FF6;
extern u16 D_8011F068[];
extern u16 D_800E23E0[];
extern f32 D_800E1EE0[];
f32 sqrtf(f32);
void func_800E08B4(s32, s32, u16 *);
void func_800E0A00(s32, s32, u16 *);

void func_800E0B8C(f32 x, f32 y, f32 z) {
    u16 i;
    u16 cur;
    u16 j;
    u16 end;
    u16 n;
    u16 last;
    s32 k;
    u8 kind;
    u8 group;
    Obj *o;
    f32 dx;
    f32 dy;
    f32 dz;

    i = 0;
    cur = func_800E1850;
    do {
        o = &D_8011F2F0[cur];
        if (o->x3C != 0xFFFF && !(o->flags[D_80126FF6] & 8) && o->hidden == 0) {
            D_8011F068[i] = cur;
            i++;
        }
        cur = o->next;
    } while (cur != 0xFFFF);
    D_8011F068[i] = 0xFFFF;
    D_800E23E0[i] = 0xFFFF;
    if (i - 1 > 0) {
        func_800E0A00(0, i - 1, D_8011F068);
    }
    i = 0;
    for (;;) {
        if (D_8011F068[i] == 0xFFFF) {
            return;
        }
        j = i;
        group = D_8011F2F0[D_8011F068[i]].group;
        cur = 0xFFFF;
        do {
            do {
            if (group != D_8011F2F0[D_8011F068[j]].group) {
                goto found;
            }
            } while (0);
            j++;
        } while (D_8011F068[j] != cur);
    found:
        end = j;
        if (i < end - 1) {
            n = i;
            last = end - 1;
            for (k = i; k < end; k++) {
                cur = D_8011F068[k];
                o = &D_8011F2F0[cur];
                kind = o->kind;
                if (kind != 0xB && kind != 0xC && ((kind != 5) & (kind != 8)) && kind != 0xD && kind != 0xE && o->xC == 0xFF) {
                    D_800E23E0[n] = cur;
                    n++;
                } else {
                    D_800E23E0[last] = D_8011F068[k];
                    last--;
                }
            }
            for (k = i; k < n; k++) {
                o = &D_8011F2F0[D_800E23E0[k]];
                if (o->type == 2) {
                    dx = o->alt[0] - x;
                    dy = o->alt[1] - y;
                    dz = o->alt[2] - z;
                } else {
                    dx = o->pos[0] - x;
                    dy = o->pos[1] - y;
                    dz = o->pos[2] - z;
                }
                D_800E1EE0[D_800E23E0[k]] = sqrtf(dx * dx + dy * dy + dz * dz);
            }
            if (i < n - 1) {
                func_800E08B4(i, n - 1, D_800E23E0);
            }
            for (k = n; k < end; k++) {
                o = &D_8011F2F0[D_800E23E0[k]];
                if (o->type == 2) {
                    dx = o->alt[0] - x;
                    dy = o->alt[1] - y;
                    dz = o->alt[2] - z;
                } else {
                    dx = o->pos[0] - x;
                    dy = o->pos[1] - y;
                    dz = o->pos[2] - z;
                }
                D_800E1EE0[D_800E23E0[k]] = -sqrtf(dx * dx + dy * dy + dz * dz);
            }
            if (n < end - 1) {
                func_800E08B4(n, end - 1, D_800E23E0);
            }
        } else {
            D_800E23E0[i] = D_8011F068[i];
        }
        i = end;
    }
}
