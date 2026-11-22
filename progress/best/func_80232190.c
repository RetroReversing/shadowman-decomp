extern void *D_80061A10;
s32 func_80232190(void *arg0, void *arg1)
{
  f32 temp_ft0;
  f32 temp_ft0f;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0f;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1f;
  s32 var_a2;
  s32 var_v0;
  u16 temp_v0;
  void *temp_v0_2;
  void *var_v1;
  temp_fv1 = *((f32 *) (((char *) arg0) + 0xC));
  temp_ft1 = *((f32 *) (((char *) arg0) + 0));
  temp_ft0f = *((f32 *) (((char *) arg0) + 4));
  do
  {
    D_80061A10 = arg1; temp_v0 = *((u16 *) (((char *) arg1) + 0x30)); temp_ft0 = *((f32 *) (((char *) arg0) + 8));
  }
  while (0);
  var_a2 = 0;
  if (temp_v0 == 0)
  {
    if (1)
    {
      goto __shared_return_0;
    }
  }
  else
  {
    var_v1 = (*((s32 *) (((char *) arg1) + 0x14))) + 0x10;
    loop_2:
    temp_v0_2 = (*((s32 *) (((char *) arg1) + 0x1C))) + ((*((u16 *) (((char *) var_v1) + (-8)))) * 0x10);

    var_a2 += 1;
    if (fabsf(((((*((f32 *) (((char *) temp_v0_2) + 0))) * temp_ft1) + ((*((f32 *) (((char *) temp_v0_2) + 4))) * temp_ft0f)) + ((*((f32 *) (((char *) temp_v0_2) + 8))) * temp_ft0)) + (*((f32 *) (((char *) temp_v0_2) + 0xC)))) < temp_fv1)
    {
      temp_fv1f = (f32) (*((u16 *) (((char *) var_v1) + 0)));
      temp_fv0f = temp_ft1 - ((f32) (*((s16 *) (((char *) var_v1) + (-6)))));
      temp_fv1_2 = temp_ft0f - ((f32) (*((s16 *) (((char *) var_v1) + (-4)))));
      temp_fv0 = temp_ft0 - ((f32) (*((s16 *) (((char *) var_v1) + (-2)))));
      var_v0 = var_a2 < ((s32) temp_v0);
      if (((temp_fv1f * temp_fv1f) + ((temp_fv1 * temp_fv1) * (*((f32 *) 0x2022D4)))) > ((temp_fv0 * temp_fv0) + ((temp_fv0f * temp_fv0f) + (temp_fv1_2 * temp_fv1_2))))
      {
        return 1;
      }
      goto block_6;
    }
    var_v0 = var_a2 < ((s32) temp_v0);
    block_6:
    var_v1 += 0x12;

    if (var_v0 == 0)
    {
      __shared_return_0:
      return 0;

    }
    goto loop_2;
  }
}

