s32 func_80232908(void *);
void func_8025CF70(void *, void *);
void func_802D0B28(s32, s32, s32);
extern s32 D_8002D2B0;
extern s32 D_8002D2B4;
extern s32 D_8005E6F0;
extern char *D_8005E9F0;
extern s32 D_8005EA14;
extern char *D_8005EA2C;
inline static float inline_fn(float arg0, f32 arg1, f32 arg2)
{
  return arg0 + (arg1 * arg2);
}

void func_8025CE84(void)
{
  f32 a;
  f32 b;
  f32 c;
  f32 d;
  s32 idx;
  char *p;
  func_802D0B28(D_8005EA14, D_8002D2B4, 0);
  idx = func_80232908(D_8005EA2C);
  p = (*((char **) (D_8005E9F0 + 8))) + (idx * 0x28);
  a = (f32) (*((s16 *) (p + 0x18)));
  a = a - (*((f32 *) (D_8005EA2C + 0x30)));
  b = ((f32) (*((s16 *) (p + 0x1A)))) - (*((f32 *) (D_8005EA2C + 0x34)));
  c = ((f32) (*((s16 *) (p + 0x1C)))) - (*((f32 *) (D_8005EA2C + 0x38)));
  a = inline_fn(inline_fn(a * a, b, b), c, c);
  d = ((f32) (*((u16 *) (p + 0x1E)))) + (*((f32 *) 0x20A194));
  D_8005E6F0 = idx;
  if ((d * d) < a)
  {
    D_8002D2B0 = 0;
  }
  else
  {
    D_8002D2B0 = *((s32 *) (p + 0x20));
  }
}

