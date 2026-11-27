typedef struct { u16 owner; u16 slot[3]; u16 c[4]; u8 pad10[0x10]; u16 d[3]; u16 e; } Row;
typedef struct { u8 pad0[0x2108]; Row rows[4]; } Board;
extern Board D_800DB1B8;
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
void func_8021F6A0(s32 arg0)
{
    s32 i;

    for (i = 0; i < arg0; i++) {
        D_800DB1B8.rows[i].owner = arg0;
        D_800DB1B8.rows[i].slot[0] = i * 3;
        D_800DB1B8.rows[i].slot[1] = i * 3 + 1;
        D_800DB1B8.rows[i].slot[2] = i * 3 + 2;
        switch (arg0) {
        default:
        case 1:
            D_800DB1B8.rows[i].c[0] = D_80220FB0[i];
            D_800DB1B8.rows[i].c[1] = D_80220FB4[i];
            D_800DB1B8.rows[i].c[2] = D_80220FB8[i];
            D_800DB1B8.rows[i].c[3] = D_80220FBC[i];
            D_800DB1B8.rows[i].d[0] = D_80220FC0[i];
            D_800DB1B8.rows[i].d[1] = D_80220FC4[i];
            D_800DB1B8.rows[i].d[2] = D_80220FC8[i];
            D_800DB1B8.rows[i].e = D_80220FCC[i];
            break;
        case 2:
            D_800DB1B8.rows[i].c[0] = D_80220FD0[i];
            D_800DB1B8.rows[i].c[1] = D_80220FD4[i];
            D_800DB1B8.rows[i].c[2] = D_80220FD8[i];
            D_800DB1B8.rows[i].c[3] = D_80220FDC[i];
            D_800DB1B8.rows[i].d[0] = D_80220FE0[i];
            D_800DB1B8.rows[i].d[1] = D_80220FE4[i];
            D_800DB1B8.rows[i].d[2] = D_80220FE8[i];
            D_800DB1B8.rows[i].e = D_80220FEC[i];
            break;
        case 3:
            D_800DB1B8.rows[i].c[0] = D_80220FF0[i];
            D_800DB1B8.rows[i].c[1] = D_80220FF8[i];
            D_800DB1B8.rows[i].c[2] = D_80221000[i];
            D_800DB1B8.rows[i].c[3] = D_80221008[i];
            D_800DB1B8.rows[i].d[0] = D_80221010[i];
            D_800DB1B8.rows[i].d[1] = D_80221018[i];
            D_800DB1B8.rows[i].d[2] = D_80221020[i];
            D_800DB1B8.rows[i].e = D_80221028[i];
            break;
        case 4:
            D_800DB1B8.rows[i].c[0] = D_80221030[i];
            D_800DB1B8.rows[i].c[1] = D_80221038[i];
            D_800DB1B8.rows[i].c[2] = D_80221040[i];
            D_800DB1B8.rows[i].c[3] = D_80221048[i];
            D_800DB1B8.rows[i].d[0] = D_80221050[i];
            D_800DB1B8.rows[i].d[1] = D_80221058[i];
            D_800DB1B8.rows[i].d[2] = D_80221060[i];
            D_800DB1B8.rows[i].e = D_80221068[i];
            break;
        }
    }
    for (i = arg0; i < 4; i++) {
        D_800DB1B8.rows[i].owner = 0;
    }
}
