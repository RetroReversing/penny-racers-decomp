s32 func_8014A080(s32 v,s32 n,s32 count,s32 dir){
s32 high,keep,bitmask,bit; s16 limit;u8 unused[16];
n&=31;bitmask=1<<n;high=-2<<n;keep=v&high;
if((dir&255)==1){
limit=count&255;n=0;
if(limit>0){count=~high;do{bit=(v&bitmask)!=0;v=(((v<<1)|bit)&count)|keep;n++;}while(n<limit);}
return v;
}
limit=count&255;n=0;
if(limit>0){count=~high;do{bit=-(v&1)&bitmask;v=(((u32)(v&count)>>1)|bit)|keep;n++;}while(n<limit);}
return v;
}
