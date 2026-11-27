/* identical to _getRate in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _getRate in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern double D_8004A7C0,D_8004A7C8,D_8004A7D0,D_8004A7D8,D_8004A7E0,D_8004A7E8,D_8004A7F0,D_8004A7F8,D_8004A800,D_8004A808;
extern double D_8004A780[8];
#define FREXP(v, eptr) ({ double value = (v); double absvalue; *(eptr) = 0; if (value != 0.0) { absvalue = (value > 0.0) ? value : -value; for (; absvalue >= D_8004A7D0; absvalue *= D_8004A7D8) ++*(eptr); for (; absvalue < D_8004A7E0; absvalue += absvalue) --*(eptr); value = (value > 0.0) ? absvalue : -absvalue; } value; })
/* Turns a start/end pair spread over `steps` frames into a per-frame rate: the ratio
 * end/start is raised to 1/steps with a table-based log/exp approximation. The fractional
 * part of the result is written to *fracOut. With no steps, the rate is either the
 * maximum (start <= end) or zero. */
s32 _getRate(double startVal, double endVal, s32 steps, u16 *fracOut) {
    double logTable[8], mantissa, base, result, stepScale;
    s32 exp2;
    s32 power;
    s16 whole;

    stepScale = D_8004A7C0 / (double)steps;
    if (!steps) {
        if (startVal <= endVal) {
            *fracOut = -1;
            return 32767;
        }
        *fracOut = 0;
        return 0;
    }
    if (endVal < D_8004A7C0) {
        endVal = D_8004A7C0;
    }
    if (startVal <= 0.0) {
        startVal = D_8004A7C0;
    }
    __builtin_memcpy(logTable, D_8004A780, 64);
    power = (s32)(stepScale * D_8004A7C8);
    mantissa = FREXP(endVal / startVal, &exp2);
    base = (logTable[(s32)(mantissa * D_8004A7E8) - 8] + (double)exp2) * D_8004A7F0 / D_8004A7F8;
    result = D_8004A800;
    base += result;
    while (power) {
        if (power & 1) {
            result *= base;
        }
        power >>= 1;
        base *= base;
    }
    result *= result;
    result *= result;
    result *= result;
    whole = (s16)(s32)result;
    *fracOut = (s16)(s32)((result - (double)(float)whole) * D_8004A808);
    return whole;
}
