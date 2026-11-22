s32 func_8027003C();
volatile short func_8027006C();
s32 func_80270E0C(f32, void *, s32);
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad[68];
  int value;
} __repair_field_44;
typedef struct 
{
  unsigned char pad_0[158];
  short field_9E;
  unsigned char pad_A0[4];
  short field_A4;
} __repair_record_D_8007AFF8;
inline static int inline_fn(int arg0)
{
  return ((__repair_field_44 *) D_8007AFF8)->value | arg0;
}

void func_8028FA44(void)
{
  func_8027003C();
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_A4 = 1;
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_9E = 0x19;
  ((__repair_field_44 *) D_8007AFF8)->value = (s32) ((inline_fn(0x08000008) | 0x20004) | ((char) 0x10080));
  func_80270E0C(*((f32 *) 0x21560C), D_8007AFF8, 0x20004);
  func_8027006C();
}

