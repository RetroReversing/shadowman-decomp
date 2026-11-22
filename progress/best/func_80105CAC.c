extern int D_8004AEC0;
s32 func_80105C44();
s32 func_80115C70();
extern s32 D_8004AEB0;
extern s32 D_8004AEB4;
extern char D_8004AEB8[];
long func_80105CAC(void)
{
  D_8004AEB0 += 1;
  do
  {
    D_8004AEB4 += 1;
  }
  while (0);
  func_80105C44(1);
  if (((D_8004AEC0 != 0) && ((*((void **) (((char *) D_8004AEB8) + 0))) != NULL)) && ((*(*((s32 **) (((char *) (*((void **) (((char *) D_8004AEB8) + 0)))) + 0)))) == 1))
  {
    *((s32 *) (((char *) (*((void **) (((char *) D_8004AEB8) + 0)))) + 0x10)) |= 4;
    func_80115C70();
  }
}

