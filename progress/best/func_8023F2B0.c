inline static float inline_fn(f32 arg0, f32 arg1)
{
  return arg0 * arg1;
}

f32 func_8023F2B0(f32 arg0, f32 arg1)
{
  f32 temp_ft0;
  f32 temp_fv1f;
  temp_fv1f = arg1 * arg1;
  if (1)
  {
    temp_ft0 = inline_fn(arg0, arg0);
  }
  return ((arg1 + inline_fn(arg0, (arg1 - inline_fn(arg1, temp_fv1f)) * (*((f32 *) 0x202680)))) + inline_fn(temp_ft0, inline_fn(inline_fn(arg1, (*((f32 *) 0x202688)) - inline_fn(temp_fv1f, temp_fv1f + (*((f32 *) 0x202684)))), *((f32 *) 0x20268C)))) + (inline_fn(temp_ft0, arg0) * inline_fn(arg1 * ((*((f32 *) 0x202698)) - (temp_fv1f * (inline_fn(temp_fv1f, (*((f32 *) 0x202690)) - temp_fv1f) + (*((f32 *) 0x202694))))), *((f32 *) 0x20269C)));
}

