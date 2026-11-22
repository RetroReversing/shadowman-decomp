f32 func_80236880(void *, s32);
s32 func_8025DCDC(s32, s32, s32, s32);
s32 func_8025DD7C(s32 *, s32, s32, s32);
s32 func_80296738(s32);
s32 func_802968C0(s32, s32);
extern s32 D_8005EA2C;
extern s32 D_8007DB88;
inline static f32 inline_fn(f32 *arg0)
{
  return *arg0;
}

void func_802A06B8(void *arg0)
{
  char sp10[0x18];
  f32 sp28[7];
  s32 sp74[3];
  s8 sp80;
  s32 sp90;
  f32 temp_fv0;
  f32 temp_fv0f;
  s32 temp_s0;
  s32 temp_v0;
  temp_fv0 = inline_fn((f32 *) (((char *) arg0) + 0x58)) + (inline_fn((f32 *) (((char *) arg0) + 0x5C)) * (*((f32 *) (((char *) (&D_8007DB88)) + 4))));
  temp_fv0f = inline_fn((f32 *) 0x215EBC);
  *((f32 *) (((char *) arg0) + 0x58)) = temp_fv0;
  if (temp_fv0f < temp_fv0)
  {
    *((f32 *) (((char *) arg0) + 0x58)) = temp_fv0f;
    *((f32 *) (((char *) arg0) + 0x54)) = 0.0f;
  }
  if (!(inline_fn((f32 *) (((char *) arg0) + 0x54)) <= 0.0f))
  {
    temp_v0 = func_80296738(0x25);
    sp90 = temp_v0;
    if (temp_v0 != 0)
    {
      sp28[3] = inline_fn((s32 *) (((char *) arg0) + 0));
      sp28[4] = *((s32 *) (((char *) arg0) + 4));
      sp28[5] = *((s32 *) (((char *) arg0) + 8));
      sp28[2] = 0.0f;
      sp28[0] = 0.0f;
      sp28[1] = func_80236880(arg0, D_8005EA2C);
      sp74[2] = 0;
      sp74[1] = 0;
      sp80 = 0xFF;
      sp28[6] = inline_fn((f32 *) (((char *) arg0) + 0x4C));
      sp74[0] = func_802968C0(0x10, 0);
      temp_s0 = (s32) inline_fn((f32 *) (((char *) arg0) + 0x58));
      func_8025DCDC(0xFF, 0xFF, 0xFF, 0xFF);
      func_8025DD7C(sp10, 4, 6, temp_s0);
    }
  }
}

