u8 func_8023646C(s32);
s16 func_8023648C(s32);
extern s32 D_8005E9FC;
inline static int inline_fn(u16 arg0, int arg1)
{
  return (arg0 & 0xFF80) | arg1;
}

inline static int inline_fn2(u8 arg0)
{
  return arg0 & 0x7F;
}

void func_80232E84(u8 *arg0, s32 arg1)
{
  s32 *__base_D_8005E9FC;
  int temp_v1;
  s16 var_s3;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  u8 *var_s0;
  u8 temp_a0;
  void *var_s1;
  var_s0 = arg0;
  var_s1 = var_s0 + 8;
  var_s3 = 0;
  __repair_rows: {
 do { __base_D_8005E9FC = &D_8005E9FC; *var_s0 = func_8023646C(*__base_D_8005E9FC); *((u8 *) (((char *) var_s1) + (-6))) = func_8023646C(*__base_D_8005E9FC); temp_a0 = func_8023646C(*__base_D_8005E9FC); temp_v1 = ((u16) (*var_s0)) & 0xFF80; *var_s0 = temp_v1; if (temp_a0 & 2) { *var_s0 = (s16) (temp_v1 | (inline_fn2(*((u8 *) (((char *) var_s1) + (-7)))) | 1)); } if (temp_a0 & 4) { *var_s0 = (s16) inline_fn((u16) (*var_s0), ((*((u8 *) (((char *) var_s1) + (-7)))) & 0x7F) | 2); } var_v0 = temp_a0 & 8; if (var_v0 != 0) { *var_s0 = (s16) inline_fn((u16) (*var_s0), ((*((u8 *) (((char *) var_s1) + (-7)))) & 0x7F) | 4); } var_v0_2 = temp_a0 & 0x10; if (var_v0_2 != 0) { *var_s0 = (s16) inline_fn((u16) (*var_s0), ((*((u8 *) (((char *) var_s1) + (-7)))) & 0x7F) | 8); } var_v0_3 = temp_a0 & 0x20; if (var_v0_3 != 0) { *var_s0 = (s16) inline_fn((u16) (*var_s0), ((*((u8 *) (((char *) var_s1) + (-7)))) & 0x7F) | 0x10); } var_v0_4 = temp_a0 & 0x40; if (var_v0_4 != 0) { *var_s0 = (s16) inline_fn((u16) (*var_s0), ((*((u8 *) (((char *) var_s1) + (-((unsigned long) 7))))) & 0x7F) | 0x20); } *((s16 *) (((char *) var_s1) + (-2))) = var_s3; var_s3 += *var_s0; *((s16 *) (((char *) var_s1) + 0)) = func_8023648C(*__base_D_8005E9FC); } while (0);
    var_s1 += 0x12;
    arg1 -= 1;
    var_s0 += 0x12;
  }
if (arg1 != 0) goto __repair_rows;
}
