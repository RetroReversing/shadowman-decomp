void func_801056DC(s32 *arg0, s32 arg1)
{
  char *var_v1;
  s32 temp_a1;
  s32 var_a2;
  void *var_a0;
  temp_a1 = arg1 - 1;
  var_a2 = temp_a1;
  var_v1 = arg0;
  if ((temp_a1 & 0xFF) != 0xFF)
  {
    var_a0 = arg0 + 0xC;
    do
    {
      do
      {
        {
          if (arg0)
          {
            *((s32 *) var_v1) = 0;
            *((u16 *) (((char *) var_a0) + (-8))) = 0xFFFF;
            *((s32 *) (((char *) var_a0) + (-4))) = 0;
            *((s16 *) (((char *) var_a0) + 0)) = 0;
            var_a0 += 0x10;
            temp_a1 = var_a2 - 1;
            var_a2 = temp_a1;
            var_v1 += 0x10;
          }
          else
          {
            *((s32 *) var_v1) = 0;
            *((u16 *) (((char *) var_a0) + (-8))) = 0xFFFF;
            *((s32 *) (((char *) var_a0) + (-4))) = 0;
            *((s16 *) (((char *) var_a0) + 0)) = 0;
            var_a0 += 0x10;
            temp_a1 = var_a2 - 1;
            var_a2 = temp_a1;
            var_v1 += 0x10;
          }
        }
      }
      while (0);
    }
    while ((temp_a1 & 0xFF) != 0xFF);
  }
}

