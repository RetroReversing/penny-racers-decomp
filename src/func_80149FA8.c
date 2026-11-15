typedef struct {u8 pad[100];u16 a[14][9];u8 tail[24];} RaceData;
extern RaceData D_800DA26A[];
extern u16 *D_802030CC[];
void func_80149FA8(s32 arg0){
s32 i,j;u16 *src;
for(i=0;i<14;i++){
src=D_802030CC[i];j=0;
do{D_800DA26A[arg0].a[i][j]=src[j];}while(++j<9);
}
}
