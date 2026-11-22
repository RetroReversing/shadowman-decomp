s32 func_80113AD0();
f32 func_8022EBE8(f32);
void *func_802A16D4(s32 *, s32 *, f32, s32 *);
void *func_802AAD2C(void *, s32 *, s32, s32 *, s32);
extern s32 D_21782C;
extern s32 D_80036B1C;
extern s32 D_8007DB88;
typedef struct 
{
  unsigned char pad_0[44];
  float field_2C;
  float field_30;
  unsigned char pad_34[28];
  unsigned char field_50;
  signed char field_51;
  unsigned char pad_52[2];
  float field_54;
  unsigned char pad_58[4];
  float field_5C;
  float field_60;
  float field_64;
  float field_68;
  float field_6C;
  float field_70;
  float field_74;
} __repair_record_temp_v0;
typedef struct 
{
  float field_0;
  float field_4;
  float field_8;
  unsigned char pad_C[12];
  float field_18;
  float field_1C;
  float field_20;
} __repair_record_temp_v0_2;
void func_802A45B4(void *arg0)
{
  volatile long long pad;
  s32 sp18;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  f32 temp_fv1;
  void *temp_v0;
  void *temp_v0_2;
  temp_fv0 = (*((f32 *) (((char *) arg0) + 0x54))) - (*((f32 *) (((char *) (&D_8007DB88)) + 4)));
  *((f32 *) (((char *) arg0) + 0x54)) = temp_fv0;
  if (1)
  {
    if (temp_fv0 <= 0.0f)
    {
      *((f32 *) (((char *) arg0) + 0x54)) = 0.0f;
    }
    if ((func_80113AD0() % 10) >= 7)
    {
      temp_v0 = func_802AAD2C(arg0, &D_80036B1C, 0, &D_21782C, 0);
      if (temp_v0 != NULL)
      {
        temp_fs0 = *((f32 *) 0x216158);
        ((__repair_record_temp_v0 *) temp_v0)->field_51 = 0;
        ((__repair_record_temp_v0 *) temp_v0)->field_74 = 0.0f;
        ((__repair_record_temp_v0 *) temp_v0)->field_6C = 0.0f;
        ((__repair_record_temp_v0 *) temp_v0)->field_70 = (f32) (*((f32 *) 0x21615C));
        temp_fs0_2 = *((f32 *) 0x216160);
        ((__repair_record_temp_v0 *) temp_v0)->field_54 = (f32) (((__repair_record_temp_v0 *) temp_v0)->field_54 + func_8022EBE8(temp_fs0));
        temp_fv0f = ((__repair_record_temp_v0 *) temp_v0)->field_5C + func_8022EBE8(*((f32 *) 0x216158));
        ((__repair_record_temp_v0 *) temp_v0)->field_50 = (u8) (((__repair_record_temp_v0 *) temp_v0)->field_50 | 4);
        ((__repair_record_temp_v0 *) temp_v0)->field_5C = temp_fv0f;
        ((__repair_record_temp_v0 *) temp_v0)->field_60 = (f32) ((*((f32 *) 0x2158D0)) + func_8022EBE8(temp_fs0_2));
        temp_fv0_2 = func_8022EBE8(temp_fs0_2);
        ((__repair_record_temp_v0 *) temp_v0)->field_64 = (f32) (*((f32 *) 0x210004));
        temp_fv1 = *((f32 *) 0x216164);
        ((__repair_record_temp_v0 *) temp_v0)->field_2C = temp_fv1;
        ((__repair_record_temp_v0 *) temp_v0)->field_30 = temp_fv1;
        ((__repair_record_temp_v0 *) temp_v0)->field_68 = (f32) ((*((f32 *) ((char) 0x210008))) + temp_fv0_2);
      }
      if ((func_80113AD0() % 10) >= 5)
      {
        temp_fs0 = *((f32 *) 0x216168);
        temp_v0_2 = func_802A16D4(&D_80036B1C, &D_80036B1C, temp_fs0, &sp18);
        if (temp_v0_2 != NULL)
        {
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_0 = (f32) ((*((f32 *) (((char *) arg0) + 0))) + func_8022EBE8(temp_fs0));
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_8 = (f32) ((*((f32 *) (((char *) arg0) + 8))) + func_8022EBE8(temp_fs0));
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_20 = 0.0f;
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_18 = 0.0f;
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_1C = (f32) (*((f32 *) 0x21616C));
          ((__repair_record_temp_v0_2 *) temp_v0_2)->field_4 = (f32) (*((f32 *) (((char *) arg0) + 4)));
        }
      }
    }
  }
}

