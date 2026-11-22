extern float D_8005EA70;
extern float D_8005EA74;
extern int D_8005EA7C;
extern float D_8005EA78;
extern float D_8005EA30;
extern float D_8005EA34;
extern float D_8005EA38;
s32 func_80234DC8();
extern void *D_8005E9EC;
extern void *D_8005E9F0;
extern char D_8005EA80[];
extern s32 D_8006196C;
extern s32 D_80061978;
extern s32 D_80061988;
extern void *D_80061A10;
typedef struct 
{
  unsigned char pad_0[4];
  int field_4;
  int field_8;
} __repair_record_D_8005E9F0;
s32 func_80234CE8(void *arg0, s32 arg1)
{
  
  f32 temp_fv0;
  f32 temp_fv1f;
  void *temp_a3;
  D_8005EA70 = *((f32 *) (((char *) arg0) + 0));
  temp_a3 = *((void **) (((char *) D_8005E9EC) + 0x64));
  temp_fv0 = *((f32 *) (((char *) arg0) + 4));
  D_80061A10 = temp_a3;
  D_80061988 = ((__repair_record_D_8005E9F0 *) D_8005E9F0)->field_4;
  D_8005EA74 = temp_fv0;
  temp_fv1f = *((f32 *) (((char *) arg0) + 8));
  D_80061978 = ((__repair_record_D_8005E9F0 *) D_8005E9F0)->field_8;
  D_8005EA7C = arg1;
  D_8005EA78 = temp_fv1f;
  if ((*((u8 *) (((char *) temp_a3) + 0x3E))) == 2)
  {
    if (temp_fv1f || D_8005E9F0)
    {
char *__base_D_8005EA80;

      D_8005EA70 = (f32) (D_8005EA70 - D_8005EA30);
      D_8005EA78 = (f32) (temp_fv1f - D_8005EA38);
      D_8005EA74 = (f32) (temp_fv0 - D_8005EA34);
      func_80234DC8(0);
      __base_D_8005EA80 = D_8005EA80;
      *((D_8006196C * 0xC) + __base_D_8005EA80) = -1;
    }
    else
    {
char *__base_D_8005EA80;

      D_8005EA70 = (f32) (D_8005EA70 - D_8005EA30);
      D_8005EA78 = (f32) (temp_fv1f - D_8005EA38);
      D_8005EA74 = (f32) (temp_fv0 - D_8005EA34);
      func_80234DC8(0);
      __base_D_8005EA80 = D_8005EA80;
      *((D_8006196C * 0xC) + __base_D_8005EA80) = -1;
    }
  }
  return D_8006196C;
}

