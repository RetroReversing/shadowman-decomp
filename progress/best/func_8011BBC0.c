f32 func_8011BBC0(f32 arg0)
{
  f32 temp_fv0;
  f32 temp_fv1f;
  f32 var_fv0;
  f32 var_fv0f;
  f32 var_fv1;
  s32 var_v0;
  s32 var_v1;
  temp_fv1f = fabsf(arg0);
  if (temp_fv1f < (*((f32 *) 0x102A24)))
  {
    var_fv0 = *((f32 *) 0x102A28);
    return var_fv0;
  }
  var_v1 = (s32) (temp_fv1f * (*((f32 *) 0x102A2C)));
  var_v0 = 1;
  if (var_v1 >= 0x401)
  {
    var_fv0 = 0.0f;
    if (arg0 >= 0.0f)
    {
      return *((f32 *) 0x102A20);
    }
    if (temp_fv1f)
    {
      return var_fv0;
    }
    else
      if (temp_fv1f)
    {
      return var_fv0;
    }
    else
    {
      return var_fv0;
    }
  }
  var_fv0f = *((f32 *) 0x102A34);
  var_fv1 = var_fv0f;
  do
  {
    var_fv1 *= (temp_fv1f - (((f32) var_v1) * (*((f32 *) 0x102A30)))) / ((f32) var_v0);
    temp_fv0 = var_fv0f;
    var_fv0f += var_fv1;
    var_v0 += 1;
  }
  while (var_fv0f != temp_fv0);
  if (var_v1 != 0)
  {
    do
    {
      var_v1 -= 1;
      var_fv0f *= 2.0f;
    }
    while (var_v1 != 0);
  }
  if (!(arg0 >= 0.0f))
  {
    return (*((f32 *) 0x102A38)) / var_fv0f;
  }
  return var_fv0f;
}

