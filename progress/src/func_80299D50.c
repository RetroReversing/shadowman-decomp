s32 func_80296698(s32);
void *func_80296BC0(s32, s32, s32 *);
extern s32 D_80036C78;
void *func_80299D50(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, s32 arg5)
{
  f32 temp_fv0;
  void *temp_v0;
  temp_v0 = func_80296BC0(arg1, arg2, &D_80036C78);
  if (temp_v0 != NULL)
  {
    *((s32 *) (((char *) temp_v0) + 0x6C)) = arg0;
    temp_fv0 = (f32) func_80296698(arg0);
 do { *((f32 *) (((char *) temp_v0) + 0x50)) = temp_fv0; *((f32 *) (((char *) temp_v0) + 0x54)) = temp_fv0; *((s32 *) (((char *) temp_v0) + 0x58)) = 0; *((f32 *) (((char *) temp_v0) + 0x4C)) = arg3; *((s8 *) (((char *) temp_v0) + 0x72)) = (s8) arg5; } while (0);
    *((f32 *) (((char *) temp_v0) + 0x5C)) = arg4;
  }
  return temp_v0;
}
