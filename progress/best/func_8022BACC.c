s32 func_8022B840();
s32 func_8022B8D8();
extern s32 D_80059794;
extern s32 D_80059798;
void func_8022BACC(void *arg0)
{
  s32 temp_s1;
  s32 var_lo;
  u32 var_a0;
  u32 var_a1;
  u8 temp_v1;
  u8 temp_v1_2;
  temp_s1 = (D_80059794 + (*((u8 *) (((char *) arg0) + 4)))) - 1;
  func_8022B840();
  var_a1 = 0;
  if ((*((u8 *) (((char *) arg0) + 5))) != 0)
  {
    do
    {
      temp_v1 = *((u8 *) (((char *) arg0) + 4));
      var_a0 = 0;
      if (temp_v1 != 0)
      {
        var_lo = var_a1 * temp_v1;
        do
        {
          *((s8 *) ((var_lo + (*((s32 *) 0x80059794))) + var_a0)) = *((s32 *) ((temp_s1 + (var_a0 * (*((u8 *) (((char *) arg0) + 4))))) - var_a1));
          temp_v1_2 = *((u8 *) (((char *) arg0) + 4));
          var_a0 += 1;
          var_lo = var_a1 * temp_v1_2;
        }
        while (var_a0 < temp_v1_2);
      }
      var_a1 += 1;
    }
    while (var_a1 < ((u8) (*((u8 *) (((char *) arg0) + 5)))));
  }
  func_8022B8D8(arg0, var_a1);
}

