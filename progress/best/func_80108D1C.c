f32 func_80108D1C(void *arg0, f32 arg1)
{
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1f;
  f32 temp_fv1f_2;
  f32 var_fv0;
  temp_fv1f = *((f32 *) (((char *) arg0) + 0));
  temp_fv1 = *((f32 *) (((char *) arg0) + 4));
  temp_fv0_2 = *((f32 *) (((char *) arg0) + 8));
  temp_fv1f_2 = ((temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1)) + (temp_fv0_2 * temp_fv0_2);
  if ((temp_fv1f_2 < (temp_fv0f = (*((f32 *) 0x1005E0)) * arg1)) || (temp_fv1f_2 == 0.0f))
  {
    var_fv0 = *((f32 *) 0x1005E4);
    return var_fv0;
  }
  temp_fv1_2 = *((f32 *) 0x1005E8);
  temp_fv0 = (temp_fv0f * temp_fv1_2) / temp_fv1f_2;
  if (temp_fv1_2 < temp_fv0)
  {
    var_fv0 = temp_fv1_2;
    return temp_fv1_2;
  }
  return temp_fv0;
}

