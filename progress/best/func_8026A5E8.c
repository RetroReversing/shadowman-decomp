s32 func_8021FB8C(f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8026A6E8(f32, f32, s16, s16, s16, s16);
extern s32 D_8002D200;
extern f32 D_80075AB0;
void func_8026A5E8(f32 arg0, f32 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, volatile unsigned short arg6)
{
  f32 temp_fa0;
  f32 temp_fa1;
  f32 temp_fv0;
  f32 temp_fv0f;
  f32 temp_fv1f;
  s32 temp_ft0;
  s32 __repair_temp_ft0_1;
  s32 temp_ft0_2;
  s32 temp_ft0_3;
  s32 temp_ft0_4;
  temp_ft0 = (*((f32 *) (((char *) (&D_8002D200)) + 0))) + D_80075AB0;
  temp_fa0 = ((arg0 + ((f32) (((s32) ((arg2 << 15) << 1)) >> 0x11))) * (*((f32 *) (((char *) (&D_8002D200)) + 0)))) - ((temp_ft0 * ((f32) arg2)) * (*((f32 *) 0x20E278)));
  temp_fa1 = ((arg1 + ((f32) (((s32) (arg3 << 0x10)) >> 0x11))) * (*((f32 *) (((char *) (&D_8002D200)) + 4)))) - ((((f32) arg3) * ((*((f32 *) (((char *) (&D_8002D200)) + 4))) + D_80075AB0)) * (*((f32 *) 0x20E278)));
  temp_ft0_4 = (s32) (((f32) arg3) * ((*((f32 *) (((char *) (&D_8002D200)) + 4))) + D_80075AB0));
  __repair_temp_ft0_1 = (s32) temp_fa0;
  temp_ft0_3 = (s32) (__repair_temp_ft0_1 * ((f32) ((double) arg2)));
  temp_ft0_2 = (s32) temp_fa1;
  if (arg5 != 0)
  {
    func_8026A6E8(temp_fa0, temp_fa1, (s16) __repair_temp_ft0_1, (s16) temp_ft0_2, (s16) temp_ft0_3, (s16) temp_ft0_4);
    return;
  }
  func_8021FB8C(temp_fa0, temp_fa1, __repair_temp_ft0_1, temp_ft0_2, temp_ft0_3, temp_ft0_4, 3, 0xFF, 0xFF, 0xFF, arg6 & 0xFF);
}

