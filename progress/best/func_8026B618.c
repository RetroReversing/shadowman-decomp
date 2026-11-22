extern char *D_200E6C[];
extern char D_8007DB78[];
extern int func_8026B72C(int a);
inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_8026B618(s32 arg0, s8 arg1)
{
  char *base = D_8007DB78;
  char *s0 = base + (arg0 * 4);
  if ((*((s32 *) (s0 + 0x30))) != (-1))
  {
    char *a1;
    char *v1;
    f32 f;
    *((s32 *) (s0 + 0x40)) = 0;
    *((s8 *) ((base + arg0) + 0x48)) = arg1;
    a1 = D_200E6C[*((s32 *) (s0 + 0x30))] + (func_8026B72C(arg0) * 0x38);
    if ((*((u8 *) (a1 + 0x32))) == 1)
    {
      *((f32 *) (s0 + 0x4C)) = *((f32 *) (a1 + 8));
    }
    else
    {
      *((f32 *) (s0 + 0x4C)) = *((f32 *) 0x20E328);
    }
    if ((*((u8 *) inline_fn(a1, 0x35))) == 1)
    {
      f = *((f32 *) inline_fn(a1, 0x1C));
    }
    else
    {
      f = *((f32 *) 0x20E32C);
    }
    v1 = D_8007DB78;
    v1 = inline_fn(v1, arg0 * 4);
    *((f32 *) inline_fn(v1, 0x54)) = f;
    v1 = D_8007DB78;
    v1 += arg0 * 4;
    *((s32 *) inline_fn(v1, 0x5C)) = *((s32 *) inline_fn(a1, 0x14));
    *((s32 *) inline_fn(v1, 0x64)) = *((s32 *) inline_fn(a1, 0x18));
  }
}

