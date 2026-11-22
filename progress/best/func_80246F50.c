s32 func_80230A3C();
s32 func_80247084();
s32 func_802470A0();
s32 func_8025BF10();
s32 func_8026D780();
extern volatile long D_8002DBD0[];
extern char D_80075B40[];
extern char D_8007DB78[];
inline static char *inline_fn(s32 arg0, int arg1, char *arg2)
{
  return (arg0 * arg1) + arg2;
}

void func_80246F50(s32 arg0, s32 arg1)
{
  char *__base_D_8007DB78;
  u16 *temp_s0_2;
  s32 temp_v0_2;
  u16 temp_v1_2;
  void *temp_s0;
  void *temp_v0;
  void *temp_v1;
  void *temp_v1_3;
  func_8026D780(arg1);
  temp_s0 = (arg1 * 0x10) + D_8002DBD0;
  temp_v0 = *((void **) (((char *) temp_s0) + 0));
  if (temp_v0 != NULL)
  {
    temp_v1 = *((void **) (((char *) (*((void **) (((char *) temp_v0) + 8)))) + 0x64));
    if (temp_v1 != NULL)
    {
      *((u16 *) (((char *) temp_v1) + 0x3C)) |= 4;
    }
    func_8025BF10(*((void **) (((char *) temp_s0) + 0)));
    *((void **) (((char *) temp_s0) + 0)) = NULL;
    *((s32 *) (((char *) temp_s0) + 8)) = 0;
    *((s32 *) (((char *) temp_s0) + 4)) = -1;
  }
  if (arg0 != (-1))
  {
    temp_v1_2 = *((arg1 * 2) + D_80075B40);
    if (temp_v1_2 != 0xFFFF)
    {
      func_80230A3C(*inline_fn(arg1, 2, D_80075B40));
    }
    temp_v0_2 = arg1 * 0x10;
    do
    {
      temp_v1_3 = temp_v0_2 + D_8002DBD0;
      *((s32 *) (((char *) temp_v1_3) + 8)) = 1;
      *((s32 *) (((char *) temp_v1_3) + 4)) = arg0;
      func_802470A0(arg0, arg1);
    }
    while (0);
    func_80247084();
    return;
  }
  temp_s0_2 = (arg1 * 2) + D_80075B40;
  temp_v0_2 = *temp_s0_2;
  if (temp_v0_2 != 0xFFFF)
  {
    if (1)
    {
      func_80230A3C(temp_v0_2);
    }
  }
  *temp_s0_2 = 0xFFFF;
  *((s32 *) (((char *) inline_fn(arg1, 0x10, D_8002DBD0)) + 4)) = arg0;
  __base_D_8007DB78 = D_8007DB78;
  *((s32 *) (((char *) inline_fn(arg1, 4, __base_D_8007DB78)) + 0x30)) = arg0;
  *((s8 *) (((char *) (arg1 + __base_D_8007DB78)) + 0x2C)) = 0;
}

