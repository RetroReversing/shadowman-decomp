extern s32 D_8004DC0C;
s32 *func_801088D4(void)
{
  s32 *var_v1;
  s32 var_a0;
  var_v1 = &D_8004DC0C;
  var_a0 = 0;
  for (;;)
  {
    var_a0 += 1;
    if ((*((s32 *) (((char *) var_v1) + 4))) == 0)
    {
      return var_v1;
    }
    var_v1 += 5;
    if (var_a0 >= 0x20)
    {
      return NULL;
    }
 do { continue; break; } while (0);
  }

}
