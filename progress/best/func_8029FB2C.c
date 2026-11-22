void *func_80296BC0();
void *func_8029FBB0();
extern char D_80036CD0[];
inline static f32 inline_fn(int arg0)
{
  return (f32) (*((f32 *) arg0));
}

void func_8029FB2C(s32 arg0, f32 arg1, f32 arg2, s8 arg3, s32 arg4, u8 arg5)
{
  void *temp_v0;
  arg4 &= 0xFF;
  temp_v0 = func_80296BC0(arg0, 0, D_80036CD0);
  if (temp_v0 != NULL)
  {
    *((f32 *) (((char *) temp_v0) + 0x50)) = arg1;
    *((f32 *) (((char *) temp_v0) + 0x54)) = arg1;
    *((u8 *) (((char *) temp_v0) + 0x72)) |= 4;
    if (arg2 != 0.0f)
    {
      return func_8029FBB0();
    }
    *((f32 *) (((char *) temp_v0) + 0x60)) = inline_fn(0x215E30);
    if (1)
    {
      do
      {
        *((s8 *) (((char *) temp_v0) + 0x68)) = arg3;
      }
      while (0);
      if (temp_v0)
      {
        *((u8 *) (((char *) temp_v0) + 0x69)) = arg4;
      }
      else
      {
        *((u8 *) (((char *) temp_v0) + 0x69)) = arg4;
      }
      do
      {
        *((u8 *) (((char *) temp_v0) + 0x6A)) = arg5;
      }
      while (0);
    }
    return temp_v0;
  }
  return temp_v0;
}

