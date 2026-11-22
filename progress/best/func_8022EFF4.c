s32 func_80104980();
s32 func_80104BF0();
u32 *func_8022F040();
extern char D_8004AE18[];
inline static u32 inline_fn(u32 *arg0)
{
  return (u32) arg0;
}

u32 *func_8022EFF4(s32 arg0, s16 arg1, u32 *arg2)
{
  s32 var_a0;
  char *var_v1;
  u32 temp_a1;
  if (arg2 == NULL)
  {
    func_80104BF0(arg0, arg1);
    return func_8022F040();
  }
  func_80104980(arg1, arg2, arg0, D_8004AE18);
  temp_a1 = ((u32) (*arg2)) >> 2;
  var_a0 = 0;
  if (temp_a1 != 0)
  {
    var_v1 = arg2;
    do
    {
      var_a0 += 1;
      *((u32 *) var_v1) = inline_fn((*((u32 *) var_v1)) + arg2);
      var_v1 += 4;
    }
    while (var_a0 < ((s32) temp_a1));
  }
  return arg2;
}

