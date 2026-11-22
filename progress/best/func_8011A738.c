extern int D_800BA200;
extern int D_800BA1F4;
s32 func_8011A160();
s16 func_8011A334();
extern s16 D_800BA14E;
extern char D_8011EC70[];
s32 func_8011A738(s32 arg0)
{
  s16 sp18;
  s16 temp_v1;
  s16 temp_v1_2;
  s16 var_a3;
  s16 var_a3_2;
  char *var_s0;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 var_v0;
  u16 *temp_a1;
  u16 temp_v0;
  void *temp_a0_4;
  var_s0 = &D_800BA1F4;
  do
  {
    var_a3 = 0;
  }
  while (0);
  if (D_800BA14E == 0)
  {
    D_800BA14E = 1;
    if ((func_8011A160(arg0 + 0x18, 6, 0x10, 0, arg0) << 0x10) > 0)
    {
      D_800BA200 = (s32) (D_800BA200 + 0x60);
      do
      {
        temp_a0 = var_a3 << 0x10;
        temp_v1 = var_a3 + 1;
        var_a3 = temp_v1;
        temp_a0_2 = temp_a0 >> 0xF;
        *(temp_a0_2 + D_8011EC70) = *((u16 *) (((char *) (arg0 + temp_a0_2)) + 0x18));
      }
      while (temp_v1 < 0x10);
      if (D_800BA1F4 != 0)
      {
        do
        {
          var_s0 += 0x14;
        }
        while ((*((s32 *) var_s0)) != 0);
      }
      goto block_11;
    }
    goto block_12;
  }
  var_v0 = -1;
  if (func_8011A334(&D_800BA1F4, arg0 + 0x18, 0x10, &sp18, arg0) == 0x10)
  {
    var_a3_2 = 0;
    var_s0 = (sp18 * 0x14) + (&D_800BA1F4);
    do
    {
      temp_a0_3 = ((s32) (var_a3_2 << 0x10)) >> 0xF;
      do
      {
        temp_a1 = temp_a0_3 + D_8011EC70; temp_a0_4 = arg0 + temp_a0_3;
      }
      while (0);
      temp_v1_2 = var_a3_2 + 1;
      var_a3_2 = temp_v1_2;
      temp_v0 = (*temp_a1) + (*((u16 *) (((char *) temp_a0_4) + 0x18)));
      *((u16 *) (((char *) temp_a0_4) + 0x18)) = temp_v0;
      *temp_a1 = temp_v0;
    }
    while (temp_v1_2 < 0x10);
    block_11:
    var_v0 = 1;

    if (func_8011A334(var_s0, arg0 + 0xB8, 0x100, &sp18) != 0x100)
    {
      block_12:
      var_v0 = -1;

    }
  }
  return var_v0;
}

