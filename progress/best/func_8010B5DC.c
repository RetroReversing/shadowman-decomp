extern int D_8006A588;
extern float D_8006A594;
s32 func_8010B74C();
s32 func_802403D4();
extern char D_212078[];
extern void *D_8006A4FC;
extern char D_8006A510[];
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad[144];
  void *value;
} __repair_field_90;
s32 func_8010B5DC(void)
{
  volatile unsigned char pad;
  char *__base_D_212078;
  char *__repair_addr;
  s32 sp10[3];
  s32 sp20;
  f64 sp24;
  s32 temp_a3;
  f32 temp_fv1;
    float *__base_D_8006A594;
    void **__base_D_8006A4FC;
    void **__base_D_8007AFF8;

    __base_D_8007AFF8 = &D_8007AFF8;

    __base_D_8006A4FC = &D_8006A4FC;

    __base_D_8006A594 = &D_8006A594;
  do
  {
    temp_a3 = *((const s32 *) (((char *) (*__base_D_8006A4FC)) + 0x24)); sp10[0] = temp_a3; sp10[1] = *((const f32 *) (((char *) (*__base_D_8006A4FC)) + 0x28)); sp10[2] = *((const s32 *) (((char *) (*__base_D_8006A4FC)) + 0x2C));
    do
    {
      __base_D_212078 = D_212078; sp10[1] += *((f32 *) (((char *) (((*((const u8 *) (((char *) (*__base_D_8007AFF8)) + 0x40))) * 0x6C) + __base_D_212078)) + 0x38));
    }
    while (0);
    sp24 = (f64) sp10[2];
    *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x10)) -= *((f32 *) 0x101F5C); sp20 = sp10[0];
    func_802403D4(sp10);
  }
  while (0);
  if (D_8006A588)
  {
    __repair_addr = (char *) (((char *) ((__repair_field_90 *) D_8006A510)->value) + 8);
    *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0xDC)) = (s32) ((*((s32 *) (((char *) (*((void **) (((char *) D_8006A510) + 0x8C)))) + 0x1C))) + ((*((u16 *) __repair_addr)) * 0x10));
    *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0xD8)) = (f32) (*__base_D_8006A594);
    *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0xE0)) = (s16) (*((u8 *) (((char *) ((__repair_field_90 *) D_8006A510)->value) + 2)));
    *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) |= 0x40000;
  }
  temp_fv1 = *((f32 *) (((char *) (((*((const u8 *) (((char *) (*__base_D_8007AFF8)) + 0x40))) * 0x6C) + __base_D_212078)) + 0x30));
  if ((((*((const f32 *) (((char *) (*__base_D_8006A4FC)) + 0x28))) + (*((const f32 *) (((char *) (*__base_D_8006A4FC)) + 0x10)))) - temp_fv1) < (*__base_D_8006A594))
  {
    *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x10)) = 0.0f;
    *((f32 *) (((char *) (*__base_D_8006A4FC)) + 0x28)) = (f32) ((*__base_D_8006A594) + temp_fv1);
    return 1;
  }
  return func_8010B74C();
}

