s32 func_8021E990(f32, f32, s32 *, u8, s32, s32, s32);
s32 func_80296738(s32);
s32 func_802ACA18(s32 *, u8, s32 *);
extern s32 D_8002C1B0;
extern s32 D_800619F0;
inline static char *inline_fn(s32 *arg0)
{
  return (char *) arg0;
}

void func_802AC970(void *arg0)
{
  s32 *__base_D_800619F0;
  s32 *__base_D_8002C1B0;
  f32 temp_fv0;
  f32 temp_fv0f;
  s32 temp_v0;
  temp_v0 = func_80296738(*((s32 *) (inline_fn(arg0) + 0x40)));
  __base_D_8002C1B0 = &D_8002C1B0;
  *__base_D_8002C1B0 = temp_v0;
  if (temp_v0 != 0)
  {
    if (arg0)
    {
      temp_fv0 = *((f32 *) (inline_fn(arg0) + 0x34));
      temp_fv0f = *((f32 *) 0x216620);
    }
    else
    {
      temp_fv0 = *((f32 *) (inline_fn(arg0) + 0x34));
      temp_fv0f = *((f32 *) 0x216620);
    }
    if (!(temp_fv0f <= temp_fv0))
    {
      __base_D_800619F0 = &D_800619F0;
      if (((unsigned long) __base_D_800619F0) & ((char) 0x100))
      {
        func_802ACA18(__base_D_8002C1B0, *((u8 *) (inline_fn(__base_D_800619F0) + 2)), __base_D_8002C1B0);
      }
      else
      {
        func_802ACA18(__base_D_8002C1B0, *((u8 *) (inline_fn(__base_D_800619F0) + 2)), __base_D_8002C1B0);
      }
      return;
    }
    func_8021E990(*((f32 *) (inline_fn(arg0) + 0x54)), *((f32 *) (inline_fn(arg0) + 0x58)), __base_D_8002C1B0, *((u8 *) (inline_fn(__base_D_800619F0) + 2)), *((s32 *) (inline_fn(arg0) + 0x5C)), *((f32 *) (inline_fn(arg0) + 0x20)), ((((s32) (temp_fv0 - temp_fv0f)) | 0x80000000) * 0x10) + (*__base_D_8002C1B0));
  }
}

