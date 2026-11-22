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
s32 func_801043F8(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_8026F6BC(M2C_UNK);
M2C_UNK func_8027003C();
M2C_UNK func_8027006C();
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);
extern M2C_UNK D_80045930;
extern s8 D_8007AFBC;
extern void *D_8007AFF8;
extern volatile unsigned short D_8007B270;
typedef struct 
{
  unsigned char pad_0[348];
  int field_15C;
  void *field_160;
} __repair_record___base_D_80045930;
typedef struct 
{
  unsigned char pad_0[12];
  void *field_C;
  unsigned char pad_10[52];
  int field_44;
  int field_48;
  unsigned char pad_4C[68];
  unsigned short field_90;
  unsigned char pad_92[122];
  void *field_10C;
} __repair_record_D_8007AFF8;
void func_80291AD0(s32 arg0)
{
  M2C_UNK *__base_D_80045930;
  s16 *var_a1;
  u16 var_a0;
  void *temp_a1;
  func_8027003C();
  __base_D_80045930 = &D_80045930;
  ((__repair_record___base_D_80045930 *) __base_D_80045930)->field_15C = arg0;
  D_8007AFBC = 0;
  ((__repair_record___base_D_80045930 *) __base_D_80045930)->field_160 = (void *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C;
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_48 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_48 | 0x4000);
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 | 0x22088);
  func_8027206C(0x13, 0x4B);
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 = (s32) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_44 | 0x10);
  func_8026F6BC(0x30);
  func_8026F6BC(0x3D);
  temp_a1 = ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_C;
  D_8007AFBC = 0;
  if (temp_a1 != NULL)
  {
    var_a1 = temp_a1 - (-2);
    var_a0 = (u16) (*((s16 *) (((s8 *) temp_a1) + 2)));
    if ((*((s16 *) (((s8 *) temp_a1) + 2))) != (-1))
    {
      do
      {
 do { do { *((((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_90 * 2) + (&D_8007B270)) = var_a0; var_a1 = var_a1 + 1; ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_90 = (u16) (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_90 + 1); var_a0 = (u16) (*var_a1); } while ((*var_a1) != (-1)); } while (0);
      }
      while (0);
    }
  }
  if (temp_a1)
  {
    *((s32 *) (((s8 *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C) + 0x44)) = func_801043F8((*((s16 *) (((s8 *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C) + 0x3E))) * 0x30, 2, 0);
    func_8027006C();
  }
  else
  {
    *((s32 *) (((s8 *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C) + 0x44)) = func_801043F8((*((s16 *) (((s8 *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C) + 0x3E))) * 0x30, 2, 0);
    func_8027006C();
  }
}
