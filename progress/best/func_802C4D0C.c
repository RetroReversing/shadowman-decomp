s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32);
volatile short func_802C3274();
s32 func_802C382C();
s32 func_802C3934(f32);
s32 func_802C49AC();
s32 func_802CC190();
extern s32 D_8002D420;
extern s32 D_8002D424;
extern f32 D_8003AFF8;
extern s32 D_800458AC;
extern s32 D_80075518;
extern s16 D_80075522;
extern s32 D_80075568;
void func_802C4D0C(void)
{
  if ((D_8002D420 & 0x24) != 0x24)
  {
    if (!(D_8002D420 & 0x800000))
    {
      func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x2D, 2);
    }
  }
  if (D_8002D420 & 1)
  {
    func_8023DF7C(&D_80075568, &D_80075518, 0x62, 0xA, 0x2D, 2);
  }
  if (D_8002D420 & 2)
  {
    if (D_80075522)
    {
      D_8003AFF8 = *((f32 *) 0x218470);
    }
    else
    {
      D_8003AFF8 = *((f32 *) 0x218470);
    }
  }
  if ((D_8002D420 & 0x80) && (D_800458AC == 0))
  {
    D_800458AC = 1;
    func_8023DF7C(&D_80075568, &D_80075518, 0x94, 0xA, 0x2D, 2);
  }
  func_802C49AC();
  func_802C3934(*((f32 *) 0x218474));
  if (D_8002D424 & 0x40)
  {
    func_8023DF7C(&D_80075568, &D_80075518, 0x99, 0xA, 0x2D, 2);
  }
  func_802C3274();
  if (D_80075522 == 0)
  {
    func_802CC190();
  }
  func_802C382C();
}

