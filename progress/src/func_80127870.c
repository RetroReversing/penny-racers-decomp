void func_80127870(f32 *a, f32 *b, f32 *c, f32 *lo, f32 *hi)
{
  if (b[0] > a[0]) {
    if (c[0] < a[0]) { lo[0] = c[0]; hi[0] = b[0]; }
    else { lo[0] = a[0]; if (c[0] > b[0]) hi[0] = c[0]; else hi[0] = b[0]; }
  } else {
    if (c[0] < b[0]) { lo[0] = c[0]; hi[0] = a[0]; }
    else { lo[0] = b[0]; if (c[0] > a[0]) hi[0] = c[0]; else hi[0] = a[0]; }
  }
  if (b[1] > a[1]) {
    if (c[1] < a[1]) { lo[1] = c[1]; hi[1] = b[1]; }
    else { lo[1] = a[1]; if (c[1] > b[1]) hi[1] = c[1]; else hi[1] = b[1]; }
  } else {
    if (c[1] < b[1]) { lo[1] = c[1]; hi[1] = a[1]; }
    else { lo[1] = b[1]; if (c[1] > a[1]) hi[1] = c[1]; else hi[1] = a[1]; }
  }
  if (b[2] > a[2]) {
    if (c[2] < a[2]) { lo[2] = c[2]; hi[2] = b[2]; }
    else { lo[2] = a[2]; if (c[2] > b[2]) hi[2] = c[2]; else hi[2] = b[2]; }
  } else {
    if (c[2] < b[2]) { lo[2] = c[2]; hi[2] = a[2]; }
    else { lo[2] = b[2]; if (c[2] > a[2]) hi[2] = c[2]; else hi[2] = a[2]; }
  }
}
