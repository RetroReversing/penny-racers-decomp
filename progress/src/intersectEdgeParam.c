/* Returns the fraction along an edge (x0,y0)-(x1,y1) where it meets the line through (x2,y2) with direction (dx,dy); 0.5 when degenerate. */ f32 intersectEdgeParam(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32 dx, f32 dy)
{
    f32 numer;

    if ((dx > 0.0f) ? (dx < 0.00001f) : (-dx < 0.00001f)) {
        dx = 0.0f;
    }
    if ((dy > 0.0f) ? (dy < 0.00001f) : (-dy < 0.00001f)) {
        dy = 0.0f;
    }
    if (dx == 0.0f) {
        if (x0 == x1) {
        half:
            return 0.5f;
        }
        numer = x2 - x0;
        if (numer == 0.0f) { goto half; }
        return numer / (x1 - x0);
    }
    if (dy != 0.0f) {
    dx = 1.0f / dx;
    dy = 1.0f / dy;
    return ((y0 - y2) * dy - (x0 - x2) * dx) / ((x1 - x0) * dx - (y1 - y0) * dy);
    }
        if (x0 != x1) { goto half; }
        numer = y2 - y0;
        if (numer == 0.0f) { goto half; }
        return numer / (y1 - y0);
}
