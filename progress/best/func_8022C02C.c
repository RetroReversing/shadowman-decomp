s32 func_80103480();
extern s32 D_8005979C;
void func_8022C02C(void *arg0_in)
{
  int __repair_literal;
  void *arg0;
  unsigned char var_lo;
  u32 var_a3;
  u8 temp_v1;
  int temp_v1_2;
  arg0 = arg0_in;
  var_a3 = 0;
  if ((*((u8 *) (((char *) arg0) + 5))) != 0)
  {
    do
    {
      u32 var_a2;
      temp_v1 = *((u8 *) (((char *) arg0) + 4));
      var_a2 = 0;
      if (temp_v1 != 0)
      {
        var_lo = var_a3 * temp_v1;
        do
        {
          do
          {
            __repair_literal = 4;
            *((s32 *) ((var_a2 * 4) + ((var_lo * __repair_literal) + D_8005979C))) = *((s32 *) ((var_a3 * 4) + (((*((s32 *) (((char *) arg0) + 0xC))) + (((*((u8 *) (((char *) arg0) + 4))) * ((*((u8 *) (((char *) arg0) + 5))) - 1)) * 4)) - ((var_a2 * (*((u8 *) (((char *) arg0) + 4)))) * 4))));
          }
          while (0);
          temp_v1_2 = *((u8 *) (((char *) arg0) + 4));
          var_a2 += 1;
          var_lo = var_a3 * temp_v1_2;
        }
        while (var_a2 < temp_v1_2);
      }
      var_a3 += 1;
    }
    while (var_a3 < ((u8) (*((u8 *) (((char *) arg0) + 5)))));
  }
  func_80103480(*((s32 *) (((char *) arg0) + 0xC)), D_8005979C, ((*((u8 *) (((char *) arg0) + 4))) * (*((u8 *) (((char *) arg0) + 5)))) * 4, var_a3);
}

