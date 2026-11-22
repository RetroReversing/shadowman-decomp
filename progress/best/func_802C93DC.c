s32 func_80109318(s32, s32 *, s32);
s32 func_80113AD0();
s32 func_80239A3C(f32);
s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32);
f32 func_802403D4(void *, f32 *, s32);
f32 func_802BAAF8(void *, f32 *, f32);
s32 func_802C961C();
extern s32 D_8002D390;
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_8002DBD0;
extern s32 D_80052770;
extern s32 D_8006A5B4;
extern f32 D_80074BC0;
extern s32 D_80075518;
extern s32 D_80075568;
extern s32 D_8007558C;
extern s32 D_8007BD90;
extern s32 D_8007BE30;
extern void *D_8007BE7C;
inline static char *inline_fn(f32 *arg0)
{
  return (char *) arg0;
}

void func_802C93DC(void)
{
  s32 *__base_D_80075568;
  s32 *__base_D_8002DBD0;
  f32 sp18[3];
  f32 sp28[3];
  f32 temp_fs0;
  f32 temp_ft1f;
  f32 temp_ft2;
  f32 temp_fv1;
  f32 temp_fv0f;
  f32 temp_fv1f;
  void *temp_s2;
  void *temp_s3;
  temp_s3 = *((void **) (inline_fn(*((void **) (inline_fn(D_8007BE7C) + 0x88))) + 0xC));
  sp18[0] = 0.0f;
  sp18[1] = *((f32 *) 0x2185A8);
  sp18[2] = *((f32 *) 0x2185AC);
  __base_D_80075568 = &D_80075568;
  func_80239A3C(*((f32 *) (((char *) __base_D_80075568) + 0x1C)));
  temp_ft1f = *((f32 *) (inline_fn(sp18) + 4));
  temp_ft2 = *((f32 *) (((char *) sp18) + 8));
  temp_s2 = (void *) ((0x24) + (s32) __base_D_80075568);
  temp_fv1f = ((sp18[0] * (*((f32 *) (inline_fn(&D_8002D390) + 0)))) + (temp_ft1f * (*((f32 *) (inline_fn(&D_8002D390) + 4))))) + (temp_ft2 * (*((f32 *) (((char *) (&D_8002D390)) + 8))));
  temp_fs0 = *((f32 *) 0x2185B0);
  temp_fv0f = ((sp18[0] * (*((f32 *) (inline_fn(&D_8002D390) + 0xC)))) + (temp_ft1f * (*((f32 *) (((char *) (&D_8002D390)) + 0x10))))) + (temp_ft2 * (*((f32 *) (((char *) (&D_8002D390)) + 0x14))));
  temp_fv1 = ((sp18[0] * (*((f32 *) (inline_fn(&D_8002D390) + 0x18)))) + (temp_ft1f * (*((f32 *) (((char *) (&D_8002D390)) + 0x1C))))) + (temp_ft2 * (*((f32 *) (((char *) (&D_8002D390)) + 0x20))));
  sp28[0] = temp_fv1f;
  sp28[1] = temp_fv0f;
  sp28[2] = temp_fv1;
  sp28[0] = temp_fv1f + (*((f32 *) (inline_fn(__base_D_80075568) + 0x24)));
  sp28[1] = temp_fv0f + (*((f32 *) (inline_fn(__base_D_80075568) + 0x28)));
  sp28[2] = temp_fv1 + (*((f32 *) (((char *) __base_D_80075568) + 0x2C)));
  if (func_802BAAF8(temp_s2, sp28, temp_fs0) != 0.0f)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
  }
  sp18[0] = *((f32 *) (inline_fn(__base_D_80075568) + 0x24));
  sp18[1] = *((f32 *) (((char *) __base_D_80075568) + 0x28));
  sp18[2] = *((f32 *) (inline_fn(__base_D_80075568) + 0x2C));
  D_8006A5B4 = 3;
  sp18[1] += *((f32 *) 0x2185B4);
  sp18[2] += temp_fs0;
  sp18[0] += temp_fs0;
  if (func_802403D4(temp_s2, sp18, 0x40A00000) == 0.0f)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
  }
  if (D_8007BE30 == (-1))
  {
    func_802C961C();
    return;
  }
  if (__base_D_80075568)
  {
    *((f32 *) (inline_fn(&(*(s32 *)0x8007bd94)) + 4)) = (f32) ((*((f32 *) (((char *) (&D_8007BD90)) + 4))) - (D_80074BC0 * (*((f32 *) 0x2185BC))));
  }
  else
  {
    *((f32 *) (((char *) (&(*(s32 *)0x8007bd94))) + 4)) = (f32) ((*((f32 *) (inline_fn(&D_8007BD90) + 4))) - (D_80074BC0 * (*((f32 *) 0x2185BC))));
  }
  if (D_8002D424 & 0x80)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
  }
  if (!(D_8002D420 & 2))
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x37, 0xA, 0x28, 2);
  }
  __base_D_8002DBD0 = &D_8002DBD0;
  if ((*((s32 *) (inline_fn(__base_D_8002DBD0) + 0x18))) != 0)
  {
    if (((unsigned long) __base_D_8002DBD0) & 0x100)
    {
      func_8023DF7C(__base_D_80075568, &D_80075518, 0x56, 0xA, 0x28, 2);
    }
    else
    {
      func_8023DF7C(__base_D_80075568, &D_80075518, 0x56, 0xA, 0x28, 2);
    }
  }
  if ((*((s32 *) (((char *) __base_D_8002DBD0) + 8))) != 0)
  {
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x57, 0xA, 0x28, 2);
  }
  if ((((u32) ((*((u8 *) (((char *) temp_s3) + 0x28))) - 2)) >= 2U) && ((*((s32 *) (((char *) (&D_80052770)) + 4))) >= (func_80113AD0() & 0x1F)))
  {
    func_80109318(0x130, &D_8007558C, 0);
  }
}

