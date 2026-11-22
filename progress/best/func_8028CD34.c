extern float D_80075590;
extern float D_8007558C;
extern float D_80075594;
extern s32 D_80036944;
extern char D_80075568[];
extern void *D_8007AFF8;
extern s16 D_8007B240;
extern u8 D_8007B242;
extern s16 D_8007B244;
typedef struct 
{
  unsigned char pad_0[12];
  int field_C;
  unsigned char pad_10[134];
  unsigned short field_96;
  unsigned char pad_98[8];
  short field_A0;
} __repair_record_D_8007AFF8;
void func_8028CD34(void)
{
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 var_fv1;
  f32 var_fv1_2;
  s16 temp_v1;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_a2_3;
  char *var_a1;
  void *temp_v0;
  void *temp_v0_2;
  var_a2 = 0;
  var_a1 = ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_C + (((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_A0 * 2);
  ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_96 = (u16) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_A0;
  for (;;)
  {
    temp_v1 = (s16) (*((u16 *) var_a1));
    var_a1 += 2;
    if (temp_v1 != (-1))
    {
      if (D_80075590 < ((*((f32 *) (((char *) ((temp_v1 * 0x34) + D_80036944)) + 8))) + (*((f32 *) 0x2153E0))))
      {
        if (var_a1 || D_80036944)
        {
          D_8007B242 = (u8) (((u32) (var_a2 & 0xFF)) >> 2);
        }
        else
        {
          D_8007B242 = (u8) (((u32) (var_a2 & 0xFF)) >> 2);
        }
      }
      var_a2 += 1;
      if (((u32) (var_a2 & 0xFF)) < 0xBU)
      {
        continue;
      }
    }
    break;
  }

  var_a2_2 = 0;
  var_fv1 = *((f32 *) 0x2153E4);
  var_a1 = (void *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_C;
  var_a1 = (void *) (((char *) var_a1) + ((s32) (D_8007B242 * 8)));
  do
  {
    temp_v0 = (((s16) (*((u16 *) var_a1))) * 0x34) + D_80036944;
    temp_fv0 = fabsf(D_8007558C - (*((f32 *) (((char *) temp_v0) + 4)))) + fabsf(D_80075594 - (*((f32 *) (((char *) temp_v0) + 0xC))));
    var_a1 += 2;
    if (var_fv1 < temp_fv0)
    {
      var_fv1 = temp_fv0;
      D_8007B240 = var_a2_2 & 0xFF;
    }
    var_a2_2 += 1;
  }
  while (((u32) (var_a2_2 & 0xFF)) < 4U);
  var_a2_3 = 0;
  var_fv1_2 = *((f32 *) 0x2153E8);
  var_a1 = (void *) ((__repair_record_D_8007AFF8 *) D_8007AFF8)->field_C;
  var_a1 = (void *) (((char *) var_a1) + ((s32) (D_8007B242 * 8)));
  do
  {
    temp_v0_2 = (((s16) (*((u16 *) var_a1))) * 0x34) + D_80036944;
    temp_fv0_2 = fabsf(D_8007558C - (*((f32 *) (((char *) temp_v0_2) + 4)))) + fabsf(D_80075594 - (*((f32 *) (((char *) temp_v0_2) + 0xC))));
    var_a1 += 2;
    if (temp_fv0_2 < var_fv1_2)
    {
      var_fv1_2 = temp_fv0_2;
      D_8007B244 = var_a2_3 & 0xFF;
    }
    var_a2_3 += 1;
  }
  while (((u32) (var_a2_3 & 0xFF)) < 4U);
}

