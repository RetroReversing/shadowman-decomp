extern s32 D_80059874;
extern u16 D_80059880;
inline static u16 inline_fn(u16 arg0)
{
  return arg0;
}

inline static u16 inline_fn2(u16 arg0)
{
  return arg0;
}

inline static int inline_fn23(u32 arg0)
{
  return arg0 * 8;
}

inline static u16 inline_fn234(void *arg0)
{
  return (u16) arg0;
}

u32 func_8022FFB8(void)
{
  void *__repair_D_80059880;
  s32 var_v0;
  char *var_v1;
  u32 var_a0;
  u32 var_a3;
  var_a0 = 0;
  var_a3 = 0;
  __repair_D_80059880 = D_80059880;
  if (__repair_D_80059880 != 0)
  {
    do
    {
      var_v1 = inline_fn23(var_a0) + D_80059874;
      ;
      loop_3:
      var_v0 = var_a0 < ((u16) __repair_D_80059880);

      if ((*((u16 *) var_v1)) != 0xFFFF)
      {
        if (D_80059880 || __repair_D_80059880)
        {
          var_a0 += 1;
          var_v1 += 8;
        }
        else
        {
          var_a0 += 1;
          var_v1 += 8;
        }
        if (var_a0 >= ((u16) __repair_D_80059880))
        {
          var_v0 = var_a0 < inline_fn2((u16) __repair_D_80059880);
        }
        else
        {
          goto loop_3;
        }
      }
      if (var_v0 != 0)
      {
 do { var_v1 = inline_fn23(var_a0) + D_80059874; loop_8: var_a0 += 1; if ((*((u16 *) var_v1)) == 0xFFFF) { var_v1 += 8; if (var_a0 >= ((u16) __repair_D_80059880)) { goto block_10; } goto loop_8; } } while (0);
      }
      else
      {
        block_10:
        var_a0 += 1;

      }
      var_a3 += 1;
    }
    while (var_a0 < inline_fn(inline_fn234(__repair_D_80059880)));
  }
  do
  {
    return var_a3;
  }
  while (0);
}
