#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_80109D88();
s32 func_80237AA8();
s32 func_8023DF7C();
s32 func_802D0B28();
extern s32 D_209890;
extern s32 D_8002D2B4;
extern s32 D_800305F8;
extern s32 D_800312C0;
extern s32 D_8005276C;
extern void *D_8005E9EC;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern s32 D_8006973C;
extern s32 D_800698A0;
extern s32 D_80074BB0;
extern s32 D_80074F70;
extern s32 D_800752D8;
extern s32 D_80075518;
extern s32 D_80075568;
typedef struct 
{
  unsigned char pad_0[16];
  int field_10;
  unsigned char pad_14[8];
  short field_1C;
} __repair_record_D_8005E9F0;
inline static char *inline_fn(char *arg0)
{
  return arg0;
}

inline static char *inline_fn2()
{
  return ((char *) (&D_80075568)) + 0x20;
}

inline static char *inline_fn23(s32 *arg0)
{
  return (char *) arg0;
}

void func_80277800(s32 arg0)
{
  s32 *__base_D_209890;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  s32 temp_a0;
  func_80109D88();
  D_8005276C = 1;
  func_802D0B28(D_8005EA14, arg0, 1);
  *((s8 *) (inline_fn23(&D_80075568) + 0x71)) = arg0;
  temp_fv0 = *((f32 *) (((char *) D_8005E9EC) + 0x24));
  D_8002D2B4 = (s32) arg0;
  *((f32 *) (inline_fn23(&D_80075568) + 0x24)) = temp_fv0;
  *((f32 *) (((char *) (&D_800752D8)) + 0)) = temp_fv0;
  *((f32 *) (inline_fn23(&D_80074F70) + 0)) = (*((f32 *) (((char *) D_8005E9EC) + 0x24)));
  temp_fv0_2 = *((f32 *) (((char *) D_8005E9EC) + 0x28));
  *((f32 *) (((char *) (&D_80075568)) + 0x28)) = temp_fv0_2;
  *((f32 *) (inline_fn23(&D_800752D8) + 4)) = temp_fv0_2;
  *((f32 *) (inline_fn23(&D_80074F70) + 4)) = temp_fv0_2;
  __repair_rows: {
    temp_fv0_3 = *((f32 *) (((char *) D_8005E9EC) + 0x2C)); D_800305F8 = 0;
    *((s32 *) (inline_fn23(&D_80075568) + 0x18)) = 0;
    *((s32 *) inline_fn2()) = 0;
    *((s32 *) (inline_fn23(&D_80075568) + 0xC)) = 0;
    *((s32 *) (((char *) (&D_80075568)) + 0x10)) = 0;
    *((s32 *) (inline_fn23(&D_80075568) + 0x14)) = 0;
    *((s32 *) (inline_fn23(&D_80075568) + 0x68)) = 0;
    *((f32 *) (((char *) (&D_80075568)) + 0x2C)) = temp_fv0_3;
    *((f32 *) (inline_fn23(&D_800752D8) + 8)) = temp_fv0_3;
    *((f32 *) (inline_fn23(&D_80074F70) + 8)) = temp_fv0_3; __base_D_209890 = &D_209890;
    if ((*((s16 *) inline_fn(((char *) ((D_80074BB0 * 0x34) + __base_D_209890)) + 8))) == 1)
    {
      func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0, 2);
    }
    temp_a0 = ((__repair_record_D_8005E9F0 *) D_8005E9F0)->field_10; D_800312C0 = 0x64;
  }
if (0) goto __repair_rows;
  if (temp_a0 != 0)
  {
    D_8006973C = (s32) ((__repair_record_D_8005E9F0 *) D_8005E9F0)->field_1C;
    D_800698A0 = temp_a0;
    func_80237AA8(temp_a0, D_8005E9F0);
  }
}

