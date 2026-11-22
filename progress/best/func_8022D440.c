s32 func_801038FC(s32, s32, s32);
s32 func_8022D48C();
extern u32 D_80000318;
inline static int inline_fn(s32 arg0)
{
  return arg0 == 0;
}

void func_8022D440(s32 arg0, u32 arg1)
{
  unsigned char __repair_literal;
  s32 temp_s1;
  s32 var_s0;
  u32 temp_s3;
  temp_s3 = ((u32) D_80000318) >> 0x14;
  if (arg1 != 0)
  {
    func_8022D48C();
    return;
  }
  var_s0 = 0;
  __repair_literal = 0;
  if (((s32) temp_s3) >= __repair_literal)
  {
    for (;;)
    {
      if (var_s0 != (-2))
      {
        if ((inline_fn(var_s0) || ((var_s0 - 1) == (-2))) || (func_801038FC(((temp_s1 = (var_s0 << 0x14) + 0x80000000) - arg0) + 0xFFFF0000, arg0, 0) == 0))
        {
          if ((var_s0 + 1) <= ((s32) temp_s3))
          {
            do
            {
              if (func_801038FC(temp_s1 | 0x10000, arg0, 0) == 0)
              {
                goto block_13;
              }
              return;
            }
            while (0);
          }
          goto block_13;
        }
      }
      else
      {
        block_13:
        var_s0 += 1;

        if (((s32) temp_s3) < var_s0)
        {
        }
        else
        {
          continue;
        }
      }
      break;
    }

  }
}

