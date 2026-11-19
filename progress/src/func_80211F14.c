typedef struct {u8 pad[0x64]; u16 grid[14][9]; u8 tail[0x18];} GridEnt;
extern GridEnt D_800DA26A[];
extern u16 D_8021F270[][14][8];
void func_80211F14(s32 arg0) { s32 i,j;
for(i=0;i<14;i++) {
for(j=0;j<8;j++) D_800DA26A[arg0].grid[i][j]=D_8021F270[arg0][i][j];
D_800DA26A[arg0].grid[i][8]=0xFFFF;
}
}
