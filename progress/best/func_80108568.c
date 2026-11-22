extern char D_8004DB48[];
void func_80108568(s32 arg0, void *arg1)
{
  char *var_a0;
  s32 temp_v0;
  s32 var_a2;
  *((s32 *) (((char *) arg1) + 4)) = 0;
  var_a0 = D_8004DB48;
  var_a2 = 0;
  for (;;)
  {
    do
    {
      temp_v0 = *((s32 *) (((char *) var_a0) + 0));
 do { if (temp_v0 != 1) { if (temp_v0 != 6) { var_a2 += 1; goto block_7; } goto block_5; } block_5: var_a2 += 1; } while (0);
      if ((*((u8 *) (((char *) var_a0) + 6))) == (*((u8 *) (((char *) arg1) + 8))))
      {
        *((s32 *) (((char *) var_a0) + 0)) = 4;
        return;
      }
      block_7:
      var_a0 += 0xC;

    }
    while (0);
    if (var_a2 >= 0x10)
    {
      return;
    }
    continue;
    break;
  }

}
