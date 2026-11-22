extern short D_80075556;
extern int D_80075558;
s32 func_80241504();
extern u32 D_80036E08;
extern s32 D_800458F0;
extern char D_80075518[];
extern char D_80075568[];
extern char D_8007BBD0[];
extern void *D_8007BD6C;
extern void *D_8007BD70;
extern char D_8007DB88[];
void func_802A6DF4(void *arg0)
{
  char *__base_D_8007BBD0;
  f32 sp28[3];
  f32 *var_v0;
  f32 temp_fs0;
  f32 temp_ft0;
  f32 temp_fv0f;
  f32 sp18[3];
  f32 temp_fv1;
  f32 temp_fv1f;
  f32 temp_t1;
  f32 temp_t2;
  f32 temp_t3;
  u32 var_s1;
  f32 sp38[3];
  void *temp_s3;
  void *temp_v0;
  void *var_s0;
  __base_D_8007BBD0 = D_80075568;
  temp_s3 = D_8007BD6C;
  if (((*((u8 *) (((char *) (((*((s32 *) (((char *) arg0) + 0x44))) * 0x50) + (*((s32 *) (((char *) D_8007BD70) + 8))))) + 0x30))) & 2) && (((var_v0 = D_8007DB88 + 4, (*((s32 *) (((char *) D_8007BD70) + 0))) != 0x1E)) || ((var_v0 = D_8007DB88 + 4, ((unsigned) D_800458F0) == 0))))
  {
    temp_t1 = *((f32 *) (((char *) temp_s3) + 0x54));
    temp_t2 = *((f32 *) (((char *) temp_s3) + 0x58));
    temp_t3 = *((f32 *) (((char *) temp_s3) + 0x5C));
    sp28[0] = temp_t1;
    sp28[1] = temp_t2;
    sp28[2] = temp_t3;
    sp18[0] = temp_t1;
    sp18[1] = temp_t2;
    sp18[2] = temp_t3;
    temp_fv1 = *var_v0;
    temp_fv1f = sp28[0] + ((*((f32 *) (((char *) temp_s3) + 0x6C))) * temp_fv1);
    sp28[0] = temp_fv1f;
    temp_ft0 = sp28[1] + ((*((f32 *) (((char *) temp_s3) + 0x70))) * temp_fv1);
    sp28[1] = temp_ft0;
    temp_fv0f = sp28[2] + ((*((f32 *) (((char *) temp_s3) + 0x74))) * temp_fv1);
    sp28[2] = temp_fv0f;
    if (((temp_fv1f == sp18[0]) && (temp_fv1f == sp18[1])) && (temp_fv0f == sp18[2]))
    {
 do { sp28[1] = temp_ft0 + (*((f32 *) 0x2162F0)); } while (0);
    }
    if (func_80241504(sp18, sp28, *((s32 *) (((char *) temp_s3) + 0x24)), __base_D_8007BBD0 + 0x24, (f32) (*((u16 *) (((char *) (*((void **) (((char *) __base_D_8007BBD0) + 0x64)))) + 0x12)))) != 0)
    {
      var_s1 = 0;
      if (D_80075556 != 0)
      {
        temp_fs0 = *((f32 *) 0x2162F4);
        do
        {
          var_s0 = D_80075558 + 0x2C;
          do
          {
            sp38[0] = *((f32 *) (((char *) var_s0) + (-8))); sp38[1] = *((f32 *) (((char *) var_s0) + (-4))); sp38[2] = *((f32 *) (((char *) var_s0) + 0));
            if ((func_80241504(sp18, sp28, *((s32 *) (((char *) temp_s3) + 0x24)), sp38, temp_fs0) != 0) && (((u32) D_80036E08) < 0xAU))
            {
              __base_D_8007BBD0 = D_8007BBD0;
              *((D_80036E08 * 0x24) + __base_D_8007BBD0) = 3; temp_v0 = (D_80036E08 * 0x24) + __base_D_8007BBD0;
              *((f32 *) (((char *) temp_v0) + 0xC)) = sp28[0];
              *((f32 *) (((char *) temp_v0) + 0x10)) = sp28[1];
              *((f32 *) (((char *) temp_v0) + 0x14)) = sp28[2]; D_80036E08 += 1;
              *((u32 *) (((char *) ((D_80036E08 * 0x24) + __base_D_8007BBD0)) + 0x1C)) = var_s1;
            }
            var_s1 += 1; var_s0 += 0x40;
          }
          while (var_s1 < ((u32) D_80075556));
        }
        while (0);
      }
    }
  }
}
