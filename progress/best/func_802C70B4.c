extern float D_80075584;
extern float D_8002D414;
extern long D_8002DBDC;
extern int D_8002DBEC;
s32 func_8023DF7C();
s32 func_802C3274();
s32 func_802C43C0();
s32 func_802C7100();
s32 func_802C717C();
s32 func_802CC190();
extern char D_8002D410[];
extern s32 D_8002D420;
extern char D_8002DBD0[];
extern f32 D_80074BC0;
extern char D_80075518[];
extern char D_80075568[];
void func_802C70B4(void)
{
  if (!(D_8002D420 & 0x40))
  {
    if (func_802C43C0() == 0)
    {
      func_802C7100(D_80075568, D_80075518);
      return;
    }
    func_8023DF7C(D_80075568, D_80075518, 0xE, 0xA, 0x1E, 2);
    goto block_5;
  }
  block_5:
  if (D_8002D420 & 4)
  {
    func_802C717C();
    return;
  }

  if (((unsigned char) D_8002D420) & 8)
  {
    D_80075584 = (f32) (D_80075584 + (D_80074BC0 * D_8002D414));
  }
  if ((D_8002DBDC == 0) && (D_8002DBEC == 0))
  {
    func_8023DF7C(D_80075568, D_80075518, 0xC, 0xA, 0x46, 2);
  }
  func_802C3274();
  func_802CC190();
}

