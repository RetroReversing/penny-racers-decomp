f32 normalize_angle_degrees(f32 x) {
 f32 result=x;
 if(result<0.0f) { while(result<0.0f) result+=360.0f; }
 else if(result>=360.0f) { while(result>=360.0f) result-=360.0f; }
 return result;
}
