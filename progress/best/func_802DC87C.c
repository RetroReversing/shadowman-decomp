s32 func_802DC8F4();
s32 func_802DCA1C();
inline static u16 *inline_fn(s32 arg0, int arg1)
{
  return (u16 *) (arg0 + arg1);
}

inline static int inline_fn2(int arg0)
{
  return arg0 * 2;
}

inline static int inline_fn23(s32 arg0, s32 arg1)
{
  return arg0 + (arg1 * 2);
}

s32 func_802DC87C(void *arg0, s32 arg1_in, u8 arg2, s32 arg3, u8 arg4, u16 *arg5, s32 arg6)
{
  s32 arg1;
  s32 temp_a1;
  s32 temp_s1;
  s32 __repair_phase_temp_v1;
  s32 var_v0;
  u16 var_s0;
  s32 var_v1;
  s32 var_v0_2;
  u32 temp_a0;
  u32 temp_a0_2;
  u32 temp_v1_2;
  arg1 = arg1_in;
  var_s0 = *inline_fn(arg1, inline_fn2(arg2 & 0xFF));
  temp_a0_2 = var_s0 & 0xFFFF;
  var_v1 = 1;
  if (temp_a0_2 != 1)
  {
    var_v0_2 = var_s0 & 0xFF;
    if ((temp_a0_2 >> 8) == 0)
    {
      return func_802DC8F4(temp_a0_2);
    }
    goto block_7;
  }
  var_v1 = 1;
  if (!arg4)
  {
    var_v1 = *((s32 *) (((char *) arg0) + 0x60));
  }
  temp_a1 = var_s0 & 0xFF;
  var_v0_2 = temp_a1;
  block_7:
  if ((var_v0_2 >= var_v1) || ((var_v0 = 3, var_s0 == 1)))
  {
    *arg5 = var_s0;
    if (arg6 == 1)
    {
      *((s16 *) inline_fn23(arg1, arg2 & 0xFF)) = 3;
    }
    do
    {
      var_v0 = func_802DCA1C(arg0, arg2 & 0xFF, arg3); temp_s1 = arg4 & 0xFF; __repair_phase_temp_v1 = var_s0 & 0xFFFF;
    }
    while (0);
    if (var_v0 == 0)
    {
      var_v0 = 0;
      if (__repair_phase_temp_v1 != 1)
      {
        if (__repair_phase_temp_v1 >= (*((s32 *) (((char *) arg0) + 0x60))))
        {
          loop_15:
          temp_a1 = var_s0 & 0xFF;

          var_s0 = *((u16 *) inline_fn23(arg1, temp_a1));
          *((s16 *) inline_fn23(arg1, temp_a1)) = 3;
          var_v0 = func_802DCA1C(arg0, temp_a1, arg3);
          temp_v1_2 = var_s0 & 0xFFFF;
          if (var_v0 == 0)
          {
            temp_a0_2 = temp_v1_2 >> 8;
            if ((temp_a0_2 != temp_s1) || (((s32) temp_v1_2) < (*((s32 *) (((char *) arg0) + 0x60)))))
            {
              if (((s32) temp_v1_2) >= (*((s32 *) (((char *) arg0) + 0x60))))
              {
                if (temp_a0_2 == temp_s1)
                {
                  *((s16 *) (arg1 + inline_fn2(var_s0 & 0xFF))) = 3;
                }
              }
              goto block_21;
            }
            goto loop_15;
          }
        }
        else
        {
          block_21:
          *arg5 = var_s0;

          var_v0 = 0;
        }
      }
    }
  }

  return var_v0;
}

