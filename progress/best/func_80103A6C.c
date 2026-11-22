extern void *D_8004AD84;
extern void *D_8004AD88;
void func_80103A6C(s32 arg0, s32 arg1)
{
  s32 temp_a0;
  s32 temp_a1;
  s32 temp_t1;
  s32 temp_v0;
  register s32 temp_v0_2;
  s32 temp_v1;
  temp_t1 = *((s32 *) (((char *) D_8004AD88) + 8)); 
  if (temp_t1 == arg0)
  {
    temp_a1 = (arg1 + 7); temp_a0 = temp_a1 & (~7); temp_a1 = (temp_v1 = (*((s32 *) (((char *) D_8004AD88) + 0xC))) & 0xFFFFFF) - temp_a0;
    temp_a0 = *((s32 *) (((char *) D_8004AD84) + 8));
    if (temp_a0 == (temp_t1 + temp_v1))
    {
      *((s32 *) (((char *) D_8004AD84) + 8)) = (s32) (temp_a0 - temp_a1);
      temp_v0 = *((s32 *) (((char *) D_8004AD84) + 0xC));
      *((s32 *) (((char *) D_8004AD84) + 0xC)) = (s32) ((temp_v0 & 0xFF000000) | (((temp_v0 & 0xFFFFFF) + temp_a1) & 0xFFFFFF));
      temp_v0_2 = *((s32 *) (((char *) D_8004AD88) + 0xC));
      *((s32 *) (((char *) D_8004AD88) + 0xC)) = (s32) ((temp_v0_2 & 0xFF000000) | (((temp_v0_2 & 0xFFFFFF) - temp_a1) & 0xFFFFFF));
    }
  }
}
