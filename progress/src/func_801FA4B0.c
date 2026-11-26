f32 func_801FA4B0(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h)
{
    f32 num;

    if ((g > 0.0f) ? (g < 0.00001f) : (-g < 0.00001f)) {
        g = 0.0f;
    }
    if ((h > 0.0f) ? (h < 0.00001f) : (-h < 0.00001f)) {
        h = 0.0f;
    }
    if (g == 0.0f) {
        if (a == c) {
        half:
            return 0.5f;
        }
        num = e - a;
        if (num == 0.0f) { goto half; }
        return num / (c - a);
    }
    if (h != 0.0f) {
    g = 1.0f / g;
    h = 1.0f / h;
    return ((b - f) * h - (a - e) * g) / ((c - a) * g - (d - b) * h);
    }
        if (a != c) { goto half; }
        num = f - b;
        if (num == 0.0f) { goto half; }
        return num / (d - b);
}
