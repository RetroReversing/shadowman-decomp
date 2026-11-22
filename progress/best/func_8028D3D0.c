s32 func_8023A0DC(s32, s32, s32, f32 *, void *);
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32);
extern s32 D_217C2C;
extern void *D_8006A4FC;
extern s32 D_80075568;
extern void *D_8007AFF8;
inline static short inline_fn(s32 *arg0)
{
  return arg0[0];
}

void func_8028D3D0(void)
{
  s32 *__base_D_80075568;
  void **__base_D_8006A4FC;
  f32 sp18[3];
  s32 sp28[3];
  f32 sp38[3];
  f32 temp_fs0;
  temp_fs0 = *((f32 *) 0x215420);
  sp28[0] = 0;
  sp28[2] = 0;
  __base_D_8006A4FC = &D_8006A4FC;
  sp28[1] = (*((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x1C))) - temp_fs0;
  do
  {
    func_8023A0DC(inline_fn(sp28), inline_fn(sp28), 0x437A0000, sp18, (*__base_D_8006A4FC) + 0x34);
  }
  while (0);
  sp18[0] += *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x24));
  sp18[1] += *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x28));
  sp18[2] += *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x2C));
  __base_D_80075568 = &D_80075568;
  sp38[0] = (*((f32 *) (((char *) __base_D_80075568) + 0x24))) - (*((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x24)));
  sp38[1] = (*((f32 *) (((char *) __base_D_80075568) + 0x28))) - ((*((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x28))) - temp_fs0);
  sp38[2] = (*((f32 *) (((char *) __base_D_80075568) + 0x2C))) - (*((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x2C)));
  func_802A5EC4(sp18, sp38, &D_217C2C, 0, 1, (s32) (*((u8 *) (((char *) D_8007AFF8) + 0x40))));
}

