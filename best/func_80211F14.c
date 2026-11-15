extern u16 *D_802030CC[];extern u16 D_8021F270[][14][8];
void func_80211E9C(s32 arg0){s32 i,j;for(i=0;i<14;i++){u16 *src=D_802030CC[i];for(j=0;j<8;j++)D_8021F270[arg0][i][j]=src[j];}}
extern u8 D_800DA26A[];void func_80211F14(s32 arg0){s32 row,col,off;u8 *base,*dst,*src,*g,*p;row=0;off=arg0*0x178;base=D_800DA26A+0x64;rows:col=0;dst=(u8 *)(row*18+(off+(u32)base));g=(u8 *)D_8021F270;p=(u8 *)(arg0*224+(u32)g);src=(u8 *)(row*16+(u32)p);__repair_rows: {*(u16 *)(col*2+(u32)dst)=*(u16 *)(col*2+(u32)src);col++;}
if (col<8) goto __repair_rows;*(u16 *)((D_800DA26A+0x74)+(row*18+off))=0xFFFF;row++;if(row<14)goto rows;}
