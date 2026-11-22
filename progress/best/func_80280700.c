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
s32 func_80113AD0();
M2C_UNK func_8027003C();
M2C_UNK func_8027006C(void);
M2C_UNK func_80270090(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK func_802700F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);
extern void *D_8006A4FC;
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad_0[56];
  unsigned char field_38;
  unsigned char pad_39[11];
  int field_44;
  int field_48;
  unsigned char pad_4C[68];
  short field_90;
  unsigned char pad_92[30];
  float field_B0;
  unsigned char pad_B4[8];
  float field_BC;
} __repair_record_D_8007AFF8;
inline static f32 inline_fn()
{
  return *((f32 *) 0x214A2C);
}

void func_80280700(void)
{
  void *__repair_cached_pointer = D_8007AFF8;
  u32 var_s0;
  void **var_a0;
  void *temp_s2;
  void *temp_s3;
  func_8027003C();
  func_8027206C(0, 0);
  *((f32 *) (((s8 *) D_8006A4FC) + 0x1C)) = (f32) (func_80113AD0() % 360);
  *((s16 *) (((s8 *) __repair_cached_pointer) + 0x9C)) = 0xC;
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_B0 = (f32) inline_fn();
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_BC = (f32) (*((f32 *) 0x214A30));
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_90 = 0;
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 & (~2));
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_48 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_48 & (~0x40));
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 | 0x20004);
  func_80270090(2, D_8007AFF8, -0x41, 0x20004);
  var_a0 = (void **) 0xF7FFFFFF;
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 & 0xF7FFFFFF);
  if (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_38 != 0)
  {
    temp_s3 = D_8007AFF8;
    var_s0 = 0;
    temp_s2 = D_8006A4FC;
    do
    {
      {
        func_802700F8(0, 0, 0, 1, 0);
        var_s0 += 1;
      }
    }
    while (((u8) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_38) >= var_s0);
    var_a0 = &D_8007AFF8;
    ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_38 = 1U;
    D_8006A4FC = temp_s2;
    D_8007AFF8 = temp_s3;
  }
  func_8027006C();
}

