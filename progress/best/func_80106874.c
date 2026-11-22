s32 func_80116D80(s32 *, void **, s32);
s32 func_80116EB0(s32 *, s16 *, s32);
s32 osCreateMesgQueue(s32 *, s32 *, s32);
extern s32 D_8004B44C;
s32 func_80106874(s32 arg0)
{
  char sp10[0x18];
  s32 sp38[2];
  s32 sp28[2];
  s32 *sp30;
  void *sp40;
  s32 sp48;
  void *sp4C;
  void *sp50;
  osCreateMesgQueue(sp10, &sp48, 1);
  sp28[1] = arg0;
  sp28[0] = 2;
  sp30 = sp10;
  func_80116EB0(&D_8004B44C, sp28, 1);
  func_80116D80(sp10, &sp4C, 1);
  sp38[0] = 3;
  sp30 = sp10;
  sp40 = sp4C;
  sp48 = (*((u16 *) (((char *) sp4C) + 6))); sp38[1] = sp48 << 0xC;
  *((s32 *) (((char *) sp4C) + 8)) = 0;
  func_80116EB0(&D_8004B44C, sp38, 1);
  func_80116D80(sp10, &sp50, 1);
  return (s32) sp50;
}

