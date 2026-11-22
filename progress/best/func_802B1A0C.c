#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_8025DD7C();
s32 func_80296738();
s32 func_802968C0();
s32 func_802A5D00();
f32 func_802A65D0(void *, f32, f32);
extern s32 D_8002C834;
inline static f32 inline_fn(f32 *arg0)
{
  return *arg0;
}

void func_802B1A0C(void *arg0)
{
  f32 __repair_fzero = 0.0f;
  char sp10[0x18];
  f32 sp28[7];
  s32 sp74[3];
  volatile char sp80;
  unsigned long long sp90;
  volatile int temp_v0;
  temp_v0 = func_80296738(D_8002C834);
  sp90 = temp_v0;
  if (temp_v0 != 0)
  {
    u8 sp44[0x3C];
    sp28[3] = *((s32 *) (((s8 *) arg0) + 0x54));
    sp28[4] = inline_fn((s32 *) (((s8 *) arg0) + 0x58));
    sp28[5] = inline_fn((s32 *) (((s8 *) arg0) + 0x5C));
    sp74[0] = func_802968C0(0x1F);
    sp28[2] = __repair_fzero;
    sp28[0] = __repair_fzero;
    sp74[2] = 0;
    sp74[1] = 0;
    sp80 = 0xFF;
    sp28[1] = inline_fn((f32 *) 0x216984);
    sp28[6] = func_802A65D0(arg0, 1.0f, 0.95f);
    func_802A5D00(arg0 + 0x6C, sp44);
    func_8025DD7C(sp10, 2, 6, -1);
  }
}

