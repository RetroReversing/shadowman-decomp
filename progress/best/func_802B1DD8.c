extern float D_8007DB8C;
s32 func_802A6808();
s32 func_802B275C();
extern char D_8007DB88[];
typedef struct 
{
  unsigned char pad_0[8];
  void *field_8;
  void *field_C;
  unsigned char pad_10[32];
  float field_30;
  unsigned char pad_34[16];
  int field_44;
  unsigned char pad_48[12];
  float field_54;
  float field_58;
  float field_5C;
  float field_60;
  unsigned char pad_64[8];
  float field_6C;
  float field_70;
  float field_74;
} __repair_record_arg0;
inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_802B1DD8(void *arg0)
{
  char *__repair_addr;
  f32 *var_v0;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s32 temp_v0;
  u32 temp_v0_2;
  void *temp_s0;
  temp_s0 = ((__repair_record_arg0 *) arg0)->field_C;
  func_802A6808();
  if ((*((u8 *) inline_fn((char *) ((((__repair_record_arg0 *) arg0)->field_44 * 0x50) + (*((s32 *) (((char *) ((__repair_record_arg0 *) arg0)->field_8) + 8)))), 0x33))) & 1)
  {
    ((__repair_record_arg0 *) arg0)->field_70 = (f32) (((__repair_record_arg0 *) arg0)->field_70 - (D_8007DB8C * (*((f32 *) 0x2169A8))));
  }
  temp_fv0 = ((__repair_record_arg0 *) arg0)->field_60 + D_8007DB8C;
  ((__repair_record_arg0 *) arg0)->field_60 = temp_fv0;
  if ((*((f32 *) 0x2169AC)) < temp_fv0)
  {
    ((__repair_record_arg0 *) arg0)->field_60 = 0.0f;
  }
  var_v0 = D_8007DB88 + 4;
  if (temp_s0 != NULL)
  {
    temp_v0 = *((s32 *) (((char *) temp_s0) + 4));
    *((s32 *) inline_fn((char *) temp_s0, 4)) = (s32) (temp_v0 - 1);
    if ((*((s32 *) (((char *) temp_s0) + 4))) == 0)
    {
      *((s32 *) inline_fn((char *) temp_s0, 4)) = 0xB;
    }
    __repair_addr = (char *) inline_fn(temp_s0, (*((s32 *) (((char *) temp_s0) + 4))) * 0xC);
    *((f32 *) (((char *) __repair_addr) + 8)) = (f32) (((__repair_record_arg0 *) arg0)->field_54 - ((__repair_record_arg0 *) arg0)->field_6C);
    *((f32 *) inline_fn((char *) (temp_s0 - (-((*((s32 *) inline_fn((char *) temp_s0, 4))) * 0xC))), 0xC)) = (f32) (((__repair_record_arg0 *) arg0)->field_58 - ((__repair_record_arg0 *) arg0)->field_70);
    *((f32 *) (((char *) inline_fn(temp_s0, (*((s32 *) inline_fn((char *) temp_s0, 4))) * 0xC)) + 0x10)) = (f32) (((__repair_record_arg0 *) arg0)->field_5C - ((__repair_record_arg0 *) arg0)->field_74);
    temp_v0_2 = (*((u32 *) (((char *) temp_s0) + 0))) + 1;
    *((u32 *) inline_fn((char *) temp_s0, 0)) = temp_v0_2;
    var_v0 = inline_fn(D_8007DB88, 4);
    if (temp_v0_2 >= 0xDU)
    {
      *((u32 *) inline_fn((char *) temp_s0, 0)) = 0xCU;
      var_v0 = inline_fn(D_8007DB88, 4);
    }
  }
  temp_fv0_2 = ((__repair_record_arg0 *) arg0)->field_30 - (*var_v0);
  ((__repair_record_arg0 *) arg0)->field_30 = temp_fv0_2;
  if (temp_fv0_2 <= 0.0f)
  {
    ((__repair_record_arg0 *) arg0)->field_30 = 0.0f;
  }
  if (((__repair_record_arg0 *) arg0)->field_30 <= 0.0f)
  {
    func_802B275C(arg0);
  }
}

