s32 func_8025DD7C(s32 *, s32, s32, s32);
s32 func_80296738(s32);
s32 func_802968C0(void *, s32, s32);
extern s32 D_8002C774;
inline static s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

void func_802AAC10(void *arg0)
{
  s32 sp28[7];
  char sp10[0x18];
  s32 sp74[3];
  volatile char sp80;
  s32 sp90;
  s32 temp_v0;
  temp_v0 = func_80296738(D_8002C774);
  sp90 = temp_v0;
  if (temp_v0 != 0)
  {
    if (arg0 || temp_v0)
    {
      sp28[3] = inline_fn((s32 *) (((char *) arg0) + 0x54));
      sp28[4] = inline_fn((s32 *) (((char *) arg0) + 0x58));
      sp28[5] = inline_fn((s32 *) (((char *) arg0) + 0x5C));
      sp28[0] = inline_fn((s32 *) (((char *) arg0) + 0x84));
      sp28[1] = inline_fn((s32 *) (((char *) arg0) + 0x88));
      sp28[2] = inline_fn((s32 *) (((char *) arg0) + 0x8C));
      sp74[0] = func_802968C0(arg0, 0x13, inline_fn((s32 *) (((char *) arg0) + 0x34)));
      sp74[2] = 0;
      sp74[1] = 0;
      sp80 = 0xFF;
      sp28[6] = inline_fn((f32 *) 0x2164DC);
      func_8025DD7C(sp10, 0, 6, -1);
    }
    else
    {
      sp28[3] = inline_fn((s32 *) (((char *) arg0) + 0x54));
      sp28[4] = inline_fn((s32 *) (((char *) arg0) + 0x58));
      sp28[5] = *((s32 *) (((char *) arg0) + 0x5C));
      sp28[0] = *((s32 *) (((char *) arg0) + 0x84));
      sp28[1] = *((s32 *) (((char *) arg0) + 0x88));
      sp28[2] = *((s32 *) (((char *) arg0) + 0x8C));
      sp74[0] = func_802968C0(arg0, 0x13, *((s32 *) (((char *) arg0) + 0x34)));
      sp74[2] = 0;
      sp74[1] = 0;
      sp80 = 0xFF;
      sp28[6] = *((f32 *) 0x2164DC);
      func_8025DD7C(sp10, 0, 6, -1);
    }
  }
}

