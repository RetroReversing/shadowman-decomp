s16 func_80221728(s32 arg0, u8 *arg1)
{
  s16 temp_v1;
  s16 var_a2;
  u16 var_a3;
  u8 *temp_v0;
  var_a2 = 0;
  var_a3 = 0;
 do { if ((*arg1) != 0) { do { temp_v0 = arg1 + var_a2; do { temp_v1 = var_a2 + 1; } while (0); var_a2 = temp_v1; var_a3 += (*((u8 *) (((char *) ((*temp_v0) + arg0)) + (-0x1F)))) + 1; } while ((*(arg1 + temp_v1)) != 0); } return var_a3; } while (0);
}
