f32 func_801FA3B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
f32 dy1,dy2,denominator,numerator,first;
dy1 = arg6 - arg4;
dy2 = arg7 - arg5;
if (dy1 == 0.0f) {
 if (arg0 == arg2) { half: return 0.5f; }
 first = arg4 - arg0;
 if (first == 0.0f) goto half;
 return first / (arg2 - arg0);
}
if (dy2 == 0.0f) {
 if (arg0 != arg2) goto half;
 arg5 -= arg1;
 if (arg5 == 0.0f) goto half;
 denominator = arg3 - arg1; goto divide;
}
dy1 = 1.0f / dy1;
dy2 = 1.0f / dy2;
arg5 = (((arg1-arg5)*dy2)-((arg0-arg4)*dy1));
denominator = (((arg2-arg0)*dy1)-((arg3-arg1)*dy2));
divide: return arg5 / denominator;
}

