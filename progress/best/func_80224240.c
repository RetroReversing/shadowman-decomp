void *func_8021E344(u16);
s32 func_8021E37C(s32);
s32 func_802234F4(void *, s32, void *, s32, s32, s32, s32);
s32 func_80224CFC(void *, s32, u16, s16, s32);
s32 func_80225910(s32);
s32 func_802259B0(s32);
s32 func_80225A50(s32);
s32 func_802387D8(void *);
extern s32 D_8002C0F0;
extern void *D_8005387C;
extern void *D_80056998;
extern void *D_800569A4;
extern s32 D_800591A0;
typedef struct 
{
  unsigned char pad_0[20];
  int field_14;
  unsigned char pad_18[24];
  unsigned short field_30;
  unsigned char pad_32[10];
  short field_3C;
  unsigned char pad_3E[2];
  unsigned short field_40;
  unsigned short field_42;
  unsigned short field_44;
  unsigned short field_46;
  unsigned short field_48;
  unsigned short field_4A;
} __repair_record_temp_s1;
typedef struct 
{
  int value;
} __repair_field_0;
void func_80224240(void *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 var_s2;
  s32 var_s3;
  u16 temp_v0_2;
  u16 temp_v0_4;
  u16 temp_v0_6;
  void *temp_s1;
  void *temp_t0;
  void *__repair_phase_temp_t0;
  void *temp_t0_2;
  void *temp_v0_5;
  void *temp_v0_7;
  temp_s1 = *((void **) (((char *) arg0) + 0x64));
  if (D_8002C0F0 & 4)
  {
    var_s3 = ((__repair_record_temp_s1 *) temp_s1)->field_14;
    temp_v0 = func_80224CFC(temp_s1, var_s3, ((__repair_record_temp_s1 *) temp_s1)->field_30, ((__repair_record_temp_s1 *) temp_s1)->field_3C, arg1 & 0xFF);
    if (temp_v0 != 0)
    {
      var_s2 = func_8021E37C(temp_v0);
      if (var_s2 != 0)
      {
        if (((u16) ((__repair_record_temp_s1 *) temp_s1)->field_3C) & 8)
        {
          func_802387D8(arg0);
        }
        temp_v0_2 = ((__repair_record_temp_s1 *) temp_s1)->field_40;
        if (1)
        {
          if (temp_v0_2 != 0)
          {
            temp_t0 = func_8021E344(temp_v0_2);
            if (temp_t0 != NULL)
            {
              func_80225910(0x3F);
              do
              {
                ((__repair_field_0 *) D_8005387C)->value = 0xDE000000;
                *((void **) (((char *) D_8005387C) + 4)) = temp_t0;
                ((__repair_field_0 *) temp_t0)->value = 0xDA380002;
                *((s32 **) (((char *) temp_t0) + 4)) = &D_800591A0; D_8005387C += 8; temp_v0 = func_802234F4(temp_t0 + 8, temp_v0, temp_s1, var_s3, (s32) ((__repair_record_temp_s1 *) temp_s1)->field_46, 0, 0);
              }
              while (0);
              var_s3 += ((__repair_record_temp_s1 *) temp_s1)->field_46 * 0x12;
              goto block_8;
            }
          }
          else
          {
            block_8:
            temp_v0_4 = ((__repair_record_temp_s1 *) temp_s1)->field_42;

            do
            {
              if (temp_v0_4 != 0)
              {
                temp_v0_5 = func_8021E344(temp_v0_4);
                if (temp_v0_5 != NULL)
                {
                  func_802259B0(0x3F);
                  __repair_phase_temp_t0 = D_80056998; D_80056998 += 8;
                  ((__repair_field_0 *) __repair_phase_temp_t0)->value = 0xDE000000;
                  *((void **) (((char *) __repair_phase_temp_t0) + 4)) = temp_v0_5;
                  ((__repair_field_0 *) temp_v0_5)->value = 0xDA380002;
                  *((s32 **) (((char *) temp_v0_5) + 4)) = &D_800591A0; var_s2 = func_802234F4(8 + temp_v0_5, var_s2, temp_s1, var_s3, (s32) ((__repair_record_temp_s1 *) temp_s1)->field_48, 1, 0); var_s3 += ((__repair_record_temp_s1 *) temp_s1)->field_48 * 0x12;
                  goto block_11;
                }
              }
              else
              {
                block_11:
                temp_v0_6 = ((__repair_record_temp_s1 *) temp_s1)->field_44;

                if (temp_v0_6 != 0)
                {
                  temp_v0_7 = func_8021E344(temp_v0_6);
 do { if (temp_v0_7 != NULL) { func_80225A50(0x3F); temp_t0_2 = D_800569A4; D_800569A4 += 8; ((__repair_field_0 *) temp_t0_2)->value = 0xDE000000; *((void **) (((char *) temp_t0_2) + 4)) = temp_v0_7; ((__repair_field_0 *) temp_v0_7)->value = 0xDA380002; *((s32 **) (((char *) temp_v0_7) + 4)) = &D_800591A0; func_802234F4(temp_v0_7 + 8, var_s2, temp_s1, var_s3, (s32) ((__repair_record_temp_s1 *) temp_s1)->field_4A, 2, 0); } } while (0);
                }
              }
            }
            while (0);
          }
        }
      }
    }
  }
}
