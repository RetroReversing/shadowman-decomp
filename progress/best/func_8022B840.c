extern s32 D_80059794;
void func_8022B840(void *arg0)
{
  u32 temp_lo;
  u32 var_a1;
  u32 var_a2;
  u32 var_v1;
  u8 temp_a0;
  temp_lo = (*((u8 *) (((char *) arg0) + 5))) * (*((u8 *) (((char *) arg0) + 4)));
  var_a2 = 0;
  if (temp_lo != 0)
  {
    do
    {
      var_a1 = 0;
      if ((*((u8 *) (((char *) arg0) + 4))) != 0)
      {
        var_v1 = var_a2;
        do
        {
          temp_a0 = *((u8 *) ((var_v1 >> 1) + (*((s32 *) (0xC + ((char *) arg0))))));
          *((s8 *) ((D_80059794 + var_a2) + var_a1)) = (s8) (temp_a0 >> 4);
          *((s8 *) (((char *) ((D_80059794 + var_a2) + var_a1)) + 1)) = (s8) (temp_a0 & 0xF);
          var_a1 += 2;
          var_v1 = var_a2 + var_a1;
        }
        while (var_a1 < ((u8) (*((u8 *) (((char *) arg0) + 4)))));
      }
      var_a2 += *((u8 *) (((char *) arg0) + 4));
    }
    while (var_a2 < temp_lo);
  }
}

