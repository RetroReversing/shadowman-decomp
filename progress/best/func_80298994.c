void *func_80103878(s32, s32, s32);
f32 func_8022EBE8(f32);
void *func_80296BC0(const void *, s32, s32 *);
s32 func_8029B6C4(f32 *, f32 *);
extern s32 D_80036CC8;
void func_80298994(const void *arg1)
{
  f32 sp10[3];
  f32 sp20[3];
  f32 temp_fs0;
  f32 temp_fs0f;
  volatile unsigned char pad;
  f32 temp_fv0;
  u32 var_s1;
  void *temp_v0;
  void *temp_v0_2;
  if (1)
  {
    temp_v0 = func_80296BC0(arg1, 0, &D_80036CC8);
  }
  if (temp_v0 != NULL)
  {
    *((f32 *) (((char *) temp_v0) + 0x4C)) = (f32) (*((f32 *) 0x2159DC));
    temp_v0_2 = func_80103878(0x84, 2, 0);
    *((void **) (((char *) temp_v0) + 0x44)) = temp_v0_2;
    if (temp_v0_2 != NULL)
    {
      do
      {
        do
        {
          do
          {
            var_s1 = 0;
          }
          while (0);
        }
        while (0);
      }
      while (0);
      temp_fs0f = *((f32 *) 0x2159E0);
      temp_fs0 = *((f32 *) 0x2159E4);
      *((s32 *) (((char *) temp_v0) + 0xC)) = (s32) (*((const s32 *) (((char *) arg1) + 0)));
      *((s32 *) (((char *) temp_v0) + 0x10)) = (s32) (*((const s32 *) (((char *) arg1) + 4)));
      *((s32 *) (((char *) temp_v0) + 0x14)) = (s32) (*((const s32 *) (((char *) arg1) + 8)));
      temp_fv0 = *((f32 *) 0x2159E8);
      *((f32 *) (((char *) temp_v0) + 0x50)) = temp_fv0;
      *((f32 *) (((char *) temp_v0) + 0x54)) = temp_fv0;
      *((s32 *) (((char *) temp_v0_2) + 0)) = 0;
      *((s32 *) (((char *) temp_v0_2) + 4)) = 0;
      do
      {
        sp20[0] = func_8022EBE8(temp_fs0f);
        sp20[1] = func_8022EBE8(temp_fs0f);
        sp20[2] = func_8022EBE8(temp_fs0f);
        sp10[0] = *((const f32 *) (((char *) temp_v0) + 0));
        sp10[1] = *((const f32 *) (((char *) temp_v0) + 4));
        sp10[2] = *((const f32 *) (((char *) temp_v0) + 8));
        sp10[0] += func_8022EBE8(temp_fs0);
        sp10[1] += func_8022EBE8(temp_fs0);
        var_s1 += 1;
        sp10[2] += func_8022EBE8(temp_fs0);
        func_8029B6C4(sp10, sp20);
      }
      while (var_s1 < 0x20U);
    }
  }
}

