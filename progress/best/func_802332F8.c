s32 func_801043F8();
s32 func_802333B8();
extern void *D_8005E9F0;
inline static int inline_fn(s16 arg0, int arg1)
{
  return arg0 > arg1;
}

void func_802332F8(s32 arg0, s32 arg1, s32 arg2, void *arg3)
{
  s16 temp_v1;
  s16 temp_v1_3;
  s16 temp_v1_4;
  s32 var_a0;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_a3_2;
  long var_t1;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  void *temp_v1_2;
  void *var_a3;
  var_a0 = 0;
  var_a2 = 0;
  var_a3 = arg3;
  if (inline_fn(*((s16 *) (((char *) D_8005E9F0) + 0x20)), 0))
  {
    var_a3 = D_8005E9F0;
    temp_v1_2 = *((void **) (((char *) var_a3) + 8));
    __repair_rows:
    {
      if ((*((s32 *) (((char *) temp_v1_2) + 0x20))) == 0)
      {
        temp_v1 = *((s16 *) (((char *) var_a3) + 0x20));
        var_v0 = temp_v1 + 7;
        if (var_v0 < 0)
        {
          var_v0 = temp_v1 + 0xE;
        }
        var_a0 += var_v0 >> 3;
      }
      temp_v1_2 += 0x28;
      var_a2 += 1;
    }

    if (var_a2 < (*((s16 *) (((char *) D_8005E9F0) + 0x20))))
    {
      goto __repair_rows;
    }
  }
  if ((var_a0 != 0) && ((var_t1 = func_801043F8(var_a0, 2, 0, var_a3), var_a2_2 = 0, (*((s16 *) (((char *) D_8005E9F0) + 0x20))) > 0)))
  {
    var_a3_2 = 0;
    loop_10:
    temp_v1_2 = var_a3_2 + (*((void **) (((char *) D_8005E9F0) - (-8))));

    if ((*((s32 *) (((char *) temp_v1_2) + 0x20))) == 0)
    {
      *((s32 *) (((char *) temp_v1_2) + 0x20)) = var_t1;
      temp_v1_3 = *((s16 *) (((char *) D_8005E9F0) + 0x20));
      var_v0_2 = temp_v1_3 + 7;
      if (var_v0_2 < 0)
      {
        if (1)
        {
        }
        var_v0_2 = temp_v1_3 + 0xE;
      }
      if (inline_fn(var_v0_2 >> 3, 0))
      {
 do { func_802333B8(D_8005E9F0, 1, var_a2_2, var_a3_2); return; } while (0);
      }
      temp_v1_4 = *((s16 *) (((char *) D_8005E9F0) + 0x20));
      var_v0_3 = temp_v1_4 + 7;
      if (var_v0_3 < 0)
      {
        var_v0_3 = temp_v1_4 + 0xE;
      }
      var_t1 += (var_v0_3 >> 2) >> 1;
      goto block_19;
    }
    block_19:
    var_a2_2 += 1;

    var_a3_2 += 0x28;
    if (var_a2_2 >= (*((s16 *) (((char *) D_8005E9F0) + 0x20))))
    {
    }
    else
    {
      goto loop_10;
    }
  }
}
