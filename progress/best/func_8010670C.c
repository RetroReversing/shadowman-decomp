void *func_80103878(s32, s32, s32);
s32 func_80116D80(s32 *, s32 *, s32);
s32 func_80116EB0(s32 *, s16 *, s32);
s32 osCreateMesgQueue(s32 *, s32 *, s32);
extern s32 D_8004B44C;
inline static int inline_fn(u32 arg0, int arg1, s32 arg2, int arg3)
{
  return (arg0 * arg1) + (arg2 + arg3);
}

s32 func_8010670C(s32 arg0, s32 arg1)
{
  char sp10[0x18];
  volatile long sp3C;
  s32 sp28[2];
  void *sp30;
  s32 *sp34;
  long long sp38;
  s32 temp_s1;
  u32 var_s0;
  void *temp_v0;
  var_s0 = ((u32) (arg0 + 0xFFF)) >> 0xC;
  temp_s1 = (var_s0 + 1) & (~1);
  if (!(arg1 & 1))
  {
    var_s0 = 0;
  }
  osCreateMesgQueue(sp10, &sp38, 1);
  sp28[0] = 3;
  sp28[1] = arg0;
  sp34 = sp10;
  temp_v0 = func_80103878(inline_fn(var_s0, 4, temp_s1, 0x18), 3, 0);
  sp30 = temp_v0;
  *((s32 *) (((char *) temp_v0) + 8)) = arg1;
  func_80116EB0(&D_8004B44C, sp28, 1);
  func_80116D80(sp10, &sp3C, 1);
  return sp3C;
}

