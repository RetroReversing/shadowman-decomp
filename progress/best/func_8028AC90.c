extern int D_80045A50;
extern int D_80045A54;
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern char D_80045930[];
extern s16 D_8004EC20;
extern s8 D_8004EC80;
extern void *D_8006A4FC;
extern s8 D_8007AFE2;
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad_0[68];
  int field_44;
  unsigned char pad_48[196];
  int field_10C;
} __repair_record_D_8007AFF8;
typedef struct 
{
  unsigned char pad_0[36];
  int field_24;
  int field_28;
  int field_2C;
} __repair_record_D_8006A4FC;
inline static int inline_fn()
{
  return ~2;
}

void func_8028AC90(s32 arg0)
{
  s32 temp_a2;
  func_8027003C();
  D_80045A50 = arg0;
  temp_a2 = ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_10C;
  D_8007AFE2 = 0;
  D_80045A54 = temp_a2;
  ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_24 = 0;
  *((int *) (((char *) D_8006A4FC) + 40)) = 0;
  *((0, (int *) (((char *) D_8006A4FC) + 44))) = 0;
  func_8027206C(0x16, 0, temp_a2);
  *((int *) (((char *) D_8007AFF8) + 68)) = (s32) (((((((*((int *) (((char *) D_8007AFF8) + 68))) | 0x22008) & (~0x80)) | 0x10010) & inline_fn()) | 0x02000000) & 0xF7FFFFFF);
  if (1)
  {
    __repair_rows:
    {
      D_8004EC20 = -((unsigned char) 1);
    }

    if (0)
    {
 do { goto __repair_rows; } while (0);
    }
    D_8004EC80 = 0;
    func_8026F6BC(0x2D, D_8007AFF8, 0x10010, (short) 0xF7FFFFFF);
  }
  func_8026F6BC(0x2C);
  func_8027006C();
}
