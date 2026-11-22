void *func_80112AB0(void *, void *, s16, s32, void *);
void *func_80112CA8(void *, u32, s16, s32, void *);
void *func_80112E2C(void *, u32, s16, s32, void *);
void *func_80112F9C(s32, s16, s32, void *);
s32 func_80116750(s32 *, s32 *, s32);
extern s32 D_800B0810;
extern s32 D_800B0814;
inline static char *inline_fn(void *arg0, int arg1)
{
  return ((char *) arg0) + arg1;
}

void *func_80112530(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  int __repair_literal;
  u16 sp1E;
  s16 temp_v0_3;
  s16 temp_v1;
  s16 var_s5;
  s16 var_s6;
  s32 temp_a0_2;
  s32 temp_s0_2;
  s32 temp_v1_2;
  s32 var_s2;
  u32 temp_a0;
  u32 temp_a0_3;
  u32 temp_fp;
  u32 temp_s4;
  void *temp_s0;
  void *temp_s0_3;
  void *temp_s1;
  void *temp_s1_2;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_4;
  void *var_s1;
  temp_s0 = *((void **) inline_fn(arg0, 0));
  var_s2 = 0;
  if (temp_s0 == NULL)
  {
    func_80116750(&D_800B0810, &D_800B0814, 0x4B);
  }
  var_s6 = 0;
  var_s5 = 0x140;
  sp1E = 0;
  temp_v0 = (*((void *(**)(void *, s32, s32, s32, s32)) (((char *) temp_s0) + 4)))(temp_s0, arg1, arg2, arg3, arg4);
  temp_s1 = temp_v0 + 8;
  temp_s1_2 = temp_s1 + 8;
  temp_s0_2 = arg2 * 2;
  *((s32 *) inline_fn(temp_v0, 0)) = 0x08000000;
  *((s32 *) (((char *) temp_v0) + 4)) = (s32) (temp_s0_2 & 0xFFFF);
  *((s32 *) (((char *) temp_v0) + 8)) = 0x0C00DA83;
  *((s32 *) (((char *) temp_s1) + 4)) = 0x06C006C0;
  *((s32 *) inline_fn(temp_s1, 8)) = 0x0C005A82;
  *((s32 *) inline_fn(temp_s1_2, 4)) = 0x080006C0;
  temp_v0_2 = func_80112CA8(arg0, *((u32 *) (((char *) arg0) + 0x18)), 0x6C0, arg2, temp_s1_2 + 8);
  *((s32 *) inline_fn(temp_v0_2, 0)) = 0x02000800;
  *((s32 *) inline_fn(temp_v0_2, 4)) = temp_s0_2;
  var_s1 = temp_v0_2 + 8;
  __repair_literal = 0;
  if (((s32) (*((u8 *) inline_fn(arg0, 0x24)))) > __repair_literal)
  {
    __repair_rows:
    {
      temp_a0 = *((u32 *) inline_fn(arg0, 0x18));
      temp_a0_2 = ((s16) sp1E) * 0x28; temp_s0_3 = (*((s32 *) inline_fn(arg0, 0x20))) + temp_a0_2;
      temp_s4 = temp_a0 - ((*((s32 *) inline_fn(temp_s0_3, 0))) * 2);
      temp_fp = temp_a0 - ((*((s32 *) inline_fn(temp_s0_3, 4))) * 2);
      if (temp_s4 == var_s2)
      {
        temp_v0_3 = var_s5;
        var_s5 = var_s6;
        var_s6 = temp_v0_3;
      }
      else
      {
        var_s1 = func_80112E2C(arg0, temp_s4, var_s6, arg2, var_s1);
      }
      var_s1 = func_80112AB0(arg0, temp_s0_3, var_s5, arg2, var_s1);
      if ((*((s16 *) inline_fn(temp_s0_3, 8))) != 0)
      {
        *((s32 *) inline_fn(var_s1, 4)) = (s32) ((var_s6 << 0x10) | (var_s5 & 0xFFFF));
        *((s32 *) inline_fn(var_s1, 0)) = (s32) (((u16) (*((s16 *) inline_fn(temp_s0_3, 8)))) | 0x0C000000);
        var_s1 += 8;
        if (((*((s32 *) inline_fn(temp_s0_3, 0x24))) == 0) && ((*((s32 *) inline_fn(temp_s0_3, 0x20))) == 0))
        {
          do
          {
            var_s1 = func_80112CA8(arg0, temp_fp, var_s5, arg2, var_s1);
          }
          while (0);
        }
      }
      if ((*((s16 *) inline_fn(temp_s0_3, 0xA))) != 0)
      {
        *((s32 *) inline_fn(var_s1, 4)) = (s32) ((var_s5 << 0x10) | (var_s6 & 0xFFFF));
        *((s32 *) inline_fn(var_s1, 0)) = (s32) (((u16) (*((s16 *) inline_fn(temp_s0_3, 0xA)))) | 0x0C000000);
        var_s1 = func_80112CA8(arg0, temp_s4, var_s6, arg2, var_s1 + 8);
      }
      temp_a0_2 = *((s32 *) inline_fn(temp_s0_3, 0x20));
      if (temp_a0_2 != 0)
      {
        var_s1 = func_80112F9C(temp_a0_2, var_s5, arg2, var_s1);
      }
      if ((*((s32 *) inline_fn(temp_s0_3, 0x24))) == 0)
      {
        var_s1 = func_80112CA8(arg0, temp_fp, var_s5, arg2, var_s1);
      }
      temp_v0_4 = var_s1;
      if ((*((s16 *) inline_fn(temp_s0_3, 0xC))) != 0)
      {
        var_s1 += 8;
        *((s32 *) inline_fn(temp_v0_4, 4)) = (s32) ((var_s5 << 0x10) | ((char) 0x800));
        *((s32 *) inline_fn(temp_v0_4, 0)) = (s32) (((u16) (*((s16 *) inline_fn(temp_s0_3, 0xC)))) | 0x0C000000);
      }
      temp_v1 = sp1E + 1;
      sp1E = temp_v1;
      var_s2 = (*((u32 *) inline_fn(arg0, 0x18))) + ((*((s32 *) inline_fn(temp_s0_3, 4))) * 2);
    }

    if (temp_v1 < ((s32) (*((u8 *) inline_fn(arg0, 0x24)))))
    {
      goto __repair_rows;
    }
  }
  if (temp_s0_3)
  {
    if (sp1E || var_s5)
    {
      temp_a0_2 = arg2 * 2;
      temp_a0_3 = (*((u32 *) inline_fn(arg0, 0x18))) + temp_a0_2;
      temp_v1_2 = (*((s32 *) inline_fn(arg0, 0x1C))) * 2;
      *((u32 *) inline_fn(arg0, 0x18)) = temp_a0_3;
    }
    else
    {
      temp_a0_2 = arg2 * 2;
      temp_a0_3 = (*((u32 *) inline_fn(arg0, 0x18))) + temp_a0_2;
      temp_v1_2 = (*((s32 *) inline_fn(arg0, 0x1C))) * 2;
      *((u32 *) inline_fn(arg0, 0x18)) = temp_a0_3;
    }
  }
  else
  {
    temp_a0_2 = arg2 * 2;
    temp_a0_3 = (*((u32 *) inline_fn(arg0, 0x18))) + temp_a0_2;
    temp_v1_2 = (*((s32 *) inline_fn(arg0, 0x1C))) * 2;
    *((u32 *) inline_fn(arg0, 0x18)) = temp_a0_3;
  }
  if (((u32) ((*((s32 *) inline_fn(arg0, 0x14))) + temp_v1_2)) < temp_a0_3)
  {
    *((u32 *) inline_fn(arg0, 0x18)) = (u32) (temp_a0_3 - temp_v1_2);
  }
  *((s32 *) inline_fn(var_s1, 0)) = (s32) ((((u32) (0x800 << 0x10)) >> 0x10) | 0x0A000000);
  *((s32 *) inline_fn(var_s1, 4)) = (s32) ((temp_a0_2 & 0xFFFF) | 0x06C00000);
  return var_s1 + 8;
}

