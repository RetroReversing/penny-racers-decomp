/* identical to guLookAtF in mariogolf64 (local match library) (matched), with its names changed by decompdecomp */
void guLookAtF(float mf[4][4], float xEye, float yEye, float zEye, float xAt,
               float yAt, float zAt, float xUp, float yUp, float zUp) {
  float len;
  float xLook;
  float yLook;
  float zLook;
  float xRight;
  float yRight;
  float zRight;

  guMtxIdentF(mf);

  // Look = normalize(eye - at); the leading -1 makes the camera face -Z.
  xLook = xAt - xEye;
  yLook = yAt - yEye;
  zLook = zAt - zEye;
  len = -1.0 / func_80032310((xLook * xLook) + (yLook * yLook) + (zLook * zLook));
  xLook *= len;
  yLook *= len;
  zLook *= len;

  // Right = normalize(up x Look).
  xRight = (yUp * zLook) - (zUp * yLook);
  yRight = (zUp * xLook) - (xUp * zLook);
  zRight = (xUp * yLook) - (yUp * xLook);
  len = 1.0 / func_80032310((xRight * xRight) + (yRight * yRight) + (zRight * zRight));
  xRight *= len;
  yRight *= len;
  zRight *= len;

  // Re-orthogonalize the up vector as Up = normalize(Look x Right).
  xUp = (yLook * zRight) - (zLook * yRight);
  yUp = (zLook * xRight) - (xLook * zRight);
  zUp = (xLook * yRight) - (yLook * xRight);
  len = 1.0 / func_80032310((xUp * xUp) + (yUp * yUp) + (zUp * zUp));
  xUp *= len;
  yUp *= len;
  zUp *= len;

  // Columns hold the basis; the bottom row holds -dot(eye, axis).
  mf[0][0] = xRight;
  mf[1][0] = yRight;
  mf[2][0] = zRight;
  mf[3][0] = -((xEye * xRight) + (yEye * yRight) + (zEye * zRight));
  mf[0][1] = xUp;
  mf[1][1] = yUp;
  mf[2][1] = zUp;
  mf[3][1] = -((xEye * xUp) + (yEye * yUp) + (zEye * zUp));
  mf[0][2] = xLook;
  mf[1][2] = yLook;
  mf[2][2] = zLook;
  mf[3][2] = -((xEye * xLook) + (yEye * yLook) + (zEye * zLook));
  mf[0][3] = 0;
  mf[1][3] = 0;
  mf[2][3] = 0;
  mf[3][3] = 1;
}
