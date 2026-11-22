s32 func_80113AD0();
s32 func_80267F78(f32, s32, void *, s32, s32);
extern s32 D_24D44C;
extern s32 D_80052768;
extern s32 D_80072C24;
extern s32 D_80075518;
extern s32 D_8007BE5C;
inline static int inline_fn(int arg0)
{
  return arg0 * 0x64;
}

void func_8024E094(void *arg0)
{
  s32 *__base_D_80075518;
  long temp_a0;
  s32 temp_a2;
  s32 temp_v1;
  unsigned short var_v0;
  s32 __repair_result_var_v0;
  void *temp_s1;
  if (D_80052768)
  {
    __repair_result_var_v0 = func_80113AD0();
    temp_s1 = *((void **) (((char *) arg0) + 8));
    temp_a2 = __repair_result_var_v0;
  }
  else
  {
    __repair_result_var_v0 = func_80113AD0();
    temp_s1 = *((void **) (((char *) arg0) + 8));
    temp_a2 = __repair_result_var_v0;
  }
  if (temp_a2 < 0)
  {
    var_v0 = temp_a2 + 7;
  }
  __base_D_80075518 = &D_80075518;
  if (((((!((*((u16 *) (((char *) (((*((s16 *) (((char *) __base_D_80075518) - (-4)))) * 0x38) + (*((s32 *) (((char *) __base_D_80075518) + 0x30))))) + 4))) & 0x40)) || (D_8007BE5C == 0)) || (D_8007BE5C == 5)) && ((((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0xC)))) + 0x1C))) != (&D_24D44C)) || ((temp_v1 = *(*((s32 **) (((char *) temp_s1) + 0x6C))), (temp_v1 < 2) == 0))) || (temp_v1 < 0))) && (((temp_a0 = D_80072C24, ((temp_a0 + 0x1E) < D_80052768) != 0)) || (D_80052768 < temp_a0)))
  {
    D_80072C24 = D_80052768;
    if (((unsigned long) (&D_80075518)) & 0x100)
    {
      func_80267F78((f32) inline_fn(temp_a2 - ((var_v0 >> 3) * 8)), temp_a0, temp_s1 + 0x24, 0, -1);
    }
    else
    {
      func_80267F78((f32) ((temp_a2 - ((var_v0 >> 3) * 8)) * 0x64), temp_a0, temp_s1 + 0x24, 0, -1);
    }
  }
}

