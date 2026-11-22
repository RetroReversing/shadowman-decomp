s32 func_8023A048();
extern char D_8005EA80[];
extern s32 D_8006196C;
extern void *D_80061A10;
inline static s16 inline_fn(void *arg0)
{
  return *((s16 *) (((char *) arg0) + 4));
}

void func_80235470(s32 arg0, f32 arg1, void *arg2)
{
  union 
  {
    unsigned char bytes[16];
    struct 
    {
      f32 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[4];
      f32 value;
    } view_sp14;
    struct 
    {
      unsigned char pad[8];
      f32 value;
    } view_sp18;
  } m2c_initial_frame;
  f32 temp_ft1f;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0f;
  f32 temp_fv0f_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1f;
  f32 temp_fv1f_2;
  s32 var_a2;
  s32 var_a3;
  s32 var_t0;
  void **var_v1;
  void *temp_a0;
  void *temp_v0;
  void *temp_v1;
  void *var_a0;
  void *var_a1;
  __repair_rows:
  {
    func_8023A048(arg0, &m2c_initial_frame.view_sp10.value, arg2 + 0x34);
  }

  if (0)
  {
    goto __repair_rows;
  }
  temp_a0 = *((void **) (((char *) arg2) + 0x64));
  temp_v1 = temp_a0 + 0xC;
  temp_fv1f = (f32) (*((u16 *) (((char *) temp_v1) + 6)));
  temp_ft1f = (arg1 * arg1) * (*((f32 *) 0x2023AC));
  temp_fv0f = ((f32) (*((s16 *) (((char *) temp_a0) + 0xC)))) - m2c_initial_frame.view_sp10.value;
  temp_fv1 = ((f32) (*((s16 *) (((char *) temp_v1) + 2)))) - m2c_initial_frame.view_sp14.value;
  temp_fv0 = ((f32) inline_fn(temp_v1)) - m2c_initial_frame.view_sp18.value;
  if (((temp_fv1f * temp_fv1f) + temp_ft1f) > (((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1)) + (temp_fv0 * temp_fv0)))
  {
    var_a3 = D_8006196C;
    D_80061A10 = temp_a0;
    var_t0 = *((s32 *) (((char *) temp_a0) + 0x14));
    var_v1 = (var_a3 * 0xC) + D_8005EA80;
    var_a2 = (*((u16 *) (((char *) temp_a0) + 0x30))) - 1;
    do
    {
      if (var_a2 != (-1))
      {
        var_a0 = var_t0 + 0xE;
        do
        {
          var_a1 = (void *) var_v1; var_a1 = (void *) (((char *) var_a1) + ((s32) 4));
          loop_3:
          if (((!((*((u8 *) (((char *) var_a0) + (-0xD)))) & 1)) && ((temp_v0 = (*((s32 *) (((char *) temp_a0) + 0x1C))) + ((*((u16 *) (((char *) var_a0) + (-6)))) * 0x10), fabsf(((((*((f32 *) (((char *) temp_v0) + 0))) * m2c_initial_frame.view_sp10.value) + ((*((f32 *) (((char *) temp_v0) + 4))) * m2c_initial_frame.view_sp14.value)) + ((*((f32 *) (((char *) temp_v0) + 8))) * m2c_initial_frame.view_sp18.value)) + (*((f32 *) (((char *) temp_v0) + 0xC)))) < arg1))) && ((temp_fv1f_2 = (f32) (*((u16 *) (((char *) var_a0) + 2))), temp_fv0f_2 = m2c_initial_frame.view_sp10.value - ((f32) (*((s16 *) (((char *) var_a0) + (-4))))), temp_fv1_2 = m2c_initial_frame.view_sp14.value - ((f32) (*((s16 *) (((char *) var_a0) + (-2))))), temp_fv0_2 = m2c_initial_frame.view_sp18.value - ((f32) (*((s16 *) (((char *) var_a0) + 0)))), ((temp_fv1f_2 * temp_fv1f_2) + temp_ft1f) > (((temp_fv0f_2 * temp_fv0f_2) + (temp_fv1_2 * temp_fv1_2)) + (temp_fv0_2 * temp_fv0_2)))))
          {
            if (var_a3 < 0x3E8)
            {
              *var_v1 = temp_a0;
              *((s32 *) (((char *) var_a1) + 4)) = var_t0;
              *((void **) (((char *) var_a1) + 0)) = arg2; var_a1 += 0xC; var_v1 += 0xC;
              do
              {
                var_a3 += 1;
              }
              while (0);
              goto block_8;
            }
          }
          else
          {
            block_8:
            var_a0 += 0x12;

            var_a2 -= 1; var_t0 += 0x12;
            if (var_a2 == (-1))
            {
            }
            else
            {
              goto loop_3;
            }
          }

        }
        while (0);
      }
    }
    while (0);
    D_8006196C = var_a3;
  }
}

