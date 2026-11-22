s32 func_80239A3C(f32);
f32 func_802401D0(f32 *, f32 *, volatile long);
extern s32 D_8002D390;
extern s32 D_8006A510;
extern s32 D_8006A5B4;
extern s32 D_80075568;
typedef struct 
{
  float field_0;
  float field_4;
  float field_8;
} __repair_record_arg0;
f32 func_802CA6E0(void *arg0)
{
  s32 *__base_D_80075568;
  s32 *__base_D_8006A510;
  f32 sp10;
  f32 sp18;
  f32 sp14;
  f32 sp30[3];
  f32 sp20[3];
  f32 temp_fs0;
  f32 temp_fs0f;
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_ft0f;
  f32 temp_ft0f_2;
  f32 temp_ft1;
  f32 temp_ft1_2;
  f32 temp_ft1f;
  f32 temp_ft1f_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  f32 temp_fv0f_2;
  f32 var_fv0;
  __base_D_80075568 = &D_80075568;
  func_80239A3C(*((f32 *) (((char *) __base_D_80075568) + 0x1C)));
  temp_ft1f = *((f32 *) 0x218630);
  temp_fs0 = *((f32 *) 0x218634);
  temp_ft1 = *((f32 *) 0x218638);
  temp_ft0f = (((*((f32 *) (((char *) (&D_8002D390)) + 0))) * temp_ft1f) + ((*((f32 *) (((char *) (&D_8002D390)) + 4))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 8))) * temp_ft1);
  sp30[1] = temp_fs0;
  sp30[0] = temp_ft1f;
  sp30[2] = temp_ft1;
  sp10 = temp_ft0f;
  *((f32 *) (((char *) (&sp10)) + 4)) = (f32) ((((*((f32 *) (((char *) (&D_8002D390)) + 0xC))) * temp_ft1f) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x10))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x14))) * temp_ft1));
  *((f32 *) (((char *) (&sp10)) + 8)) = (f32) ((((*((f32 *) (((char *) (&D_8002D390)) + 0x18))) * temp_ft1f) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x1C))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x20))) * temp_ft1));
  temp_ft0f_2 = temp_ft0f + ((__repair_record_arg0 *) arg0)->field_0;
  sp10 = temp_ft0f_2;
  temp_fs0f = *((f32 *) 0x21863C);
  temp_fv0f = sp14 + ((__repair_record_arg0 *) arg0)->field_4;
  sp14 = temp_fv0f;
  D_8006A5B4 = 3;
  temp_fv0 = sp18 + ((__repair_record_arg0 *) arg0)->field_8;
  sp20[0] = temp_ft0f_2;
  sp20[1] = temp_fv0f - temp_fs0f;
  sp18 = temp_fv0;
  sp20[2] = temp_fv0;
  {
    do
    {
      if (1)
      {
      }
    }
    while (0);
    func_802401D0(&sp10, sp20, 0x40A00000);
  }
  __base_D_8006A510 = &D_8006A510;
  if (((*((s32 *) (((char *) __base_D_8006A510) + 0x78))) != 0) || ((func_80239A3C(*((f32 *) (((char *) __base_D_80075568) + 0x1C))), temp_ft1f_2 = *((f32 *) 0x218640), temp_ft1_2 = *((f32 *) 0x218644), temp_ft0 = (((*((f32 *) (((char *) (&D_8002D390)) + 0))) * temp_ft1f_2) + ((*((f32 *) (((char *) (&D_8002D390)) + 4))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 8))) * temp_ft1_2), sp30[1] = temp_fs0, sp30[0] = temp_ft1f_2, sp30[2] = temp_ft1_2, sp10 = temp_ft0, *((f32 *) (((char *) (&sp10)) + 4)) = (f32) ((((*((f32 *) (((char *) (&D_8002D390)) + 0xC))) * temp_ft1f_2) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x10))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x14))) * temp_ft1_2)), *((f32 *) (((char *) (&sp10)) + 8)) = (f32) ((((*((f32 *) (0x18 + ((char *) (&D_8002D390))))) * temp_ft1f_2) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x1C))) * temp_fs0)) + ((*((f32 *) (((char *) (&D_8002D390)) + 0x20))) * temp_ft1_2)), temp_ft0_2 = temp_ft0 + ((__repair_record_arg0 *) arg0)->field_0, sp10 = temp_ft0_2, temp_fv0f_2 = sp14 + (*((__repair_record_arg0 *) arg0)).field_4, sp14 = temp_fv0f_2, temp_fv0_2 = sp18 + ((__repair_record_arg0 *) arg0)->field_8, sp20[0] = temp_ft0_2, sp20[1] = temp_fv0f_2 - temp_fs0f, sp18 = temp_fv0_2, sp20[2] = temp_fv0_2, var_fv0 = func_802401D0(&sp10, sp20, 0x41700000), (*((s32 *) (((char *) __base_D_8006A510) + 0x78))) != 0)))
  {
    if (temp_fs0f)
    {
      var_fv0 = *((f32 *) 0x218648);
    }
    else
    {
      var_fv0 = *((f32 *) 0x218648);
    }
  }
  return var_fv0;
}

