s32 func_8023A0DC(s32, s32, void *);
s32 func_80240418(f32 *, f32 *, f32, s32);
extern s32 D_212078;
extern s32 D_800311F0;
extern void *D_8006A4FC;
extern s32 D_8006A588;
extern void *D_8007AFF8;
extern s32 D_8007B220;
typedef struct 
{
  unsigned char pad_0[36];
  float field_24;
  float field_28;
  float field_2C;
} __repair_record_D_8006A4FC;
inline static f32 inline_fn(int arg0)
{
  return *((f32 *) (((char *) (&D_8007B220)) + arg0));
}

void func_8028BDA0(void)
{
  void **__base_D_8007AFF8;
  s32 *__base_D_800311F0;
  volatile char pad;
  s32 *__base_D_212078;
  f32 sp18[3];
  f32 sp28[3];
  f32 temp_fs0;
  void *temp_a0;
  __base_D_8007AFF8 = &D_8007AFF8;
  if (((*((u16 *) (((char *) (*__base_D_8007AFF8)) + 0x90))) != 0) && (((sp18[0] = ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_24, sp18[2] = ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_2C, sp18[1] = ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_28 + (*((f32 *) (((char *) (((*((u8 *) (((char *) (*__base_D_8007AFF8)) + 0x40))) * 0x6C) + (__base_D_212078 = &D_212078))) + 0x38))), temp_fs0 = (f32) (*((u8 *) (((char *) ((((*((u8 *) (((char *) (*__base_D_8007AFF8)) + 0x40))) * 9) * 12) + __base_D_212078)) + 0x3C))), temp_a0 = D_8006A4FC + 0x34, func_8023A0DC(0, 0, temp_a0), *(__base_D_800311F0 = &D_800311F0) = 1, sp28[0] += sp18[0], sp28[1] += sp18[1], sp28[2] += sp18[2], func_80240418(sp18, sp28, temp_fs0, 3), *__base_D_800311F0 = 0, D_8006A588 == 1)) || ((*((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x48))) & 8)))
  {
    do
    {
      if (__base_D_8007AFF8)
      {
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_24 = (f32) inline_fn(0);
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_28 = (f32) (*((f32 *) (((char *) (&D_8007B220)) + 4)));
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_2C = (f32) (*((f32 *) (((char *) (&D_8007B220)) + 8)));
      }
      else
      {
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_24 = (f32) inline_fn(0);
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_28 = (f32) (*((f32 *) (((char *) (&D_8007B220)) + 4)));
        ((__repair_record_D_8006A4FC *) D_8006A4FC)->field_2C = (f32) (*((f32 *) (((char *) (&D_8007B220)) + 8)));
      }
    }
    while (0);
  }
}

