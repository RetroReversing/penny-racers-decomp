/* identical to _getRate in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _getRate in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern double D_8004A7C0,D_8004A7C8,D_8004A7D0,D_8004A7D8,D_8004A7E0,D_8004A7E8,D_8004A7F0,D_8004A7F8,D_8004A800,D_8004A808;
extern double D_8004A780[8];
#define FREXP(v, eptr) ({ double value = (v); double absvalue; *(eptr) = 0; if (value != 0.0) { absvalue = (value > 0.0) ? value : -value; for (; absvalue >= D_8004A7D0; absvalue *= D_8004A7D8) ++*(eptr); for (; absvalue < D_8004A7E0; absvalue += absvalue) --*(eptr); value = (value > 0.0) ? absvalue : -absvalue; } value; })
/* Turns a start/end pair spread over `steps` frames into a per-frame rate: the ratio
 * end/start is raised to 1/steps with a table-based log/exp approximation. The fractional
 * part of the result is written to *frac_out. With no steps, the rate is either the
 * maximum (start <= end) or zero. */
s32 _getRate(double start,double end,s32 steps,u16 *frac_out){
double tab[8],mant,y,z,rate_steps; s32 exp2; s32 power; s16 whole;
rate_steps=D_8004A7C0/(double)steps;
if(!steps){if(start<=end){*frac_out=-1;return 32767;}*frac_out=0;return 0;}
if(end<D_8004A7C0)end=D_8004A7C0;
if(start<=0.0)start=D_8004A7C0;
__builtin_memcpy(tab,D_8004A780,64);
power=(s32)(rate_steps*D_8004A7C8);mant=FREXP(end/start,&exp2);
y=(tab[(s32)(mant*D_8004A7E8)-8]+(double)exp2)*D_8004A7F0/D_8004A7F8;z=D_8004A800;y+=z;
while(power){if(power&1)z*=y;power>>=1;y*=y;}
z*=z;z*=z;z*=z;whole=(s16)(s32)z;*frac_out=(s16)(s32)((z-(double)(float)whole)*D_8004A808);return whole;
}
