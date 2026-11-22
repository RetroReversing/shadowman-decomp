extern unsigned char D_8007DC04;
extern unsigned char D_8007DC05;
s32 func_802D2E34();
s32 func_802D2F50();
extern s32 D_218F8C;
extern char D_219B90[];
extern s32 D_800305B8;
extern char D_8007DB78[];
inline static f32 inline_fn(f32 arg0)
{
  return (f32) arg0;
}

inline static int inline_fn2(int arg0)
{
  return D_8007DC04 - arg0;
}

void func_802D2EA4(void *arg0)
{
  f32 __repair_store_0;
  f32 __repair_store_1;
  f32 __repair_store_2;
  f32 __repair_store_3;
  f32 __repair_store_4;
  f32 __repair_store_5;
  char *__base_D_219B90;
  char *var_s0;
  s32 var_s1;
  void *temp_v0;
  void *temp_v1;
  s32 *__base_D_218F8C;
  __base_D_218F8C = &D_218F8C;
  do
  {
    if (temp_v1 || __base_D_218F8C)
    {
      var_s1 = 0;
    }
    else
    {
      var_s1 = 0;
    }
    if (((u32) inline_fn2(4)) < 2U)
    {
      if (((unsigned long) __base_D_218F8C) & 0x100)
      {
        func_802D2F50(D_800305B8);
      }
      else
      {
        func_802D2F50(D_800305B8);
      }
      return;
    }
    if (D_8007DC05 == 0)
    {
      func_802D2F50((s32) (&D_218F8C));
      return;
    }
    if (temp_v0)
    {
      var_s0 = &D_218F8C;
    }
    else
    {
      var_s0 = &D_218F8C;
    }
    if ((*((s32 *) (((char *) (&D_218F8C)) + (-0x7074)))) != 0)
    {
      for (;;)
      {
        var_s0 += 0xC;
        if (func_802D2E34(*((s32 *) var_s0)) == 0)
        {
          var_s1 += 1;
          if ((*((s32 *) var_s0)) != 0)
          {
            continue;
          }
        }
        break;
      }

    }
    __base_D_219B90 = D_219B90; temp_v1 = (var_s1 * 0x18) + __base_D_219B90; temp_v0 = (((var_s1 * 2) + 1) * 0xC) + __base_D_219B90;
  }
  while (0);
  if (1)
  {
  }
  if (1)
  {
  }
  if (1)
  {
  }
  __repair_store_0 = inline_fn(*((f32 *) (((char *) temp_v1) + 0)));
  __repair_store_1 = inline_fn(*((f32 *) (((char *) temp_v1) + 4)));
  __repair_store_2 = inline_fn(*((f32 *) (((char *) temp_v1) + 8)));
  __repair_store_3 = inline_fn(*((f32 *) (((char *) temp_v0) + 0)));
  __repair_store_4 = inline_fn(*((f32 *) (((char *) temp_v0) + 4)));
  __repair_store_5 = inline_fn(*((f32 *) (((char *) temp_v0) + 8)));
  *((f32 *) (((char *) arg0) - (-0x24))) = __repair_store_0;
  *((f32 *) (((char *) arg0) + 0x28)) = __repair_store_1;
  *((f32 *) (((char *) arg0) + 0x2C)) = __repair_store_2;
  *((f32 *) (((char *) arg0) + 0x18)) = __repair_store_3;
  *((f32 *) (((char *) arg0) + 0x1C)) = __repair_store_4;
  *((f32 *) (((char *) arg0) + 0x20)) = __repair_store_5;
}

