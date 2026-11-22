s32 func_802776D8();
extern s32 D_80036944;
extern void *D_8006A4FC;
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad[72];
  int value;
} __repair_field_48;
inline static f32 *inline_fn(f32 *arg0)
{
  return arg0;
}

inline static s32 inline_fn2(u8 arg0)
{
  return (s32) arg0;
}

void func_802759FC(void *arg0, s32 arg1, s16 arg2)
{
  void **__base_D_8007AFF8;
  s32 temp_t0;
  u8 temp_v1_2;
  void *temp_s1;
  void *temp_v0;
  void *temp_v1;
  temp_s1 = D_8006A4FC;
  temp_v1 = *((void **) (((char *) arg0) + 0x6C));
  D_8006A4FC = arg0;
  do
  {
    __base_D_8007AFF8 = &D_8007AFF8;
    *__base_D_8007AFF8 = temp_v1;
  }
  while (0);
  temp_v1_2 = *((u8 *) (((char *) temp_v1) + 0x3B));
  if ((temp_v1_2 != 0) && (((((s32) temp_v1_2) < 0) || ((((s32) temp_v1_2) + 1) > 0xF)) || (inline_fn2(temp_v1_2) < 0xD)))
  {
    temp_t0 = ((__repair_field_48 *) (*__base_D_8007AFF8))->value;
    if ((!(temp_t0 & 0x800)) && ((*((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x20))) == (-1)))
    {
      if (arg2 != 0)
      {
        *((s8 *) (((char *) (*__base_D_8007AFF8)) + 0x69)) = 0x64;
        ((__repair_field_48 *) (*__base_D_8007AFF8))->value = (s32) (temp_t0 | 0x80000);
        temp_v0 = ((2 * arg2) * 26) + D_80036944;
        *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x16)) = arg2;
        *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x1A)) = arg2;
        *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x20)) = arg2;
        *inline_fn((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x70)) = (f32) (*((f32 *) (((char *) temp_v0) + 4)));
        *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x74)) = (f32) (*((f32 *) (((char *) temp_v0) + 8)));
        *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x78)) = (f32) (*((f32 *) (((char *) temp_v0) + 0xC)));
        *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x70)) = (f32) (*((f32 *) (((char *) temp_v0) + 4)));
        *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x74)) = (f32) (*((f32 *) (((char *) temp_v0) + 8)));
        ((__repair_field_48 *) (*__base_D_8007AFF8))->value |= 0x200;
        *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) |= 0x40;
        *((s8 *) (((char *) (*__base_D_8007AFF8)) + 0x3C)) = 3;
        *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x78)) = (f32) (*((f32 *) (((char *) temp_v0) + 0xC)));
        do
        {
          func_802776D8(5);
        }
        while (0);
        *((s8 *) (((char *) (*__base_D_8007AFF8)) + 0x54)) = 1;
      }
    }
    D_8006A4FC = temp_s1;
  }
}

