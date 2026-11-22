s32 func_8011A738(s32 *);
s32 func_8011AE5C(void *, s32 *);
extern u16 D_80028832;
extern s32 D_800512D8;
extern u8 D_80051590[];
void *func_8011B51C(void)
{
  s32 *__base_D_800512D8;
  u16 *__base_D_80028832;
  u16 temp_v0;
  void *var_v0;
  var_v0 = NULL;
  __base_D_800512D8 = &D_800512D8;
  if ((*((s32 *) (((char *) __base_D_800512D8) + 0x10))) != 0)
  {
    func_8011A738(__base_D_800512D8);
 do { if (__base_D_80028832) { __base_D_80028832 = &D_80028832; } else { __base_D_80028832 = &D_80028832; } } while (0);
    temp_v0 = (*__base_D_80028832) + 1;
    *__base_D_80028832 = temp_v0;
    if (((u32) (temp_v0 & 0xFFFF)) >= 6U)
    {
      *__base_D_80028832 = 0;
    }
    func_8011AE5C(((*__base_D_80028832) << 9) + D_80051590, __base_D_800512D8);
    var_v0 = ((*__base_D_80028832) << 9) + D_80051590;
    *((s32 *) (((char *) __base_D_800512D8) + 0x10)) = (s32) ((*((s32 *) (((char *) __base_D_800512D8) + 0x10))) - 1);
  }
  return var_v0;
}
