inline static s32 *inline_fn(char *arg0)
{
  return (s32 *) arg0;
}

s32 func_8010D0CC(void *arg0)
{
  s32 temp_v1;
  temp_v1 = *inline_fn(((char *) arg0) + 0x3C);
  *((s32 *) (((char *) arg0) + 0x3C)) = (s32) (temp_v1 - 1);
  return *inline_fn(((char *) (arg0 + ((temp_v1 *= 4)))) + 0x14);
}

