s32 func_8022F9D8(s32);
s32 func_8023D030(s32, s16 *, s32, s32, s32, void *);
extern s32 D_8006A500;
typedef struct 
{
  unsigned char pad_0[22];
  short field_16;
  unsigned char pad_18[24];
  int field_30;
  int field_34;
  unsigned char pad_38[6];
  short field_3E;
  int field_40;
  int field_44;
  void *field_48;
} __repair_record_arg1;
void func_8023CEE0(s32 arg0_in, s16 *arg1)
{
  s32 arg0;
  s16 *var_s1;
  s16 temp_v1;
  s32 *var_s2;
  s32 temp_v0;
  s32 var_s0;
  s32 var_s0_2;
  s32 var_s1_2;
  s32 var_s5;
  void *temp_s6;
  arg0 = arg0_in;
  var_s1 = arg1;
  var_s0 = 0;
  __repair_rows:
  {
    temp_v1 = *var_s1;
    if (temp_v1 != (-1))
    {
      if (arg1)
      {
        func_8022F9D8(((__repair_record_arg1 *) arg1)->field_34 + ((*((s16 *) (((char *) ((temp_v1 * 0x38) + ((__repair_record_arg1 *) arg1)->field_30)) + 0x2C))) * 0xC));
      }
      else
      {
        func_8022F9D8(((__repair_record_arg1 *) arg1)->field_34 + ((*((s16 *) (((char *) ((temp_v1 * 0x38) + ((__repair_record_arg1 *) arg1)->field_30)) + 0x2C))) * 0xC));
      }
    }
    var_s0 += 1;
    var_s1 += 2;
  }

  if (var_s0 < 3)
  {
    goto __repair_rows;
  }
  temp_s6 = ((__repair_record_arg1 *) arg1)->field_48;
  var_s5 = arg0 + 0x34;
  if (((__repair_record_arg1 *) arg1)->field_16 < 0xA)
  {
    ((__repair_record_arg1 *) arg1)->field_16 = 0xA;
  }
  var_s0_2 = 0;
  var_s0 = ((__repair_record_arg1 *) arg1)->field_40;
  var_s1_2 = ((__repair_record_arg1 *) arg1)->field_44;
  D_8006A500 = arg0;
  if (((__repair_record_arg1 *) arg1)->field_3E > 0)
  {
    var_s2 = *((s32 **) (((char *) temp_s6) + 0x18));
    do
    {
      temp_v0 = *var_s2;
      if ((temp_v0 != (-1)) && (var_s0_2 != 0))
      {
        do
        {
          do
          {
            var_s5 = ((__repair_record_arg1 *) arg1)->field_40 + (temp_v0 << 6);
          }
          while (0);
        }
        while (0);
      }
      func_8023D030(var_s0_2, arg1, var_s0, var_s1_2, var_s5, temp_s6);
      if (var_s1_2 != 0)
      {
        var_s1_2 += 0x30;
      }
      var_s2 += 1;
      var_s0_2 += 1;
      var_s0 += 0x40;
    }
    while (var_s0_2 < ((__repair_record_arg1 *) arg1)->field_3E);
  }
}

