s32 func_80106A90();
s32 func_80106B9C();
s32 func_80106C24();
u64 func_801168A0();
s32 func_801171A0();
u64 func_8011D5C0();
extern char D_107B60[];
extern u16 D_8001E460;
extern u32 D_8001E464;
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 >> arg1;
}

void func_80106B30(void *arg0)
{
  s32 temp_a0_2;
  s32 temp_a1;
  u32 temp_a0;
  int temp_v1;
  u32 temp_v1_2;
  unsigned int temp_ret;
  u64 temp_ret_2;
  temp_ret = func_801168A0();
  do
  {
    if (arg0)
    {
      temp_a0 = ((u32) func_8011D5C0((temp_ret << 6) | (((u32) temp_ret) >> 0x1A), (temp_v1 = (u32) temp_ret) << 6, 0, 0xBB8)) - (*((s32 *) (&D_8001E464)));
      temp_a1 = temp_a0 > 0x2DC6C0U;
    }
    else
    {
      temp_a0 = ((u32) func_8011D5C0((temp_ret << 6) | (((u32) temp_ret) >> 0x1A), (temp_v1 = (u32) temp_ret) << 6, 0, 0xBB8)) - (*((s32 *) (&D_8001E464)));
      temp_a1 = temp_a0 > 0x2DC6C0U;
    }
  }
  while (0);
  if (temp_a1 != 0)
  {
    func_80106B9C(temp_a0, temp_a0 > 0x2DC6C0U);
    return;
  }
  *((s32 *) (&D_8001E460)) += 1;
  if ((*((s32 *) (((char *) arg0) + 0x14))) == 1)
  {
    *((s32 **) (((char *) arg0) + 0x11C)) = D_107B60;
    *((s32 *) (((char *) arg0) + 0x120)) = 0;
    *((s32 *) (((char *) arg0) + 0x12C)) = 0;
    *((s16 *) (((char *) arg0) + 0x12)) = 2;
    temp_a0_2 = ((s32) (*((s32 *) (&D_8001E460)))) >> 0x1F;
    *((s32 *) (((char *) arg0) + 0x38)) = temp_a0_2;
    *((s32 *) (((char *) arg0) + 0x3C)) = (s32) (*((s32 *) (&D_8001E460)));
    temp_ret_2 = func_801168A0(temp_a0_2, *((s32 *) (&D_8001E460)));
    temp_v1 = (u32) temp_ret_2;
    *((s32 *) (&D_8001E464)) = (u32) func_8011D5C0((temp_ret_2 << 6) | inline_fn(temp_v1, 0x1A), temp_v1 << 6, 0, 0xBB8);
    func_801171A0(arg0, &D_8001E464);
    func_80106C24();
    return;
  }
  func_80106A90();
}

