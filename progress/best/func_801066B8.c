s32 func_801066F0();
inline static char *inline_fn(char *arg0)
{
  return arg0;
}

void func_801066B8(s32 *arg0, s32 arg1, u16 *arg2, s32 arg3)
{
  char *var_a0;
  s32 var_a1;
  s32 var_t0;
  char *var_a2;
  var_a0 = arg0;
  var_a1 = arg1;
  var_a2 = arg2;
  var_t0 = 0;
  if (arg3 >= 0)
  {
    loop_1:
    if ((*((u16 *) var_a2)) & 1)
    {
      *((s32 *) var_a0) = var_a1 | 1;
      func_801066F0(var_a0, var_a1, var_a2);
      return;
    }

 do { *((s32 *) var_a0) = var_a1; } while (0);
    var_a1 += *((u16 *) inline_fn(var_a2));
    var_a2 += 2;
    __repair_rows:
    {
      do
      {
        do
        {
          var_t0 += 1;
        }
        while (0);
      }
      while (0);
    }

    if (0)
    {
      goto __repair_rows;
    }
    var_a0 += 4;
    if (arg3 < var_t0)
    {
    }
    else
    {
      goto loop_1;
    }
  }
}
