typedef struct 
{
  unsigned char pad_0[16];
  float field_10;
  float field_14;
  unsigned char pad_18[4];
  float field_1C;
} __repair_record_arg0;
f32 func_80113040(void *arg0, s32 arg1)
{
  f32 var_fv0f;
  f32 var_fv1;
  do
  {
    var_fv1 = ((__repair_record_arg0 *) arg0)->field_14 + (((__repair_record_arg0 *) arg0)->field_10 * ((f32) arg1));
    ((__repair_record_arg0 *) arg0)->field_14 = var_fv1;
    if ((*((f32 *) 0x1023B8)) < var_fv1)
    {
      if (var_fv0f)
      {
        do
        {
          var_fv1 -= *((f32 *) 0x1023BC);
        }
        while (0);
      }
      else
      {
        var_fv1 -= *((f32 *) 0x1023BC);
      }
    }
    var_fv0f = var_fv1;
    ((__repair_record_arg0 *) arg0)->field_14 = var_fv0f;
    if (var_fv0f < 0.0f)
    {
      var_fv0f = -var_fv0f;
    }
    return (var_fv0f - (*((f32 *) 0x1023C0))) * ((__repair_record_arg0 *) arg0)->field_1C;
  }
  while (0);
}

