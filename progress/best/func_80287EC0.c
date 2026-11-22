s32 func_80113AD0();
s32 func_8023A0DC(s32, s32, f32, f32 *, void *);
s32 func_802A1A98(f32 *, s32 *, s32 *, s32, f32, f32, s32);
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32);
extern s32 D_217AAC;
extern void *D_8006A4FC;
extern void *D_8007AFF8;
inline static s32 inline_fn(s32 *arg0, int arg1)
{
  return arg0[arg1];
}

inline static s32 inline_fn2(s32 *arg0)
{
  return arg0[0];
}

inline static f32 inline_fn23(char *arg0)
{
  return *((f32 *) (arg0 + 0x2C));
}

void func_80287EC0(void)
{
  f32 sp20[3];
  s32 sp30[3];
  s32 sp40[3];
  char sp50[0x10];
  f32 temp_fv0f;
  f32 temp_fs0f;
  volatile unsigned int pad;
  sp40[0] = 0;
  temp_fs0f = *((f32 *) 0x215064);
  sp40[1] = (*((f32 *) (0x1C + ((char *) D_8006A4FC)))) - (*((f32 *) 0x215068));
  sp40[2] = 0;
  func_8023A0DC(inline_fn(sp40, 0), inline_fn2(sp40), temp_fs0f, sp20, D_8006A4FC + 0x34);
  do
  {
    sp20[0] += *((f32 *) (((char *) D_8006A4FC) + 0x24));
    do
    {
      temp_fv0f = *((f32 *) 0x215070);
    }
    while (0);
    do
    {
      sp20[1] += (*((f32 *) (((char *) D_8006A4FC) + 0x28))) + (*((f32 *) 0x21506C)); sp30[0] = inline_fn2(sp40); sp30[1] = sp40[0]; sp30[2] = inline_fn2(sp40); sp20[2] += inline_fn23((char *) D_8006A4FC);
      func_802A1A98(sp20, sp30, sp40, 0x14, temp_fv0f, temp_fv0f, 0);
      func_80113AD0();
    }
    while (0);
    func_80113AD0();
  }
  while (0);
  func_8023A0DC(inline_fn2(sp40), inline_fn2(sp40), temp_fs0f, sp50, D_8006A4FC + 0x34);
  func_802A5EC4(sp20, sp50, &D_217AAC, 0, 1, (s32) (*((u8 *) (((char *) D_8007AFF8) + 0x40))));
}

