extern unsigned short D_21AB8C[];
extern u8 D_80045C3C;
extern u8 D_80075F20[2];
extern u8 D_8007C320;
inline static u8 inline_fn(u8 *arg0, int arg1)
{
  return arg0[arg1 + 3];
}

void func_802D3CC4(void)
{
  s32 i;
  if (D_8007C320 != 0)
  {
    D_80075F20[0] = 4;
    D_80075F20[1] = 0x18;
    D_8007C320 = 0;
    return;
  }
  do
  {
    i = D_80045C3C; D_80045C3C = i + 1;
  }
  while (0);
  D_80075F20[0] = D_21AB8C[(i * 4) + 1];
  D_80075F20[1] = inline_fn(D_21AB8C, i * 4);
  if ((*((s16 *) (&D_21AB8C[D_80045C3C * 4]))) < 0)
  {
    D_80045C3C = 0;
  }
}

