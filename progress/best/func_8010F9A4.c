s32 alLink(void *, s32 *, s32 *);
s32 alUnlink(void *);
s32 func_8010FBE0(s32, void *, s32);
s32 func_80118570(s32);
void func_8010F9A4(void **arg0_in, s32 arg1, s32 arg2)
{
  void **arg0;
  s32 *temp_a2;
  s32 *var_a1;
  s32 temp_s5;
  s32 temp_v1;
  s32 var_s1;
  s32 var_s2;
  void *temp_s0;
  arg0 = arg0_in;
  var_s1 = arg2;
  var_s2 = 0;
  temp_s5 = func_80118570(1);
  temp_s0 = *arg0;
  if (temp_s0 == NULL)
  {
  }
  else
  {
    alUnlink(temp_s0);
    func_8010FBE0(arg1, temp_s0 + 0xC, 0x10);
    if (var_s1 == 0x7FFFFFFF)
    {
      var_s2 = -1;
    }
    var_a1 = (void *) (8 + ((s32) arg0));
    if (var_a1 != NULL)
    {
      loop_6:
      temp_a2 = *var_a1;

      if (temp_a2 == NULL)
      {
        if (var_s2 != 0)
        {
          *((s32 *) (((char *) temp_s0) + 8)) = 0;
        }
        else
        {
          *((s32 *) (((char *) temp_s0) + 8)) = var_s1;
        }
        if (arg0)
        {
          alLink(temp_s0, var_a1, temp_a2);
        }
        else
        {
          alLink(temp_s0, var_a1, temp_a2);
        }
      }
      else
      {
        temp_v1 = *((s32 *) (((char *) temp_a2) + 8));
        if (var_s1 >= temp_v1)
        {
          var_s1 -= temp_v1;
          var_a1 = temp_a2;
          goto loop_6;
        }
        *((s32 *) (((char *) temp_s0) + 8)) = var_s1;
        *((s32 *) (((char *) temp_a2) + 8)) = (s32) ((*((s32 *) (((char *) temp_a2) + 8))) - var_s1);
        alLink(temp_s0, var_a1, temp_a2);
      }
    }
  }
  func_80118570(temp_s5);
}

