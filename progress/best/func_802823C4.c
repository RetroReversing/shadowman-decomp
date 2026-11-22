extern float D_8007558C;
extern float D_80075590;
long long func_80113AD0();
s32 func_8023A0DC();
f32 func_802759C4(f32);
s32 func_80282580();
s32 func_802A1A98(void *, void *, void *, s32);
s32 func_802A5EC4();
extern char D_217B6C[];
extern void *D_8006A4FC;
extern char D_80075568[];
extern void *D_8007AFF8;
void func_802823C4(f32 arg0, f32 arg1, void *arg2)
{
  f32 sp20[3];
  f32 sp30[3];
  f32 sp40[3];
  f32 sp50[2];
  f32 temp_fs0;
  f32 temp_fv0f;
  f32 temp_fv1f;
  volatile int pad;
  s32 temp_v1;
  sp40[0] = 0.0f;
  sp40[2] = 0;
  sp40[1] = (*((f32 *) (((char *) D_8006A4FC) + 0x1C))) - (*((f32 *) 0x214BCC));
  func_8023A0DC(arg0, arg1, sp40[0], sp20, D_8006A4FC + 0x34);
  sp20[0] += *((f32 *) (((char *) D_8006A4FC) + 0x24));
  sp20[1] += (*((f32 *) (((char *) D_8006A4FC) + 0x28))) - arg1;
  temp_fv0f = *((f32 *) 0x214BD0);
  sp30[0] = sp40[0];
  sp30[1] = sp40[0];
  sp30[2] = sp40[0];
  sp20[2] += *((f32 *) (((char *) D_8006A4FC) + 0x2C));
  do
  {
    func_802A1A98(sp20, sp30, sp40, 0x14);
  }
  while (0);
  if (sp40[0] < arg0)
  {
    if (arg0 < (*((f32 *) 0x214BD4)))
    {
      temp_fs0 = (f32) ((func_80113AD0(arg0) % 60) + 1);
      temp_v1 = func_80113AD0() % 60;
      temp_fv1f = *((f32 *) 0x214BD8);
      sp50[0] = (D_8007558C - (*((f32 *) (((char *) D_8006A4FC) + 0x24)))) + (temp_fs0 - temp_fv1f);
      sp50[1] = ((D_80075590 - (*((f32 *) (((char *) D_8006A4FC) + 0x28)))) - (*((f32 *) 0x214BDC))) + (((f32) (temp_v1 + 1)) - temp_fv1f);
      func_80282580(D_8006A4FC);
      return;
    }
    func_8023A0DC(arg0, NULL, arg2, sp50, D_8006A4FC + 0x34);
    sp50[1] = func_802759C4(sp50[1]);
    func_802A5EC4(sp20, sp50, D_217B6C, 0, 1, (s32) (*((u8 *) (((char *) D_8007AFF8) + 0x40))));
    return;
  }
  func_8023A0DC(arg0, NULL, arg2, sp50, D_8006A4FC + 0x34);
  sp50[1] = func_802759C4(sp50[1]);
  func_802A5EC4(sp20, sp50, D_217B6C, 0, 1, (s32) (*((u8 *) (((char *) D_8007AFF8) + 0x40))));
}

