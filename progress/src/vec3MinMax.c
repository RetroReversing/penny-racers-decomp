/* Per-axis min and max of three vec3 values: lo gets the smallest component and hi the largest, for x, y and z. */
void vec3MinMax(f32 *first, f32 *second, f32 *third, f32 *lo, f32 *hi)
{
  if (second[0] > first[0]) {
    if (third[0] < first[0]) { lo[0] = third[0]; hi[0] = second[0]; }
    else { lo[0] = first[0]; if (third[0] > second[0]) hi[0] = third[0]; else hi[0] = second[0]; }
  } else {
    if (third[0] < second[0]) { lo[0] = third[0]; hi[0] = first[0]; }
    else { lo[0] = second[0]; if (third[0] > first[0]) hi[0] = third[0]; else hi[0] = first[0]; }
  }
  if (second[1] > first[1]) {
    if (third[1] < first[1]) { lo[1] = third[1]; hi[1] = second[1]; }
    else { lo[1] = first[1]; if (third[1] > second[1]) hi[1] = third[1]; else hi[1] = second[1]; }
  } else {
    if (third[1] < second[1]) { lo[1] = third[1]; hi[1] = first[1]; }
    else { lo[1] = second[1]; if (third[1] > first[1]) hi[1] = third[1]; else hi[1] = first[1]; }
  }
  if (second[2] > first[2]) {
    if (third[2] < first[2]) { lo[2] = third[2]; hi[2] = second[2]; }
    else { lo[2] = first[2]; if (third[2] > second[2]) hi[2] = third[2]; else hi[2] = second[2]; }
  } else {
    if (third[2] < second[2]) { lo[2] = third[2]; hi[2] = first[2]; }
    else { lo[2] = second[2]; if (third[2] > first[2]) hi[2] = third[2]; else hi[2] = first[2]; }
  }
}
