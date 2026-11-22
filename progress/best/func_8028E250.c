s32 func_8027003C();
s32 func_8027006C();
s32 func_802776D8();
extern s32 D_80036944;
extern void *D_8006A4FC;
extern void *D_8007AFF8;
typedef struct 
{
  unsigned short field_0;
  short field_2;
} __repair_record_temp_s0;
void func_8028E250(void)
{
  void **__base_D_8007AFF8;
  char *var_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  u16 temp_v1;
  void *temp_s0;
  void *temp_v1_2;
  void *var_a0;
  func_8027003C();
  __base_D_8007AFF8 = &D_8007AFF8;
  temp_s0 = *((void **) (((char *) (*__base_D_8007AFF8)) + 0xC));
  *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0xD0)) = (f32) (*((f32 *) 0x215518));
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) &= ~2;
  temp_v0 = (*((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x48))) | 0x1000;
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) = (s32) (((*((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44))) | 0x10080) & 0xF7FFFFFF);
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x48)) = temp_v0;
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x48)) = (s32) (temp_v0 | 0x2000);
  var_a0 = D_8006A4FC;
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0xC4)) = 0;
  *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x9C)) = 4;
  *((s16 *) (((char *) (*__base_D_8007AFF8)) + 0x94)) = 0;
  *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) |= 4;
  *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0xD4)) = (f32) (*((f32 *) (((char *) var_a0) + 0x28)));
  *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0xC0)) = (f32) (*((f32 *) (((char *) var_a0) + 0x1C)));
  if (temp_s0 != NULL)
  {
 do { temp_v0_2 = ((__repair_record_temp_s0 *) temp_s0)->field_0; *((u16 *) (((char *) (*__base_D_8007AFF8)) + 0x90)) = temp_v0_2; temp_v0 = (u16) (*((u16 *) (((char *) (*__base_D_8007AFF8)) + 0x90))); *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x70)) = (f32) (*((f32 *) (((char *) (((((__repair_record_temp_s0 *) temp_s0)->field_0 & 0xFFFF) * 0x34) + D_80036944)) + 4))); *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x74)) = (f32) (*((f32 *) (((char *) ((temp_v0 * 0x34) + D_80036944)) + 8))); } while (0);
    *((s32 *) (((char *) (*__base_D_8007AFF8)) + 0x44)) &= ~0x40;
    *((f32 *) (((char *) (*__base_D_8007AFF8)) + 0x78)) = (f32) (*((f32 *) (((char *) ((temp_v0 * 0x34) + D_80036944)) + 0xC)));
    do
    {
      func_802776D8();
    }
    while (0);
    var_a0 = *__base_D_8007AFF8;
    var_s0 = temp_s0 + 2;
    *((s32 *) (((char *) var_a0) + 0xC4)) = (double) ((s32) (*((s32 *) 0x21551C)));
    temp_v1_2 = var_a0;
    if (((__repair_record_temp_s0 *) temp_s0)->field_2 != (-1))
    {
      var_a0 = (void *) (-1);
      __repair_rows:
      {
        var_s0 += 2;
        *((u16 *) (((char *) temp_v1_2) + 0x94)) += 1;
      }

      if ((*((s16 *) var_s0)) != (-1))
      {
        goto __repair_rows;
      }
    }
  }
  func_8027006C(var_a0);
}
