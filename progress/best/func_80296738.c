s32 func_80230834();
s32 func_802967A4();
s32 func_802967BC();
s32 func_802967CC();
extern char D_8002C2A0[];
s32 func_80296738(s32 arg0)
{
  char *__base_D_8002C2A0;
  s32 ret;
  void *temp_a1;
  if (arg0 == 0x2F)
  {
    return func_802967BC();
  }
  __base_D_8002C2A0 = D_8002C2A0;
  temp_a1 = (((unsigned char) arg0) * 0xC) + __base_D_8002C2A0;
  if ((*((s32 *) (((char *) temp_a1) + 0))) == 0)
  {
    func_802967CC(arg0, temp_a1);
    ret = func_802967A4();
  }
  else
  {
    func_80230834(*((s16 *) (((char *) temp_a1) + 0xA)));
    ret = *((arg0 * 0xC) + __base_D_8002C2A0);
  }
  return ret;
}

