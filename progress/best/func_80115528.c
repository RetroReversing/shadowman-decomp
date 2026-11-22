s32 func_80115528(u8 *arg0)
{
  unsigned short temp_a1;
  s32 var_a2;
  s32 var_a3;
  s32 var_t0;
  s32 var_v1;
  unsigned short var_v1_2;
  u8 *var_a0;
  var_a0 = arg0;
  var_v1 = 0;
  var_t0 = 0;
  do
  {
    var_a2 = 7;
    loop_2:
    var_a3 = 0;

    if (var_v1 & 0x80)
    {
      var_a3 = 0x85;
    }
    do
    {
      temp_a1 = var_v1 * 2;
    }
    while (0);
    var_v1_2 = temp_a1;
    if (var_t0 != 0x20)
    {
      var_v1_2 = temp_a1 | ((((s32) (*var_a0)) >> var_a2) & 1);
    }
    var_a2 -= 1;
    var_v1 = var_v1_2 ^ var_a3;
    if (var_a2 >= 0)
    {
      goto loop_2;
    }
    do
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
    while (0);
    var_a0 += 1;
  }
  while (var_t0 < 0x21);
  return var_v1 & 0xFF;
}

