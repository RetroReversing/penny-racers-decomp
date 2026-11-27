typedef struct { s8 x; s8 y; } Pos;
extern Pos D_801C6BB0;
extern s8 D_801C6BB9, D_801C7068;
extern u8 D_801C7469;
s32 func_80199EAC(u16);
void func_8014B854(s32);

void func_8019F1C0(u16 id) {
    u8 dir;

    dir = func_80199EAC(id);
    if (dir == 0 && D_801C6BB9 > 0) {
        if (D_801C7469 == 0) {
            if (!(D_801C6BB0.x == D_801C7068 && D_801C6BB0.y == D_801C6BB9 - 1)) {
                D_801C6BB9--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 1) {
            if (!((D_801C6BB0.x == D_801C7068 || D_801C6BB0.x - 1 == D_801C7068) && D_801C6BB0.y == D_801C6BB9 - 1)) {
                D_801C6BB9--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 2) {
            if (!(D_801C6BB0.x == D_801C7068 && (D_801C6BB0.y == D_801C6BB9 - 1 || D_801C6BB0.y + 1 == D_801C6BB9 - 1))) {
                D_801C6BB9--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 3) {
            if (!((D_801C6BB0.x == D_801C7068 || D_801C6BB0.x + 1 == D_801C7068) && D_801C6BB0.y == D_801C6BB9 - 1)) {
                D_801C6BB9--;
                func_8014B854(0x3B);
            }
        }
    } else if (dir == 1 && D_801C7068 > 0) {
        if (D_801C7469 == 0) {
            if (!(D_801C6BB0.x == D_801C7068 - 1 && (D_801C6BB0.y == D_801C6BB9 || D_801C6BB0.y - 1 == D_801C6BB9))) {
                D_801C7068--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 1) {
            if (!(D_801C6BB0.x == D_801C7068 - 1 && D_801C6BB0.y == D_801C6BB9)) {
                D_801C7068--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 2) {
            if (!(D_801C6BB0.x == D_801C7068 - 1 && (D_801C6BB0.y == D_801C6BB9 || D_801C6BB0.y + 1 == D_801C6BB9))) {
                D_801C7068--;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 3) {
            if (!((D_801C6BB0.x == D_801C7068 - 1 || D_801C6BB0.x + 1 == D_801C7068 - 1) && D_801C6BB0.y == D_801C6BB9)) {
                D_801C7068--;
                func_8014B854(0x3B);
            }
        }
    } else if (dir == 2 && D_801C6BB9 < 0x17) {
        if (D_801C7469 == 0) {
            if (!(D_801C6BB0.x == D_801C7068 && (D_801C6BB0.y == D_801C6BB9 + 1 || D_801C6BB0.y - 1 == D_801C6BB9 + 1))) {
                D_801C6BB9++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 1) {
            if (!((D_801C6BB0.x == D_801C7068 || D_801C6BB0.x - 1 == D_801C7068) && D_801C6BB0.y == D_801C6BB9 + 1)) {
                D_801C6BB9++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 2) {
            if (!(D_801C6BB0.x == D_801C7068 && D_801C6BB0.y == D_801C6BB9 + 1)) {
                D_801C6BB9++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 3) {
            if (!((D_801C6BB0.x == D_801C7068 || D_801C6BB0.x + 1 == D_801C7068) && D_801C6BB0.y == D_801C6BB9 + 1)) {
                D_801C6BB9++;
                func_8014B854(0x3B);
            }
        }
    } else if (dir == 3 && D_801C7068 < 0x17) {
        if (D_801C7469 == 0) {
            if (!(D_801C6BB0.x == D_801C7068 + 1 && (D_801C6BB0.y == D_801C6BB9 || D_801C6BB0.y - 1 == D_801C6BB9))) {
                D_801C7068++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 1) {
            if (!((D_801C6BB0.x == D_801C7068 + 1 || D_801C6BB0.x - 1 == D_801C7068 + 1) && D_801C6BB0.y == D_801C6BB9)) {
                D_801C7068++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 2) {
            if (!(D_801C6BB0.x == D_801C7068 + 1 && (D_801C6BB0.y == D_801C6BB9 || D_801C6BB0.y + 1 == D_801C6BB9))) {
                D_801C7068++;
                func_8014B854(0x3B);
            }
        } else if (D_801C7469 == 3) {
            if (!(D_801C6BB0.x == D_801C7068 + 1 && D_801C6BB0.y == D_801C6BB9)) {
                D_801C7068++;
                func_8014B854(0x3B);
            }
        }
    }
}
