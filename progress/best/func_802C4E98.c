s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32);
s32 func_802C3274();
s32 func_802C382C();
s32 func_802C3934(f32);
s32 func_802C49AC();
s32 func_802CC190();
extern s32 D_8002D420;
extern s32 D_8002D424;
extern f32 D_8003B030;
extern s32 D_800458AC;
extern s32 D_80075518;
extern s16 D_80075522;
extern s32 D_80075568;
void func_802C4E98(void)
{
  s32 *__base_D_800458AC;
  if ((D_8002D420 & 0x28) != 0x28)
  {
    if (!(D_8002D420 & 0x01000000))
    {
      func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x2D, 2);
    }
  }
  if (D_8002D420 & 1)
  {
    func_8023DF7C(&D_80075568, &D_80075518, 0x63, 0xA, 0x2D, 2);
  }
  if (D_8002D420 & 2)
  {
    if (D_8002D424)
    {
      D_8003B030 = *((f32 *) 0x218478);
    }
    else
    {
      D_8003B030 = *((f32 *) 0x218478);
    }
  }
  if (D_8002D420 & 0x80)
  {
    __base_D_800458AC = &D_800458AC;
    if ((*__base_D_800458AC) == 0)
    {
      *__base_D_800458AC = 1;
      func_8023DF7C(&D_80075568, &D_80075518, 0x98, 0xA, 0x2D, 2);
    }
  }
  if (D_8002D424 & 0x40)
  {
    func_8023DF7C(&D_80075568, &D_80075518, 0x9C, 0xA, 0x2D, 2);
  }
  func_802C3934(*((f32 *) 0x21847C));
  func_802C49AC();
  func_802C3274();
  if (D_80075522 == 0)
  {
    func_802CC190();
  }
  func_802C382C();
}

