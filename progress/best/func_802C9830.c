s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32);
s32 func_802401D0(void *, f32 *, s32);
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_8002DBD0;
extern s32 D_8006A588;
extern s32 D_8006A5B4;
extern s32 D_80075518;
extern s32 D_80075568;
extern s32 D_8007BE30;
extern f32 D_8007BED0;
void func_802C9830(void)
{
  s32 *__base_D_8002DBD0;
  s32 *__base_D_80075568;
  f32 sp18[3];
  f32 temp_fv1f;
  __base_D_80075568 = &D_80075568;
  sp18[1] = *((f32 *) (((char *) __base_D_80075568) + 0x28));
  sp18[0] = *((f32 *) (((char *) __base_D_80075568) + 0x24));
  sp18[2] = *((f32 *) (((char *) __base_D_80075568) + 0x2C));
  temp_fv1f = *((f32 *) 0x2185C4);
  sp18[1] += (double) (*((f32 *) 0x2185C0));
  D_8006A5B4 = 3;
  sp18[0] += temp_fv1f;
  sp18[2] += temp_fv1f;
  func_802401D0(((s8 *) __base_D_80075568) + 0x24, sp18, 0x40A00000);
  if (D_8006A588 == 0)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
  }
  if (D_8002D424 & 0x80)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
  }
  if (D_8002D420 & 1)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x3C, 0xA, 0x28, 2);
  }
  if (D_8002D420 & 2)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x3D, 0xA, 0x28, 2);
  }
  if (D_8002D424 & 4)
  {
    D_8007BE30 = -D_8007BE30;
    D_8007BED0 = (*((f32 *) (((char *) __base_D_80075568) + 0x1C))) + (*((f32 *) 0x2185C8));
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x51, 0xA, 0x28, 2);
  }
  if (D_8002D424 & 8)
  {
    D_8007BE30 = -D_8007BE30;
    D_8007BED0 = (*((f32 *) (((char *) __base_D_80075568) + 0x1C))) + (*((f32 *) 0x2185CC));
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x52, 0xA, 0x28, 2);
  }
  __base_D_8002DBD0 = &D_8002DBD0;
  if ((*((s32 *) (((char *) __base_D_8002DBD0) + 0x18))) != 0)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x56, 0xA, 0x28, 2);
  }
  if ((*((s32 *) (((char *) __base_D_8002DBD0) + 8))) != 0)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x57, 0xA, 0x28, 2);
  }
}

