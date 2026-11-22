s32 func_8025DCDC(s32, s32, s32, s32);
s32 func_8025DD7C(s32 *, s32, s32, s32);
s32 func_80296738(s32);
s32 func_802968C0(s32, f32);
s32 func_802A5D00(void *, s32 *);
f32 func_802A65D0(void *, f32, f32);
extern s32 D_8002C6C4;
inline static s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

void func_802B0140(void *arg0)
{
  char sp10[0x18];
  f32 sp28;
  f32 sp2C;
  f32 sp30;
  s32 sp34;
  unsigned int sp38;
  u8 sp44[0x3C];
  s32 sp74[3];
  volatile char sp80;
  s32 sp90;
  s32 sp3C[2];
  s32 temp_v0;
  temp_v0 = func_80296738(D_8002C6C4);
  sp90 = temp_v0;
  if (temp_v0 != 0)
  {
    sp34 = inline_fn((s32 *) (((char *) arg0) + 0x54));
    sp38 = inline_fn((s32 *) (((char *) arg0) + 0x58));
    sp3C[0] = inline_fn((s32 *) (((char *) arg0) + 0x5C));
    sp74[0] = func_802968C0(8, 1.0f);
    if (1)
    {
      sp2C = 0.0f;
    }
    sp28 = 0.0f;
    sp74[2] = 0;
    sp74[1] = 0;
    sp80 = 0xFF;
    sp30 = inline_fn((f32 *) (((char *) arg0) + 0x88));
    sp3C[1] = func_802A65D0(arg0, 2.0f, 0.6f);
    func_802A5D00(arg0 + 0x6C, sp44);
    func_8025DCDC(0xFF, 0xFF, 0xFF, 0xFF);
    func_8025DD7C(sp10, 6, 4, -1);
  }
}

