s32 func_8021E990(f32, f32, u8, u8, f32, f32, f32, f32, s32, s32, s32, s32, s32);
s32 func_80296698(s32);
s32 func_80296738(s32);
extern s32 D_8002C1B0;
extern s32 D_80061A04;
extern s32 D_8007DB78;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

inline static char *inline_fn2(void *arg0)
{
  return (char *) arg0;
}

void func_802987DC(void *arg0)
{
  s32 *__base_D_8007DB78;
  s32 *__repair_phase___base_D_8007DB78;
  f32 __repair_store_0;
  f32 __repair_store_1;
  f32 __repair_store_2;
  f32 __repair_phase___repair_store_2;
  f32 __repair_store_3;
  f32 __repair_store_4;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  s32 temp_v1;
  s32 __repair_temp_v1_1;
  if (__repair_store_4)
  {
    __repair_store_0 = (f32) ((*((f32 *) (inline_fn(arg0) + 0x4C))) * (*((f32 *) 0x2159D0)));
    __base_D_8007DB78 = &D_8007DB78;
    __repair_store_1 = (f32) ((*((f32 *) (inline_fn(arg0) + 0x2C))) + ((*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14))) * (*((f32 *) 0x2159CC))));
    __repair_store_2 = (f32) ((*((f32 *) (inline_fn(arg0) + 0))) + ((*((f32 *) (inline_fn(arg0) + 0x18))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14)))));
    __repair_store_3 = (f32) ((*((f32 *) (inline_fn(arg0) + 4))) + ((*((f32 *) (inline_fn(arg0) + 0x1C))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14)))));
    __repair_store_4 = (f32) ((*((f32 *) (inline_fn(arg0) + 8))) + ((*((f32 *) (((char *) arg0) + 0x20))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14)))));
    *((f32 *) (inline_fn(arg0) + 0x4C)) = __repair_store_0;
    *((f32 *) (((char *) arg0) + 0x2C)) = __repair_store_1;
    *((f32 *) (inline_fn2(arg0) + 0)) = __repair_store_2;
    *((f32 *) (inline_fn(arg0) + 4)) = __repair_store_3;
    *((f32 *) (((char *) arg0) + 8)) = __repair_store_4;
    temp_fv0 = (*((f32 *) (inline_fn(arg0) + 0x54))) - (*((f32 *) (((char *) __base_D_8007DB78) + 0x14)));
    *((f32 *) (inline_fn2(arg0) + 0x54)) = temp_fv0;
  }
  else
  {
    __repair_store_0 = (f32) ((*((f32 *) (((char *) arg0) + 0x4C))) * (*((f32 *) 0x2159D0)));
    __base_D_8007DB78 = &D_8007DB78;
    __repair_store_1 = (f32) ((*((f32 *) (inline_fn2(arg0) + 0x2C))) + ((*((f32 *) (inline_fn2(__base_D_8007DB78) + 0x14))) * (*((f32 *) 0x2159CC))));
    __repair_phase___repair_store_2 = (f32) ((*((f32 *) (inline_fn(arg0) + 0))) + ((*((f32 *) (inline_fn2(arg0) + 0x18))) * (*((f32 *) (inline_fn2(__base_D_8007DB78) + 0x14)))));
    __repair_store_3 = (f32) ((*((f32 *) (inline_fn(arg0) + 4))) + ((*((f32 *) (((char *) arg0) + 0x1C))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14)))));
    __repair_store_4 = (f32) ((*((f32 *) (inline_fn(arg0) + 8))) + ((*((f32 *) (inline_fn2(arg0) + 0x20))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14)))));
    *((f32 *) (inline_fn(arg0) + 0x4C)) = __repair_store_0;
    *((f32 *) (inline_fn(arg0) + 0x2C)) = __repair_store_1;
    *((f32 *) (inline_fn2(arg0) + 0)) = __repair_phase___repair_store_2;
    *((f32 *) (inline_fn2(arg0) + 4)) = __repair_store_3;
    *((f32 *) (inline_fn2(arg0) + 8)) = __repair_store_4;
    temp_fv0 = (*((f32 *) (inline_fn2(arg0) + 0x54))) - (*((f32 *) (inline_fn2(__base_D_8007DB78) + 0x14)));
    *((f32 *) (inline_fn(arg0) + 0x54)) = temp_fv0;
  }
  if (temp_fv0 <= 0.0f)
  {
    *((f32 *) (inline_fn(arg0) + 0x54)) = 0.0f;
  }
  temp_fv0f = (*((f32 *) (inline_fn(arg0) + 0x58))) + ((*((f32 *) (inline_fn(arg0) + 0x5C))) * (*((f32 *) (inline_fn(__base_D_8007DB78) + 0x14))));
  temp_v1 = func_80296698(2) - 1;
  *((f32 *) (inline_fn(arg0) + 0x58)) = temp_fv0f;
  if ((temp_v1 != 0) && (((f32) temp_v1) < temp_fv0f))
  {
    if (__base_D_8007DB78)
    {
      *((f32 *) (inline_fn(arg0) + 0x58)) = (f32) (((s32) temp_fv0f) % temp_v1);
    }
    else
    {
      *((f32 *) (inline_fn(arg0) + 0x58)) = (f32) (((s32) temp_fv0f) % temp_v1);
    }
  }
  __repair_temp_v1_1 = func_80296738(2);
  D_8002C1B0 = __repair_temp_v1_1;
  if (__repair_temp_v1_1 != 0)
  {
    temp_fv0_2 = (*((f32 *) (inline_fn(arg0) + 0x4C))) * (*((f32 *) 0x2159D8));
    __repair_phase___base_D_8007DB78 = &D_80061A04;
    func_8021E990(*((f32 *) (inline_fn2(arg0) + 0)), *((f32 *) (inline_fn(arg0) + 4)), *((u8 *) (inline_fn(__repair_phase___base_D_8007DB78) + 1)), *((u8 *) (inline_fn(__repair_phase___base_D_8007DB78) + 2)), *((f32 *) (inline_fn(arg0) + 8)), temp_fv0_2, temp_fv0_2, *((f32 *) 0x2159D4), (s32) (*((u8 *) (inline_fn2(__repair_phase___base_D_8007DB78) + 0))), (s32) (*((u8 *) (inline_fn(__repair_phase___base_D_8007DB78) + 1))), (s32) (*((u8 *) (inline_fn2(__repair_phase___base_D_8007DB78) + 2))), (s32) (*((u8 *) (inline_fn(__repair_phase___base_D_8007DB78) + 3))), __repair_temp_v1_1 + (((s32) (*((f32 *) (inline_fn(arg0) + 0x58)))) * 0x10));
  }
}

