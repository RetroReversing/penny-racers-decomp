typedef struct {
    u8 pad0; u8 type; u16 flags[4]; u8 group; u8 kind; u8 xC; u8 hidden; u8 padE[2];
    u16 next; u8 pad12[6]; f32 pos[3]; u8 pad24[0x18]; u16 x3C; u8 pad3E[6]; f32 alt[3]; u8 pad50[0x14];
} Obj;
extern Obj D_8011F2F0[];
extern u16 objListHead;
extern u8 viewIndex;
extern u16 visibleObjList[];
extern u16 drawOrderList[];
extern f32 objDepth[];
f32 sqrtf(f32);
void sortObjIndicesByDepth(s32, s32, u16 *);
void sortObjIndicesByGroup(s32, s32, u16 *);

/* Builds the visible object list from the linked object list, sorts it into draw order by group and camera depth, and stores the result in drawOrderList. */ void sortViewObjects(f32 camX, f32 camY, f32 camZ) {
    u16 listPos;
    u16 objIdx;
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

    listPos = 0;
    objIdx = objListHead;
    do {
        o = &D_8011F2F0[objIdx];
        if (o->x3C != 0xFFFF && !(o->flags[viewIndex] & 8) && o->hidden == 0) {
            visibleObjList[listPos] = objIdx;
            listPos++;
        }
        objIdx = o->next;
    } while (objIdx != 0xFFFF);
    visibleObjList[listPos] = 0xFFFF;
    drawOrderList[listPos] = 0xFFFF;
    if (listPos - 1 > 0) {
        sortObjIndicesByGroup(0, listPos - 1, visibleObjList);
    }
    listPos = 0;
    for (;;) {
        if (visibleObjList[listPos] == 0xFFFF) {
            return;
        }
        j = listPos;
        group = D_8011F2F0[visibleObjList[listPos]].group;
        objIdx = 0xFFFF;
        do {
            do {
            if (group != D_8011F2F0[visibleObjList[j]].group) {
                goto found;
            }
            } while (0);
            j++;
        } while (visibleObjList[j] != objIdx);
    found:
        end = j;
        if (listPos < end - 1) {
            n = listPos;
            last = end - 1;
            for (k = listPos; k < end; k++) {
                objIdx = visibleObjList[k];
                o = &D_8011F2F0[objIdx];
                kind = o->kind;
                if (kind != 0xB && kind != 0xC && ((kind != 5) & (kind != 8)) && kind != 0xD && kind != 0xE && o->xC == 0xFF) {
                    drawOrderList[n] = objIdx;
                    n++;
                } else {
                    drawOrderList[last] = visibleObjList[k];
                    last--;
                }
            }
            for (k = listPos; k < n; k++) {
                o = &D_8011F2F0[drawOrderList[k]];
                if (o->type == 2) {
                    dx = o->alt[0] - camX;
                    dy = o->alt[1] - camY;
                    dz = o->alt[2] - camZ;
                } else {
                    dx = o->pos[0] - camX;
                    dy = o->pos[1] - camY;
                    dz = o->pos[2] - camZ;
                }
                objDepth[drawOrderList[k]] = sqrtf(dx * dx + dy * dy + dz * dz);
            }
            if (listPos < n - 1) {
                sortObjIndicesByDepth(listPos, n - 1, drawOrderList);
            }
            for (k = n; k < end; k++) {
                o = &D_8011F2F0[drawOrderList[k]];
                if (o->type == 2) {
                    dx = o->alt[0] - camX;
                    dy = o->alt[1] - camY;
                    dz = o->alt[2] - camZ;
                } else {
                    dx = o->pos[0] - camX;
                    dy = o->pos[1] - camY;
                    dz = o->pos[2] - camZ;
                }
                objDepth[drawOrderList[k]] = -sqrtf(dx * dx + dy * dy + dz * dz);
            }
            if (n < end - 1) {
                sortObjIndicesByDepth(n, end - 1, drawOrderList);
            }
        } else {
            drawOrderList[listPos] = visibleObjList[listPos];
        }
        listPos = end;
    }
}
