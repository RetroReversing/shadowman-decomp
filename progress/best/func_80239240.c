s32 *func_802392E0();
s32 *func_80239328(s32 *);
extern s32 (*D_800698B0)(s32 *, s32 *);
s32 *func_80239240(s32 *arg0_in)
{
  s32 *arg0;
  s32 *temp_s1;
  s32 *temp_s2;
  s32 *temp_s3;
  s32 *var_s0_2;
  s32 *var_s0_3;
  s32 *var_s1;
  s32 *var_s4;
  s32 temp_v0;
  volatile unsigned char pad;
  arg0 = arg0_in;
  temp_s1 = arg0;
  temp_s2 = temp_s1;
  for (;;)
  {
    temp_s1 = *temp_s1;
    if (temp_s1 == NULL)
    {
      return func_80239328(temp_s2);
    }
    temp_v0 = D_800698B0(temp_s2, temp_s1);
    if (temp_v0 != 0)
    {
      var_s4 = temp_s2;
      if (temp_v0 > 0)
      {
        var_s4 = temp_s1;
      }
      var_s1 = NULL;
      var_s0_2 = temp_s2;
      if (var_s0_2 != NULL)
      {
        for (;;)
        {
          temp_s2 = *var_s0_2;
          if (D_800698B0(var_s4, var_s0_2) >= (0 & 0xFFFFu))
          {
            if (temp_s3)
            {
              *var_s0_2 = var_s1;
              var_s1 = var_s0_2;
              var_s0_2 = temp_s2;
            }
            else
            {
              *var_s0_2 = var_s1;
              var_s1 = var_s0_2;
              var_s0_2 = temp_s2;
            }
            if (var_s0_2 != NULL)
            {
              continue;
            }
            else
            {
              goto block_15;
            }
          }
          break;
        }

        *var_s0_2 = NULL;
        return func_802392E0(arg0);
      }
      block_15:
      temp_s1 = func_80239240(var_s1);

      if (temp_s3)
      {
        temp_s3 = func_80239240(NULL);
        var_s0_3 = temp_s1;
      }
      else
      {
        temp_s3 = func_80239240(NULL);
        var_s0_3 = temp_s1;
      }
      if ((*temp_s1) != NULL)
      {
        do
        {
          var_s0_3 = *var_s0_3;
        }
        while ((*var_s0_3) != NULL);
      }
      *var_s0_3 = temp_s3;
      return temp_s1;
    }
    continue;
    break;
  }

}

