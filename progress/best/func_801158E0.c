s32 func_801176C0(s32);
s32 memcpy(s32 *, s32, s32);
extern s32 D_8004F0A0;
s32 *func_801158E0(s32 arg0)
{
  s32 *__base_D_8004F0A0;
  do
  {
    __base_D_8004F0A0 = &D_8004F0A0;
    if (((unsigned long) __base_D_8004F0A0) & 0x100)
    {
      memcpy(__base_D_8004F0A0, arg0, 0x40);
    }
    else
    {
      memcpy(__base_D_8004F0A0, arg0, 0x40);
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x10))) != 0)
    {
      *((s32 *) (((char *) __base_D_8004F0A0) + 0x10)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x10)));
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x18))) != 0)
    {
      *((s32 *) (((char *) __base_D_8004F0A0) + 0x18)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x18)));
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x20))) != 0)
    {
      *((s32 *) (((char *) __base_D_8004F0A0) + 0x20)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x20)));
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x28))) != 0)
    {
      if (__base_D_8004F0A0 || arg0)
      {
        *((s32 *) (((char *) __base_D_8004F0A0) + 0x28)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x28)));
      }
      else
      {
        *((s32 *) (((char *) __base_D_8004F0A0) + 0x28)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x28)));
      }
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x2C))) != 0)
    {
      *((s32 *) (((char *) __base_D_8004F0A0) + 0x2C)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x2C)));
    }
    if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x30))) != 0)
    {
      *((s32 *) (((char *) __base_D_8004F0A0) + 0x30)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x30)));
    }
  }
  while (0);
  if ((*((s32 *) (((char *) __base_D_8004F0A0) + 0x38))) != 0)
  {
    *((s32 *) (((char *) __base_D_8004F0A0) + 0x38)) = func_801176C0(*((s32 *) (((char *) __base_D_8004F0A0) + 0x38)));
  }
  return __base_D_8004F0A0;
}

