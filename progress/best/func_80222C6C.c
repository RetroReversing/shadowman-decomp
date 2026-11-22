typedef struct 
{
  short field_0;
  short field_2;
  short field_4;
  short field_6;
  short field_8;
  short field_A;
  signed char field_C;
  signed char field_D;
  signed char field_E;
  signed char field_F;
} __repair_record_arg0;
void func_80222C6C(void *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, f32 arg5, f32 arg6, volatile unsigned int arg7, s32 arg8, s32 arg9, s32 arg10, void *arg11)
{
  ((__repair_record_arg0 *) arg0)->field_0 = (s16) ((s32) arg1);
  ((__repair_record_arg0 *) arg0)->field_2 = (s16) ((s32) arg2);
  ((__repair_record_arg0 *) arg0)->field_6 = 0;
  if (1)
  {
    ((__repair_record_arg0 *) arg0)->field_4 = (s16) ((s32) arg3);
    ((__repair_record_arg0 *) arg0)->field_8 = (s16) (((s32) (arg5 * ((f32) (*((u8 *) (((char *) arg11) + 4)))))) << 6);
  }
  if (arg7)
  {
    if (arg0)
    {
      ((__repair_record_arg0 *) arg0)->field_D = (s8) arg8;
      ((__repair_record_arg0 *) arg0)->field_E = (s8) arg9;
      ((__repair_record_arg0 *) arg0)->field_F = (s8) arg10;
      ((__repair_record_arg0 *) arg0)->field_C = (s8) arg7;
      (*((__repair_record_arg0 *) arg0)).field_A = (s16) (((s32) (((f32) (*((u8 *) (((char *) arg11) + 5)))) * arg6)) << ((unsigned long) 6));
    }
    else
    {
      ((__repair_record_arg0 *) arg0)->field_D = (s8) arg8;
      ((__repair_record_arg0 *) arg0)->field_E = (s8) arg9;
      ((__repair_record_arg0 *) arg0)->field_F = (s8) arg10;
      ((__repair_record_arg0 *) arg0)->field_C = (s8) arg7;
      (*((__repair_record_arg0 *) arg0)).field_A = (s16) (((s32) (((f32) (*((u8 *) (((char *) arg11) + 5)))) * arg6)) << ((unsigned long) 6));
    }
  }
  else
  {
    ((__repair_record_arg0 *) arg0)->field_D = (s8) arg8;
    {
      if (arg0 || arg11)
      {
        ((__repair_record_arg0 *) arg0)->field_E = (s8) arg9;
        ((__repair_record_arg0 *) arg0)->field_F = (s8) arg10;
        ((__repair_record_arg0 *) arg0)->field_C = (s8) arg7;
      }
      else
      {
        ((__repair_record_arg0 *) arg0)->field_E = (s8) arg9;
        ((__repair_record_arg0 *) arg0)->field_F = (s8) arg10;
        ((__repair_record_arg0 *) arg0)->field_C = (s8) arg7;
      }
    }
    ((__repair_record_arg0 *) arg0)->field_A = (s16) (((s32) (((f32) (*((u8 *) (((char *) arg11) + 5)))) * arg6)) << 6);
  }
}

