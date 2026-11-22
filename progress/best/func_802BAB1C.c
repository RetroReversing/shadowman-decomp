extern volatile unsigned short D_8007BEA8;
extern int D_8007BEAC;
extern int D_8007BEB0;
extern float D_8004543C;
extern char D_80045438[];
inline static s32 inline_fn(s32 arg0)
{
  return (s32) arg0;
}

void func_802BAB1C(void *arg0)
{
  void *temp_v1;
  if (((u32) ((*((u16 *) (((char *) arg0) + 0x14))) - 0x27)) < 2U)
  {
    temp_v1 = *((void **) (((char *) arg0) + 8));
    D_8007BEA8 = inline_fn(*((s32 *) (((char *) temp_v1) + 0x24)));
    D_8007BEAC = (s32) (*((s32 *) (((char *) temp_v1) + 0x28)));
    D_8007BEB0 = inline_fn(*((s32 *) (((char *) temp_v1) + 0x2C)));
    D_8004543C = (f32) (*((f32 *) 0x217F50));
  }
}

