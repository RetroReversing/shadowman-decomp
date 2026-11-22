#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_80220028(s32, u8, u8, s32, s32, s32, f32, f32, f32, f32, f32, f32);
volatile unsigned long long func_8022078C(s32);
extern u16 D_8002C112;
extern u8 D_800569E0[];
s32 func_802206D4(s32 arg0, void *arg1)
{
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  f32 temp_fv1;
  f32 temp_fv1f;
  f32 var_fs0;
  f32 var_fs0f;
  f32 var_fs1;
  s16 temp_a1;
  s16 temp_fp;
  s16 temp_s6;
  s16 temp_s7;
  s32 temp_ft0_2;
  s32 __repair_phase_temp_ft0_2;
  short temp_s4;
  s32 var_a2;
  unsigned short __repair_phase_var_a2;
  s32 temp_s5;
  s32 __repair_result_var_a2;
  s32 var_s3;
  u16 var_s1;
  u16 var_s2;
  var_a2 = arg0;
  if ((*((s32 *) (((s8 *) arg1) + 0x10))) != 0)
  {
    return func_8022078C(var_a2);
  }
  var_s2 = *((u16 *) (((s8 *) arg1) + 2));
  var_s3 = *((s32 *) (((s8 *) arg1) + 0xC));
  temp_a1 = *((s16 *) (((s8 *) arg1) + 8));
  temp_fv1f = *((f32 *) ((unsigned char) 0x20010C));
  temp_fv0f = (f32) (*((s16 *) (((s8 *) arg1) + 0xA)));
  var_fs0 = temp_fv0f / ((f32) ((s16) ((s32) ((*((f32 *) 0x200108)) / (((f32) (*((s16 *) (((s8 *) arg1) + 8)))) * (*(((*((u8 *) (((s8 *) arg1) + 0x15))) * 4) + D_800569E0)))))));
  var_fs0f = ((f32) temp_a1) / ((f32) (*((s16 *) (((s8 *) arg1) + 4))));
  temp_fv1 = (f32) (*((s16 *) (((s8 *) arg1) + 6)));
  var_fs1 = temp_fv0f / temp_fv1;
  __repair_phase_var_a2 = (s32) (temp_fv0f / var_fs0);
  temp_s5 = __repair_phase_var_a2;
  temp_ft0_2 = (s32) (temp_fv1 / var_fs0);
  temp_s4 = temp_ft0_2;
  if (temp_fv1f < var_fs0f)
  {
    var_fs0f = temp_fv1f;
  }
  if (temp_fv1f < var_fs1)
  {
    var_fs1 = temp_fv1f;
  }
  temp_fv0 = *((f32 *) 0x200110);
  if (var_fs0f < temp_fv0)
  {
    var_fs0f = temp_fv0;
  }
  if (var_fs1 < temp_fv0)
  {
    var_fs1 = temp_fv0;
  }
  temp_fv0_2 = *((f32 *) 0x200114);
  var_s1 = (u16) (*((s16 *) (((s8 *) arg1) + 0xA)));
  if (temp_fv0_2 <= var_fs0)
  {
    temp_fp = (s16) temp_ft0_2;
    __repair_phase_temp_ft0_2 = (s16) ((s16) __repair_phase_var_a2);
    temp_s6 = (s16) ((s32) (((f32) (temp_a1 * ((s16) __repair_phase_var_a2))) * (*(((*((u8 *) (((s8 *) arg1) + 0x15))) * 4) + D_800569E0))));
    loop_13:
    temp_ft0_2 = ((s16) var_s2) + temp_fp;

    if (((s16) var_s2) < ((s32) D_8002C112))
    {
      if (temp_ft0_2 > 0)
      {
        __repair_result_var_a2 = func_80220028(__repair_result_var_a2, *((u8 *) (((s8 *) arg1) + 0x15)), *((u8 *) (((s8 *) arg1) + 0x14)), var_s3, (s32) (*((s16 *) (((s8 *) arg1) + 8))), (s32) __repair_phase_temp_ft0_2, (f32) (*((s16 *) (((s8 *) arg1) + 0))), (f32) ((s16) var_s2), (f32) ((*((s16 *) (((s8 *) arg1) + 0))) + (*((s16 *) (((s8 *) arg1) + 4)))), (f32) temp_ft0_2, var_fs0f, var_fs1);
      }
      var_s1 -= temp_s5;
      var_fs0 -= temp_fv0_2;
      var_s3 += temp_s6;
      var_s2 += temp_s4;
      if (!(temp_fv0_2 <= var_fs0))
      {
        goto block_17;
      }
      goto loop_13;
    }
  }
  else
  {
    block_17:
    if ((((s16) var_s1) > 0) && (((s16) var_s2) < ((s32) D_8002C112)))
    {
      __repair_result_var_a2 = func_80220028(__repair_result_var_a2, *((u8 *) (((s8 *) arg1) + 0x15)), *((u8 *) (((s8 *) arg1) + 0x14)), var_s3, (s32) (*((s16 *) (((s8 *) arg1) + 8))), (s32) ((s16) var_s1), (f32) (*((s16 *) (((s8 *) arg1) + 0))), (f32) ((s16) var_s2), (f32) ((*((s16 *) (((s8 *) arg1) + 0))) + (*((s16 *) (((s8 *) arg1) + 4)))), (f32) (((s16) var_s2) + ((s16) ((s32) ((((f32) ((s16) temp_s4)) / ((f32) ((s16) temp_s5))) * ((f32) ((s16) var_s1)))))), var_fs0f, var_fs1);
    }

  }
  return __repair_result_var_a2;
}

