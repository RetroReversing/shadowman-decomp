extern char D_8001E5B0[];
void func_8010A020(s32 arg0, s32 arg1)
{
  char *__base_D_8001E5B0;
  if (((u32) (arg0 & 0xFFFF)) < 0x1FFU)
  {
    __base_D_8001E5B0 = D_8001E5B0;
    *((s32 *) (((char *) ((((unsigned char) arg0) * 0xC) + __base_D_8001E5B0)) + 8)) = arg1;
  }
}

