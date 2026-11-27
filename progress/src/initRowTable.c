typedef struct { u16 owner; u16 slot[3]; u16 c[4]; u8 pad10[0x10]; u16 d[3]; u16 e; } Row;
typedef struct { u8 pad0[0x2108]; Row rows[4]; } Board;
extern Board sRowBoard;
extern u16 D_80220FB0[];
extern u16 D_80220FB4[];
extern u16 D_80220FB8[];
extern u16 D_80220FBC[];
extern u16 D_80220FC0[];
extern u16 D_80220FC4[];
extern u16 D_80220FC8[];
extern u16 D_80220FCC[];
extern u16 D_80220FD0[];
extern u16 D_80220FD4[];
extern u16 D_80220FD8[];
extern u16 D_80220FDC[];
extern u16 D_80220FE0[];
extern u16 D_80220FE4[];
extern u16 D_80220FE8[];
extern u16 D_80220FEC[];
extern u16 D_80220FF0[];
extern u16 D_80220FF8[];
extern u16 D_80221000[];
extern u16 D_80221008[];
extern u16 D_80221010[];
extern u16 D_80221018[];
extern u16 D_80221020[];
extern u16 D_80221028[];
extern u16 D_80221030[];
extern u16 D_80221038[];
extern u16 D_80221040[];
extern u16 D_80221048[];
extern u16 D_80221050[];
extern u16 D_80221058[];
extern u16 D_80221060[];
extern u16 D_80221068[];
/* Fills the first count rows of sRowBoard with their slot indices and track data for the selected variant, then clears the owner of the unused rows. */ void initRowTable(s32 count)
{
    s32 row;

    for (row = 0; row < count; row++) {
        sRowBoard.rows[row].owner = count;
        sRowBoard.rows[row].slot[0] = row * 3;
        sRowBoard.rows[row].slot[1] = row * 3 + 1;
        sRowBoard.rows[row].slot[2] = row * 3 + 2;
        switch (count) {
        default:
        case 1:
            sRowBoard.rows[row].c[0] = D_80220FB0[row];
            sRowBoard.rows[row].c[1] = D_80220FB4[row];
            sRowBoard.rows[row].c[2] = D_80220FB8[row];
            sRowBoard.rows[row].c[3] = D_80220FBC[row];
            sRowBoard.rows[row].d[0] = D_80220FC0[row];
            sRowBoard.rows[row].d[1] = D_80220FC4[row];
            sRowBoard.rows[row].d[2] = D_80220FC8[row];
            sRowBoard.rows[row].e = D_80220FCC[row];
            break;
        case 2:
            sRowBoard.rows[row].c[0] = D_80220FD0[row];
            sRowBoard.rows[row].c[1] = D_80220FD4[row];
            sRowBoard.rows[row].c[2] = D_80220FD8[row];
            sRowBoard.rows[row].c[3] = D_80220FDC[row];
            sRowBoard.rows[row].d[0] = D_80220FE0[row];
            sRowBoard.rows[row].d[1] = D_80220FE4[row];
            sRowBoard.rows[row].d[2] = D_80220FE8[row];
            sRowBoard.rows[row].e = D_80220FEC[row];
            break;
        case 3:
            sRowBoard.rows[row].c[0] = D_80220FF0[row];
            sRowBoard.rows[row].c[1] = D_80220FF8[row];
            sRowBoard.rows[row].c[2] = D_80221000[row];
            sRowBoard.rows[row].c[3] = D_80221008[row];
            sRowBoard.rows[row].d[0] = D_80221010[row];
            sRowBoard.rows[row].d[1] = D_80221018[row];
            sRowBoard.rows[row].d[2] = D_80221020[row];
            sRowBoard.rows[row].e = D_80221028[row];
            break;
        case 4:
            sRowBoard.rows[row].c[0] = D_80221030[row];
            sRowBoard.rows[row].c[1] = D_80221038[row];
            sRowBoard.rows[row].c[2] = D_80221040[row];
            sRowBoard.rows[row].c[3] = D_80221048[row];
            sRowBoard.rows[row].d[0] = D_80221050[row];
            sRowBoard.rows[row].d[1] = D_80221058[row];
            sRowBoard.rows[row].d[2] = D_80221060[row];
            sRowBoard.rows[row].e = D_80221068[row];
            break;
        }
    }
    for (row = count; row < 4; row++) {
        sRowBoard.rows[row].owner = 0;
    }
}
